// Nekki.SF2.GUI.Map.ZoneScrollItem$$UpdateBattleFocus @ RVA 0x3347714

void Nekki_SF2_GUI_Map_ZoneScrollItem__UpdateBattleFocus
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  pOVar2 = (__this->fields).KOGBPIPIKFA;
  if ((pOVar2 != (OOMHDDBCBJP_o *)0x0) &&
     (bVar1 = OOMHDDBCBJP__EFLKILFFJKH(pOVar2,(MethodInfo *)0x0), bVar1)) {
    pOVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__ChooseClosestBattle
                       (__this,(__this->fields).KOGBPIPIKFA,in_x2);
    (__this->fields).KOGBPIPIKFA = pOVar2;
    thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA,pOVar2);
    Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle(__this,method_00);
    return;
  }
  return;
}

