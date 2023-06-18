// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4_t test_vlse16_v_f16mf4_ntl_ALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16mf4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2_t test_vlse16_v_f16mf2_ntl_ALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16mf2_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m1_t test_vlse16_v_f16m1_ntl_ALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16m1_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m2_t test_vlse16_v_f16m2_ntl_ALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16m2_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m4_t test_vlse16_v_f16m4_ntl_ALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16m4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m8_t test_vlse16_v_f16m8_ntl_ALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16m8_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16mf4_t test_vlse16_v_i16mf4_ntl_ALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16mf4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16mf2_t test_vlse16_v_i16mf2_ntl_ALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16mf2_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m1_t test_vlse16_v_i16m1_ntl_ALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16m1_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m2_t test_vlse16_v_i16m2_ntl_ALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16m2_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m4_t test_vlse16_v_i16m4_ntl_ALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16m4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m8_t test_vlse16_v_i16m8_ntl_ALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16m8_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16mf4_t test_vlse16_v_u16mf4_ntl_ALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16mf4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16mf2_t test_vlse16_v_u16mf2_ntl_ALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16mf2_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m1_t test_vlse16_v_u16m1_ntl_ALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16m1_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m2_t test_vlse16_v_u16m2_ntl_ALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16m2_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m4_t test_vlse16_v_u16m4_ntl_ALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16m4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m8_t test_vlse16_v_u16m8_ntl_ALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16m8_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4_t test_vlse16_v_f16mf4_m_ntl_ALL(vbool64_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16mf4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2_t test_vlse16_v_f16mf2_m_ntl_ALL(vbool32_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16mf2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m1_t test_vlse16_v_f16m1_m_ntl_ALL(vbool16_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16m1_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m2_t test_vlse16_v_f16m2_m_ntl_ALL(vbool8_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16m2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m4_t test_vlse16_v_f16m4_m_ntl_ALL(vbool4_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16m4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m8_t test_vlse16_v_f16m8_m_ntl_ALL(vbool2_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_f16m8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16mf4_t test_vlse16_v_i16mf4_m_ntl_ALL(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16mf4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16mf2_t test_vlse16_v_i16mf2_m_ntl_ALL(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16mf2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m1_t test_vlse16_v_i16m1_m_ntl_ALL(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16m1_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m2_t test_vlse16_v_i16m2_m_ntl_ALL(vbool8_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16m2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m4_t test_vlse16_v_i16m4_m_ntl_ALL(vbool4_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16m4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m8_t test_vlse16_v_i16m8_m_ntl_ALL(vbool2_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_i16m8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16mf4_t test_vlse16_v_u16mf4_m_ntl_ALL(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16mf4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16mf2_t test_vlse16_v_u16mf2_m_ntl_ALL(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16mf2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m1_t test_vlse16_v_u16m1_m_ntl_ALL(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16m1_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m2_t test_vlse16_v_u16m2_m_ntl_ALL(vbool8_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16m2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m4_t test_vlse16_v_u16m4_m_ntl_ALL(vbool4_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16m4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m8_t test_vlse16_v_u16m8_m_ntl_ALL(vbool2_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse16_v_u16m8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

