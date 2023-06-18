#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_tu_ntl_PALL(vfloat64m1x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m1x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_tu_ntl_PALL(vfloat64m2x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m2x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_tu_ntl_PALL(vfloat64m4x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m4x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_tu_ntl_PALL(vint64m1x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m1x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_tu_ntl_PALL(vint64m2x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m2x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_tu_ntl_PALL(vint64m4x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m4x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_tu_ntl_PALL(vuint64m1x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m1x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_tu_ntl_PALL(vuint64m2x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m2x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_tu_ntl_PALL(vuint64m4x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m4x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_tum_ntl_PALL(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m1x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_tum_ntl_PALL(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m2x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_tum_ntl_PALL(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m4x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_tum_ntl_PALL(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m1x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_tum_ntl_PALL(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m2x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_tum_ntl_PALL(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m4x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_tum_ntl_PALL(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m1x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_tum_ntl_PALL(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m2x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_tum_ntl_PALL(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m4x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_tumu_ntl_PALL(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m1x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_tumu_ntl_PALL(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m2x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_tumu_ntl_PALL(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m4x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_tumu_ntl_PALL(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m1x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_tumu_ntl_PALL(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m2x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_tumu_ntl_PALL(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m4x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_tumu_ntl_PALL(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m1x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_tumu_ntl_PALL(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m2x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_tumu_ntl_PALL(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m4x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_mu_ntl_PALL(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m1x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_mu_ntl_PALL(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m2x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_mu_ntl_PALL(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_f64m4x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_mu_ntl_PALL(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m1x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_mu_ntl_PALL(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m2x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_mu_ntl_PALL(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_i64m4x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_mu_ntl_PALL(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m1x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_mu_ntl_PALL(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m2x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_mu_ntl_PALL(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e64ff_v_u64m4x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

