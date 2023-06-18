// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_ntl_P1(const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32mf2x7_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_ntl_P1(const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32m1x7_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_ntl_P1(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32mf2x7_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_ntl_P1(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32m1x7_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_ntl_P1(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32mf2x7_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_ntl_P1(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32m1x7_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_m_ntl_P1(vbool64_t mask, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32mf2x7_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_m_ntl_P1(vbool32_t mask, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32m1x7_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_m_ntl_P1(vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32mf2x7_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_m_ntl_P1(vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32m1x7_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_m_ntl_P1(vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32mf2x7_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_m_ntl_P1(vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32m1x7_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

