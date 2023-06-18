// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_ntl_ALL(const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32mf2x7_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_ntl_ALL(const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32m1x7_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_ntl_ALL(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32mf2x7_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_ntl_ALL(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32m1x7_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_ntl_ALL(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32mf2x7_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_ntl_ALL(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32m1x7_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_m_ntl_ALL(vbool64_t mask, const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32mf2x7_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_m_ntl_ALL(vbool32_t mask, const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32m1x7_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_m_ntl_ALL(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32mf2x7_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_m_ntl_ALL(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32m1x7_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_m_ntl_ALL(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32mf2x7_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_m_ntl_ALL(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32m1x7_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

