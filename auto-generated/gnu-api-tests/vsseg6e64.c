/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg6e64_v_f64m1(float64_t *base, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl) {
  return __riscv_vsseg6e64_v_f64m1(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e64_v_i64m1(int64_t *base, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl) {
  return __riscv_vsseg6e64_v_i64m1(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e64_v_u64m1(uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl) {
  return __riscv_vsseg6e64_v_u64m1(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e64_v_f64m1_m(vbool64_t mask, float64_t *base, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl) {
  return __riscv_vsseg6e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e64_v_i64m1_m(vbool64_t mask, int64_t *base, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl) {
  return __riscv_vsseg6e64_v_i64m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e64_v_u64m1_m(vbool64_t mask, uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl) {
  return __riscv_vsseg6e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vsseg6e64\.[,\sa-x0-9()]+} 6 } } */
