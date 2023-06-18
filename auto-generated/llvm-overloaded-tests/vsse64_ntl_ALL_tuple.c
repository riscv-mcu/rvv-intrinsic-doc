// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsse64_v_f64m1_ntl_ALL(double *base, ptrdiff_t bstride, vfloat64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_f64m2_ntl_ALL(double *base, ptrdiff_t bstride, vfloat64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_f64m4_ntl_ALL(double *base, ptrdiff_t bstride, vfloat64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_f64m8_ntl_ALL(double *base, ptrdiff_t bstride, vfloat64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_i64m1_ntl_ALL(int64_t *base, ptrdiff_t bstride, vint64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_i64m2_ntl_ALL(int64_t *base, ptrdiff_t bstride, vint64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_i64m4_ntl_ALL(int64_t *base, ptrdiff_t bstride, vint64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_i64m8_ntl_ALL(int64_t *base, ptrdiff_t bstride, vint64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_u64m1_ntl_ALL(uint64_t *base, ptrdiff_t bstride, vuint64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_u64m2_ntl_ALL(uint64_t *base, ptrdiff_t bstride, vuint64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_u64m4_ntl_ALL(uint64_t *base, ptrdiff_t bstride, vuint64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_u64m8_ntl_ALL(uint64_t *base, ptrdiff_t bstride, vuint64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_f64m1_m_ntl_ALL(vbool64_t mask, double *base, ptrdiff_t bstride, vfloat64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_f64m2_m_ntl_ALL(vbool32_t mask, double *base, ptrdiff_t bstride, vfloat64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_f64m4_m_ntl_ALL(vbool16_t mask, double *base, ptrdiff_t bstride, vfloat64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_f64m8_m_ntl_ALL(vbool8_t mask, double *base, ptrdiff_t bstride, vfloat64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_i64m1_m_ntl_ALL(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_i64m2_m_ntl_ALL(vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_i64m4_m_ntl_ALL(vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_i64m8_m_ntl_ALL(vbool8_t mask, int64_t *base, ptrdiff_t bstride, vint64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_u64m1_m_ntl_ALL(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_u64m2_m_ntl_ALL(vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_u64m4_m_ntl_ALL(vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse64_v_u64m8_m_ntl_ALL(vbool8_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

