#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e64_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m2_tu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m4_tu(vfloat64m4_t *v0, vfloat64m4_t *v1, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m2_tu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m4_tu(vint64m4_t *v0, vint64m4_t *v1, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m2_tu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m4_tu(vuint64m4_t *v0, vuint64m4_t *v1, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m1_tuma(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m2_tuma(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m4_tuma(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m1_tuma(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m2_tuma(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m4_tuma(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m1_tuma(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m2_tuma(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m4_tuma(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m2_tumu(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m4_tumu(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m2_tumu(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m4_tumu(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m2_tumu(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m4_tumu(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m1_tamu(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m2_tamu(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m4_tamu(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const float64_t *base, size_t vl) {
  return vlseg2e64_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m1_tamu(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m2_tamu(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m4_tamu(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m1_tamu(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m2_tamu(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m4_tamu(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

