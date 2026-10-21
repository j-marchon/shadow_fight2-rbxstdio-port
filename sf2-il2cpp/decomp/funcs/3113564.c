// FJIFBJMMKHG$$HOJCCLPEMNM @ RVA 0x3113564

bool FJIFBJMMKHG__HOJCCLPEMNM(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_GlobalTimer_o *__this_00;
  int64_t iVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  long lVar4;
  
  if ((DAT_04566598 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04566598 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._PKHKGBAKJDF_k__BackingField < 1) {
    bVar1 = false;
  }
  else {
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
    }
    __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_Utils_GlobalTimer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = Nekki_Utils_GlobalTimer__GetTime(__this_00,(MethodInfo *)0x0);
    lVar4 = (__this->fields)._PKHKGBAKJDF_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar3 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    bVar1 = iVar2 < iVar3 + lVar4;
  }
  return bVar1;
}

