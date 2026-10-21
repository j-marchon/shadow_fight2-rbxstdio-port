// Nekki.SF2.GUI.Map.MapContainer$$SetZonesBackgroundMask @ RVA 0x3239954

void Nekki_SF2_GUI_Map_MapContainer__SetZonesBackgroundMask
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_0456704a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    DAT_0456704a = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._mapPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
     (__this_01 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_58.fields._current ==
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) break;
      Nekki_SF2_GUI_Map_ZoneScrollItem__SetBackgroundColor
                ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_58.fields._current,EFJKPCADGJH,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

