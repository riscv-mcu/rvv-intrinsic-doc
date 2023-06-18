#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vssseg4e8_v_i8mf8x4_ntl_ALL(int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8mf8x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_i8mf4x4_ntl_ALL(int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8mf4x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_i8mf2x4_ntl_ALL(int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8mf2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_i8m1x4_ntl_ALL(int8_t *base, ptrdiff_t bstride, vint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8m1x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_i8m2x4_ntl_ALL(int8_t *base, ptrdiff_t bstride, vint8m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8m2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8mf8x4_ntl_ALL(uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8mf8x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8mf4x4_ntl_ALL(uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8mf4x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8mf2x4_ntl_ALL(uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8mf2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8m1x4_ntl_ALL(uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8m1x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8m2x4_ntl_ALL(uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8m2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_i8mf8x4_m_ntl_ALL(vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8mf8x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_i8mf4x4_m_ntl_ALL(vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8mf4x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_i8mf2x4_m_ntl_ALL(vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8mf2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_i8m1x4_m_ntl_ALL(vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8m1x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_i8m2x4_m_ntl_ALL(vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_i8m2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8mf8x4_m_ntl_ALL(vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8mf8x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8mf4x4_m_ntl_ALL(vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8mf4x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8mf2x4_m_ntl_ALL(vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8mf2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8m1x4_m_ntl_ALL(vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8m1x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e8_v_u8m2x4_m_ntl_ALL(vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e8_v_u8m2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

