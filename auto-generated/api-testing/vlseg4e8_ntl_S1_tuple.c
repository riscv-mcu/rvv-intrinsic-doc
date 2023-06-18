#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x4_t test_vlseg4e8_v_i8mf8x4_ntl_S1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf8x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x4_t test_vlseg4e8_v_i8mf4x4_ntl_S1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf4x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x4_t test_vlseg4e8_v_i8mf2x4_ntl_S1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x4_t test_vlseg4e8_v_i8m1x4_ntl_S1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8m1x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2x4_t test_vlseg4e8_v_i8m2x4_ntl_S1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8m2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x4_t test_vlseg4e8_v_u8mf8x4_ntl_S1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf8x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x4_t test_vlseg4e8_v_u8mf4x4_ntl_S1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf4x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x4_t test_vlseg4e8_v_u8mf2x4_ntl_S1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x4_t test_vlseg4e8_v_u8m1x4_ntl_S1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8m1x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2x4_t test_vlseg4e8_v_u8m2x4_ntl_S1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8m2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x4_t test_vlseg4e8_v_i8mf8x4_m_ntl_S1(vbool64_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf8x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x4_t test_vlseg4e8_v_i8mf4x4_m_ntl_S1(vbool32_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf4x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x4_t test_vlseg4e8_v_i8mf2x4_m_ntl_S1(vbool16_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x4_t test_vlseg4e8_v_i8m1x4_m_ntl_S1(vbool8_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8m1x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2x4_t test_vlseg4e8_v_i8m2x4_m_ntl_S1(vbool4_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8m2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x4_t test_vlseg4e8_v_u8mf8x4_m_ntl_S1(vbool64_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf8x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x4_t test_vlseg4e8_v_u8mf4x4_m_ntl_S1(vbool32_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf4x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x4_t test_vlseg4e8_v_u8mf2x4_m_ntl_S1(vbool16_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x4_t test_vlseg4e8_v_u8m1x4_m_ntl_S1(vbool8_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8m1x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2x4_t test_vlseg4e8_v_u8m2x4_m_ntl_S1(vbool4_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8m2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

