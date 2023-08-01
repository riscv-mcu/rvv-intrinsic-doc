
## Zvkned - NIST Suite: Vector AES Block Cipher:

### [Vector AES Encryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesef (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesef (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES Decryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesdf (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdf (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES-128 Forward KeySchedule generation]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaeskf1 (vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf1 (vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf1 (vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf1 (vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf1 (vuint32m8_t vs2, size_t uimm, size_t vl);
vuint32mf2_t __riscv_vaeskf2 (vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf2 (vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf2 (vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf2 (vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf2 (vuint32m8_t vs2, size_t uimm, size_t vl);
```

### [Vector AES round zero]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesz (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesz (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m1_t __riscv_vaesz (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```