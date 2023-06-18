#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vssseg5e64_v_f64m1x5_ntl_PALL(float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg5e64_v_f64m1x5_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg5e64_v_i64m1x5_ntl_PALL(int64_t *base, ptrdiff_t bstride, vint64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg5e64_v_i64m1x5_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg5e64_v_u64m1x5_ntl_PALL(uint64_t *base, ptrdiff_t bstride, vuint64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg5e64_v_u64m1x5_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg5e64_v_f64m1x5_m_ntl_PALL(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg5e64_v_f64m1x5_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg5e64_v_i64m1x5_m_ntl_PALL(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg5e64_v_i64m1x5_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg5e64_v_u64m1x5_m_ntl_PALL(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg5e64_v_u64m1x5_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

