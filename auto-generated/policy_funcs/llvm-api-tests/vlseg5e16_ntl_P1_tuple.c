// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_tu_ntl_P1(vfloat16mf4x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_tu_ntl_P1(vfloat16mf2x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_tu_ntl_P1(vfloat16m1x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x5_t test_vlseg5e16_v_i16mf4x5_tu_ntl_P1(vint16mf4x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x5_t test_vlseg5e16_v_i16mf2x5_tu_ntl_P1(vint16mf2x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x5_t test_vlseg5e16_v_i16m1x5_tu_ntl_P1(vint16m1x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x5_t test_vlseg5e16_v_u16mf4x5_tu_ntl_P1(vuint16mf4x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x5_t test_vlseg5e16_v_u16mf2x5_tu_ntl_P1(vuint16mf2x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x5_t test_vlseg5e16_v_u16m1x5_tu_ntl_P1(vuint16m1x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_tum_ntl_P1(vbool64_t mask, vfloat16mf4x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_tum_ntl_P1(vbool32_t mask, vfloat16mf2x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_tum_ntl_P1(vbool16_t mask, vfloat16m1x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x5_t test_vlseg5e16_v_i16mf4x5_tum_ntl_P1(vbool64_t mask, vint16mf4x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x5_t test_vlseg5e16_v_i16mf2x5_tum_ntl_P1(vbool32_t mask, vint16mf2x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x5_t test_vlseg5e16_v_i16m1x5_tum_ntl_P1(vbool16_t mask, vint16m1x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x5_t test_vlseg5e16_v_u16mf4x5_tum_ntl_P1(vbool64_t mask, vuint16mf4x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x5_t test_vlseg5e16_v_u16mf2x5_tum_ntl_P1(vbool32_t mask, vuint16mf2x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x5_t test_vlseg5e16_v_u16m1x5_tum_ntl_P1(vbool16_t mask, vuint16m1x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_tumu_ntl_P1(vbool64_t mask, vfloat16mf4x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_tumu_ntl_P1(vbool32_t mask, vfloat16mf2x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_tumu_ntl_P1(vbool16_t mask, vfloat16m1x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x5_t test_vlseg5e16_v_i16mf4x5_tumu_ntl_P1(vbool64_t mask, vint16mf4x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x5_t test_vlseg5e16_v_i16mf2x5_tumu_ntl_P1(vbool32_t mask, vint16mf2x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x5_t test_vlseg5e16_v_i16m1x5_tumu_ntl_P1(vbool16_t mask, vint16m1x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x5_t test_vlseg5e16_v_u16mf4x5_tumu_ntl_P1(vbool64_t mask, vuint16mf4x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x5_t test_vlseg5e16_v_u16mf2x5_tumu_ntl_P1(vbool32_t mask, vuint16mf2x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x5_t test_vlseg5e16_v_u16m1x5_tumu_ntl_P1(vbool16_t mask, vuint16m1x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_mu_ntl_P1(vbool64_t mask, vfloat16mf4x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_mu_ntl_P1(vbool32_t mask, vfloat16mf2x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_mu_ntl_P1(vbool16_t mask, vfloat16m1x5_t maskedoff_tuple, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x5_t test_vlseg5e16_v_i16mf4x5_mu_ntl_P1(vbool64_t mask, vint16mf4x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x5_t test_vlseg5e16_v_i16mf2x5_mu_ntl_P1(vbool32_t mask, vint16mf2x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x5_t test_vlseg5e16_v_i16m1x5_mu_ntl_P1(vbool16_t mask, vint16m1x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x5_t test_vlseg5e16_v_u16mf4x5_mu_ntl_P1(vbool64_t mask, vuint16mf4x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x5_t test_vlseg5e16_v_u16mf2x5_mu_ntl_P1(vbool32_t mask, vuint16mf2x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x5_t test_vlseg5e16_v_u16m1x5_mu_ntl_P1(vbool16_t mask, vuint16m1x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

