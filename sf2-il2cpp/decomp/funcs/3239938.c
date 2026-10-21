// Nekki.SF2.GUI.Map.MapContainer$$SelectBattle @ RVA 0x3239938

void Nekki_SF2_GUI_Map_MapContainer__SelectBattle
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,OOMHDDBCBJP_o *ODPEIFGHKNG,
               float GGMALJLKHHB,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__SelectBattle(__this_00,ODPEIFGHKNG,GGMALJLKHHB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

