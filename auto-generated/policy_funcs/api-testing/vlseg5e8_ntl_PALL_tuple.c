#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x5_t test_vlseg5e8_v_i8mf8x5_tu_ntl_PALL(vint8mf8x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf8x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x5_t test_vlseg5e8_v_i8mf4x5_tu_ntl_PALL(vint8mf4x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x5_t test_vlseg5e8_v_i8mf2x5_tu_ntl_PALL(vint8mf2x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x5_t test_vlseg5e8_v_i8m1x5_tu_ntl_PALL(vint8m1x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x5_t test_vlseg5e8_v_u8mf8x5_tu_ntl_PALL(vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf8x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x5_t test_vlseg5e8_v_u8mf4x5_tu_ntl_PALL(vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x5_t test_vlseg5e8_v_u8mf2x5_tu_ntl_PALL(vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x5_t test_vlseg5e8_v_u8m1x5_tu_ntl_PALL(vuint8m1x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x5_t test_vlseg5e8_v_i8mf8x5_tum_ntl_PALL(vbool64_t mask, vint8mf8x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf8x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x5_t test_vlseg5e8_v_i8mf4x5_tum_ntl_PALL(vbool32_t mask, vint8mf4x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x5_t test_vlseg5e8_v_i8mf2x5_tum_ntl_PALL(vbool16_t mask, vint8mf2x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x5_t test_vlseg5e8_v_i8m1x5_tum_ntl_PALL(vbool8_t mask, vint8m1x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x5_t test_vlseg5e8_v_u8mf8x5_tum_ntl_PALL(vbool64_t mask, vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf8x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x5_t test_vlseg5e8_v_u8mf4x5_tum_ntl_PALL(vbool32_t mask, vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x5_t test_vlseg5e8_v_u8mf2x5_tum_ntl_PALL(vbool16_t mask, vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x5_t test_vlseg5e8_v_u8m1x5_tum_ntl_PALL(vbool8_t mask, vuint8m1x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x5_t test_vlseg5e8_v_i8mf8x5_tumu_ntl_PALL(vbool64_t mask, vint8mf8x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf8x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x5_t test_vlseg5e8_v_i8mf4x5_tumu_ntl_PALL(vbool32_t mask, vint8mf4x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x5_t test_vlseg5e8_v_i8mf2x5_tumu_ntl_PALL(vbool16_t mask, vint8mf2x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x5_t test_vlseg5e8_v_i8m1x5_tumu_ntl_PALL(vbool8_t mask, vint8m1x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x5_t test_vlseg5e8_v_u8mf8x5_tumu_ntl_PALL(vbool64_t mask, vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf8x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x5_t test_vlseg5e8_v_u8mf4x5_tumu_ntl_PALL(vbool32_t mask, vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x5_t test_vlseg5e8_v_u8mf2x5_tumu_ntl_PALL(vbool16_t mask, vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x5_t test_vlseg5e8_v_u8m1x5_tumu_ntl_PALL(vbool8_t mask, vuint8m1x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x5_t test_vlseg5e8_v_i8mf8x5_mu_ntl_PALL(vbool64_t mask, vint8mf8x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf8x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x5_t test_vlseg5e8_v_i8mf4x5_mu_ntl_PALL(vbool32_t mask, vint8mf4x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x5_t test_vlseg5e8_v_i8mf2x5_mu_ntl_PALL(vbool16_t mask, vint8mf2x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x5_t test_vlseg5e8_v_i8m1x5_mu_ntl_PALL(vbool8_t mask, vint8m1x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x5_t test_vlseg5e8_v_u8mf8x5_mu_ntl_PALL(vbool64_t mask, vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf8x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x5_t test_vlseg5e8_v_u8mf4x5_mu_ntl_PALL(vbool32_t mask, vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x5_t test_vlseg5e8_v_u8mf2x5_mu_ntl_PALL(vbool16_t mask, vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x5_t test_vlseg5e8_v_u8m1x5_mu_ntl_PALL(vbool8_t mask, vuint8m1x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

