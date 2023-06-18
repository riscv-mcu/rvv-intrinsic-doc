#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vse64_v_f64m1_ntl_P1(float64_t *base, vfloat64m1_t value, size_t vl, int domain) {
  return __riscv_vse64_v_f64m1_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_f64m2_ntl_P1(float64_t *base, vfloat64m2_t value, size_t vl, int domain) {
  return __riscv_vse64_v_f64m2_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_f64m4_ntl_P1(float64_t *base, vfloat64m4_t value, size_t vl, int domain) {
  return __riscv_vse64_v_f64m4_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_f64m8_ntl_P1(float64_t *base, vfloat64m8_t value, size_t vl, int domain) {
  return __riscv_vse64_v_f64m8_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_i64m1_ntl_P1(int64_t *base, vint64m1_t value, size_t vl, int domain) {
  return __riscv_vse64_v_i64m1_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_i64m2_ntl_P1(int64_t *base, vint64m2_t value, size_t vl, int domain) {
  return __riscv_vse64_v_i64m2_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_i64m4_ntl_P1(int64_t *base, vint64m4_t value, size_t vl, int domain) {
  return __riscv_vse64_v_i64m4_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_i64m8_ntl_P1(int64_t *base, vint64m8_t value, size_t vl, int domain) {
  return __riscv_vse64_v_i64m8_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_u64m1_ntl_P1(uint64_t *base, vuint64m1_t value, size_t vl, int domain) {
  return __riscv_vse64_v_u64m1_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_u64m2_ntl_P1(uint64_t *base, vuint64m2_t value, size_t vl, int domain) {
  return __riscv_vse64_v_u64m2_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_u64m4_ntl_P1(uint64_t *base, vuint64m4_t value, size_t vl, int domain) {
  return __riscv_vse64_v_u64m4_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_u64m8_ntl_P1(uint64_t *base, vuint64m8_t value, size_t vl, int domain) {
  return __riscv_vse64_v_u64m8_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_f64m1_m_ntl_P1(vbool64_t mask, float64_t *base, vfloat64m1_t value, size_t vl, int domain) {
  return __riscv_vse64_v_f64m1_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_f64m2_m_ntl_P1(vbool32_t mask, float64_t *base, vfloat64m2_t value, size_t vl, int domain) {
  return __riscv_vse64_v_f64m2_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_f64m4_m_ntl_P1(vbool16_t mask, float64_t *base, vfloat64m4_t value, size_t vl, int domain) {
  return __riscv_vse64_v_f64m4_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_f64m8_m_ntl_P1(vbool8_t mask, float64_t *base, vfloat64m8_t value, size_t vl, int domain) {
  return __riscv_vse64_v_f64m8_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_i64m1_m_ntl_P1(vbool64_t mask, int64_t *base, vint64m1_t value, size_t vl, int domain) {
  return __riscv_vse64_v_i64m1_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_i64m2_m_ntl_P1(vbool32_t mask, int64_t *base, vint64m2_t value, size_t vl, int domain) {
  return __riscv_vse64_v_i64m2_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_i64m4_m_ntl_P1(vbool16_t mask, int64_t *base, vint64m4_t value, size_t vl, int domain) {
  return __riscv_vse64_v_i64m4_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_i64m8_m_ntl_P1(vbool8_t mask, int64_t *base, vint64m8_t value, size_t vl, int domain) {
  return __riscv_vse64_v_i64m8_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_u64m1_m_ntl_P1(vbool64_t mask, uint64_t *base, vuint64m1_t value, size_t vl, int domain) {
  return __riscv_vse64_v_u64m1_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_u64m2_m_ntl_P1(vbool32_t mask, uint64_t *base, vuint64m2_t value, size_t vl, int domain) {
  return __riscv_vse64_v_u64m2_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_u64m4_m_ntl_P1(vbool16_t mask, uint64_t *base, vuint64m4_t value, size_t vl, int domain) {
  return __riscv_vse64_v_u64m4_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vse64_v_u64m8_m_ntl_P1(vbool8_t mask, uint64_t *base, vuint64m8_t value, size_t vl, int domain) {
  return __riscv_vse64_v_u64m8_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

