cmake_minimum_required(VERSION 3.5)
set(LLVM_MOS_PLATFORM mega65) # or "c64"
find_package(llvm-mos-sdk REQUIRED)
project(myproject LANGUAGES C ASM)

add_compile_options(-Os -Wno-unknown-pragmas) #-Wall -Wextra -Wconversion -Wno-unknown-pragmas)

include(cmake/CPM.cmake)
CPMAddPackage(NAME mega65libc GITHUB_REPOSITORY mega65/mega65-libc GIT_TAG v0.3.0)

add_subdirectory(src)

