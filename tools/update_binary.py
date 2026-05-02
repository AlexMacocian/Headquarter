import argparse
import download
import dump_key
import inflate
import os
import print_gw_exe_file_id
from scanner import FileScanner
import sys
import utils

try:
    from tqdm import tqdm
except:
    print("Install tqdm 'pip install tqdm'")
    sys.exit(1)

def get_path_from_workspace(workspace, *fragments):
    if workspace is None:
        return utils.get_path(*fragments)
    else:
        return os.path.join(workspace, *fragments)

def main(args):
    exe_path = get_path_from_workspace(args.workspace, 'Gw.exe')
    if os.path.isfile(exe_path):
        scanner = FileScanner(exe_path)
        file_id = print_gw_exe_file_id.get_file_id(scanner)
    else:
        scanner = None
        file_id = 0
    
    client = download.FileClient()
    client.connect()

    if (file_id == 0) or (client.file_id_latest_exe != file_id):
        if scanner:
            del scanner

        fr = client.request_file(client.file_id_latest_exe)
        with tqdm(total=fr.size_compressed, unit='B') as progress:
            for percent in fr.download():
                progress.update(fr.last_chunk)

        data = fr.decompressed()
        
        # Diagnose bad decompressed output
        if data is None:
            raise RuntimeError("fr.decompressed() returned None — decompression failed")
        if not isinstance(data, (bytes, bytearray)):
            raise RuntimeError(f"fr.decompressed() returned unexpected type: {type(data)}")
        if len(data) == 0:
            raise RuntimeError("fr.decompressed() returned empty bytes")
            
        print(repr(exe_path))
        with open(exe_path, 'wb') as fd:
            fd.write(data)
        
        scanner = FileScanner(exe_path)

    build = dump_key.get_build_number(scanner)
    output = get_path_from_workspace(args.workspace, 'data', f'gw_{build}.pub.txt')
    dump_key.dump(scanner, output)

    build_file_path = get_path_from_workspace(args.workspace, 'Gw.build')
    print(f"Writing build number to '{build_file_path}'")
    open(build_file_path, 'w').write(f'{build}')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument("--workspace", type=str, required=False,
        help="Workspace in order to define where to write the file")
    args = parser.parse_args()
    main(args)
