#
# dump_server_packets.py — extract Guild Wars' in-memory server-message (StoC)
# codec table from a *running* Gw.exe and write it to a text file so it can be
# diffed against Headquarter's static tables (code/client/opcodes.h and the
# GAME_SERVER_FORMATS array in code/client/packets.c).
#
# Why this exists: ArenaNet shifts the packet headers/formats on most game
# updates. When that happens our static GAME_SERVER_FORMATS / GAME_SMSG_COUNT go
# stale and NetConn_DispatchPackets() trips `assert(array_inside(...))` at
# network.c, so the client crash-loops. Regenerating the tables needs the *new*
# server codec layout, which only exists fully assembled in the live process.
#
# How it works: GW builds a flat array of server message codecs at runtime
# (gs->consts->gs_srv_codecs in the old layout). Each entry is 12 bytes:
#     { uint32 fields_ptr;   // -> field-descriptor array (in Gw.exe .rdata)
#       uint32 field_count;  // number of fields
#       uint32 handler; }    // StoC handler function (in Gw.exe .text), or 0
# The array index *is* the message header id. Rather than depend on a brittle
# byte-signature for the gs singleton (those move every build), we just scan all
# committed memory for the longest run of records that look like the above, with
# both pointers landing inside the Gw.exe module. The longest such run is the
# StoC table; the next-longest is the CtoS (client) table.
#
# Usage (on Windows, with Guild Wars running and logged in to a character so the
# game-server codecs are populated):
#     python dump_server_packets.py                 # auto-find Gw.exe
#     python dump_server_packets.py --pid 1234
#     python dump_server_packets.py --out dump.txt
#
# Needs the same Win32 process access as main.py (run from an admin shell if
# ReadProcessMemory is denied). Pure stdlib + this repo's process.py.

import argparse
import ctypes
import struct
import sys
from array import array

import process  # local module (Win32 process access)

# Memory state / protection constants
MEM_COMMIT      = 0x1000
PAGE_GUARD      = 0x100
PAGE_NOACCESS   = 0x001
READABLE        = (0x02, 0x04, 0x08, 0x20, 0x40, 0x80)  # RO/RW/WC/XR/XRW/XWC

ENTRY_SIZE      = 12        # bytes per codec entry {fields_ptr, count, handler}
MIN_RUN         = 50        # ignore short coincidental runs
MAX_COUNT       = 255       # sane upper bound on fields per message


def iter_regions(proc):
    """Yield (base, size, state, protect) for every VM region of the process."""
    mbi = (process._MEMORY_BASIC_INFORMATION64()
           if process._PYTHON_IS_64_BITS else process._MEMORY_BASIC_INFORMATION())
    addr = 0
    limit = 0x7FFF0000  # top of the 32-bit user address space (GW is 32-bit)
    while addr < limit:
        written = process._VirtualQueryEx(proc.handle, addr, ctypes.byref(mbi),
                                          ctypes.sizeof(mbi))
        if not written:
            break
        base = int(mbi.BaseAddress)
        size = int(mbi.RegionSize)
        if size == 0:
            break
        yield base, size, mbi.State, mbi.Protect
        addr = base + size


def read_region(proc, base, size):
    """Read a region's bytes, chunking + tolerating partial failures."""
    CHUNK = 8 * 1024 * 1024
    if size <= CHUNK:
        try:
            return proc.read(base, '%ds' % size)[0]
        except Exception:
            pass  # fall through to chunked read
    out = bytearray()
    off = 0
    while off < size:
        n = min(CHUNK, size - off)
        try:
            out += proc.read(base + off, '%ds' % n)[0]
        except Exception:
            out += b'\x00' * n  # unreadable sub-page; keep alignment
        off += n
    return bytes(out)


