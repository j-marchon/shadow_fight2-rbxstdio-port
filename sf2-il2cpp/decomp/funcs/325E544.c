// AAPGCAPGBLG$$FNFKIIMBFJO @ RVA 0x325E544

void AAPGCAPGBLG__FNFKIIMBFJO(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_CCLKPGBIBOP__o *collection;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456719d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CCLKPGBIBOP>_TypeInfo);
    DAT_0456719d = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  collection = (__this->fields).AOCCHDFNLMC;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CCLKPGBIBOP>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
             Method_System_Collections_Generic_List<CCLKPGBIBOP>__ctor__);
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,__this_00,
               Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      AAPGCAPGBLG__JIIBNJFDICI
                (__this,(System_String_o *)local_48.fields._current[1].klass,true,in_x3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

