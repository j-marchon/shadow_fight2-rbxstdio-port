// Nekki.SF2.GUI.Map.MapContainer$$Close @ RVA 0x323A4D8

bool Nekki_SF2_GUI_Map_MapContainer__Close
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_01;
  MethodInfo *in_x2;
  
  __this_00 = (__this->fields)._moveableMapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__Close(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_Map_MapContainer__ShowUI(__this,true,in_x2);
      __this_01 = (__this->fields)._mapPanel;
      if (__this_01 == (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) goto LAB_0333a52c;
      Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this_01,false,(MethodInfo *)0x0);
    }
    return bVar1;
  }
LAB_0333a52c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

