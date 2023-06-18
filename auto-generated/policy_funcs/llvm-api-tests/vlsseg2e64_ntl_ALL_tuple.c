// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2_tu_ntl_ALL(vfloat64m1x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m1x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2_tu_ntl_ALL(vfloat64m2x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m2x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2_tu_ntl_ALL(vfloat64m4x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m4x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2_tu_ntl_ALL(vint64m1x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m1x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2_tu_ntl_ALL(vint64m2x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m2x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2_tu_ntl_ALL(vint64m4x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m4x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2_tu_ntl_ALL(vuint64m1x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m1x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2_tu_ntl_ALL(vuint64m2x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m2x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2_tu_ntl_ALL(vuint64m4x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m4x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2_tum_ntl_ALL(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m1x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2_tum_ntl_ALL(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m2x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2_tum_ntl_ALL(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m4x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2_tum_ntl_ALL(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m1x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2_tum_ntl_ALL(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m2x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2_tum_ntl_ALL(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m4x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2_tum_ntl_ALL(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m1x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2_tum_ntl_ALL(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m2x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2_tum_ntl_ALL(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m4x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2_tumu_ntl_ALL(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m1x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2_tumu_ntl_ALL(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m2x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2_tumu_ntl_ALL(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m4x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2_tumu_ntl_ALL(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m1x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2_tumu_ntl_ALL(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m2x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2_tumu_ntl_ALL(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m4x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2_tumu_ntl_ALL(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m1x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2_tumu_ntl_ALL(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m2x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2_tumu_ntl_ALL(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m4x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2_mu_ntl_ALL(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m1x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2_mu_ntl_ALL(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m2x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2_mu_ntl_ALL(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m4x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2_mu_ntl_ALL(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m1x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2_mu_ntl_ALL(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m2x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2_mu_ntl_ALL(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m4x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2_mu_ntl_ALL(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m1x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2_mu_ntl_ALL(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m2x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2_mu_ntl_ALL(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m4x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

