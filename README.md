semgrep:
```
semgrep --config=rule.yaml .
semgrep --config ~/src/semgrep-rules/c .
```

Windows:
```
make "CC=cpptestscan $(cygpath -w $(which aarch64-linux-gnu-gcc))" CXX="cpptestscan $(cygpath -w $(which aarch64-linux-gnu-g++))"
```

Linux:
```
make "CC=cpptestscan /opt/linaro/gcc-linaro-7.5.0-2019.12-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-gcc" CXX="cpptestscan /opt/linaro/gcc-linaro-7.5.0-2019.12-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-g++"
```

cmake notes:
```
# for Mingw32 environment not to use VS2022
cmake -G "MinGW Makefiles" -B build -S .
cmake --build build/

# for Linux environment
cmake -B build -S .
cmake --build build/
```
