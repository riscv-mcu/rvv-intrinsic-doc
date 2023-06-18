#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2_t test_vle32_v_f32mf2_tu_ntl_ALL(vfloat32mf2_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32mf2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vle32_v_f32m1_tu_ntl_ALL(vfloat32m1_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m1_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vle32_v_f32m2_tu_ntl_ALL(vfloat32m2_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vle32_v_f32m4_tu_ntl_ALL(vfloat32m4_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vle32_v_f32m8_tu_ntl_ALL(vfloat32m8_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m8_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vle32_v_i32mf2_tu_ntl_ALL(vint32mf2_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32mf2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vle32_v_i32m1_tu_ntl_ALL(vint32m1_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m1_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vle32_v_i32m2_tu_ntl_ALL(vint32m2_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vle32_v_i32m4_tu_ntl_ALL(vint32m4_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vle32_v_i32m8_tu_ntl_ALL(vint32m8_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m8_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vle32_v_u32mf2_tu_ntl_ALL(vuint32mf2_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32mf2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vle32_v_u32m1_tu_ntl_ALL(vuint32m1_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m1_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vle32_v_u32m2_tu_ntl_ALL(vuint32m2_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vle32_v_u32m4_tu_ntl_ALL(vuint32m4_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vle32_v_u32m8_tu_ntl_ALL(vuint32m8_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m8_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2_t test_vle32_v_f32mf2_tum_ntl_ALL(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32mf2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vle32_v_f32m1_tum_ntl_ALL(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m1_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vle32_v_f32m2_tum_ntl_ALL(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vle32_v_f32m4_tum_ntl_ALL(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vle32_v_f32m8_tum_ntl_ALL(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m8_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vle32_v_i32mf2_tum_ntl_ALL(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32mf2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vle32_v_i32m1_tum_ntl_ALL(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m1_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vle32_v_i32m2_tum_ntl_ALL(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vle32_v_i32m4_tum_ntl_ALL(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vle32_v_i32m8_tum_ntl_ALL(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m8_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vle32_v_u32mf2_tum_ntl_ALL(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32mf2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vle32_v_u32m1_tum_ntl_ALL(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m1_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vle32_v_u32m2_tum_ntl_ALL(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vle32_v_u32m4_tum_ntl_ALL(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vle32_v_u32m8_tum_ntl_ALL(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m8_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2_t test_vle32_v_f32mf2_tumu_ntl_ALL(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32mf2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vle32_v_f32m1_tumu_ntl_ALL(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m1_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vle32_v_f32m2_tumu_ntl_ALL(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vle32_v_f32m4_tumu_ntl_ALL(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vle32_v_f32m8_tumu_ntl_ALL(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m8_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vle32_v_i32mf2_tumu_ntl_ALL(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32mf2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vle32_v_i32m1_tumu_ntl_ALL(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m1_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vle32_v_i32m2_tumu_ntl_ALL(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vle32_v_i32m4_tumu_ntl_ALL(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vle32_v_i32m8_tumu_ntl_ALL(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m8_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vle32_v_u32mf2_tumu_ntl_ALL(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32mf2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vle32_v_u32m1_tumu_ntl_ALL(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m1_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vle32_v_u32m2_tumu_ntl_ALL(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vle32_v_u32m4_tumu_ntl_ALL(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vle32_v_u32m8_tumu_ntl_ALL(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m8_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2_t test_vle32_v_f32mf2_mu_ntl_ALL(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32mf2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vle32_v_f32m1_mu_ntl_ALL(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m1_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vle32_v_f32m2_mu_ntl_ALL(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vle32_v_f32m4_mu_ntl_ALL(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vle32_v_f32m8_mu_ntl_ALL(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m8_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vle32_v_i32mf2_mu_ntl_ALL(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32mf2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vle32_v_i32m1_mu_ntl_ALL(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m1_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vle32_v_i32m2_mu_ntl_ALL(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vle32_v_i32m4_mu_ntl_ALL(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vle32_v_i32m8_mu_ntl_ALL(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m8_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vle32_v_u32mf2_mu_ntl_ALL(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32mf2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vle32_v_u32m1_mu_ntl_ALL(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m1_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vle32_v_u32m2_mu_ntl_ALL(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vle32_v_u32m4_mu_ntl_ALL(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vle32_v_u32m8_mu_ntl_ALL(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m8_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

