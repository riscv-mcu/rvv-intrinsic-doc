#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3_tu_ntl_PALL(vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16mf4x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3_tu_ntl_PALL(vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16mf2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3_tu_ntl_PALL(vfloat16m1x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16m1x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3_tu_ntl_PALL(vfloat16m2x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16m2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3_tu_ntl_PALL(vint16mf4x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16mf4x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3_tu_ntl_PALL(vint16mf2x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16mf2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3_tu_ntl_PALL(vint16m1x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16m1x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3_tu_ntl_PALL(vint16m2x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16m2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3_tu_ntl_PALL(vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16mf4x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3_tu_ntl_PALL(vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16mf2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3_tu_ntl_PALL(vuint16m1x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16m1x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3_tu_ntl_PALL(vuint16m2x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16m2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3_tum_ntl_PALL(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16mf4x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3_tum_ntl_PALL(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16mf2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3_tum_ntl_PALL(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16m1x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3_tum_ntl_PALL(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16m2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3_tum_ntl_PALL(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16mf4x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3_tum_ntl_PALL(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16mf2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3_tum_ntl_PALL(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16m1x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3_tum_ntl_PALL(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16m2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3_tum_ntl_PALL(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16mf4x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3_tum_ntl_PALL(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16mf2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3_tum_ntl_PALL(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16m1x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3_tum_ntl_PALL(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16m2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3_tumu_ntl_PALL(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16mf4x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3_tumu_ntl_PALL(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16mf2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3_tumu_ntl_PALL(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16m1x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3_tumu_ntl_PALL(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16m2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3_tumu_ntl_PALL(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16mf4x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3_tumu_ntl_PALL(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16mf2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3_tumu_ntl_PALL(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16m1x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3_tumu_ntl_PALL(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16m2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3_tumu_ntl_PALL(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16mf4x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3_tumu_ntl_PALL(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16mf2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3_tumu_ntl_PALL(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16m1x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3_tumu_ntl_PALL(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16m2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3_mu_ntl_PALL(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16mf4x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3_mu_ntl_PALL(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16mf2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3_mu_ntl_PALL(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16m1x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3_mu_ntl_PALL(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_f16m2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3_mu_ntl_PALL(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16mf4x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3_mu_ntl_PALL(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16mf2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3_mu_ntl_PALL(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16m1x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3_mu_ntl_PALL(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_i16m2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3_mu_ntl_PALL(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16mf4x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3_mu_ntl_PALL(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16mf2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3_mu_ntl_PALL(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16m1x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3_mu_ntl_PALL(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e16ff_v_u16m2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

