// HACFBKCHBEJ$$ENMHDGDKLJD @ RVA 0x3077C84

void HACFBKCHBEJ__ENMHDGDKLJD(HACFBKCHBEJ_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  NLPJLHOEAOE_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565fb9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565fb9 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    iVar1 = NLPJLHOEAOE__JCFMJBBOPMH(__this_00,(__this->fields).JDNKKGPNHPB,(MethodInfo *)0x0);
    (__this->fields).LKHEEKKLPCB = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

