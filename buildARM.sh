#!/bin/sh
#
L=/d/compilers/gcc-linaro-7.5.0-2019.12-i686-mingw32_aarch64-linux-gnu
P=/d/parasoft/2023/cpptest/professional-2023.1.0-win32.x86_64
make "CC=cpptestscan aarch64-linux-gnu-gcc" CXX="cpptestscan aarch64-linux-gnu-g++"
