// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_tu_ntl_S1(vint8mf8x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf8x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_tu_ntl_S1(vint8mf4x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf4x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_tu_ntl_S1(vint8mf2x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf2x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_tu_ntl_S1(vint8m1x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m1x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_tu_ntl_S1(vint8m2x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m2x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_tu_ntl_S1(vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf8x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_tu_ntl_S1(vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf4x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_tu_ntl_S1(vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf2x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_tu_ntl_S1(vuint8m1x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m1x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_tu_ntl_S1(vuint8m2x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m2x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_tum_ntl_S1(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf8x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_tum_ntl_S1(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf4x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_tum_ntl_S1(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf2x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_tum_ntl_S1(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m1x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_tum_ntl_S1(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m2x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_tum_ntl_S1(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf8x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_tum_ntl_S1(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf4x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_tum_ntl_S1(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf2x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_tum_ntl_S1(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m1x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_tum_ntl_S1(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m2x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_tumu_ntl_S1(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf8x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_tumu_ntl_S1(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf4x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_tumu_ntl_S1(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_tumu_ntl_S1(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m1x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_tumu_ntl_S1(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m2x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_tumu_ntl_S1(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf8x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_tumu_ntl_S1(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf4x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_tumu_ntl_S1(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_tumu_ntl_S1(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m1x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_tumu_ntl_S1(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m2x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_mu_ntl_S1(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf8x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_mu_ntl_S1(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf4x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_mu_ntl_S1(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf2x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_mu_ntl_S1(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m1x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_mu_ntl_S1(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m2x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_mu_ntl_S1(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf8x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_mu_ntl_S1(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf4x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_mu_ntl_S1(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf2x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_mu_ntl_S1(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m1x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_mu_ntl_S1(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m2x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

