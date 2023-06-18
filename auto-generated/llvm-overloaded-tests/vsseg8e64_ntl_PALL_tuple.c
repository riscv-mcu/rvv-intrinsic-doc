// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsseg8e64_v_f64m1x8_ntl_PALL(double *base, vfloat64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg8e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg8e64_v_i64m1x8_ntl_PALL(int64_t *base, vint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg8e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg8e64_v_u64m1x8_ntl_PALL(uint64_t *base, vuint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg8e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg8e64_v_f64m1x8_m_ntl_PALL(vbool64_t mask, double *base, vfloat64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg8e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg8e64_v_i64m1x8_m_ntl_PALL(vbool64_t mask, int64_t *base, vint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg8e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg8e64_v_u64m1x8_m_ntl_PALL(vbool64_t mask, uint64_t *base, vuint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg8e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

