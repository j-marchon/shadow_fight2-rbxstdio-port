// Nekki.SF2.GUI.Map.MapContainer$$SelectBattleByDirection @ RVA 0x323A08C

void Nekki_SF2_GUI_Map_MapContainer__SelectBattleByDirection
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,UnityEngine_Vector2_o FAGFGDBOLDP,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__SelectBattleByDirection(__this_00,FAGFGDBOLDP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

