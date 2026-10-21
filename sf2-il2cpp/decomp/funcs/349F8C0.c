// Nekki.SF2.GUI.Map.MapPanel$$GetZone @ RVA 0x349F8C0

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapPanel__GetZone
          (Nekki_SF2_GUI_Map_MapPanel_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  if ((DAT_0456848b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Item__);
    DAT_0456848b = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,method_00);
  if ((__this_00 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) &&
     (DPJIDNBJIBG < (__this_00->fields)._size)) {
    pNVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                        Method_System_Collections_Generic_List<ZoneScrollItem>_get_Item__);
    return pNVar1;
  }
  return (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
}

