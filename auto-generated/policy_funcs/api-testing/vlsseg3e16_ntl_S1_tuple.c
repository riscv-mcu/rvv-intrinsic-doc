#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x3_t test_vlsseg3e16_v_f16mf4x3_tu_ntl_S1(vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf4x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x3_t test_vlsseg3e16_v_f16mf2x3_tu_ntl_S1(vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x3_t test_vlsseg3e16_v_f16m1x3_tu_ntl_S1(vfloat16m1x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m1x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2x3_t test_vlsseg3e16_v_f16m2x3_tu_ntl_S1(vfloat16m2x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x3_t test_vlsseg3e16_v_i16mf4x3_tu_ntl_S1(vint16mf4x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf4x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x3_t test_vlsseg3e16_v_i16mf2x3_tu_ntl_S1(vint16mf2x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x3_t test_vlsseg3e16_v_i16m1x3_tu_ntl_S1(vint16m1x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m1x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2x3_t test_vlsseg3e16_v_i16m2x3_tu_ntl_S1(vint16m2x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x3_t test_vlsseg3e16_v_u16mf4x3_tu_ntl_S1(vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf4x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x3_t test_vlsseg3e16_v_u16mf2x3_tu_ntl_S1(vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x3_t test_vlsseg3e16_v_u16m1x3_tu_ntl_S1(vuint16m1x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m1x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2x3_t test_vlsseg3e16_v_u16m2x3_tu_ntl_S1(vuint16m2x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4x3_t test_vlsseg3e16_v_f16mf4x3_tum_ntl_S1(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf4x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x3_t test_vlsseg3e16_v_f16mf2x3_tum_ntl_S1(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x3_t test_vlsseg3e16_v_f16m1x3_tum_ntl_S1(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m1x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2x3_t test_vlsseg3e16_v_f16m2x3_tum_ntl_S1(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x3_t test_vlsseg3e16_v_i16mf4x3_tum_ntl_S1(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf4x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x3_t test_vlsseg3e16_v_i16mf2x3_tum_ntl_S1(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x3_t test_vlsseg3e16_v_i16m1x3_tum_ntl_S1(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m1x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2x3_t test_vlsseg3e16_v_i16m2x3_tum_ntl_S1(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x3_t test_vlsseg3e16_v_u16mf4x3_tum_ntl_S1(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf4x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x3_t test_vlsseg3e16_v_u16mf2x3_tum_ntl_S1(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x3_t test_vlsseg3e16_v_u16m1x3_tum_ntl_S1(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m1x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2x3_t test_vlsseg3e16_v_u16m2x3_tum_ntl_S1(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4x3_t test_vlsseg3e16_v_f16mf4x3_tumu_ntl_S1(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf4x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x3_t test_vlsseg3e16_v_f16mf2x3_tumu_ntl_S1(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x3_t test_vlsseg3e16_v_f16m1x3_tumu_ntl_S1(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m1x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2x3_t test_vlsseg3e16_v_f16m2x3_tumu_ntl_S1(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x3_t test_vlsseg3e16_v_i16mf4x3_tumu_ntl_S1(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf4x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x3_t test_vlsseg3e16_v_i16mf2x3_tumu_ntl_S1(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x3_t test_vlsseg3e16_v_i16m1x3_tumu_ntl_S1(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m1x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2x3_t test_vlsseg3e16_v_i16m2x3_tumu_ntl_S1(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x3_t test_vlsseg3e16_v_u16mf4x3_tumu_ntl_S1(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf4x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x3_t test_vlsseg3e16_v_u16mf2x3_tumu_ntl_S1(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x3_t test_vlsseg3e16_v_u16m1x3_tumu_ntl_S1(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m1x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2x3_t test_vlsseg3e16_v_u16m2x3_tumu_ntl_S1(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4x3_t test_vlsseg3e16_v_f16mf4x3_mu_ntl_S1(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf4x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x3_t test_vlsseg3e16_v_f16mf2x3_mu_ntl_S1(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x3_t test_vlsseg3e16_v_f16m1x3_mu_ntl_S1(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m1x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2x3_t test_vlsseg3e16_v_f16m2x3_mu_ntl_S1(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x3_t test_vlsseg3e16_v_i16mf4x3_mu_ntl_S1(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf4x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x3_t test_vlsseg3e16_v_i16mf2x3_mu_ntl_S1(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x3_t test_vlsseg3e16_v_i16m1x3_mu_ntl_S1(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m1x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2x3_t test_vlsseg3e16_v_i16m2x3_mu_ntl_S1(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x3_t test_vlsseg3e16_v_u16mf4x3_mu_ntl_S1(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf4x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x3_t test_vlsseg3e16_v_u16mf2x3_mu_ntl_S1(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x3_t test_vlsseg3e16_v_u16m1x3_mu_ntl_S1(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m1x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2x3_t test_vlsseg3e16_v_u16m2x3_mu_ntl_S1(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

