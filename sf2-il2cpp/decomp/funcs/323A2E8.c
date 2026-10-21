// Nekki.SF2.GUI.Map.MapContainer$$CloseRightNow @ RVA 0x323A2E8

void Nekki_SF2_GUI_Map_MapContainer__CloseRightNow
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this_00,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._moveableMapPanel;
    if (__this_01 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MoveableMapPanel__CloseRightNow(__this_01,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(__this,false,method_00);
      Nekki_SF2_GUI_Map_MapContainer__ShowUI(__this,false,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

