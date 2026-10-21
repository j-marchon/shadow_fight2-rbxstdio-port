// Nekki.SF2.GUI.Map.MapContainer$$GetCurrentItemIndex @ RVA 0x323A1B8

int32_t Nekki_SF2_GUI_Map_MapContainer__GetCurrentItemIndex
                  (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_Map_MapPanel__GetCurrentItemIndex(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

