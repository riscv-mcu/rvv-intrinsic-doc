// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vssseg6e64_v_f64m1x6_ntl_P1(double *base, ptrdiff_t bstride, vfloat64m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e64_v_f64m1x6_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg6e64_v_i64m1x6_ntl_P1(int64_t *base, ptrdiff_t bstride, vint64m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e64_v_i64m1x6_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg6e64_v_u64m1x6_ntl_P1(uint64_t *base, ptrdiff_t bstride, vuint64m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e64_v_u64m1x6_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg6e64_v_f64m1x6_m_ntl_P1(vbool64_t mask, double *base, ptrdiff_t bstride, vfloat64m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e64_v_f64m1x6_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg6e64_v_i64m1x6_m_ntl_P1(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e64_v_i64m1x6_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg6e64_v_u64m1x6_m_ntl_P1(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e64_v_u64m1x6_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

