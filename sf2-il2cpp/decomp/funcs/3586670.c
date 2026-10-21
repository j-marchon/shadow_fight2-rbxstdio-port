// Nekki.SF2.GUI.Map.MapScene$$OnClickBattle @ RVA 0x3586670

void Nekki_SF2_GUI_Map_MapScene__OnClickBattle
               (Nekki_SF2_GUI_Map_MapScene_o *__this,OOMHDDBCBJP_o *ODPEIFGHKNG,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_InfoBattle_o *__this_00;
  OOMHDDBCBJP_o *pOVar1;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).OCBDFDALFLL;
  if (__this_00 == (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pOVar1 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this_00,(MethodInfo *)0x0);
  if (pOVar1 != ODPEIFGHKNG) {
    Nekki_SF2_GUI_Map_MapScene__PIMIMOACBNG(__this,ODPEIFGHKNG,method);
    Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_00);
    return;
  }
  return;
}

