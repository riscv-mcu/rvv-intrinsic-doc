#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x7_t test_vluxseg7ei16_v_f16mf4x7_tu_ntl_ALL(vfloat16mf4x7_t maskedoff_tuple, const float16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x7_t test_vluxseg7ei16_v_f16mf2x7_tu_ntl_ALL(vfloat16mf2x7_t maskedoff_tuple, const float16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x7_t test_vluxseg7ei16_v_f16m1x7_tu_ntl_ALL(vfloat16m1x7_t maskedoff_tuple, const float16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vluxseg7ei16_v_f32mf2x7_tu_ntl_ALL(vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vluxseg7ei16_v_f32m1x7_tu_ntl_ALL(vfloat32m1x7_t maskedoff_tuple, const float32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x7_t test_vluxseg7ei16_v_f64m1x7_tu_ntl_ALL(vfloat64m1x7_t maskedoff_tuple, const float64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x7_t test_vluxseg7ei16_v_i8mf8x7_tu_ntl_ALL(vint8mf8x7_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x7_t test_vluxseg7ei16_v_i8mf4x7_tu_ntl_ALL(vint8mf4x7_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x7_t test_vluxseg7ei16_v_i8mf2x7_tu_ntl_ALL(vint8mf2x7_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x7_t test_vluxseg7ei16_v_i8m1x7_tu_ntl_ALL(vint8m1x7_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x7_t test_vluxseg7ei16_v_i16mf4x7_tu_ntl_ALL(vint16mf4x7_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x7_t test_vluxseg7ei16_v_i16mf2x7_tu_ntl_ALL(vint16mf2x7_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x7_t test_vluxseg7ei16_v_i16m1x7_tu_ntl_ALL(vint16m1x7_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vluxseg7ei16_v_i32mf2x7_tu_ntl_ALL(vint32mf2x7_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vluxseg7ei16_v_i32m1x7_tu_ntl_ALL(vint32m1x7_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vluxseg7ei16_v_i64m1x7_tu_ntl_ALL(vint64m1x7_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x7_t test_vluxseg7ei16_v_u8mf8x7_tu_ntl_ALL(vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x7_t test_vluxseg7ei16_v_u8mf4x7_tu_ntl_ALL(vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x7_t test_vluxseg7ei16_v_u8mf2x7_tu_ntl_ALL(vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x7_t test_vluxseg7ei16_v_u8m1x7_tu_ntl_ALL(vuint8m1x7_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x7_t test_vluxseg7ei16_v_u16mf4x7_tu_ntl_ALL(vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x7_t test_vluxseg7ei16_v_u16mf2x7_tu_ntl_ALL(vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x7_t test_vluxseg7ei16_v_u16m1x7_tu_ntl_ALL(vuint16m1x7_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vluxseg7ei16_v_u32mf2x7_tu_ntl_ALL(vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vluxseg7ei16_v_u32m1x7_tu_ntl_ALL(vuint32m1x7_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vluxseg7ei16_v_u64m1x7_tu_ntl_ALL(vuint64m1x7_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x7_t test_vluxseg7ei16_v_f16mf4x7_tum_ntl_ALL(vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const float16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x7_t test_vluxseg7ei16_v_f16mf2x7_tum_ntl_ALL(vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const float16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x7_t test_vluxseg7ei16_v_f16m1x7_tum_ntl_ALL(vbool16_t mask, vfloat16m1x7_t maskedoff_tuple, const float16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vluxseg7ei16_v_f32mf2x7_tum_ntl_ALL(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vluxseg7ei16_v_f32m1x7_tum_ntl_ALL(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x7_t test_vluxseg7ei16_v_f64m1x7_tum_ntl_ALL(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const float64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x7_t test_vluxseg7ei16_v_i8mf8x7_tum_ntl_ALL(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x7_t test_vluxseg7ei16_v_i8mf4x7_tum_ntl_ALL(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x7_t test_vluxseg7ei16_v_i8mf2x7_tum_ntl_ALL(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x7_t test_vluxseg7ei16_v_i8m1x7_tum_ntl_ALL(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x7_t test_vluxseg7ei16_v_i16mf4x7_tum_ntl_ALL(vbool64_t mask, vint16mf4x7_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x7_t test_vluxseg7ei16_v_i16mf2x7_tum_ntl_ALL(vbool32_t mask, vint16mf2x7_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x7_t test_vluxseg7ei16_v_i16m1x7_tum_ntl_ALL(vbool16_t mask, vint16m1x7_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vluxseg7ei16_v_i32mf2x7_tum_ntl_ALL(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vluxseg7ei16_v_i32m1x7_tum_ntl_ALL(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vluxseg7ei16_v_i64m1x7_tum_ntl_ALL(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x7_t test_vluxseg7ei16_v_u8mf8x7_tum_ntl_ALL(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x7_t test_vluxseg7ei16_v_u8mf4x7_tum_ntl_ALL(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x7_t test_vluxseg7ei16_v_u8mf2x7_tum_ntl_ALL(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x7_t test_vluxseg7ei16_v_u8m1x7_tum_ntl_ALL(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x7_t test_vluxseg7ei16_v_u16mf4x7_tum_ntl_ALL(vbool64_t mask, vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x7_t test_vluxseg7ei16_v_u16mf2x7_tum_ntl_ALL(vbool32_t mask, vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x7_t test_vluxseg7ei16_v_u16m1x7_tum_ntl_ALL(vbool16_t mask, vuint16m1x7_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vluxseg7ei16_v_u32mf2x7_tum_ntl_ALL(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vluxseg7ei16_v_u32m1x7_tum_ntl_ALL(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vluxseg7ei16_v_u64m1x7_tum_ntl_ALL(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x7_t test_vluxseg7ei16_v_f16mf4x7_tumu_ntl_ALL(vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const float16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x7_t test_vluxseg7ei16_v_f16mf2x7_tumu_ntl_ALL(vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const float16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x7_t test_vluxseg7ei16_v_f16m1x7_tumu_ntl_ALL(vbool16_t mask, vfloat16m1x7_t maskedoff_tuple, const float16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vluxseg7ei16_v_f32mf2x7_tumu_ntl_ALL(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vluxseg7ei16_v_f32m1x7_tumu_ntl_ALL(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x7_t test_vluxseg7ei16_v_f64m1x7_tumu_ntl_ALL(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const float64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x7_t test_vluxseg7ei16_v_i8mf8x7_tumu_ntl_ALL(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x7_t test_vluxseg7ei16_v_i8mf4x7_tumu_ntl_ALL(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x7_t test_vluxseg7ei16_v_i8mf2x7_tumu_ntl_ALL(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x7_t test_vluxseg7ei16_v_i8m1x7_tumu_ntl_ALL(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x7_t test_vluxseg7ei16_v_i16mf4x7_tumu_ntl_ALL(vbool64_t mask, vint16mf4x7_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x7_t test_vluxseg7ei16_v_i16mf2x7_tumu_ntl_ALL(vbool32_t mask, vint16mf2x7_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x7_t test_vluxseg7ei16_v_i16m1x7_tumu_ntl_ALL(vbool16_t mask, vint16m1x7_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vluxseg7ei16_v_i32mf2x7_tumu_ntl_ALL(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vluxseg7ei16_v_i32m1x7_tumu_ntl_ALL(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vluxseg7ei16_v_i64m1x7_tumu_ntl_ALL(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x7_t test_vluxseg7ei16_v_u8mf8x7_tumu_ntl_ALL(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x7_t test_vluxseg7ei16_v_u8mf4x7_tumu_ntl_ALL(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x7_t test_vluxseg7ei16_v_u8mf2x7_tumu_ntl_ALL(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x7_t test_vluxseg7ei16_v_u8m1x7_tumu_ntl_ALL(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x7_t test_vluxseg7ei16_v_u16mf4x7_tumu_ntl_ALL(vbool64_t mask, vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x7_t test_vluxseg7ei16_v_u16mf2x7_tumu_ntl_ALL(vbool32_t mask, vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x7_t test_vluxseg7ei16_v_u16m1x7_tumu_ntl_ALL(vbool16_t mask, vuint16m1x7_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vluxseg7ei16_v_u32mf2x7_tumu_ntl_ALL(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vluxseg7ei16_v_u32m1x7_tumu_ntl_ALL(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vluxseg7ei16_v_u64m1x7_tumu_ntl_ALL(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x7_t test_vluxseg7ei16_v_f16mf4x7_mu_ntl_ALL(vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const float16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x7_t test_vluxseg7ei16_v_f16mf2x7_mu_ntl_ALL(vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const float16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x7_t test_vluxseg7ei16_v_f16m1x7_mu_ntl_ALL(vbool16_t mask, vfloat16m1x7_t maskedoff_tuple, const float16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vluxseg7ei16_v_f32mf2x7_mu_ntl_ALL(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vluxseg7ei16_v_f32m1x7_mu_ntl_ALL(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x7_t test_vluxseg7ei16_v_f64m1x7_mu_ntl_ALL(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const float64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x7_t test_vluxseg7ei16_v_i8mf8x7_mu_ntl_ALL(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x7_t test_vluxseg7ei16_v_i8mf4x7_mu_ntl_ALL(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x7_t test_vluxseg7ei16_v_i8mf2x7_mu_ntl_ALL(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x7_t test_vluxseg7ei16_v_i8m1x7_mu_ntl_ALL(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x7_t test_vluxseg7ei16_v_i16mf4x7_mu_ntl_ALL(vbool64_t mask, vint16mf4x7_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x7_t test_vluxseg7ei16_v_i16mf2x7_mu_ntl_ALL(vbool32_t mask, vint16mf2x7_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x7_t test_vluxseg7ei16_v_i16m1x7_mu_ntl_ALL(vbool16_t mask, vint16m1x7_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vluxseg7ei16_v_i32mf2x7_mu_ntl_ALL(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vluxseg7ei16_v_i32m1x7_mu_ntl_ALL(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vluxseg7ei16_v_i64m1x7_mu_ntl_ALL(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x7_t test_vluxseg7ei16_v_u8mf8x7_mu_ntl_ALL(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x7_t test_vluxseg7ei16_v_u8mf4x7_mu_ntl_ALL(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x7_t test_vluxseg7ei16_v_u8mf2x7_mu_ntl_ALL(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x7_t test_vluxseg7ei16_v_u8m1x7_mu_ntl_ALL(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x7_t test_vluxseg7ei16_v_u16mf4x7_mu_ntl_ALL(vbool64_t mask, vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x7_t test_vluxseg7ei16_v_u16mf2x7_mu_ntl_ALL(vbool32_t mask, vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x7_t test_vluxseg7ei16_v_u16m1x7_mu_ntl_ALL(vbool16_t mask, vuint16m1x7_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vluxseg7ei16_v_u32mf2x7_mu_ntl_ALL(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vluxseg7ei16_v_u32m1x7_mu_ntl_ALL(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vluxseg7ei16_v_u64m1x7_mu_ntl_ALL(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

