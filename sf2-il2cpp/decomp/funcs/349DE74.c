// Nekki.SF2.GUI.Map.MapPanel$$GetZoneIndexByName @ RVA 0x349DE74

int32_t Nekki_SF2_GUI_Map_MapPanel__GetZoneIndexByName
                  (Nekki_SF2_GUI_Map_MapPanel_o *__this,System_String_o *KGLJICLJHEL,
                  MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)KGLJICLJHEL;
  if ((DAT_04568478 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    DAT_04568478 = 1;
    method_00 = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,method_00);
  if (__this_00 == (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
  iVar2 = 0;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__)
    ;
    if (!bVar1) break;
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_48.fields._current[0x14].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (KGLJICLJHEL,
                       (System_String_o *)((local_48.fields._current[0x14].klass)->_1).namespaze,
                       (MethodInfo *)0x0);
    if (bVar1) break;
    iVar2 = iVar2 + 1;
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
  if ((__this_00->fields)._size <= iVar2) {
    iVar2 = -1;
  }
  return iVar2;
}

