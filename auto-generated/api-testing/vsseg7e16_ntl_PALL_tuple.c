#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsseg7e16_v_f16mf4x7_ntl_PALL(float16_t *base, vfloat16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_f16mf4x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_f16mf2x7_ntl_PALL(float16_t *base, vfloat16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_f16mf2x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_f16m1x7_ntl_PALL(float16_t *base, vfloat16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_f16m1x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_i16mf4x7_ntl_PALL(int16_t *base, vint16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_i16mf4x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_i16mf2x7_ntl_PALL(int16_t *base, vint16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_i16mf2x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_i16m1x7_ntl_PALL(int16_t *base, vint16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_i16m1x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_u16mf4x7_ntl_PALL(uint16_t *base, vuint16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_u16mf4x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_u16mf2x7_ntl_PALL(uint16_t *base, vuint16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_u16mf2x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_u16m1x7_ntl_PALL(uint16_t *base, vuint16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_u16m1x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_f16mf4x7_m_ntl_PALL(vbool64_t mask, float16_t *base, vfloat16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_f16mf4x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_f16mf2x7_m_ntl_PALL(vbool32_t mask, float16_t *base, vfloat16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_f16mf2x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_f16m1x7_m_ntl_PALL(vbool16_t mask, float16_t *base, vfloat16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_f16m1x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_i16mf4x7_m_ntl_PALL(vbool64_t mask, int16_t *base, vint16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_i16mf4x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_i16mf2x7_m_ntl_PALL(vbool32_t mask, int16_t *base, vint16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_i16mf2x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_i16m1x7_m_ntl_PALL(vbool16_t mask, int16_t *base, vint16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_i16m1x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_u16mf4x7_m_ntl_PALL(vbool64_t mask, uint16_t *base, vuint16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_u16mf4x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_u16mf2x7_m_ntl_PALL(vbool32_t mask, uint16_t *base, vuint16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_u16mf2x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e16_v_u16m1x7_m_ntl_PALL(vbool16_t mask, uint16_t *base, vuint16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e16_v_u16m1x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

