// ECENNHNBAME$$OOAOCGENEPI @ RVA 0x30194C8

void ECENNHNBAME__OOAOCGENEPI(MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04565bec & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME_ECNMNALHFIF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME_ECNMNALHFIF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME_ECNMNALHFIF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME_ECNMNALHFIF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME_ECNMNALHFIF>_GetEnumerator__);
    DAT_04565bec = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = ECENNHNBAME_TypeInfo->static_fields->PHNBIJIOHJO;
  if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ECENNHNBAME_ECNMNALHFIF>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME_ECNMNALHFIF>_MoveNext__
                             ), bVar1) {
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_38.fields._current[1].klass = (Il2CppClass *)0x0;
      thunk_FUN_01c20e04(local_38.fields._current + 1,0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME_ECNMNALHFIF>_Dispose__)
    ;
    if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = ECENNHNBAME_TypeInfo->static_fields->PHNBIJIOHJO;
    if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *)0x0) {
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

