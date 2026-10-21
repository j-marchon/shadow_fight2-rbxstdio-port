// Nekki.SF2.GUI.Map.MapContainer$$IsMovingNow @ RVA 0x323A890

bool Nekki_SF2_GUI_Map_MapContainer__IsMovingNow
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._moveableMapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__IsMoving(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

