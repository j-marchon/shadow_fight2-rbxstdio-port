// LDHBHPILNMA$$PEEPFDGHBCB @ RVA 0x31A061C

void LDHBHPILNMA__PEEPFDGHBCB(MethodInfo *method)

{
  Il2CppObject *NLEBDPHNIDI;
  bool bVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *__this;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566ae1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    DAT_04566ae1 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB;
  if (__this != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                             ), NLEBDPHNIDI = local_48.fields._current, bVar1) {
      if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LDHBHPILNMA__EOEKFLFBGDF
                ((ECENNHNBAME_o *)NLEBDPHNIDI,LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB,in_x2
                );
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

