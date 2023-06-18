#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x6_t test_vlsseg6e64_v_f64m1x6_ntl_P1(const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e64_v_f64m1x6_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m1x6_t test_vlsseg6e64_v_i64m1x6_ntl_P1(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e64_v_i64m1x6_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m1x6_t test_vlsseg6e64_v_u64m1x6_ntl_P1(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e64_v_u64m1x6_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m1x6_t test_vlsseg6e64_v_f64m1x6_m_ntl_P1(vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e64_v_f64m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m1x6_t test_vlsseg6e64_v_i64m1x6_m_ntl_P1(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e64_v_i64m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m1x6_t test_vlsseg6e64_v_u64m1x6_m_ntl_P1(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e64_v_u64m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

