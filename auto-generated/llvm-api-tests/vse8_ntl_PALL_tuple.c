// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vse8_v_i8mf8_ntl_PALL(int8_t *base, vint8mf8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf8_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8mf4_ntl_PALL(int8_t *base, vint8mf4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf4_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8mf2_ntl_PALL(int8_t *base, vint8mf2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf2_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8m1_ntl_PALL(int8_t *base, vint8m1_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m1_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8m2_ntl_PALL(int8_t *base, vint8m2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m2_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8m4_ntl_PALL(int8_t *base, vint8m4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m4_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8m8_ntl_PALL(int8_t *base, vint8m8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m8_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8mf8_ntl_PALL(uint8_t *base, vuint8mf8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf8_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8mf4_ntl_PALL(uint8_t *base, vuint8mf4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf4_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8mf2_ntl_PALL(uint8_t *base, vuint8mf2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf2_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8m1_ntl_PALL(uint8_t *base, vuint8m1_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m1_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8m2_ntl_PALL(uint8_t *base, vuint8m2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m2_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8m4_ntl_PALL(uint8_t *base, vuint8m4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m4_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8m8_ntl_PALL(uint8_t *base, vuint8m8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m8_ntl(base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8mf8_m_ntl_PALL(vbool64_t mask, int8_t *base, vint8mf8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf8_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8mf4_m_ntl_PALL(vbool32_t mask, int8_t *base, vint8mf4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf4_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8mf2_m_ntl_PALL(vbool16_t mask, int8_t *base, vint8mf2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf2_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8m1_m_ntl_PALL(vbool8_t mask, int8_t *base, vint8m1_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m1_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8m2_m_ntl_PALL(vbool4_t mask, int8_t *base, vint8m2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m2_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8m4_m_ntl_PALL(vbool2_t mask, int8_t *base, vint8m4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m4_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_i8m8_m_ntl_PALL(vbool1_t mask, int8_t *base, vint8m8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m8_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8mf8_m_ntl_PALL(vbool64_t mask, uint8_t *base, vuint8mf8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf8_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8mf4_m_ntl_PALL(vbool32_t mask, uint8_t *base, vuint8mf4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf4_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8mf2_m_ntl_PALL(vbool16_t mask, uint8_t *base, vuint8mf2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf2_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8m1_m_ntl_PALL(vbool8_t mask, uint8_t *base, vuint8m1_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m1_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8m2_m_ntl_PALL(vbool4_t mask, uint8_t *base, vuint8m2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m2_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8m4_m_ntl_PALL(vbool2_t mask, uint8_t *base, vuint8m4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m4_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vse8_v_u8m8_m_ntl_PALL(vbool1_t mask, uint8_t *base, vuint8m8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m8_m_ntl(mask, base, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

