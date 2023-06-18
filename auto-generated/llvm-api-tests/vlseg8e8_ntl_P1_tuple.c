// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x8_t test_vlseg8e8_v_i8mf8x8_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_i8mf8x8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x8_t test_vlseg8e8_v_i8mf4x8_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_i8mf4x8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x8_t test_vlseg8e8_v_i8mf2x8_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_i8mf2x8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x8_t test_vlseg8e8_v_i8m1x8_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_i8m1x8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x8_t test_vlseg8e8_v_u8mf8x8_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_u8mf8x8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x8_t test_vlseg8e8_v_u8mf4x8_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_u8mf4x8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x8_t test_vlseg8e8_v_u8mf2x8_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_u8mf2x8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x8_t test_vlseg8e8_v_u8m1x8_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_u8m1x8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x8_t test_vlseg8e8_v_i8mf8x8_m_ntl_P1(vbool64_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_i8mf8x8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x8_t test_vlseg8e8_v_i8mf4x8_m_ntl_P1(vbool32_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_i8mf4x8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x8_t test_vlseg8e8_v_i8mf2x8_m_ntl_P1(vbool16_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_i8mf2x8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x8_t test_vlseg8e8_v_i8m1x8_m_ntl_P1(vbool8_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_i8m1x8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x8_t test_vlseg8e8_v_u8mf8x8_m_ntl_P1(vbool64_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_u8mf8x8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x8_t test_vlseg8e8_v_u8mf4x8_m_ntl_P1(vbool32_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_u8mf4x8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x8_t test_vlseg8e8_v_u8mf2x8_m_ntl_P1(vbool16_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_u8mf2x8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x8_t test_vlseg8e8_v_u8m1x8_m_ntl_P1(vbool8_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e8_v_u8m1x8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

