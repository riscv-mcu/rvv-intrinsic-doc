#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x3_t test_vlseg3e8_v_i8mf8x3_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8mf8x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x3_t test_vlseg3e8_v_i8mf4x3_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8mf4x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x3_t test_vlseg3e8_v_i8mf2x3_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8mf2x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x3_t test_vlseg3e8_v_i8m1x3_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8m1x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2x3_t test_vlseg3e8_v_i8m2x3_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8m2x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x3_t test_vlseg3e8_v_u8mf8x3_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8mf8x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x3_t test_vlseg3e8_v_u8mf4x3_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8mf4x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x3_t test_vlseg3e8_v_u8mf2x3_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8mf2x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x3_t test_vlseg3e8_v_u8m1x3_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8m1x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2x3_t test_vlseg3e8_v_u8m2x3_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8m2x3_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x3_t test_vlseg3e8_v_i8mf8x3_m_ntl_P1(vbool64_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8mf8x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x3_t test_vlseg3e8_v_i8mf4x3_m_ntl_P1(vbool32_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8mf4x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x3_t test_vlseg3e8_v_i8mf2x3_m_ntl_P1(vbool16_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8mf2x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x3_t test_vlseg3e8_v_i8m1x3_m_ntl_P1(vbool8_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8m1x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2x3_t test_vlseg3e8_v_i8m2x3_m_ntl_P1(vbool4_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_i8m2x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x3_t test_vlseg3e8_v_u8mf8x3_m_ntl_P1(vbool64_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8mf8x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x3_t test_vlseg3e8_v_u8mf4x3_m_ntl_P1(vbool32_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8mf4x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x3_t test_vlseg3e8_v_u8mf2x3_m_ntl_P1(vbool16_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8mf2x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x3_t test_vlseg3e8_v_u8m1x3_m_ntl_P1(vbool8_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8m1x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2x3_t test_vlseg3e8_v_u8m2x3_m_ntl_P1(vbool4_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg3e8_v_u8m2x3_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

