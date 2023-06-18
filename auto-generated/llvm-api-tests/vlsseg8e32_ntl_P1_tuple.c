// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_ntl_P1(const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32mf2x8_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_ntl_P1(const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32m1x8_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_ntl_P1(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32mf2x8_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_ntl_P1(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32m1x8_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_ntl_P1(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32mf2x8_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_ntl_P1(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32m1x8_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_m_ntl_P1(vbool64_t mask, const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32mf2x8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_m_ntl_P1(vbool32_t mask, const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32m1x8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_m_ntl_P1(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32mf2x8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_m_ntl_P1(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32m1x8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_m_ntl_P1(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32mf2x8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_m_ntl_P1(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32m1x8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

