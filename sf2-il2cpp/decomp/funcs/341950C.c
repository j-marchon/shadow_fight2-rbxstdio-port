// Nekki.SF2.GUI.Map.InfoBattle$$PDLLNOGBJMP @ RVA 0x341950C

void Nekki_SF2_GUI_Map_InfoBattle__PDLLNOGBJMP
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,KEFHDOHHHML_o *DJJDJLMJKDI,MethodInfo *method
               )

{
  int32_t iVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *method_00;
  
  pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,(MethodInfo *)DJJDJLMJKDI);
  if ((pOVar2 != (OOMHDDBCBJP_o *)0x0) &&
     (iVar1 = OOMHDDBCBJP__NHGGBEACKBD(pOVar2,(MethodInfo *)0x0), iVar1 == 0x14)) {
    pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method_00);
    Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,pOVar2,method);
    return;
  }
  return;
}

