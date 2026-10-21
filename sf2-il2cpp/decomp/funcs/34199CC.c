// Nekki.SF2.GUI.Map.InfoBattle$$MIFBKHJKDNL @ RVA 0x34199CC

void Nekki_SF2_GUI_Map_InfoBattle__MIFBKHJKDNL
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OOMHDDBCBJP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045680bb & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    DAT_045680bb = 1;
    method = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method);
  if (__this_00 != (OOMHDDBCBJP_o *)0x0) {
    iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_00,(MethodInfo *)0x0);
    if (iVar1 == 7) {
      if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AGILEPNENOH__DGLJCGNHLIG(false,(MethodInfo *)0x0);
    }
    Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,__this_00,in_x2);
    return;
  }
  return;
}

