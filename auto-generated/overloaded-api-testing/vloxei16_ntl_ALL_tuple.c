#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4_t test_vloxei16_v_f16mf4_ntl_ALL(const float16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2_t test_vloxei16_v_f16mf2_ntl_ALL(const float16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1_t test_vloxei16_v_f16m1_ntl_ALL(const float16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2_t test_vloxei16_v_f16m2_ntl_ALL(const float16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m4_t test_vloxei16_v_f16m4_ntl_ALL(const float16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m8_t test_vloxei16_v_f16m8_ntl_ALL(const float16_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2_t test_vloxei16_v_f32mf2_ntl_ALL(const float32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vloxei16_v_f32m1_ntl_ALL(const float32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vloxei16_v_f32m2_ntl_ALL(const float32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vloxei16_v_f32m4_ntl_ALL(const float32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vloxei16_v_f32m8_ntl_ALL(const float32_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1_t test_vloxei16_v_f64m1_ntl_ALL(const float64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2_t test_vloxei16_v_f64m2_ntl_ALL(const float64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m4_t test_vloxei16_v_f64m4_ntl_ALL(const float64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m8_t test_vloxei16_v_f64m8_ntl_ALL(const float64_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8_t test_vloxei16_v_i8mf8_ntl_ALL(const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4_t test_vloxei16_v_i8mf4_ntl_ALL(const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2_t test_vloxei16_v_i8mf2_ntl_ALL(const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1_t test_vloxei16_v_i8m1_ntl_ALL(const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2_t test_vloxei16_v_i8m2_ntl_ALL(const int8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m4_t test_vloxei16_v_i8m4_ntl_ALL(const int8_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4_t test_vloxei16_v_i16mf4_ntl_ALL(const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2_t test_vloxei16_v_i16mf2_ntl_ALL(const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1_t test_vloxei16_v_i16m1_ntl_ALL(const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2_t test_vloxei16_v_i16m2_ntl_ALL(const int16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m4_t test_vloxei16_v_i16m4_ntl_ALL(const int16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m8_t test_vloxei16_v_i16m8_ntl_ALL(const int16_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vloxei16_v_i32mf2_ntl_ALL(const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vloxei16_v_i32m1_ntl_ALL(const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vloxei16_v_i32m2_ntl_ALL(const int32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vloxei16_v_i32m4_ntl_ALL(const int32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vloxei16_v_i32m8_ntl_ALL(const int32_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1_t test_vloxei16_v_i64m1_ntl_ALL(const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2_t test_vloxei16_v_i64m2_ntl_ALL(const int64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m4_t test_vloxei16_v_i64m4_ntl_ALL(const int64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m8_t test_vloxei16_v_i64m8_ntl_ALL(const int64_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8_t test_vloxei16_v_u8mf8_ntl_ALL(const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4_t test_vloxei16_v_u8mf4_ntl_ALL(const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2_t test_vloxei16_v_u8mf2_ntl_ALL(const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1_t test_vloxei16_v_u8m1_ntl_ALL(const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2_t test_vloxei16_v_u8m2_ntl_ALL(const uint8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m4_t test_vloxei16_v_u8m4_ntl_ALL(const uint8_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4_t test_vloxei16_v_u16mf4_ntl_ALL(const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2_t test_vloxei16_v_u16mf2_ntl_ALL(const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1_t test_vloxei16_v_u16m1_ntl_ALL(const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2_t test_vloxei16_v_u16m2_ntl_ALL(const uint16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m4_t test_vloxei16_v_u16m4_ntl_ALL(const uint16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m8_t test_vloxei16_v_u16m8_ntl_ALL(const uint16_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vloxei16_v_u32mf2_ntl_ALL(const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vloxei16_v_u32m1_ntl_ALL(const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vloxei16_v_u32m2_ntl_ALL(const uint32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vloxei16_v_u32m4_ntl_ALL(const uint32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vloxei16_v_u32m8_ntl_ALL(const uint32_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1_t test_vloxei16_v_u64m1_ntl_ALL(const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2_t test_vloxei16_v_u64m2_ntl_ALL(const uint64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m4_t test_vloxei16_v_u64m4_ntl_ALL(const uint64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m8_t test_vloxei16_v_u64m8_ntl_ALL(const uint64_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4_t test_vloxei16_v_f16mf4_m_ntl_ALL(vbool64_t mask, const float16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2_t test_vloxei16_v_f16mf2_m_ntl_ALL(vbool32_t mask, const float16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1_t test_vloxei16_v_f16m1_m_ntl_ALL(vbool16_t mask, const float16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2_t test_vloxei16_v_f16m2_m_ntl_ALL(vbool8_t mask, const float16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m4_t test_vloxei16_v_f16m4_m_ntl_ALL(vbool4_t mask, const float16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m8_t test_vloxei16_v_f16m8_m_ntl_ALL(vbool2_t mask, const float16_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2_t test_vloxei16_v_f32mf2_m_ntl_ALL(vbool64_t mask, const float32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vloxei16_v_f32m1_m_ntl_ALL(vbool32_t mask, const float32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vloxei16_v_f32m2_m_ntl_ALL(vbool16_t mask, const float32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vloxei16_v_f32m4_m_ntl_ALL(vbool8_t mask, const float32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vloxei16_v_f32m8_m_ntl_ALL(vbool4_t mask, const float32_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1_t test_vloxei16_v_f64m1_m_ntl_ALL(vbool64_t mask, const float64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2_t test_vloxei16_v_f64m2_m_ntl_ALL(vbool32_t mask, const float64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m4_t test_vloxei16_v_f64m4_m_ntl_ALL(vbool16_t mask, const float64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m8_t test_vloxei16_v_f64m8_m_ntl_ALL(vbool8_t mask, const float64_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8_t test_vloxei16_v_i8mf8_m_ntl_ALL(vbool64_t mask, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4_t test_vloxei16_v_i8mf4_m_ntl_ALL(vbool32_t mask, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2_t test_vloxei16_v_i8mf2_m_ntl_ALL(vbool16_t mask, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1_t test_vloxei16_v_i8m1_m_ntl_ALL(vbool8_t mask, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2_t test_vloxei16_v_i8m2_m_ntl_ALL(vbool4_t mask, const int8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m4_t test_vloxei16_v_i8m4_m_ntl_ALL(vbool2_t mask, const int8_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4_t test_vloxei16_v_i16mf4_m_ntl_ALL(vbool64_t mask, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2_t test_vloxei16_v_i16mf2_m_ntl_ALL(vbool32_t mask, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1_t test_vloxei16_v_i16m1_m_ntl_ALL(vbool16_t mask, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2_t test_vloxei16_v_i16m2_m_ntl_ALL(vbool8_t mask, const int16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m4_t test_vloxei16_v_i16m4_m_ntl_ALL(vbool4_t mask, const int16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m8_t test_vloxei16_v_i16m8_m_ntl_ALL(vbool2_t mask, const int16_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vloxei16_v_i32mf2_m_ntl_ALL(vbool64_t mask, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vloxei16_v_i32m1_m_ntl_ALL(vbool32_t mask, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vloxei16_v_i32m2_m_ntl_ALL(vbool16_t mask, const int32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vloxei16_v_i32m4_m_ntl_ALL(vbool8_t mask, const int32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vloxei16_v_i32m8_m_ntl_ALL(vbool4_t mask, const int32_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1_t test_vloxei16_v_i64m1_m_ntl_ALL(vbool64_t mask, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2_t test_vloxei16_v_i64m2_m_ntl_ALL(vbool32_t mask, const int64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m4_t test_vloxei16_v_i64m4_m_ntl_ALL(vbool16_t mask, const int64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m8_t test_vloxei16_v_i64m8_m_ntl_ALL(vbool8_t mask, const int64_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8_t test_vloxei16_v_u8mf8_m_ntl_ALL(vbool64_t mask, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4_t test_vloxei16_v_u8mf4_m_ntl_ALL(vbool32_t mask, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2_t test_vloxei16_v_u8mf2_m_ntl_ALL(vbool16_t mask, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1_t test_vloxei16_v_u8m1_m_ntl_ALL(vbool8_t mask, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2_t test_vloxei16_v_u8m2_m_ntl_ALL(vbool4_t mask, const uint8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m4_t test_vloxei16_v_u8m4_m_ntl_ALL(vbool2_t mask, const uint8_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4_t test_vloxei16_v_u16mf4_m_ntl_ALL(vbool64_t mask, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2_t test_vloxei16_v_u16mf2_m_ntl_ALL(vbool32_t mask, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1_t test_vloxei16_v_u16m1_m_ntl_ALL(vbool16_t mask, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2_t test_vloxei16_v_u16m2_m_ntl_ALL(vbool8_t mask, const uint16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m4_t test_vloxei16_v_u16m4_m_ntl_ALL(vbool4_t mask, const uint16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m8_t test_vloxei16_v_u16m8_m_ntl_ALL(vbool2_t mask, const uint16_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vloxei16_v_u32mf2_m_ntl_ALL(vbool64_t mask, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vloxei16_v_u32m1_m_ntl_ALL(vbool32_t mask, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vloxei16_v_u32m2_m_ntl_ALL(vbool16_t mask, const uint32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vloxei16_v_u32m4_m_ntl_ALL(vbool8_t mask, const uint32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vloxei16_v_u32m8_m_ntl_ALL(vbool4_t mask, const uint32_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1_t test_vloxei16_v_u64m1_m_ntl_ALL(vbool64_t mask, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2_t test_vloxei16_v_u64m2_m_ntl_ALL(vbool32_t mask, const uint64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m4_t test_vloxei16_v_u64m4_m_ntl_ALL(vbool16_t mask, const uint64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m8_t test_vloxei16_v_u64m8_m_ntl_ALL(vbool8_t mask, const uint64_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

