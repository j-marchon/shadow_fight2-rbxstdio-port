// MGNPHCAAEIO$$APKDKHCDNIM @ RVA 0x340C278

void MGNPHCAAEIO__APKDKHCDNIM(MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_KMJDCOABCCG__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456803b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456803b = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MGNPHCAAEIO_TypeInfo->static_fields->OHLABOLFOOK;
  if (pSVar2 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<KMJDCOABCCG>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_MoveNext__);
      if (!bVar1) break;
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined1 *)&local_48.fields._current[4].klass = 1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_Dispose__);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGNPHCAAEIO_TypeInfo->static_fields->OHLABOLFOOK;
    if (pSVar2 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
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

