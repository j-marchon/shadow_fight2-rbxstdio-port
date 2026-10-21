// FCJBEKHDLAF$$OCDAFIAEBJK @ RVA 0x33E6EF8

void FCJBEKHDLAF__OCDAFIAEBJK(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  MethodInfo *extraout_x1;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e6edc with catch @ 034e6ef8
                       catch(type#2 @ 00000000) { ... } // from try @ 034e6ef0 with catch @ 034e6ef8
                        */
  pPVar1 = (__this->fields).KCHOEJOHIMM;
  if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
    (*(pPVar1->klass->vtable)._8_KMKKECDCBEF.methodPtr)
              (pPVar1,(__this->fields).PGGDAAOIJCM,(pPVar1->klass->vtable)._8_KMKKECDCBEF.method);
    pPVar1 = (__this->fields).JEDELFOBLEN;
    method = extraout_x1;
    if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034e6f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034e6f30 to 035e6ff7 has its CatchHandler @ 034e6f30
                       catch() { ... } // from try @ 034e6f30 with catch @ 034e6f30
                       catch() { ... } // from try @ 034e7000 with catch @ 034e6f30
                       catch() { ... } // from try @ 034e7058 with catch @ 034e6f30
                       catch() { ... } // from try @ 034e7080 with catch @ 034e6f30
                       catch() { ... } // from try @ 034e70c0 with catch @ 034e6f30 */
      (*(pPVar1->klass->vtable)._8_KMKKECDCBEF.methodPtr)
                (pPVar1,(__this->fields).BIGOLGNHMEH,(pPVar1->klass->vtable)._8_KMKKECDCBEF.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

