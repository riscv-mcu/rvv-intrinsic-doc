#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsseg3e64_v_f64m1x3_ntl_PALL(float64_t *base, vfloat64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_f64m2x3_ntl_PALL(float64_t *base, vfloat64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_i64m1x3_ntl_PALL(int64_t *base, vint64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_i64m2x3_ntl_PALL(int64_t *base, vint64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_u64m1x3_ntl_PALL(uint64_t *base, vuint64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_u64m2x3_ntl_PALL(uint64_t *base, vuint64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_f64m1x3_m_ntl_PALL(vbool64_t mask, float64_t *base, vfloat64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_f64m2x3_m_ntl_PALL(vbool32_t mask, float64_t *base, vfloat64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_i64m1x3_m_ntl_PALL(vbool64_t mask, int64_t *base, vint64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_i64m2x3_m_ntl_PALL(vbool32_t mask, int64_t *base, vint64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_u64m1x3_m_ntl_PALL(vbool64_t mask, uint64_t *base, vuint64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg3e64_v_u64m2x3_m_ntl_PALL(vbool32_t mask, uint64_t *base, vuint64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

