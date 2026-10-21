// Nekki.SF2.GUI.Map.MapScene$$LNEFBMFLDDG @ RVA 0x3585744

void Nekki_SF2_GUI_Map_MapScene__LNEFBMFLDDG
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_ZoneScrollItem_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    ppNVar1 = &(__this->fields).CAJCGACFIHD;
    bVar2 = Nekki_SF2_GUI_Map_MapContainer__HasZone(__this_00,*ppNVar1,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (bVar2) {
      if (*ppNVar1 == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_036857a0;
      Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled(*ppNVar1,false,(MethodInfo *)0x0);
      *ppNVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
      thunk_FUN_01c20e04(ppNVar1,0);
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Map_MapScene__HNEBBPHILEA(__this,method_00);
    return;
  }
LAB_036857a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

