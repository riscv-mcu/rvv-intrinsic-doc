// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vse32_v_f32mf2_ntl_PALL(float *base, vfloat32mf2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_f32m1_ntl_PALL(float *base, vfloat32m1_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_f32m2_ntl_PALL(float *base, vfloat32m2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_f32m4_ntl_PALL(float *base, vfloat32m4_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_f32m8_ntl_PALL(float *base, vfloat32m8_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32mf2_ntl_PALL(int32_t *base, vint32mf2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32m1_ntl_PALL(int32_t *base, vint32m1_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32m2_ntl_PALL(int32_t *base, vint32m2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32m4_ntl_PALL(int32_t *base, vint32m4_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32m8_ntl_PALL(int32_t *base, vint32m8_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32mf2_ntl_PALL(uint32_t *base, vuint32mf2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32m1_ntl_PALL(uint32_t *base, vuint32m1_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32m2_ntl_PALL(uint32_t *base, vuint32m2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32m4_ntl_PALL(uint32_t *base, vuint32m4_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32m8_ntl_PALL(uint32_t *base, vuint32m8_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_f32mf2_m_ntl_PALL(vbool64_t mask, float *base, vfloat32mf2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_f32m1_m_ntl_PALL(vbool32_t mask, float *base, vfloat32m1_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_f32m2_m_ntl_PALL(vbool16_t mask, float *base, vfloat32m2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_f32m4_m_ntl_PALL(vbool8_t mask, float *base, vfloat32m4_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_f32m8_m_ntl_PALL(vbool4_t mask, float *base, vfloat32m8_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32mf2_m_ntl_PALL(vbool64_t mask, int32_t *base, vint32mf2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32m1_m_ntl_PALL(vbool32_t mask, int32_t *base, vint32m1_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32m2_m_ntl_PALL(vbool16_t mask, int32_t *base, vint32m2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32m4_m_ntl_PALL(vbool8_t mask, int32_t *base, vint32m4_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_i32m8_m_ntl_PALL(vbool4_t mask, int32_t *base, vint32m8_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32mf2_m_ntl_PALL(vbool64_t mask, uint32_t *base, vuint32mf2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32m1_m_ntl_PALL(vbool32_t mask, uint32_t *base, vuint32m1_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32m2_m_ntl_PALL(vbool16_t mask, uint32_t *base, vuint32m2_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32m4_m_ntl_PALL(vbool8_t mask, uint32_t *base, vuint32m4_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse32_v_u32m8_m_ntl_PALL(vbool4_t mask, uint32_t *base, vuint32m8_t value, size_t vl, int domain) {
  return __riscv_vse32_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

