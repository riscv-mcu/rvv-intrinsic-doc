// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint32mf2_t test_vsha2cl_vv_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vsha2cl(vd, vs2, vs1, vl);
}

vuint32m1_t test_vsha2cl_vv_u32m1(vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vsha2cl(vd, vs2, vs1, vl);
}

vuint32m2_t test_vsha2cl_vv_u32m2(vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vsha2cl(vd, vs2, vs1, vl);
}

vuint32m4_t test_vsha2cl_vv_u32m4(vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vsha2cl(vd, vs2, vs1, vl);
}

vuint32m8_t test_vsha2cl_vv_u32m8(vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl) {
  return __riscv_vsha2cl(vd, vs2, vs1, vl);
}

vuint64m1_t test_vsha2cl_vv_u64m1(vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vsha2cl(vd, vs2, vs1, vl);
}

vuint64m2_t test_vsha2cl_vv_u64m2(vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl) {
  return __riscv_vsha2cl(vd, vs2, vs1, vl);
}

vuint64m4_t test_vsha2cl_vv_u64m4(vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl) {
  return __riscv_vsha2cl(vd, vs2, vs1, vl);
}

vuint64m8_t test_vsha2cl_vv_u64m8(vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl) {
  return __riscv_vsha2cl(vd, vs2, vs1, vl);
}

