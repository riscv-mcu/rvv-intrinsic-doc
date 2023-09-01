#!/bin/env bash

# Arguments
# arg1: toolchain path to the bin directory, such as /path/to/gcc/bin
# arg2: compiler type, clang or gcc

# Examples:
# 1. Test on gcc
# ./check_api.sh /Local/hqfang/workspace/software/riscv-gnu-toolchain/LocalInstall/linux64/newlibc/2023.09.01/gcc/bin gcc
# 2. Test on clang
# ./check_api.sh /Local/hqfang/workspace/software/riscv-gnu-toolchain/LocalInstall/linux64/newlibc/2023.09.01/gcc/bin clang

TOOLPATH=${1:-/home/share/devtools/toolchain/nuclei_gnu/linux64/newlibc/gcc13_latest/gcc/bin}
COMP=${2:-clang}

COMPILER_PREFIX=${COMPILER_PREFIX:-riscv64-unknown-elf-}

echo "Using toolchain located in $TOOLPATH"

export PATH=$TOOLPATH:$PATH

echo "CMD: export PATH=$TOOLPATH:\$PATH"

function check_comp_ver() {
    local compiler=${1:-gcc}

    which ${COMPILER_PREFIX}${compiler}
    ${COMPILER_PREFIX}${compiler} --version
}

if [ "x$COMP" != "xgcc" ] ; then
    COMP=clang
fi

check_comp_ver $COMP

sleep 3

GENLOG=genlog

mkdir -p $GENLOG

REDCOLOR=$(tput setaf 1)
GREENCOLOR=$(tput setaf 2)
RSTCOLOR=$(tput sgr0)

function errorlog {
    echo -e "${REDCOLOR}${1}${RSTCOLOR}"
}

function oklog {
    echo -e "${GREENCOLOR}${1}${RSTCOLOR}"
}

function run_test_suite() {
    local compiler=${1:-gcc}
    local suite=${2:-api-testing}

    local cmd="make COMPILER=${COMPILER_PREFIX}${compiler} run-${suite}"
    echo "CMD: $cmd"
    local suitelog="$GENLOG/${compiler}_${suite}.log"
    eval $cmd > $suitelog 2>&1
    echo "INFO: Log recorded to ${suitelog}"
    local failtxt="$GENLOG/fail_${compiler}_${suite}.txt"
    rm -f $failtxt
    grep -A3 -E "error:|warning:" ${suitelog} > $failtxt
    if [ -s $failtxt ] ; then
        errorlog "ERROR: $compiler : $suite FAIL, check $failtxt"
    else
        oklog "INFO: $compiler : $suite PASS"
        rm -f $failtxt
    fi
}

function run_suites() {
    local compiler=${1:-gcc}

    # https://docs.google.com/document/d/19UucISxO9yuQcQ5S30g7wn2wV5D-1z0fA0GKNVOuktI
    # https://github.com/riscv-non-isa/rvv-intrinsic-doc/blob/main/doc/rvv-intrinsic-spec.adoc#naming-scheme
    # The RVV intrinsics can be split into two major types, called "explicit (non-overloaded) intrinsics" and "implicit (overloaded) intrinsics".
    # https://github.com/riscv-non-isa/rvv-intrinsic-doc/blob/main/doc/rvv-intrinsic-spec.adoc#policy-naming-scheme
    echo "INFO: Start to run api test suites on $compiler"
    run_test_suite $compiler api-testing
    run_test_suite $compiler overloaded-api-testing
    run_test_suite $compiler policy-api-testing
    run_test_suite $compiler policy-overloaded-api-testing
    echo "INFO: API Testing on $compiler Done"
}

#run_suites $COMP

failtxts=$(echo $(ls ${GENLOG}/fail_${COMP}_*.txt 2>/dev/null))
# failtxts should contain valid paths if api testing is failing
if [[ "${failtxts}" =~ ^[[:space:]]*$ ]] ; then
    oklog "INFO: API Testing on $COMP All PASSED"
else
    errorlog "ERROR: Please find fail patterns for $COMP in ${failtxts}"
fi
