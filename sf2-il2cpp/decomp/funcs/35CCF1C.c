// Nekki.SF2.GUI.BaseScrollContent$$ClearItems @ RVA 0x35CCF1C

void Nekki_SF2_GUI_BaseScrollContent__ClearItems
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_BaseScrollItem__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568fb5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    DAT_04568fb5 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._Items;
  if (pSVar2 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_38.fields._current[0x10].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)local_38.fields._current[0x10].klass,
                 (MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
    pSVar2 = (__this->fields)._Items;
    if (pSVar2 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