def find_runs(buf, region_base, mod_lo, mod_hi):
    """Find runs of valid codec entries in buf. Returns list of (abs_addr, [entries])."""
    n = len(buf) & ~3
    if n < ENTRY_SIZE:
        return []
    words = array('I')
    words.frombytes(buf[:n])
    if sys.byteorder != 'little':
        words.byteswap()
    nw = len(words)

    def valid(i):
        fp = words[i]
        if not (mod_lo <= fp < mod_hi):
            return False
        cnt = words[i + 1]
        if not (1 <= cnt <= MAX_COUNT):
            return False
        h = words[i + 2]
        return h == 0 or (mod_lo <= h < mod_hi)

    runs = []
    i = 0
    while i <= nw - 3:
        if valid(i):
            j = i
            entries = []
            while j <= nw - 3 and valid(j):
                entries.append((words[j], words[j + 1], words[j + 2]))
                j += 3
            if len(entries) >= MIN_RUN:
                runs.append((region_base + i * 4, entries))
            i = j
        else:
            i += 1
    return runs


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--pid', type=int, help='PID of the Guild Wars process.')
    ap.add_argument('--proc', default='Gw.exe', help='Process name (default Gw.exe).')
    ap.add_argument('--out', default='gw_server_packets_dump.txt', help='Output file.')
    ap.add_argument('--field-bytes', type=int, default=16,
                    help='Raw bytes to dump per field descriptor (default 16).')
    args = ap.parse_args(argv)

    proc = process.Process(args.pid) if args.pid else process.Process.from_name(args.proc)
    mod = proc.module()
    mod_lo, mod_hi = mod.base, mod.base + mod.size
    print('Attached to %s (pid %d), module 0x%08X..0x%08X'
          % (proc.name, proc.id, mod_lo, mod_hi))

    # best-effort build number for the file header
    build = '?'
    try:
        import dump_key
        build = dump_key.get_build_number(process.ProcessScanner(proc))
    except Exception as e:
        print('  (could not read build number: %s)' % e)
    print('  build:', build)

    all_runs = []
    for base, size, state, protect in iter_regions(proc):
        if state != MEM_COMMIT:
            continue
        if (protect & PAGE_GUARD) or (protect & 0xFF) not in READABLE:
            continue
        if size > 256 * 1024 * 1024:   # skip absurdly large reserved-ish blocks
            continue
        buf = read_region(proc, base, size)
        all_runs.extend(find_runs(buf, base, mod_lo, mod_hi))

    all_runs.sort(key=lambda r: len(r[1]), reverse=True)
    if not all_runs:
        print('No codec-table-like runs found. Is a character loaded in-game?')
        return 1

    print('\nCandidate codec arrays (longest first):')
    for addr, entries in all_runs[:8]:
        nz = sum(1 for _, _, h in entries if h)
        print('  0x%08X  %4d entries  (%d with handlers)' % (addr, len(entries), nz))

    table_addr, table = all_runs[0]   # longest run == server (StoC) codec table
    print('\nUsing longest run as StoC table: %d entries @0x%08X'
          % (len(table), table_addr))
    print('=> GAME_SMSG_COUNT should be %d (current static value: 487)' % len(table))

    with open(args.out, 'w') as f:
        f.write('# Guild Wars StoC server-message codec table\n')
        f.write('# build=%s  entries=%d  table_addr=0x%08X  module_base=0x%08X\n'
                % (build, len(table), table_addr, mod.base))
        f.write('# columns: header  field_count  handler_rva  fields_rva  raw_field_bytes\n')
        for header, (fields_ptr, count, handler) in enumerate(table):
            handler_rva = (handler - mod.base) if handler else 0
            fields_rva = (fields_ptr - mod.base) if (mod_lo <= fields_ptr < mod_hi) else fields_ptr
            raw = b''
            try:
                raw = proc.read(fields_ptr, '%ds' % (count * args.field_bytes))[0]
            except Exception:
                pass
            f.write('%-4d %3d 0x%06X 0x%06X %s\n'
                    % (header, count, handler_rva, fields_rva, raw.hex()))
    print('\nWrote %s' % args.out)
    print('Send that file back and it can be diffed against opcodes.h / packets.c.')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
