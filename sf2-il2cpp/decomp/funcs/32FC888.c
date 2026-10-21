// Nekki.SF2.GUI.Common.Hints.HintUI$$get_IsSeparator @ RVA 0x32FC888

bool Nekki_SF2_GUI_Common_Hints_HintUI__get_IsSeparator
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  int32_t OHLKNCPBCBL;
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676ec & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    DAT_045676ec = 1;
    method = extraout_x1;
  }
  OHLKNCPBCBL = (__this->fields)._ID;
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ECNCJPCKOLN_TypeInfo,method);
  }
  bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(OHLKNCPBCBL,(MethodInfo *)0x0);
  return bVar1;
}

