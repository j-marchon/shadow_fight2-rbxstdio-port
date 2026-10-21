// ACHLOMELAJE$$NPICNGMCNKC @ RVA 0x305DBD8

void ACHLOMELAJE__NPICNGMCNKC(ACHLOMELAJE_o *__this,DNELIPCHKLK_o *CJNHFNHJHPE,MethodInfo *method)

{
  DNELIPCHKLK_o *pDVar1;
  System_String_o *CJNHFNHJHPE_00;
  
  if ((DAT_04565ea4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6346);
    DAT_04565ea4 = 1;
  }
  (__this->fields).IFIPEAHGJKB = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).IFIPEAHGJKB,CJNHFNHJHPE);
  pDVar1 = (__this->fields).IFIPEAHGJKB;
  if (pDVar1 != (DNELIPCHKLK_o *)0x0) {
    CJNHFNHJHPE_00 =
         (System_String_o *)
         (*(pDVar1->klass->vtable)._3_ToString.methodPtr)
                   (pDVar1,(pDVar1->klass->vtable)._3_ToString.method);
    KIHIPAJGNBF__MLDEHFFGJDP
              ((KIHIPAJGNBF_o *)__this,StringLiteral_6346,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

