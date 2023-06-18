#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_tu_ntl_PALL(vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32mf2x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_tu_ntl_PALL(vfloat32m1x5_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32m1x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_tu_ntl_PALL(vint32mf2x5_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32mf2x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_tu_ntl_PALL(vint32m1x5_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32m1x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_tu_ntl_PALL(vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32mf2x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_tu_ntl_PALL(vuint32m1x5_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32m1x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_tum_ntl_PALL(vbool64_t mask, vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32mf2x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_tum_ntl_PALL(vbool32_t mask, vfloat32m1x5_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32m1x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_tum_ntl_PALL(vbool64_t mask, vint32mf2x5_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32mf2x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_tum_ntl_PALL(vbool32_t mask, vint32m1x5_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32m1x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_tum_ntl_PALL(vbool64_t mask, vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32mf2x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_tum_ntl_PALL(vbool32_t mask, vuint32m1x5_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32m1x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_tumu_ntl_PALL(vbool64_t mask, vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32mf2x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_tumu_ntl_PALL(vbool32_t mask, vfloat32m1x5_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32m1x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_tumu_ntl_PALL(vbool64_t mask, vint32mf2x5_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32mf2x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_tumu_ntl_PALL(vbool32_t mask, vint32m1x5_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32m1x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_tumu_ntl_PALL(vbool64_t mask, vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32mf2x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_tumu_ntl_PALL(vbool32_t mask, vuint32m1x5_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32m1x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_mu_ntl_PALL(vbool64_t mask, vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32mf2x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_mu_ntl_PALL(vbool32_t mask, vfloat32m1x5_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32m1x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_mu_ntl_PALL(vbool64_t mask, vint32mf2x5_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32mf2x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_mu_ntl_PALL(vbool32_t mask, vint32m1x5_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32m1x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_mu_ntl_PALL(vbool64_t mask, vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32mf2x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_mu_ntl_PALL(vbool32_t mask, vuint32m1x5_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32m1x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

