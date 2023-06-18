// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8_t test_vle8ff_v_i8mf8_tu_ntl_S1(vint8mf8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vle8ff_v_i8mf4_tu_ntl_S1(vint8mf4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vle8ff_v_i8mf2_tu_ntl_S1(vint8mf2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vle8ff_v_i8m1_tu_ntl_S1(vint8m1_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vle8ff_v_i8m2_tu_ntl_S1(vint8m2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m4_t test_vle8ff_v_i8m4_tu_ntl_S1(vint8m4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m8_t test_vle8ff_v_i8m8_tu_ntl_S1(vint8m8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vle8ff_v_u8mf8_tu_ntl_S1(vuint8mf8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vle8ff_v_u8mf4_tu_ntl_S1(vuint8mf4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vle8ff_v_u8mf2_tu_ntl_S1(vuint8mf2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vle8ff_v_u8m1_tu_ntl_S1(vuint8m1_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vle8ff_v_u8m2_tu_ntl_S1(vuint8m2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m4_t test_vle8ff_v_u8m4_tu_ntl_S1(vuint8m4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m8_t test_vle8ff_v_u8m8_tu_ntl_S1(vuint8m8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8_t test_vle8ff_v_i8mf8_tum_ntl_S1(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vle8ff_v_i8mf4_tum_ntl_S1(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vle8ff_v_i8mf2_tum_ntl_S1(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vle8ff_v_i8m1_tum_ntl_S1(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vle8ff_v_i8m2_tum_ntl_S1(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m4_t test_vle8ff_v_i8m4_tum_ntl_S1(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m8_t test_vle8ff_v_i8m8_tum_ntl_S1(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vle8ff_v_u8mf8_tum_ntl_S1(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vle8ff_v_u8mf4_tum_ntl_S1(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vle8ff_v_u8mf2_tum_ntl_S1(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vle8ff_v_u8m1_tum_ntl_S1(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vle8ff_v_u8m2_tum_ntl_S1(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m4_t test_vle8ff_v_u8m4_tum_ntl_S1(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m8_t test_vle8ff_v_u8m8_tum_ntl_S1(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8_t test_vle8ff_v_i8mf8_tumu_ntl_S1(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vle8ff_v_i8mf4_tumu_ntl_S1(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vle8ff_v_i8mf2_tumu_ntl_S1(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vle8ff_v_i8m1_tumu_ntl_S1(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vle8ff_v_i8m2_tumu_ntl_S1(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m4_t test_vle8ff_v_i8m4_tumu_ntl_S1(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m8_t test_vle8ff_v_i8m8_tumu_ntl_S1(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vle8ff_v_u8mf8_tumu_ntl_S1(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vle8ff_v_u8mf4_tumu_ntl_S1(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vle8ff_v_u8mf2_tumu_ntl_S1(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vle8ff_v_u8m1_tumu_ntl_S1(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vle8ff_v_u8m2_tumu_ntl_S1(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m4_t test_vle8ff_v_u8m4_tumu_ntl_S1(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m8_t test_vle8ff_v_u8m8_tumu_ntl_S1(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8_t test_vle8ff_v_i8mf8_mu_ntl_S1(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vle8ff_v_i8mf4_mu_ntl_S1(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vle8ff_v_i8mf2_mu_ntl_S1(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vle8ff_v_i8m1_mu_ntl_S1(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vle8ff_v_i8m2_mu_ntl_S1(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m4_t test_vle8ff_v_i8m4_mu_ntl_S1(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m8_t test_vle8ff_v_i8m8_mu_ntl_S1(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vle8ff_v_u8mf8_mu_ntl_S1(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vle8ff_v_u8mf4_mu_ntl_S1(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vle8ff_v_u8mf2_mu_ntl_S1(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vle8ff_v_u8m1_mu_ntl_S1(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vle8ff_v_u8m2_mu_ntl_S1(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m4_t test_vle8ff_v_u8m4_mu_ntl_S1(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m8_t test_vle8ff_v_u8m8_mu_ntl_S1(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

