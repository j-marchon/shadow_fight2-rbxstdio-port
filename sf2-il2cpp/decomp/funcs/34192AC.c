// Nekki.SF2.GUI.Map.InfoBattle$$KFJLIJIGKMK @ RVA 0x34192AC

void Nekki_SF2_GUI_Map_InfoBattle__KFJLIJIGKMK
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method);
  if ((pOVar2 != (OOMHDDBCBJP_o *)0x0) &&
     (iVar1 = OOMHDDBCBJP__NHGGBEACKBD(pOVar2,(MethodInfo *)0x0), iVar1 == 0x14)) {
    pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method_00);
    Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,pOVar2,in_x2);
    return;
  }
  return;
}

