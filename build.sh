#!/bin/bash

compiler="clang"
bin_name="package"
c_flags="-Wall -Wextra -std=c99"
ld_flags=""
src_files=$(find src -type f -name "*.c"

$compiler $src_files -o bin/$bin_name $c_flags $ld_flags
