// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_tu_ntl_P1(vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_tu_ntl_P1(vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_tu_ntl_P1(vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_tu_ntl_P1(vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_tu_ntl_P1(vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_tu_ntl_P1(vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_tu_ntl_P1(vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_tu_ntl_P1(vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_tum_ntl_P1(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_tum_ntl_P1(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_tum_ntl_P1(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_tum_ntl_P1(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_tum_ntl_P1(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_tum_ntl_P1(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_tum_ntl_P1(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_tum_ntl_P1(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_tumu_ntl_P1(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_tumu_ntl_P1(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_tumu_ntl_P1(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_tumu_ntl_P1(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_tumu_ntl_P1(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_tumu_ntl_P1(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_tumu_ntl_P1(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_tumu_ntl_P1(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_mu_ntl_P1(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_mu_ntl_P1(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_mu_ntl_P1(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_mu_ntl_P1(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_mu_ntl_P1(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_mu_ntl_P1(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_mu_ntl_P1(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_mu_ntl_P1(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

