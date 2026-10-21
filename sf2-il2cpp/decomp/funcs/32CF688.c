// CJCCEHEKBPD$$LLCONNGHGKD @ RVA 0x32CF688

void CJCCEHEKBPD__LLCONNGHGKD(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  CocosAnimation_o *__this_00;
  
  if ((DAT_04567540 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567540 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  iVar1 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
  __this_00 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
  if (__this_00 != (CocosAnimation_o *)0x0) {
    CocosAnimation__Render(__this_00,(1.0 / (float)iVar1) * 0.016666668,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

