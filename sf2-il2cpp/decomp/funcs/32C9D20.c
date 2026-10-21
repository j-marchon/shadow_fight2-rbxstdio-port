// Nekki.SF2.GUI.Map.LampsPanel$$Init @ RVA 0x32C9D20

void Nekki_SF2_GUI_Map_LampsPanel__Init(Nekki_SF2_GUI_Map_LampsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *extraout_x1;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar1;
  
  if ((DAT_0456750d & 1) == 0) {
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456750d = 1;
    method = extraout_x1;
  }
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo,method);
  }
  pMVar1 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if (pMVar1 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
    __this_00 = (__this->fields)._locationName;
    (__this->fields).FAOGPCBDLCE = (pMVar1->fields).LDKIEDOLMPM;
    if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,StringLiteral_1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

