// Nekki.SF2.GUI.Map.MapPanel$$GetCurrentZone @ RVA 0x349E578

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapPanel__GetCurrentZone(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456847d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo);
    DAT_0456847d = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (__this_00 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pNVar2 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)
           Nekki_SF2_GUI_Shop_Scroll__GetCurrentItem(__this_00,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo->_2).naturalAligment;
    if ((pNVar2->klass->_2).naturalAligment < bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    }
    else if ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo) {
      pNVar2 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    }
  }
  return pNVar2;
}

