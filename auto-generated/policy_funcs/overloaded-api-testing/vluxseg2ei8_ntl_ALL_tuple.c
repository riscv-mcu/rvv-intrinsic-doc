#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x2_t test_vluxseg2ei8_v_f16mf4x2_tu_ntl_ALL(vfloat16mf4x2_t maskedoff_tuple, const float16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x2_t test_vluxseg2ei8_v_f16mf2x2_tu_ntl_ALL(vfloat16mf2x2_t maskedoff_tuple, const float16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x2_t test_vluxseg2ei8_v_f16m1x2_tu_ntl_ALL(vfloat16m1x2_t maskedoff_tuple, const float16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x2_t test_vluxseg2ei8_v_f16m2x2_tu_ntl_ALL(vfloat16m2x2_t maskedoff_tuple, const float16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m4x2_t test_vluxseg2ei8_v_f16m4x2_tu_ntl_ALL(vfloat16m4x2_t maskedoff_tuple, const float16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vluxseg2ei8_v_f32mf2x2_tu_ntl_ALL(vfloat32mf2x2_t maskedoff_tuple, const float32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vluxseg2ei8_v_f32m1x2_tu_ntl_ALL(vfloat32m1x2_t maskedoff_tuple, const float32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vluxseg2ei8_v_f32m2x2_tu_ntl_ALL(vfloat32m2x2_t maskedoff_tuple, const float32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vluxseg2ei8_v_f32m4x2_tu_ntl_ALL(vfloat32m4x2_t maskedoff_tuple, const float32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x2_t test_vluxseg2ei8_v_f64m1x2_tu_ntl_ALL(vfloat64m1x2_t maskedoff_tuple, const float64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vluxseg2ei8_v_f64m2x2_tu_ntl_ALL(vfloat64m2x2_t maskedoff_tuple, const float64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vluxseg2ei8_v_f64m4x2_tu_ntl_ALL(vfloat64m4x2_t maskedoff_tuple, const float64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x2_t test_vluxseg2ei8_v_i8mf8x2_tu_ntl_ALL(vint8mf8x2_t maskedoff_tuple, const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2_tu_ntl_ALL(vint8mf4x2_t maskedoff_tuple, const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2_tu_ntl_ALL(vint8mf2x2_t maskedoff_tuple, const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2_tu_ntl_ALL(vint8m1x2_t maskedoff_tuple, const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2_tu_ntl_ALL(vint8m2x2_t maskedoff_tuple, const int8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2_tu_ntl_ALL(vint8m4x2_t maskedoff_tuple, const int8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x2_t test_vluxseg2ei8_v_i16mf4x2_tu_ntl_ALL(vint16mf4x2_t maskedoff_tuple, const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2_tu_ntl_ALL(vint16mf2x2_t maskedoff_tuple, const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2_tu_ntl_ALL(vint16m1x2_t maskedoff_tuple, const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2_tu_ntl_ALL(vint16m2x2_t maskedoff_tuple, const int16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2_tu_ntl_ALL(vint16m4x2_t maskedoff_tuple, const int16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vluxseg2ei8_v_i32mf2x2_tu_ntl_ALL(vint32mf2x2_t maskedoff_tuple, const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2_tu_ntl_ALL(vint32m1x2_t maskedoff_tuple, const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2_tu_ntl_ALL(vint32m2x2_t maskedoff_tuple, const int32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2_tu_ntl_ALL(vint32m4x2_t maskedoff_tuple, const int32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vluxseg2ei8_v_i64m1x2_tu_ntl_ALL(vint64m1x2_t maskedoff_tuple, const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vluxseg2ei8_v_i64m2x2_tu_ntl_ALL(vint64m2x2_t maskedoff_tuple, const int64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vluxseg2ei8_v_i64m4x2_tu_ntl_ALL(vint64m4x2_t maskedoff_tuple, const int64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x2_t test_vluxseg2ei8_v_u8mf8x2_tu_ntl_ALL(vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2_tu_ntl_ALL(vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2_tu_ntl_ALL(vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2_tu_ntl_ALL(vuint8m1x2_t maskedoff_tuple, const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2_tu_ntl_ALL(vuint8m2x2_t maskedoff_tuple, const uint8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2_tu_ntl_ALL(vuint8m4x2_t maskedoff_tuple, const uint8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x2_t test_vluxseg2ei8_v_u16mf4x2_tu_ntl_ALL(vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2_tu_ntl_ALL(vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2_tu_ntl_ALL(vuint16m1x2_t maskedoff_tuple, const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2_tu_ntl_ALL(vuint16m2x2_t maskedoff_tuple, const uint16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2_tu_ntl_ALL(vuint16m4x2_t maskedoff_tuple, const uint16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vluxseg2ei8_v_u32mf2x2_tu_ntl_ALL(vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2_tu_ntl_ALL(vuint32m1x2_t maskedoff_tuple, const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2_tu_ntl_ALL(vuint32m2x2_t maskedoff_tuple, const uint32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2_tu_ntl_ALL(vuint32m4x2_t maskedoff_tuple, const uint32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vluxseg2ei8_v_u64m1x2_tu_ntl_ALL(vuint64m1x2_t maskedoff_tuple, const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vluxseg2ei8_v_u64m2x2_tu_ntl_ALL(vuint64m2x2_t maskedoff_tuple, const uint64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vluxseg2ei8_v_u64m4x2_tu_ntl_ALL(vuint64m4x2_t maskedoff_tuple, const uint64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x2_t test_vluxseg2ei8_v_f16mf4x2_tum_ntl_ALL(vbool64_t mask, vfloat16mf4x2_t maskedoff_tuple, const float16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x2_t test_vluxseg2ei8_v_f16mf2x2_tum_ntl_ALL(vbool32_t mask, vfloat16mf2x2_t maskedoff_tuple, const float16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x2_t test_vluxseg2ei8_v_f16m1x2_tum_ntl_ALL(vbool16_t mask, vfloat16m1x2_t maskedoff_tuple, const float16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x2_t test_vluxseg2ei8_v_f16m2x2_tum_ntl_ALL(vbool8_t mask, vfloat16m2x2_t maskedoff_tuple, const float16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m4x2_t test_vluxseg2ei8_v_f16m4x2_tum_ntl_ALL(vbool4_t mask, vfloat16m4x2_t maskedoff_tuple, const float16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vluxseg2ei8_v_f32mf2x2_tum_ntl_ALL(vbool64_t mask, vfloat32mf2x2_t maskedoff_tuple, const float32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vluxseg2ei8_v_f32m1x2_tum_ntl_ALL(vbool32_t mask, vfloat32m1x2_t maskedoff_tuple, const float32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vluxseg2ei8_v_f32m2x2_tum_ntl_ALL(vbool16_t mask, vfloat32m2x2_t maskedoff_tuple, const float32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vluxseg2ei8_v_f32m4x2_tum_ntl_ALL(vbool8_t mask, vfloat32m4x2_t maskedoff_tuple, const float32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x2_t test_vluxseg2ei8_v_f64m1x2_tum_ntl_ALL(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const float64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vluxseg2ei8_v_f64m2x2_tum_ntl_ALL(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const float64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vluxseg2ei8_v_f64m4x2_tum_ntl_ALL(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const float64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x2_t test_vluxseg2ei8_v_i8mf8x2_tum_ntl_ALL(vbool64_t mask, vint8mf8x2_t maskedoff_tuple, const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2_tum_ntl_ALL(vbool32_t mask, vint8mf4x2_t maskedoff_tuple, const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2_tum_ntl_ALL(vbool16_t mask, vint8mf2x2_t maskedoff_tuple, const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2_tum_ntl_ALL(vbool8_t mask, vint8m1x2_t maskedoff_tuple, const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2_tum_ntl_ALL(vbool4_t mask, vint8m2x2_t maskedoff_tuple, const int8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2_tum_ntl_ALL(vbool2_t mask, vint8m4x2_t maskedoff_tuple, const int8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x2_t test_vluxseg2ei8_v_i16mf4x2_tum_ntl_ALL(vbool64_t mask, vint16mf4x2_t maskedoff_tuple, const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2_tum_ntl_ALL(vbool32_t mask, vint16mf2x2_t maskedoff_tuple, const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2_tum_ntl_ALL(vbool16_t mask, vint16m1x2_t maskedoff_tuple, const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2_tum_ntl_ALL(vbool8_t mask, vint16m2x2_t maskedoff_tuple, const int16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2_tum_ntl_ALL(vbool4_t mask, vint16m4x2_t maskedoff_tuple, const int16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vluxseg2ei8_v_i32mf2x2_tum_ntl_ALL(vbool64_t mask, vint32mf2x2_t maskedoff_tuple, const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2_tum_ntl_ALL(vbool32_t mask, vint32m1x2_t maskedoff_tuple, const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2_tum_ntl_ALL(vbool16_t mask, vint32m2x2_t maskedoff_tuple, const int32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2_tum_ntl_ALL(vbool8_t mask, vint32m4x2_t maskedoff_tuple, const int32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vluxseg2ei8_v_i64m1x2_tum_ntl_ALL(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vluxseg2ei8_v_i64m2x2_tum_ntl_ALL(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vluxseg2ei8_v_i64m4x2_tum_ntl_ALL(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x2_t test_vluxseg2ei8_v_u8mf8x2_tum_ntl_ALL(vbool64_t mask, vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2_tum_ntl_ALL(vbool32_t mask, vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2_tum_ntl_ALL(vbool16_t mask, vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2_tum_ntl_ALL(vbool8_t mask, vuint8m1x2_t maskedoff_tuple, const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2_tum_ntl_ALL(vbool4_t mask, vuint8m2x2_t maskedoff_tuple, const uint8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2_tum_ntl_ALL(vbool2_t mask, vuint8m4x2_t maskedoff_tuple, const uint8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x2_t test_vluxseg2ei8_v_u16mf4x2_tum_ntl_ALL(vbool64_t mask, vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2_tum_ntl_ALL(vbool32_t mask, vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2_tum_ntl_ALL(vbool16_t mask, vuint16m1x2_t maskedoff_tuple, const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2_tum_ntl_ALL(vbool8_t mask, vuint16m2x2_t maskedoff_tuple, const uint16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2_tum_ntl_ALL(vbool4_t mask, vuint16m4x2_t maskedoff_tuple, const uint16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vluxseg2ei8_v_u32mf2x2_tum_ntl_ALL(vbool64_t mask, vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2_tum_ntl_ALL(vbool32_t mask, vuint32m1x2_t maskedoff_tuple, const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2_tum_ntl_ALL(vbool16_t mask, vuint32m2x2_t maskedoff_tuple, const uint32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2_tum_ntl_ALL(vbool8_t mask, vuint32m4x2_t maskedoff_tuple, const uint32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vluxseg2ei8_v_u64m1x2_tum_ntl_ALL(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vluxseg2ei8_v_u64m2x2_tum_ntl_ALL(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vluxseg2ei8_v_u64m4x2_tum_ntl_ALL(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x2_t test_vluxseg2ei8_v_f16mf4x2_tumu_ntl_ALL(vbool64_t mask, vfloat16mf4x2_t maskedoff_tuple, const float16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x2_t test_vluxseg2ei8_v_f16mf2x2_tumu_ntl_ALL(vbool32_t mask, vfloat16mf2x2_t maskedoff_tuple, const float16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x2_t test_vluxseg2ei8_v_f16m1x2_tumu_ntl_ALL(vbool16_t mask, vfloat16m1x2_t maskedoff_tuple, const float16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x2_t test_vluxseg2ei8_v_f16m2x2_tumu_ntl_ALL(vbool8_t mask, vfloat16m2x2_t maskedoff_tuple, const float16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m4x2_t test_vluxseg2ei8_v_f16m4x2_tumu_ntl_ALL(vbool4_t mask, vfloat16m4x2_t maskedoff_tuple, const float16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vluxseg2ei8_v_f32mf2x2_tumu_ntl_ALL(vbool64_t mask, vfloat32mf2x2_t maskedoff_tuple, const float32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vluxseg2ei8_v_f32m1x2_tumu_ntl_ALL(vbool32_t mask, vfloat32m1x2_t maskedoff_tuple, const float32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vluxseg2ei8_v_f32m2x2_tumu_ntl_ALL(vbool16_t mask, vfloat32m2x2_t maskedoff_tuple, const float32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vluxseg2ei8_v_f32m4x2_tumu_ntl_ALL(vbool8_t mask, vfloat32m4x2_t maskedoff_tuple, const float32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x2_t test_vluxseg2ei8_v_f64m1x2_tumu_ntl_ALL(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const float64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vluxseg2ei8_v_f64m2x2_tumu_ntl_ALL(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const float64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vluxseg2ei8_v_f64m4x2_tumu_ntl_ALL(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const float64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x2_t test_vluxseg2ei8_v_i8mf8x2_tumu_ntl_ALL(vbool64_t mask, vint8mf8x2_t maskedoff_tuple, const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2_tumu_ntl_ALL(vbool32_t mask, vint8mf4x2_t maskedoff_tuple, const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2_tumu_ntl_ALL(vbool16_t mask, vint8mf2x2_t maskedoff_tuple, const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2_tumu_ntl_ALL(vbool8_t mask, vint8m1x2_t maskedoff_tuple, const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2_tumu_ntl_ALL(vbool4_t mask, vint8m2x2_t maskedoff_tuple, const int8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2_tumu_ntl_ALL(vbool2_t mask, vint8m4x2_t maskedoff_tuple, const int8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x2_t test_vluxseg2ei8_v_i16mf4x2_tumu_ntl_ALL(vbool64_t mask, vint16mf4x2_t maskedoff_tuple, const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2_tumu_ntl_ALL(vbool32_t mask, vint16mf2x2_t maskedoff_tuple, const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2_tumu_ntl_ALL(vbool16_t mask, vint16m1x2_t maskedoff_tuple, const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2_tumu_ntl_ALL(vbool8_t mask, vint16m2x2_t maskedoff_tuple, const int16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2_tumu_ntl_ALL(vbool4_t mask, vint16m4x2_t maskedoff_tuple, const int16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vluxseg2ei8_v_i32mf2x2_tumu_ntl_ALL(vbool64_t mask, vint32mf2x2_t maskedoff_tuple, const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2_tumu_ntl_ALL(vbool32_t mask, vint32m1x2_t maskedoff_tuple, const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2_tumu_ntl_ALL(vbool16_t mask, vint32m2x2_t maskedoff_tuple, const int32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2_tumu_ntl_ALL(vbool8_t mask, vint32m4x2_t maskedoff_tuple, const int32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vluxseg2ei8_v_i64m1x2_tumu_ntl_ALL(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vluxseg2ei8_v_i64m2x2_tumu_ntl_ALL(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vluxseg2ei8_v_i64m4x2_tumu_ntl_ALL(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x2_t test_vluxseg2ei8_v_u8mf8x2_tumu_ntl_ALL(vbool64_t mask, vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2_tumu_ntl_ALL(vbool32_t mask, vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2_tumu_ntl_ALL(vbool16_t mask, vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2_tumu_ntl_ALL(vbool8_t mask, vuint8m1x2_t maskedoff_tuple, const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2_tumu_ntl_ALL(vbool4_t mask, vuint8m2x2_t maskedoff_tuple, const uint8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2_tumu_ntl_ALL(vbool2_t mask, vuint8m4x2_t maskedoff_tuple, const uint8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x2_t test_vluxseg2ei8_v_u16mf4x2_tumu_ntl_ALL(vbool64_t mask, vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2_tumu_ntl_ALL(vbool32_t mask, vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2_tumu_ntl_ALL(vbool16_t mask, vuint16m1x2_t maskedoff_tuple, const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2_tumu_ntl_ALL(vbool8_t mask, vuint16m2x2_t maskedoff_tuple, const uint16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2_tumu_ntl_ALL(vbool4_t mask, vuint16m4x2_t maskedoff_tuple, const uint16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vluxseg2ei8_v_u32mf2x2_tumu_ntl_ALL(vbool64_t mask, vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2_tumu_ntl_ALL(vbool32_t mask, vuint32m1x2_t maskedoff_tuple, const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2_tumu_ntl_ALL(vbool16_t mask, vuint32m2x2_t maskedoff_tuple, const uint32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2_tumu_ntl_ALL(vbool8_t mask, vuint32m4x2_t maskedoff_tuple, const uint32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vluxseg2ei8_v_u64m1x2_tumu_ntl_ALL(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vluxseg2ei8_v_u64m2x2_tumu_ntl_ALL(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vluxseg2ei8_v_u64m4x2_tumu_ntl_ALL(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x2_t test_vluxseg2ei8_v_f16mf4x2_mu_ntl_ALL(vbool64_t mask, vfloat16mf4x2_t maskedoff_tuple, const float16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x2_t test_vluxseg2ei8_v_f16mf2x2_mu_ntl_ALL(vbool32_t mask, vfloat16mf2x2_t maskedoff_tuple, const float16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x2_t test_vluxseg2ei8_v_f16m1x2_mu_ntl_ALL(vbool16_t mask, vfloat16m1x2_t maskedoff_tuple, const float16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x2_t test_vluxseg2ei8_v_f16m2x2_mu_ntl_ALL(vbool8_t mask, vfloat16m2x2_t maskedoff_tuple, const float16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m4x2_t test_vluxseg2ei8_v_f16m4x2_mu_ntl_ALL(vbool4_t mask, vfloat16m4x2_t maskedoff_tuple, const float16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vluxseg2ei8_v_f32mf2x2_mu_ntl_ALL(vbool64_t mask, vfloat32mf2x2_t maskedoff_tuple, const float32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vluxseg2ei8_v_f32m1x2_mu_ntl_ALL(vbool32_t mask, vfloat32m1x2_t maskedoff_tuple, const float32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vluxseg2ei8_v_f32m2x2_mu_ntl_ALL(vbool16_t mask, vfloat32m2x2_t maskedoff_tuple, const float32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vluxseg2ei8_v_f32m4x2_mu_ntl_ALL(vbool8_t mask, vfloat32m4x2_t maskedoff_tuple, const float32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x2_t test_vluxseg2ei8_v_f64m1x2_mu_ntl_ALL(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const float64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vluxseg2ei8_v_f64m2x2_mu_ntl_ALL(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const float64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vluxseg2ei8_v_f64m4x2_mu_ntl_ALL(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const float64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x2_t test_vluxseg2ei8_v_i8mf8x2_mu_ntl_ALL(vbool64_t mask, vint8mf8x2_t maskedoff_tuple, const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2_mu_ntl_ALL(vbool32_t mask, vint8mf4x2_t maskedoff_tuple, const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2_mu_ntl_ALL(vbool16_t mask, vint8mf2x2_t maskedoff_tuple, const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2_mu_ntl_ALL(vbool8_t mask, vint8m1x2_t maskedoff_tuple, const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2_mu_ntl_ALL(vbool4_t mask, vint8m2x2_t maskedoff_tuple, const int8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2_mu_ntl_ALL(vbool2_t mask, vint8m4x2_t maskedoff_tuple, const int8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x2_t test_vluxseg2ei8_v_i16mf4x2_mu_ntl_ALL(vbool64_t mask, vint16mf4x2_t maskedoff_tuple, const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2_mu_ntl_ALL(vbool32_t mask, vint16mf2x2_t maskedoff_tuple, const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2_mu_ntl_ALL(vbool16_t mask, vint16m1x2_t maskedoff_tuple, const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2_mu_ntl_ALL(vbool8_t mask, vint16m2x2_t maskedoff_tuple, const int16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2_mu_ntl_ALL(vbool4_t mask, vint16m4x2_t maskedoff_tuple, const int16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vluxseg2ei8_v_i32mf2x2_mu_ntl_ALL(vbool64_t mask, vint32mf2x2_t maskedoff_tuple, const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2_mu_ntl_ALL(vbool32_t mask, vint32m1x2_t maskedoff_tuple, const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2_mu_ntl_ALL(vbool16_t mask, vint32m2x2_t maskedoff_tuple, const int32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2_mu_ntl_ALL(vbool8_t mask, vint32m4x2_t maskedoff_tuple, const int32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vluxseg2ei8_v_i64m1x2_mu_ntl_ALL(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vluxseg2ei8_v_i64m2x2_mu_ntl_ALL(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vluxseg2ei8_v_i64m4x2_mu_ntl_ALL(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x2_t test_vluxseg2ei8_v_u8mf8x2_mu_ntl_ALL(vbool64_t mask, vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2_mu_ntl_ALL(vbool32_t mask, vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2_mu_ntl_ALL(vbool16_t mask, vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2_mu_ntl_ALL(vbool8_t mask, vuint8m1x2_t maskedoff_tuple, const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2_mu_ntl_ALL(vbool4_t mask, vuint8m2x2_t maskedoff_tuple, const uint8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2_mu_ntl_ALL(vbool2_t mask, vuint8m4x2_t maskedoff_tuple, const uint8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x2_t test_vluxseg2ei8_v_u16mf4x2_mu_ntl_ALL(vbool64_t mask, vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2_mu_ntl_ALL(vbool32_t mask, vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2_mu_ntl_ALL(vbool16_t mask, vuint16m1x2_t maskedoff_tuple, const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2_mu_ntl_ALL(vbool8_t mask, vuint16m2x2_t maskedoff_tuple, const uint16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2_mu_ntl_ALL(vbool4_t mask, vuint16m4x2_t maskedoff_tuple, const uint16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vluxseg2ei8_v_u32mf2x2_mu_ntl_ALL(vbool64_t mask, vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2_mu_ntl_ALL(vbool32_t mask, vuint32m1x2_t maskedoff_tuple, const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2_mu_ntl_ALL(vbool16_t mask, vuint32m2x2_t maskedoff_tuple, const uint32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2_mu_ntl_ALL(vbool8_t mask, vuint32m4x2_t maskedoff_tuple, const uint32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vluxseg2ei8_v_u64m1x2_mu_ntl_ALL(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vluxseg2ei8_v_u64m2x2_mu_ntl_ALL(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vluxseg2ei8_v_u64m4x2_mu_ntl_ALL(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

