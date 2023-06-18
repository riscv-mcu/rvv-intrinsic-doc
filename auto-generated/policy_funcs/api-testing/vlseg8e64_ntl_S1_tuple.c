#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_tu_ntl_S1(vfloat64m1x8_t maskedoff_tuple, const float64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_f64m1x8_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_tu_ntl_S1(vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_i64m1x8_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_tu_ntl_S1(vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_u64m1x8_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_tum_ntl_S1(vbool64_t mask, vfloat64m1x8_t maskedoff_tuple, const float64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_f64m1x8_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_tum_ntl_S1(vbool64_t mask, vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_i64m1x8_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_tum_ntl_S1(vbool64_t mask, vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_u64m1x8_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_tumu_ntl_S1(vbool64_t mask, vfloat64m1x8_t maskedoff_tuple, const float64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_f64m1x8_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_tumu_ntl_S1(vbool64_t mask, vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_i64m1x8_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_tumu_ntl_S1(vbool64_t mask, vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_u64m1x8_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_mu_ntl_S1(vbool64_t mask, vfloat64m1x8_t maskedoff_tuple, const float64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_f64m1x8_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_mu_ntl_S1(vbool64_t mask, vint64m1x8_t maskedoff_tuple, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_i64m1x8_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_mu_ntl_S1(vbool64_t mask, vuint64m1x8_t maskedoff_tuple, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e64_v_u64m1x8_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

