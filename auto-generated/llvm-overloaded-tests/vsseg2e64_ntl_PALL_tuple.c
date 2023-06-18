// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsseg2e64_v_f64m1x2_ntl_PALL(double *base, vfloat64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_f64m2x2_ntl_PALL(double *base, vfloat64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_f64m4x2_ntl_PALL(double *base, vfloat64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_i64m1x2_ntl_PALL(int64_t *base, vint64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_i64m2x2_ntl_PALL(int64_t *base, vint64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_i64m4x2_ntl_PALL(int64_t *base, vint64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_u64m1x2_ntl_PALL(uint64_t *base, vuint64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_u64m2x2_ntl_PALL(uint64_t *base, vuint64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_u64m4x2_ntl_PALL(uint64_t *base, vuint64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_f64m1x2_m_ntl_PALL(vbool64_t mask, double *base, vfloat64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_f64m2x2_m_ntl_PALL(vbool32_t mask, double *base, vfloat64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_f64m4x2_m_ntl_PALL(vbool16_t mask, double *base, vfloat64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_i64m1x2_m_ntl_PALL(vbool64_t mask, int64_t *base, vint64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_i64m2x2_m_ntl_PALL(vbool32_t mask, int64_t *base, vint64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_i64m4x2_m_ntl_PALL(vbool16_t mask, int64_t *base, vint64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_u64m1x2_m_ntl_PALL(vbool64_t mask, uint64_t *base, vuint64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_u64m2x2_m_ntl_PALL(vbool32_t mask, uint64_t *base, vuint64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg2e64_v_u64m4x2_m_ntl_PALL(vbool16_t mask, uint64_t *base, vuint64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

