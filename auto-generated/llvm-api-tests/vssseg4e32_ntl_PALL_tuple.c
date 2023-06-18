// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vssseg4e32_v_f32mf2x4_ntl_PALL(float *base, ptrdiff_t bstride, vfloat32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_f32mf2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_f32m1x4_ntl_PALL(float *base, ptrdiff_t bstride, vfloat32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_f32m1x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_f32m2x4_ntl_PALL(float *base, ptrdiff_t bstride, vfloat32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_f32m2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_i32mf2x4_ntl_PALL(int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_i32mf2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_i32m1x4_ntl_PALL(int32_t *base, ptrdiff_t bstride, vint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_i32m1x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_i32m2x4_ntl_PALL(int32_t *base, ptrdiff_t bstride, vint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_i32m2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_u32mf2x4_ntl_PALL(uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_u32mf2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_u32m1x4_ntl_PALL(uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_u32m1x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_u32m2x4_ntl_PALL(uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_u32m2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_f32mf2x4_m_ntl_PALL(vbool64_t mask, float *base, ptrdiff_t bstride, vfloat32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_f32mf2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_f32m1x4_m_ntl_PALL(vbool32_t mask, float *base, ptrdiff_t bstride, vfloat32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_f32m1x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_f32m2x4_m_ntl_PALL(vbool16_t mask, float *base, ptrdiff_t bstride, vfloat32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_f32m2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_i32mf2x4_m_ntl_PALL(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_i32mf2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_i32m1x4_m_ntl_PALL(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_i32m1x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_i32m2x4_m_ntl_PALL(vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_i32m2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_u32mf2x4_m_ntl_PALL(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_u32mf2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_u32m1x4_m_ntl_PALL(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_u32m1x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg4e32_v_u32m2x4_m_ntl_PALL(vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e32_v_u32m2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

