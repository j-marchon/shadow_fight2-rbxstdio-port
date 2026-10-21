// NFNBHPOJFNJ$$OONAFIABOCC @ RVA 0x335F578

void NFNBHPOJFNJ__OONAFIABOCC(NFNBHPOJFNJ_o *__this,bool KDNHFKPLJIC,MethodInfo *method)

{
  int64_t iVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)KDNHFKPLJIC;
  if ((DAT_04567a70 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04567a70 = 1;
    method_00 = extraout_x1;
  }
  if (KDNHFKPLJIC) {
    NFNBHPOJFNJ__CAILMLFMDBI(__this,method_00);
    return;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
  if (iVar1 - (__this->fields).BNFLGDFGHBL < 0xdbba1) {
    return;
  }
  NFNBHPOJFNJ__KLNMLOOCAAO(__this,method_01);
  return;
}

