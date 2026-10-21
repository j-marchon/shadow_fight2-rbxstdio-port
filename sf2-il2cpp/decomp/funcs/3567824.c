// CIOBNDOOGIM$$BBPJEPAGOLO @ RVA 0x3567824

void CIOBNDOOGIM__BBPJEPAGOLO(int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Predicate_CIOBNDOOGIM__o **ppSVar2;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this_00;
  System_Predicate_CIOBNDOOGIM__o *match;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568c00 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_GetEnumerator__);
    FUN_01bab630(&System_Predicate<CIOBNDOOGIM>_TypeInfo);
    FUN_01bab630(&Method_CIOBNDOOGIM_<>c_MJIOCHNMFAK__);
    FUN_01bab630(&CIOBNDOOGIM_<>c_TypeInfo);
    DAT_04568c00 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (DAT_04568c10 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo,method);
    DAT_04568c10 = '\x01';
  }
  if (Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NMINHOHPEAD_k__BackingField ==
      false) {
    if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CIOBNDOOGIM_TypeInfo);
    }
    __this_00 = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
    if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__6_0;
    if (match == (System_Predicate_CIOBNDOOGIM__o *)0x0) {
      if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = (System_Predicate_CIOBNDOOGIM__o *)
              thunk_FUN_01bda818(System_Predicate<CIOBNDOOGIM>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar2 = &CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__6_0;
      *ppSVar2 = match;
      thunk_FUN_01c20e04(ppSVar2,match);
    }
    if ((__this_00 == (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) ||
       (__this = (System_Collections_Generic_List_object__o *)
                 System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (System_Predicate_T__o *)match,
                            Method_System_Collections_Generic_List<CIOBNDOOGIM>_FindAll__),
       __this == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,__this,Method_System_Collections_Generic_List<CIOBNDOOGIM>_GetEnumerator__)
    ;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_MoveNext__
                             ), bVar1) {
      if (local_48.fields._current != (Il2CppObject *)0x0) {
        (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                  (local_48.fields._current,(local_48.fields._current)->klass->vtable[4].method);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<CIOBNDOOGIM>_Dispose__);
  }
  return;
}

