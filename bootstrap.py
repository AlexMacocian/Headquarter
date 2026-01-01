import argparse
import os
import platform
import shlex
import shutil
import subprocess
import sys

_CURL_TAG = 'curl-8_17_0'
_MBEDTLS_TAG = 'v3.6.5'
_DEFAULT_C_COMPILER = 'clang'
_DEFAULT_BUILD_TYPE = 'Release'
_SYSTEM_NAME = platform.system()

def run(runargs, *args, **kwargs):
    runargs = list(filter(lambda elem: elem is not None, runargs))
    cmd = subprocess.list2cmdline(runargs)
    print(cmd)
    return subprocess.run(runargs, *args, **kwargs, check=True)

def main(args):
    workspace = os.path.dirname(__file__)
    build_dir = os.path.join(workspace, args.build_dir)
    deps_install_dir = os.path.join(workspace, 'deps', _SYSTEM_NAME)
    deps_vendor_dir = os.path.join(workspace, 'deps-vendor')
    deps_build_dir = os.path.join(workspace, 'deps-build', _SYSTEM_NAME)

    if args.clean:
        if os.path.exists(deps_install_dir):
            shutil.rmtree(deps_install_dir)
        if os.path.exists(deps_build_dir):
            shutil.rmtree(deps_build_dir)
        if os.path.exists(build_dir):
            shutil.rmtree(build_dir)

    if _SYSTEM_NAME == 'Windows':
        cmake_c_compiler = None
        cmake_build_type = None
        generator = 'Visual Studio 14 2015'
    elif _SYSTEM_NAME == 'Linux':
        cmake_c_compiler = f'-DCMAKE_C_COMPILER={_DEFAULT_C_COMPILER}'
        cmake_build_type = f'-DCMAKE_BUILD_TYPE={_DEFAULT_BUILD_TYPE}'
        generator = 'Ninja'
    else:
        print(f"Unsupported platform '{_SYSTEM_NAME}'")
        sys.exit(1)

    curl_dir = os.path.join(deps_vendor_dir, 'curl')
    mbedtls_dir = os.path.join(deps_vendor_dir, 'mbedtls')

    if os.path.exists(curl_dir):
        run(['git', '--git-dir', os.path.join(curl_dir, '.git'), 'checkout', _CURL_TAG])
    else:
        run(['git', 'clone', '--depth', '1', '--branch', _CURL_TAG, 'https://github.com/curl/curl.git', curl_dir])

    if os.path.exists(mbedtls_dir):
        run(['git', '--git-dir', os.path.join(mbedtls_dir, '.git'), 'checkout', _MBEDTLS_TAG])
    else:
        run(['git', 'clone', '--depth', '1', '--branch', _MBEDTLS_TAG, 'https://github.com/Mbed-TLS/mbedtls.git', mbedtls_dir])
    run(['git', 'submodule', 'update', '--init', '--recursive', '--depth=1'], cwd=mbedtls_dir)

    curl_build_dir = os.path.join(deps_build_dir, 'curl')
    mbedtls_build_dir = os.path.join(deps_build_dir, 'mbedtls')

    run([
        'cmake',
        '-G', generator,
        '-S', mbedtls_dir,
        '-B', mbedtls_build_dir,
        cmake_build_type,
        cmake_c_compiler,
        f'-DCMAKE_INSTALL_PREFIX={deps_install_dir}',
        '-DENABLE_PROGRAMS=Off',
        '-DENABLE_TESTING=Off',
    ])

    cmake_args = [
        'cmake',
        '-G', generator,
        '-S', curl_dir,
        '-B', curl_build_dir,
        cmake_build_type,
        cmake_c_compiler,
        f'-DCMAKE_INSTALL_PREFIX={deps_install_dir}',
        '-DCURL_ENABLE_SSL=On',
        '-DCURL_USE_LIBPSL=Off',
        '-DBUILD_CURL_EXE=Off',
    ]

    if _SYSTEM_NAME == 'Linux':
        cmake_args.append('-DCURL_USE_OPENSSL=On')

    run(cmake_args)

    run([
        'cmake',
        '--build', mbedtls_build_dir,
        '--target', 'install'
    ])

    run([
        'cmake',
        '--build', curl_build_dir,
        '--target', 'install'
    ])

    run([
        'cmake',
        '-G', generator,
        '-B', build_dir,
        cmake_build_type,
        cmake_c_compiler,
        f'-DCMAKE_PREFIX_PATH={deps_install_dir}',
    ])

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--clean', action='store_true', default=False,
        help="If specified, vendor, dependencies and build directory are removed.")
    parser.add_argument('--build-dir', '-B', type=str, default='build',
        help="Explicitly specify a build directory.")
    args = parser.parse_args()
    main(args)
