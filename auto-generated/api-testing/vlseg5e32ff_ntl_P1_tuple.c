#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_ntl_P1(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32mf2x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_ntl_P1(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32m1x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_ntl_P1(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32mf2x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_ntl_P1(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32m1x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_ntl_P1(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32mf2x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_ntl_P1(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32m1x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_m_ntl_P1(vbool64_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32mf2x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_m_ntl_P1(vbool32_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32m1x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_m_ntl_P1(vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32mf2x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_m_ntl_P1(vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32m1x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_m_ntl_P1(vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32mf2x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_m_ntl_P1(vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32m1x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

