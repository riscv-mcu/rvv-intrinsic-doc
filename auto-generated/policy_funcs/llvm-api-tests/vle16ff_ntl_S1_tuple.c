// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4_t test_vle16ff_v_f16mf4_tu_ntl_S1(vfloat16mf4_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tu_ntl_S1(vfloat16mf2_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1_t test_vle16ff_v_f16m1_tu_ntl_S1(vfloat16m1_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2_t test_vle16ff_v_f16m2_tu_ntl_S1(vfloat16m2_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m4_t test_vle16ff_v_f16m4_tu_ntl_S1(vfloat16m4_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m8_t test_vle16ff_v_f16m8_tu_ntl_S1(vfloat16m8_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4_t test_vle16ff_v_i16mf4_tu_ntl_S1(vint16mf4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2_t test_vle16ff_v_i16mf2_tu_ntl_S1(vint16mf2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1_t test_vle16ff_v_i16m1_tu_ntl_S1(vint16m1_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2_t test_vle16ff_v_i16m2_tu_ntl_S1(vint16m2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m4_t test_vle16ff_v_i16m4_tu_ntl_S1(vint16m4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m8_t test_vle16ff_v_i16m8_tu_ntl_S1(vint16m8_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tu_ntl_S1(vuint16mf4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tu_ntl_S1(vuint16mf2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1_t test_vle16ff_v_u16m1_tu_ntl_S1(vuint16m1_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2_t test_vle16ff_v_u16m2_tu_ntl_S1(vuint16m2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m4_t test_vle16ff_v_u16m4_tu_ntl_S1(vuint16m4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m8_t test_vle16ff_v_u16m8_tu_ntl_S1(vuint16m8_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_tum_ntl_S1(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tum_ntl_S1(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1_t test_vle16ff_v_f16m1_tum_ntl_S1(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2_t test_vle16ff_v_f16m2_tum_ntl_S1(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m4_t test_vle16ff_v_f16m4_tum_ntl_S1(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m8_t test_vle16ff_v_f16m8_tum_ntl_S1(vbool2_t mask, vfloat16m8_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4_t test_vle16ff_v_i16mf4_tum_ntl_S1(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2_t test_vle16ff_v_i16mf2_tum_ntl_S1(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1_t test_vle16ff_v_i16m1_tum_ntl_S1(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2_t test_vle16ff_v_i16m2_tum_ntl_S1(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m4_t test_vle16ff_v_i16m4_tum_ntl_S1(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m8_t test_vle16ff_v_i16m8_tum_ntl_S1(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tum_ntl_S1(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tum_ntl_S1(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1_t test_vle16ff_v_u16m1_tum_ntl_S1(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2_t test_vle16ff_v_u16m2_tum_ntl_S1(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m4_t test_vle16ff_v_u16m4_tum_ntl_S1(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m8_t test_vle16ff_v_u16m8_tum_ntl_S1(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_tumu_ntl_S1(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tumu_ntl_S1(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1_t test_vle16ff_v_f16m1_tumu_ntl_S1(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2_t test_vle16ff_v_f16m2_tumu_ntl_S1(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m4_t test_vle16ff_v_f16m4_tumu_ntl_S1(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m8_t test_vle16ff_v_f16m8_tumu_ntl_S1(vbool2_t mask, vfloat16m8_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4_t test_vle16ff_v_i16mf4_tumu_ntl_S1(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2_t test_vle16ff_v_i16mf2_tumu_ntl_S1(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1_t test_vle16ff_v_i16m1_tumu_ntl_S1(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2_t test_vle16ff_v_i16m2_tumu_ntl_S1(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m4_t test_vle16ff_v_i16m4_tumu_ntl_S1(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m8_t test_vle16ff_v_i16m8_tumu_ntl_S1(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tumu_ntl_S1(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tumu_ntl_S1(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1_t test_vle16ff_v_u16m1_tumu_ntl_S1(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2_t test_vle16ff_v_u16m2_tumu_ntl_S1(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m4_t test_vle16ff_v_u16m4_tumu_ntl_S1(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m8_t test_vle16ff_v_u16m8_tumu_ntl_S1(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_mu_ntl_S1(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_mu_ntl_S1(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1_t test_vle16ff_v_f16m1_mu_ntl_S1(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2_t test_vle16ff_v_f16m2_mu_ntl_S1(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m4_t test_vle16ff_v_f16m4_mu_ntl_S1(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m8_t test_vle16ff_v_f16m8_mu_ntl_S1(vbool2_t mask, vfloat16m8_t maskedoff, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4_t test_vle16ff_v_i16mf4_mu_ntl_S1(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2_t test_vle16ff_v_i16mf2_mu_ntl_S1(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1_t test_vle16ff_v_i16m1_mu_ntl_S1(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2_t test_vle16ff_v_i16m2_mu_ntl_S1(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m4_t test_vle16ff_v_i16m4_mu_ntl_S1(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m8_t test_vle16ff_v_i16m8_mu_ntl_S1(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4_t test_vle16ff_v_u16mf4_mu_ntl_S1(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2_t test_vle16ff_v_u16mf2_mu_ntl_S1(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1_t test_vle16ff_v_u16m1_mu_ntl_S1(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2_t test_vle16ff_v_u16m2_mu_ntl_S1(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m4_t test_vle16ff_v_u16m4_mu_ntl_S1(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m8_t test_vle16ff_v_u16m8_mu_ntl_S1(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

