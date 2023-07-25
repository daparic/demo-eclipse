Windows:
```
make "CC=cpptestscan $(cygpath -w $(which aarch64-linux-gnu-gcc))" CXX="cpptestscan $(cygpath -w $(which aarch64-linux-gnu-g++))"
```

Linux:
```
make "CC=cpptestscan aarch64-linux-gnu-gcc" CXX="cpptestscan aarch64-linux-gnu-g++"
```
