// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2_ntl_S1(const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m1x2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2_ntl_S1(const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m2x2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2_ntl_S1(const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m4x2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2_ntl_S1(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m1x2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2_ntl_S1(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m2x2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2_ntl_S1(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m4x2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2_ntl_S1(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m1x2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2_ntl_S1(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m2x2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2_ntl_S1(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m4x2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2_m_ntl_S1(vbool64_t mask, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m1x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2_m_ntl_S1(vbool32_t mask, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2_m_ntl_S1(vbool16_t mask, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2_m_ntl_S1(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m1x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2_m_ntl_S1(vbool32_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2_m_ntl_S1(vbool16_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2_m_ntl_S1(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m1x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2_m_ntl_S1(vbool32_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2_m_ntl_S1(vbool16_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

