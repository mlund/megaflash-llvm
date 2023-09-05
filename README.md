# megaflash-llvm

Megaflash compiled using LLVM

## Build instructions

Building requires llvm-mos-sdk which can be downloaded like this:

~~~sh
wget https://github.com/llvm-mos/llvm-mos-sdk/releases/latest/download/llvm-mos-linux.tar.xz 
tar xf llvm-mos-linux.tar.xz -C $HOME
~~~

While this can be setup using a simple i`Makefile`, we here use CMake which has
the advantage that it will automatically download mega65-libc:

~~~sh
cmake -DCMAKE_PREFIX_PATH=$HOME/llvm-mos -B build
cd build
make
~~~
