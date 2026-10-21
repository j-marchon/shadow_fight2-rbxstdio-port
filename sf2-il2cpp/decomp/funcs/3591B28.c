// Nekki.SF2.GUI.Profile.BattlePassPanel$$POIOFMEMHBP @ RVA 0x3591B28

void Nekki_SF2_GUI_Profile_BattlePassPanel__POIOFMEMHBP
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  EGMONPGHHDP_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  int local_24;
  
  if ((DAT_04568d78 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_3324);
    DAT_04568d78 = 1;
    method = extraout_x1;
  }
  __this_02 = (__this->fields)._levelLabel;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    iVar1 = EGMONPGHHDP__APIOBOAFKKN(__this_00,(MethodInfo *)0x0);
    local_24 = iVar1 + 1;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    CJNHFNHJHPE = System_String__Format(StringLiteral_3324,arg0,(MethodInfo *)0x0);
    if (__this_02 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._progressBar;
      if (__this_01 != (Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *)0x0) {
        Nekki_SF2_GUI_Profile_ProgressBarBattlePass__UpdateProgress(__this_01,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Profile_BattlePassPanel__GNFAMCPHEEC(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

