#!/bin/bash

__GCC=$1/riscv64-unknown-elf-gcc
__GXX=$1/riscv64-unknown-elf-g++

__TEST_CASE_ROOT=$2
__FAIL_COUNT=0
__PASS_COUNT=0

function check_api_suite ()
{
  local cmd_prefix="$1 -O2 -march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -c -S -o /dev/null"
  local src_dir=$2

  echo "Start test for dir ${src_dir} ... "

  for file in `ls ${src_dir}/*.c`; do
    local cmd="${cmd_prefix} ${file}"

    echo $cmd
    $(eval ${cmd})

    if [[ "$?" != "0" ]]; then
      echo
      echo "!!Test failure on file ${file}.!!"
      echo
      __FAIL_COUNT=$((__FAIL_COUNT+1))
    else
      echo "Test file ${file} Passed."
      __PASS_COUNT=$((__PASS_COUNT+1))
    fi
  done
}

#check_api_suite ${__GCC} "${__TEST_CASE_ROOT}/api-testing"
#check_api_suite ${__GCC} "${__TEST_CASE_ROOT}/policy_funcs/api-testing"

check_api_suite ${__GXX} "${__TEST_CASE_ROOT}/overloaded-api-testing"
check_api_suite ${__GXX} "${__TEST_CASE_ROOT}/policy_funcs/overloaded-api-testing"

echo "Complete the compile test, fail count ${__FAIL_COUNT}, pass count ${__PASS_COUNT}."

if [[ "${__FAIL_COUNT}" != "0" ]]; then
  exit 1
fi
