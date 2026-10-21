// HEFOANCOHDC$$NFBKOCDCCMJ @ RVA 0x341AA6C

void HEFOANCOHDC__NFBKOCDCCMJ
               (HEFOANCOHDC_o *__this,bool ONHICMGHLIH,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *CJNHFNHJHPE;
  MMFIDKMDADC_Fields *pMVar3;
  
  if ((DAT_045680c7 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1154);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_045680c7 = 1;
  }
  if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) {
    return;
  }
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    pMVar3 = &HPACPFLKHPK->fields;
    System_Text_StringBuilder__Append(__this_00,pMVar3->HPACPFLKHPK,(MethodInfo *)0x0);
    if (!ONHICMGHLIH) {
      System_Text_StringBuilder__Append(__this_00,StringLiteral_1154,(MethodInfo *)0x0);
      if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0351ab88;
      System_Text_StringBuilder__Append
                (__this_00,(ACCIJLGMHOO->fields).IHJHOFMNAOA,(MethodInfo *)0x0);
    }
    CJNHFNHJHPE = (System_String_o *)
                  (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    bVar2 = NILLKLHKLHG__IIPMBCPINCC(CJNHFNHJHPE,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_1606;
    if (!bVar2) {
      puVar1 = &StringLiteral_1567;
    }
    pMVar3->HPACPFLKHPK = (System_String_o *)*puVar1;
    thunk_FUN_01c20e04(pMVar3);
    return;
  }
LAB_0351ab88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

