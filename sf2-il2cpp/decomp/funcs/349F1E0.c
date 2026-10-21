// Nekki.SF2.GUI.Map.MapPanel$$GetZoneIndex @ RVA 0x349F1E0

int32_t Nekki_SF2_GUI_Map_MapPanel__GetZoneIndex
                  (Nekki_SF2_GUI_Map_MapPanel_o *__this,
                  Nekki_SF2_GUI_Map_ZoneScrollItem_o *ELDONAKMDAE,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *extraout_x1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *method_00;
  
  method_00 = ELDONAKMDAE;
  if ((DAT_04568482 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_IndexOf__);
    DAT_04568482 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,(MethodInfo *)method_00);
  if (__this_00 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
    iVar1 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)ELDONAKMDAE,
                       Method_System_Collections_Generic_List<ZoneScrollItem>_IndexOf__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

