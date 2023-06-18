// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4_t test_vloxei32_v_f16mf4_tu_ntl_PALL(vfloat16mf4_t maskedoff, const _Float16 *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tu_ntl_PALL(vfloat16mf2_t maskedoff, const _Float16 *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1_t test_vloxei32_v_f16m1_tu_ntl_PALL(vfloat16m1_t maskedoff, const _Float16 *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2_t test_vloxei32_v_f16m2_tu_ntl_PALL(vfloat16m2_t maskedoff, const _Float16 *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m4_t test_vloxei32_v_f16m4_tu_ntl_PALL(vfloat16m4_t maskedoff, const _Float16 *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tu_ntl_PALL(vfloat32mf2_t maskedoff, const float *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1_t test_vloxei32_v_f32m1_tu_ntl_PALL(vfloat32m1_t maskedoff, const float *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m2_t test_vloxei32_v_f32m2_tu_ntl_PALL(vfloat32m2_t maskedoff, const float *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m4_t test_vloxei32_v_f32m4_tu_ntl_PALL(vfloat32m4_t maskedoff, const float *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m8_t test_vloxei32_v_f32m8_tu_ntl_PALL(vfloat32m8_t maskedoff, const float *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1_t test_vloxei32_v_f64m1_tu_ntl_PALL(vfloat64m1_t maskedoff, const double *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2_t test_vloxei32_v_f64m2_tu_ntl_PALL(vfloat64m2_t maskedoff, const double *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4_t test_vloxei32_v_f64m4_tu_ntl_PALL(vfloat64m4_t maskedoff, const double *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m8_t test_vloxei32_v_f64m8_tu_ntl_PALL(vfloat64m8_t maskedoff, const double *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8_t test_vloxei32_v_i8mf8_tu_ntl_PALL(vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4_t test_vloxei32_v_i8mf4_tu_ntl_PALL(vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2_t test_vloxei32_v_i8mf2_tu_ntl_PALL(vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1_t test_vloxei32_v_i8m1_tu_ntl_PALL(vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2_t test_vloxei32_v_i8m2_tu_ntl_PALL(vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4_t test_vloxei32_v_i16mf4_tu_ntl_PALL(vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2_t test_vloxei32_v_i16mf2_tu_ntl_PALL(vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1_t test_vloxei32_v_i16m1_tu_ntl_PALL(vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2_t test_vloxei32_v_i16m2_tu_ntl_PALL(vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m4_t test_vloxei32_v_i16m4_tu_ntl_PALL(vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2_t test_vloxei32_v_i32mf2_tu_ntl_PALL(vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1_t test_vloxei32_v_i32m1_tu_ntl_PALL(vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m2_t test_vloxei32_v_i32m2_tu_ntl_PALL(vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m4_t test_vloxei32_v_i32m4_tu_ntl_PALL(vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m8_t test_vloxei32_v_i32m8_tu_ntl_PALL(vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1_t test_vloxei32_v_i64m1_tu_ntl_PALL(vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2_t test_vloxei32_v_i64m2_tu_ntl_PALL(vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4_t test_vloxei32_v_i64m4_tu_ntl_PALL(vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m8_t test_vloxei32_v_i64m8_tu_ntl_PALL(vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tu_ntl_PALL(vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tu_ntl_PALL(vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tu_ntl_PALL(vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1_t test_vloxei32_v_u8m1_tu_ntl_PALL(vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2_t test_vloxei32_v_u8m2_tu_ntl_PALL(vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tu_ntl_PALL(vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tu_ntl_PALL(vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1_t test_vloxei32_v_u16m1_tu_ntl_PALL(vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2_t test_vloxei32_v_u16m2_tu_ntl_PALL(vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m4_t test_vloxei32_v_u16m4_tu_ntl_PALL(vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tu_ntl_PALL(vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1_t test_vloxei32_v_u32m1_tu_ntl_PALL(vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m2_t test_vloxei32_v_u32m2_tu_ntl_PALL(vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m4_t test_vloxei32_v_u32m4_tu_ntl_PALL(vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m8_t test_vloxei32_v_u32m8_tu_ntl_PALL(vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1_t test_vloxei32_v_u64m1_tu_ntl_PALL(vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2_t test_vloxei32_v_u64m2_tu_ntl_PALL(vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4_t test_vloxei32_v_u64m4_tu_ntl_PALL(vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m8_t test_vloxei32_v_u64m8_tu_ntl_PALL(vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_tum_ntl_PALL(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tum_ntl_PALL(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1_t test_vloxei32_v_f16m1_tum_ntl_PALL(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2_t test_vloxei32_v_f16m2_tum_ntl_PALL(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m4_t test_vloxei32_v_f16m4_tum_ntl_PALL(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tum_ntl_PALL(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1_t test_vloxei32_v_f32m1_tum_ntl_PALL(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m2_t test_vloxei32_v_f32m2_tum_ntl_PALL(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m4_t test_vloxei32_v_f32m4_tum_ntl_PALL(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m8_t test_vloxei32_v_f32m8_tum_ntl_PALL(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1_t test_vloxei32_v_f64m1_tum_ntl_PALL(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2_t test_vloxei32_v_f64m2_tum_ntl_PALL(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4_t test_vloxei32_v_f64m4_tum_ntl_PALL(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m8_t test_vloxei32_v_f64m8_tum_ntl_PALL(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8_t test_vloxei32_v_i8mf8_tum_ntl_PALL(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4_t test_vloxei32_v_i8mf4_tum_ntl_PALL(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2_t test_vloxei32_v_i8mf2_tum_ntl_PALL(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1_t test_vloxei32_v_i8m1_tum_ntl_PALL(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2_t test_vloxei32_v_i8m2_tum_ntl_PALL(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4_t test_vloxei32_v_i16mf4_tum_ntl_PALL(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2_t test_vloxei32_v_i16mf2_tum_ntl_PALL(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1_t test_vloxei32_v_i16m1_tum_ntl_PALL(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2_t test_vloxei32_v_i16m2_tum_ntl_PALL(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m4_t test_vloxei32_v_i16m4_tum_ntl_PALL(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2_t test_vloxei32_v_i32mf2_tum_ntl_PALL(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1_t test_vloxei32_v_i32m1_tum_ntl_PALL(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m2_t test_vloxei32_v_i32m2_tum_ntl_PALL(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m4_t test_vloxei32_v_i32m4_tum_ntl_PALL(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m8_t test_vloxei32_v_i32m8_tum_ntl_PALL(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1_t test_vloxei32_v_i64m1_tum_ntl_PALL(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2_t test_vloxei32_v_i64m2_tum_ntl_PALL(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4_t test_vloxei32_v_i64m4_tum_ntl_PALL(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m8_t test_vloxei32_v_i64m8_tum_ntl_PALL(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tum_ntl_PALL(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tum_ntl_PALL(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tum_ntl_PALL(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1_t test_vloxei32_v_u8m1_tum_ntl_PALL(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2_t test_vloxei32_v_u8m2_tum_ntl_PALL(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tum_ntl_PALL(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tum_ntl_PALL(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1_t test_vloxei32_v_u16m1_tum_ntl_PALL(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2_t test_vloxei32_v_u16m2_tum_ntl_PALL(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m4_t test_vloxei32_v_u16m4_tum_ntl_PALL(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tum_ntl_PALL(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1_t test_vloxei32_v_u32m1_tum_ntl_PALL(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m2_t test_vloxei32_v_u32m2_tum_ntl_PALL(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m4_t test_vloxei32_v_u32m4_tum_ntl_PALL(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m8_t test_vloxei32_v_u32m8_tum_ntl_PALL(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1_t test_vloxei32_v_u64m1_tum_ntl_PALL(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2_t test_vloxei32_v_u64m2_tum_ntl_PALL(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4_t test_vloxei32_v_u64m4_tum_ntl_PALL(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m8_t test_vloxei32_v_u64m8_tum_ntl_PALL(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_tumu_ntl_PALL(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tumu_ntl_PALL(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1_t test_vloxei32_v_f16m1_tumu_ntl_PALL(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2_t test_vloxei32_v_f16m2_tumu_ntl_PALL(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m4_t test_vloxei32_v_f16m4_tumu_ntl_PALL(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tumu_ntl_PALL(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1_t test_vloxei32_v_f32m1_tumu_ntl_PALL(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m2_t test_vloxei32_v_f32m2_tumu_ntl_PALL(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m4_t test_vloxei32_v_f32m4_tumu_ntl_PALL(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m8_t test_vloxei32_v_f32m8_tumu_ntl_PALL(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1_t test_vloxei32_v_f64m1_tumu_ntl_PALL(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2_t test_vloxei32_v_f64m2_tumu_ntl_PALL(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4_t test_vloxei32_v_f64m4_tumu_ntl_PALL(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m8_t test_vloxei32_v_f64m8_tumu_ntl_PALL(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8_t test_vloxei32_v_i8mf8_tumu_ntl_PALL(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4_t test_vloxei32_v_i8mf4_tumu_ntl_PALL(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2_t test_vloxei32_v_i8mf2_tumu_ntl_PALL(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1_t test_vloxei32_v_i8m1_tumu_ntl_PALL(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2_t test_vloxei32_v_i8m2_tumu_ntl_PALL(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4_t test_vloxei32_v_i16mf4_tumu_ntl_PALL(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2_t test_vloxei32_v_i16mf2_tumu_ntl_PALL(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1_t test_vloxei32_v_i16m1_tumu_ntl_PALL(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2_t test_vloxei32_v_i16m2_tumu_ntl_PALL(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m4_t test_vloxei32_v_i16m4_tumu_ntl_PALL(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2_t test_vloxei32_v_i32mf2_tumu_ntl_PALL(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1_t test_vloxei32_v_i32m1_tumu_ntl_PALL(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m2_t test_vloxei32_v_i32m2_tumu_ntl_PALL(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m4_t test_vloxei32_v_i32m4_tumu_ntl_PALL(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m8_t test_vloxei32_v_i32m8_tumu_ntl_PALL(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1_t test_vloxei32_v_i64m1_tumu_ntl_PALL(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2_t test_vloxei32_v_i64m2_tumu_ntl_PALL(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4_t test_vloxei32_v_i64m4_tumu_ntl_PALL(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m8_t test_vloxei32_v_i64m8_tumu_ntl_PALL(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tumu_ntl_PALL(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tumu_ntl_PALL(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tumu_ntl_PALL(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1_t test_vloxei32_v_u8m1_tumu_ntl_PALL(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2_t test_vloxei32_v_u8m2_tumu_ntl_PALL(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tumu_ntl_PALL(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tumu_ntl_PALL(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1_t test_vloxei32_v_u16m1_tumu_ntl_PALL(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2_t test_vloxei32_v_u16m2_tumu_ntl_PALL(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m4_t test_vloxei32_v_u16m4_tumu_ntl_PALL(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tumu_ntl_PALL(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1_t test_vloxei32_v_u32m1_tumu_ntl_PALL(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m2_t test_vloxei32_v_u32m2_tumu_ntl_PALL(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m4_t test_vloxei32_v_u32m4_tumu_ntl_PALL(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m8_t test_vloxei32_v_u32m8_tumu_ntl_PALL(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1_t test_vloxei32_v_u64m1_tumu_ntl_PALL(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2_t test_vloxei32_v_u64m2_tumu_ntl_PALL(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4_t test_vloxei32_v_u64m4_tumu_ntl_PALL(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m8_t test_vloxei32_v_u64m8_tumu_ntl_PALL(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_mu_ntl_PALL(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_mu_ntl_PALL(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1_t test_vloxei32_v_f16m1_mu_ntl_PALL(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2_t test_vloxei32_v_f16m2_mu_ntl_PALL(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m4_t test_vloxei32_v_f16m4_mu_ntl_PALL(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_mu_ntl_PALL(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1_t test_vloxei32_v_f32m1_mu_ntl_PALL(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m2_t test_vloxei32_v_f32m2_mu_ntl_PALL(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m4_t test_vloxei32_v_f32m4_mu_ntl_PALL(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m8_t test_vloxei32_v_f32m8_mu_ntl_PALL(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1_t test_vloxei32_v_f64m1_mu_ntl_PALL(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2_t test_vloxei32_v_f64m2_mu_ntl_PALL(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4_t test_vloxei32_v_f64m4_mu_ntl_PALL(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m8_t test_vloxei32_v_f64m8_mu_ntl_PALL(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8_t test_vloxei32_v_i8mf8_mu_ntl_PALL(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4_t test_vloxei32_v_i8mf4_mu_ntl_PALL(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2_t test_vloxei32_v_i8mf2_mu_ntl_PALL(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1_t test_vloxei32_v_i8m1_mu_ntl_PALL(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2_t test_vloxei32_v_i8m2_mu_ntl_PALL(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4_t test_vloxei32_v_i16mf4_mu_ntl_PALL(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2_t test_vloxei32_v_i16mf2_mu_ntl_PALL(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1_t test_vloxei32_v_i16m1_mu_ntl_PALL(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2_t test_vloxei32_v_i16m2_mu_ntl_PALL(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m4_t test_vloxei32_v_i16m4_mu_ntl_PALL(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2_t test_vloxei32_v_i32mf2_mu_ntl_PALL(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1_t test_vloxei32_v_i32m1_mu_ntl_PALL(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m2_t test_vloxei32_v_i32m2_mu_ntl_PALL(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m4_t test_vloxei32_v_i32m4_mu_ntl_PALL(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m8_t test_vloxei32_v_i32m8_mu_ntl_PALL(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1_t test_vloxei32_v_i64m1_mu_ntl_PALL(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2_t test_vloxei32_v_i64m2_mu_ntl_PALL(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4_t test_vloxei32_v_i64m4_mu_ntl_PALL(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m8_t test_vloxei32_v_i64m8_mu_ntl_PALL(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8_t test_vloxei32_v_u8mf8_mu_ntl_PALL(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4_t test_vloxei32_v_u8mf4_mu_ntl_PALL(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2_t test_vloxei32_v_u8mf2_mu_ntl_PALL(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1_t test_vloxei32_v_u8m1_mu_ntl_PALL(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2_t test_vloxei32_v_u8m2_mu_ntl_PALL(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4_t test_vloxei32_v_u16mf4_mu_ntl_PALL(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2_t test_vloxei32_v_u16mf2_mu_ntl_PALL(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1_t test_vloxei32_v_u16m1_mu_ntl_PALL(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2_t test_vloxei32_v_u16m2_mu_ntl_PALL(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m4_t test_vloxei32_v_u16m4_mu_ntl_PALL(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2_t test_vloxei32_v_u32mf2_mu_ntl_PALL(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1_t test_vloxei32_v_u32m1_mu_ntl_PALL(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m2_t test_vloxei32_v_u32m2_mu_ntl_PALL(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m4_t test_vloxei32_v_u32m4_mu_ntl_PALL(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m8_t test_vloxei32_v_u32m8_mu_ntl_PALL(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1_t test_vloxei32_v_u64m1_mu_ntl_PALL(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2_t test_vloxei32_v_u64m2_mu_ntl_PALL(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4_t test_vloxei32_v_u64m4_mu_ntl_PALL(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m8_t test_vloxei32_v_u64m8_mu_ntl_PALL(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

