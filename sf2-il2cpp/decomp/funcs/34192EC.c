// Nekki.SF2.GUI.Map.InfoBattle$$HAOKGBLOEFC @ RVA 0x34192EC

void Nekki_SF2_GUI_Map_InfoBattle__HAOKGBLOEFC
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_GlobalTimer_o *pNVar2;
  AFFHKININGD_o *__this_00;
  OOMHDDBCBJP_o *BANHBMINMMP;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  
  if ((DAT_045680b3 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045680b3 = 1;
    method = extraout_x1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  pNVar2 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (pNVar2 == (Nekki_Utils_GlobalTimer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pNVar2->fields).GAPAJLLHGHO == false) {
    JJPNLEPEAFM__LJMGKILCNBI((MethodInfo *)0x0);
    method_01 = extraout_x1_01;
  }
  else {
    __this_00 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight(__this,method_00);
    if (__this_00 == (AFFHKININGD_o *)0x0) {
      return;
    }
    bVar1 = AFFHKININGD__CAGKMGGOIOJ(__this_00,(MethodInfo *)0x0);
    method_01 = extraout_x1_00;
    if (bVar1) {
      Nekki_SF2_GUI_Map_InfoBattle__EEGOPNGLBMJ
                ((Nekki_SF2_GUI_Map_InfoBattle_o *)0x1,__this_00,in_x2);
      return;
    }
  }
  BANHBMINMMP = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method_01);
  Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,BANHBMINMMP,in_x2);
  return;
}

