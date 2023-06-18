#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_ntl_S1(const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m1x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_ntl_S1(const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m2x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_ntl_S1(const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m4x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_ntl_S1(const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m1x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_ntl_S1(const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m2x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_ntl_S1(const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m4x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_ntl_S1(const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m1x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_ntl_S1(const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m2x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_ntl_S1(const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m4x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_m_ntl_S1(vbool64_t mask, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m1x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_m_ntl_S1(vbool32_t mask, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m2x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_m_ntl_S1(vbool16_t mask, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m4x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_m_ntl_S1(vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m1x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_m_ntl_S1(vbool32_t mask, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m2x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_m_ntl_S1(vbool16_t mask, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m4x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_m_ntl_S1(vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m1x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_m_ntl_S1(vbool32_t mask, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m2x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_m_ntl_S1(vbool16_t mask, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m4x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

