// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x4_t test_vloxseg4ei16_v_f16mf4x4_tu_ntl_PALL(vfloat16mf4x4_t maskedoff_tuple, const _Float16 *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16mf4x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x4_t test_vloxseg4ei16_v_f16mf2x4_tu_ntl_PALL(vfloat16mf2x4_t maskedoff_tuple, const _Float16 *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16mf2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x4_t test_vloxseg4ei16_v_f16m1x4_tu_ntl_PALL(vfloat16m1x4_t maskedoff_tuple, const _Float16 *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x4_t test_vloxseg4ei16_v_f16m2x4_tu_ntl_PALL(vfloat16m2x4_t maskedoff_tuple, const _Float16 *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x4_t test_vloxseg4ei16_v_f32mf2x4_tu_ntl_PALL(vfloat32mf2x4_t maskedoff_tuple, const float *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32mf2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x4_t test_vloxseg4ei16_v_f32m1x4_tu_ntl_PALL(vfloat32m1x4_t maskedoff_tuple, const float *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m2x4_t test_vloxseg4ei16_v_f32m2x4_tu_ntl_PALL(vfloat32m2x4_t maskedoff_tuple, const float *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x4_t test_vloxseg4ei16_v_f64m1x4_tu_ntl_PALL(vfloat64m1x4_t maskedoff_tuple, const double *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f64m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x4_t test_vloxseg4ei16_v_f64m2x4_tu_ntl_PALL(vfloat64m2x4_t maskedoff_tuple, const double *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f64m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x4_t test_vloxseg4ei16_v_i8mf8x4_tu_ntl_PALL(vint8mf8x4_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf8x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x4_t test_vloxseg4ei16_v_i8mf4x4_tu_ntl_PALL(vint8mf4x4_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf4x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x4_t test_vloxseg4ei16_v_i8mf2x4_tu_ntl_PALL(vint8mf2x4_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x4_t test_vloxseg4ei16_v_i8m1x4_tu_ntl_PALL(vint8m1x4_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x4_t test_vloxseg4ei16_v_i8m2x4_tu_ntl_PALL(vint8m2x4_t maskedoff_tuple, const int8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x4_t test_vloxseg4ei16_v_i16mf4x4_tu_ntl_PALL(vint16mf4x4_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16mf4x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x4_t test_vloxseg4ei16_v_i16mf2x4_tu_ntl_PALL(vint16mf2x4_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16mf2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x4_t test_vloxseg4ei16_v_i16m1x4_tu_ntl_PALL(vint16m1x4_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x4_t test_vloxseg4ei16_v_i16m2x4_tu_ntl_PALL(vint16m2x4_t maskedoff_tuple, const int16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x4_t test_vloxseg4ei16_v_i32mf2x4_tu_ntl_PALL(vint32mf2x4_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32mf2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x4_t test_vloxseg4ei16_v_i32m1x4_tu_ntl_PALL(vint32m1x4_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m2x4_t test_vloxseg4ei16_v_i32m2x4_tu_ntl_PALL(vint32m2x4_t maskedoff_tuple, const int32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x4_t test_vloxseg4ei16_v_i64m1x4_tu_ntl_PALL(vint64m1x4_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i64m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x4_t test_vloxseg4ei16_v_i64m2x4_tu_ntl_PALL(vint64m2x4_t maskedoff_tuple, const int64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i64m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x4_t test_vloxseg4ei16_v_u8mf8x4_tu_ntl_PALL(vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf8x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x4_t test_vloxseg4ei16_v_u8mf4x4_tu_ntl_PALL(vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf4x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x4_t test_vloxseg4ei16_v_u8mf2x4_tu_ntl_PALL(vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x4_t test_vloxseg4ei16_v_u8m1x4_tu_ntl_PALL(vuint8m1x4_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x4_t test_vloxseg4ei16_v_u8m2x4_tu_ntl_PALL(vuint8m2x4_t maskedoff_tuple, const uint8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x4_t test_vloxseg4ei16_v_u16mf4x4_tu_ntl_PALL(vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16mf4x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x4_t test_vloxseg4ei16_v_u16mf2x4_tu_ntl_PALL(vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16mf2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x4_t test_vloxseg4ei16_v_u16m1x4_tu_ntl_PALL(vuint16m1x4_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x4_t test_vloxseg4ei16_v_u16m2x4_tu_ntl_PALL(vuint16m2x4_t maskedoff_tuple, const uint16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x4_t test_vloxseg4ei16_v_u32mf2x4_tu_ntl_PALL(vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32mf2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x4_t test_vloxseg4ei16_v_u32m1x4_tu_ntl_PALL(vuint32m1x4_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m2x4_t test_vloxseg4ei16_v_u32m2x4_tu_ntl_PALL(vuint32m2x4_t maskedoff_tuple, const uint32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x4_t test_vloxseg4ei16_v_u64m1x4_tu_ntl_PALL(vuint64m1x4_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u64m1x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x4_t test_vloxseg4ei16_v_u64m2x4_tu_ntl_PALL(vuint64m2x4_t maskedoff_tuple, const uint64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u64m2x4_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x4_t test_vloxseg4ei16_v_f16mf4x4_tum_ntl_PALL(vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const _Float16 *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16mf4x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x4_t test_vloxseg4ei16_v_f16mf2x4_tum_ntl_PALL(vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const _Float16 *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16mf2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x4_t test_vloxseg4ei16_v_f16m1x4_tum_ntl_PALL(vbool16_t mask, vfloat16m1x4_t maskedoff_tuple, const _Float16 *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x4_t test_vloxseg4ei16_v_f16m2x4_tum_ntl_PALL(vbool8_t mask, vfloat16m2x4_t maskedoff_tuple, const _Float16 *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x4_t test_vloxseg4ei16_v_f32mf2x4_tum_ntl_PALL(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32mf2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x4_t test_vloxseg4ei16_v_f32m1x4_tum_ntl_PALL(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m2x4_t test_vloxseg4ei16_v_f32m2x4_tum_ntl_PALL(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x4_t test_vloxseg4ei16_v_f64m1x4_tum_ntl_PALL(vbool64_t mask, vfloat64m1x4_t maskedoff_tuple, const double *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f64m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x4_t test_vloxseg4ei16_v_f64m2x4_tum_ntl_PALL(vbool32_t mask, vfloat64m2x4_t maskedoff_tuple, const double *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f64m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x4_t test_vloxseg4ei16_v_i8mf8x4_tum_ntl_PALL(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf8x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x4_t test_vloxseg4ei16_v_i8mf4x4_tum_ntl_PALL(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf4x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x4_t test_vloxseg4ei16_v_i8mf2x4_tum_ntl_PALL(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x4_t test_vloxseg4ei16_v_i8m1x4_tum_ntl_PALL(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x4_t test_vloxseg4ei16_v_i8m2x4_tum_ntl_PALL(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x4_t test_vloxseg4ei16_v_i16mf4x4_tum_ntl_PALL(vbool64_t mask, vint16mf4x4_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16mf4x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x4_t test_vloxseg4ei16_v_i16mf2x4_tum_ntl_PALL(vbool32_t mask, vint16mf2x4_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16mf2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x4_t test_vloxseg4ei16_v_i16m1x4_tum_ntl_PALL(vbool16_t mask, vint16m1x4_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x4_t test_vloxseg4ei16_v_i16m2x4_tum_ntl_PALL(vbool8_t mask, vint16m2x4_t maskedoff_tuple, const int16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x4_t test_vloxseg4ei16_v_i32mf2x4_tum_ntl_PALL(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32mf2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x4_t test_vloxseg4ei16_v_i32m1x4_tum_ntl_PALL(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m2x4_t test_vloxseg4ei16_v_i32m2x4_tum_ntl_PALL(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x4_t test_vloxseg4ei16_v_i64m1x4_tum_ntl_PALL(vbool64_t mask, vint64m1x4_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i64m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x4_t test_vloxseg4ei16_v_i64m2x4_tum_ntl_PALL(vbool32_t mask, vint64m2x4_t maskedoff_tuple, const int64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i64m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x4_t test_vloxseg4ei16_v_u8mf8x4_tum_ntl_PALL(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf8x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x4_t test_vloxseg4ei16_v_u8mf4x4_tum_ntl_PALL(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf4x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x4_t test_vloxseg4ei16_v_u8mf2x4_tum_ntl_PALL(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x4_t test_vloxseg4ei16_v_u8m1x4_tum_ntl_PALL(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x4_t test_vloxseg4ei16_v_u8m2x4_tum_ntl_PALL(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x4_t test_vloxseg4ei16_v_u16mf4x4_tum_ntl_PALL(vbool64_t mask, vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16mf4x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x4_t test_vloxseg4ei16_v_u16mf2x4_tum_ntl_PALL(vbool32_t mask, vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16mf2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x4_t test_vloxseg4ei16_v_u16m1x4_tum_ntl_PALL(vbool16_t mask, vuint16m1x4_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x4_t test_vloxseg4ei16_v_u16m2x4_tum_ntl_PALL(vbool8_t mask, vuint16m2x4_t maskedoff_tuple, const uint16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x4_t test_vloxseg4ei16_v_u32mf2x4_tum_ntl_PALL(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32mf2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x4_t test_vloxseg4ei16_v_u32m1x4_tum_ntl_PALL(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m2x4_t test_vloxseg4ei16_v_u32m2x4_tum_ntl_PALL(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x4_t test_vloxseg4ei16_v_u64m1x4_tum_ntl_PALL(vbool64_t mask, vuint64m1x4_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u64m1x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x4_t test_vloxseg4ei16_v_u64m2x4_tum_ntl_PALL(vbool32_t mask, vuint64m2x4_t maskedoff_tuple, const uint64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u64m2x4_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x4_t test_vloxseg4ei16_v_f16mf4x4_tumu_ntl_PALL(vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const _Float16 *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16mf4x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x4_t test_vloxseg4ei16_v_f16mf2x4_tumu_ntl_PALL(vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const _Float16 *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x4_t test_vloxseg4ei16_v_f16m1x4_tumu_ntl_PALL(vbool16_t mask, vfloat16m1x4_t maskedoff_tuple, const _Float16 *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x4_t test_vloxseg4ei16_v_f16m2x4_tumu_ntl_PALL(vbool8_t mask, vfloat16m2x4_t maskedoff_tuple, const _Float16 *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x4_t test_vloxseg4ei16_v_f32mf2x4_tumu_ntl_PALL(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x4_t test_vloxseg4ei16_v_f32m1x4_tumu_ntl_PALL(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m2x4_t test_vloxseg4ei16_v_f32m2x4_tumu_ntl_PALL(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x4_t test_vloxseg4ei16_v_f64m1x4_tumu_ntl_PALL(vbool64_t mask, vfloat64m1x4_t maskedoff_tuple, const double *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f64m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x4_t test_vloxseg4ei16_v_f64m2x4_tumu_ntl_PALL(vbool32_t mask, vfloat64m2x4_t maskedoff_tuple, const double *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f64m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x4_t test_vloxseg4ei16_v_i8mf8x4_tumu_ntl_PALL(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf8x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x4_t test_vloxseg4ei16_v_i8mf4x4_tumu_ntl_PALL(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf4x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x4_t test_vloxseg4ei16_v_i8mf2x4_tumu_ntl_PALL(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x4_t test_vloxseg4ei16_v_i8m1x4_tumu_ntl_PALL(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x4_t test_vloxseg4ei16_v_i8m2x4_tumu_ntl_PALL(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x4_t test_vloxseg4ei16_v_i16mf4x4_tumu_ntl_PALL(vbool64_t mask, vint16mf4x4_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16mf4x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x4_t test_vloxseg4ei16_v_i16mf2x4_tumu_ntl_PALL(vbool32_t mask, vint16mf2x4_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x4_t test_vloxseg4ei16_v_i16m1x4_tumu_ntl_PALL(vbool16_t mask, vint16m1x4_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x4_t test_vloxseg4ei16_v_i16m2x4_tumu_ntl_PALL(vbool8_t mask, vint16m2x4_t maskedoff_tuple, const int16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x4_t test_vloxseg4ei16_v_i32mf2x4_tumu_ntl_PALL(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x4_t test_vloxseg4ei16_v_i32m1x4_tumu_ntl_PALL(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m2x4_t test_vloxseg4ei16_v_i32m2x4_tumu_ntl_PALL(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x4_t test_vloxseg4ei16_v_i64m1x4_tumu_ntl_PALL(vbool64_t mask, vint64m1x4_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i64m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x4_t test_vloxseg4ei16_v_i64m2x4_tumu_ntl_PALL(vbool32_t mask, vint64m2x4_t maskedoff_tuple, const int64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i64m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x4_t test_vloxseg4ei16_v_u8mf8x4_tumu_ntl_PALL(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf8x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x4_t test_vloxseg4ei16_v_u8mf4x4_tumu_ntl_PALL(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf4x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x4_t test_vloxseg4ei16_v_u8mf2x4_tumu_ntl_PALL(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x4_t test_vloxseg4ei16_v_u8m1x4_tumu_ntl_PALL(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x4_t test_vloxseg4ei16_v_u8m2x4_tumu_ntl_PALL(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x4_t test_vloxseg4ei16_v_u16mf4x4_tumu_ntl_PALL(vbool64_t mask, vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16mf4x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x4_t test_vloxseg4ei16_v_u16mf2x4_tumu_ntl_PALL(vbool32_t mask, vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x4_t test_vloxseg4ei16_v_u16m1x4_tumu_ntl_PALL(vbool16_t mask, vuint16m1x4_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x4_t test_vloxseg4ei16_v_u16m2x4_tumu_ntl_PALL(vbool8_t mask, vuint16m2x4_t maskedoff_tuple, const uint16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x4_t test_vloxseg4ei16_v_u32mf2x4_tumu_ntl_PALL(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32mf2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x4_t test_vloxseg4ei16_v_u32m1x4_tumu_ntl_PALL(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m2x4_t test_vloxseg4ei16_v_u32m2x4_tumu_ntl_PALL(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x4_t test_vloxseg4ei16_v_u64m1x4_tumu_ntl_PALL(vbool64_t mask, vuint64m1x4_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u64m1x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x4_t test_vloxseg4ei16_v_u64m2x4_tumu_ntl_PALL(vbool32_t mask, vuint64m2x4_t maskedoff_tuple, const uint64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u64m2x4_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x4_t test_vloxseg4ei16_v_f16mf4x4_mu_ntl_PALL(vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const _Float16 *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16mf4x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x4_t test_vloxseg4ei16_v_f16mf2x4_mu_ntl_PALL(vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const _Float16 *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16mf2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x4_t test_vloxseg4ei16_v_f16m1x4_mu_ntl_PALL(vbool16_t mask, vfloat16m1x4_t maskedoff_tuple, const _Float16 *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x4_t test_vloxseg4ei16_v_f16m2x4_mu_ntl_PALL(vbool8_t mask, vfloat16m2x4_t maskedoff_tuple, const _Float16 *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f16m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x4_t test_vloxseg4ei16_v_f32mf2x4_mu_ntl_PALL(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32mf2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x4_t test_vloxseg4ei16_v_f32m1x4_mu_ntl_PALL(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m2x4_t test_vloxseg4ei16_v_f32m2x4_mu_ntl_PALL(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f32m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x4_t test_vloxseg4ei16_v_f64m1x4_mu_ntl_PALL(vbool64_t mask, vfloat64m1x4_t maskedoff_tuple, const double *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f64m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x4_t test_vloxseg4ei16_v_f64m2x4_mu_ntl_PALL(vbool32_t mask, vfloat64m2x4_t maskedoff_tuple, const double *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_f64m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x4_t test_vloxseg4ei16_v_i8mf8x4_mu_ntl_PALL(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf8x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x4_t test_vloxseg4ei16_v_i8mf4x4_mu_ntl_PALL(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf4x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x4_t test_vloxseg4ei16_v_i8mf2x4_mu_ntl_PALL(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8mf2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x4_t test_vloxseg4ei16_v_i8m1x4_mu_ntl_PALL(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x4_t test_vloxseg4ei16_v_i8m2x4_mu_ntl_PALL(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i8m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x4_t test_vloxseg4ei16_v_i16mf4x4_mu_ntl_PALL(vbool64_t mask, vint16mf4x4_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16mf4x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x4_t test_vloxseg4ei16_v_i16mf2x4_mu_ntl_PALL(vbool32_t mask, vint16mf2x4_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16mf2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x4_t test_vloxseg4ei16_v_i16m1x4_mu_ntl_PALL(vbool16_t mask, vint16m1x4_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x4_t test_vloxseg4ei16_v_i16m2x4_mu_ntl_PALL(vbool8_t mask, vint16m2x4_t maskedoff_tuple, const int16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i16m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x4_t test_vloxseg4ei16_v_i32mf2x4_mu_ntl_PALL(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32mf2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x4_t test_vloxseg4ei16_v_i32m1x4_mu_ntl_PALL(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m2x4_t test_vloxseg4ei16_v_i32m2x4_mu_ntl_PALL(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i32m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x4_t test_vloxseg4ei16_v_i64m1x4_mu_ntl_PALL(vbool64_t mask, vint64m1x4_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i64m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x4_t test_vloxseg4ei16_v_i64m2x4_mu_ntl_PALL(vbool32_t mask, vint64m2x4_t maskedoff_tuple, const int64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_i64m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x4_t test_vloxseg4ei16_v_u8mf8x4_mu_ntl_PALL(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf8x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x4_t test_vloxseg4ei16_v_u8mf4x4_mu_ntl_PALL(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf4x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x4_t test_vloxseg4ei16_v_u8mf2x4_mu_ntl_PALL(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8mf2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x4_t test_vloxseg4ei16_v_u8m1x4_mu_ntl_PALL(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x4_t test_vloxseg4ei16_v_u8m2x4_mu_ntl_PALL(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u8m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x4_t test_vloxseg4ei16_v_u16mf4x4_mu_ntl_PALL(vbool64_t mask, vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16mf4x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x4_t test_vloxseg4ei16_v_u16mf2x4_mu_ntl_PALL(vbool32_t mask, vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16mf2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x4_t test_vloxseg4ei16_v_u16m1x4_mu_ntl_PALL(vbool16_t mask, vuint16m1x4_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x4_t test_vloxseg4ei16_v_u16m2x4_mu_ntl_PALL(vbool8_t mask, vuint16m2x4_t maskedoff_tuple, const uint16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u16m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x4_t test_vloxseg4ei16_v_u32mf2x4_mu_ntl_PALL(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32mf2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x4_t test_vloxseg4ei16_v_u32m1x4_mu_ntl_PALL(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m2x4_t test_vloxseg4ei16_v_u32m2x4_mu_ntl_PALL(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u32m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x4_t test_vloxseg4ei16_v_u64m1x4_mu_ntl_PALL(vbool64_t mask, vuint64m1x4_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u64m1x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x4_t test_vloxseg4ei16_v_u64m2x4_mu_ntl_PALL(vbool32_t mask, vuint64m2x4_t maskedoff_tuple, const uint64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei16_v_u64m2x4_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

