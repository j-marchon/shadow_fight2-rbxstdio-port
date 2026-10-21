// Nekki.SF2.GUI.Map.MapPanel$$SetTouchEnabled @ RVA 0x349F740

void Nekki_SF2_GUI_Map_MapPanel__SetTouchEnabled
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456848a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    DAT_0456848a = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (CJNHFNHJHPE) {
    bVar1 = (__this->fields)._LGKLAOCDMGF_k__BackingField == false;
  }
  else {
    bVar1 = false;
  }
  if (__this_00 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,bVar1,(MethodInfo *)0x0)
    ;
    __this_01 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,method_00);
    if (__this_01 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
          return;
        }
        if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_38.fields._current ==
            (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) break;
        Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled
                  ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_38.fields._current,CJNHFNHJHPE,
                   (MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

