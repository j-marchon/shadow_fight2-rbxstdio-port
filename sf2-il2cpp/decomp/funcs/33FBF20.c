// MGNPHCAAEIO$$CNMOHIPAEPD @ RVA 0x33FBF20

MNKGBNEMPCI_o * MGNPHCAAEIO__CNMOHIPAEPD(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MNKGBNEMPCI__o *__this;
  System_String_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MNKGBNEMPCI_o *pMVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567fbf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MNKGBNEMPCI>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567fbf = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04568076 == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568076 = '\x01';
    method = extraout_x1_01;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this = MGNPHCAAEIO_TypeInfo->static_fields->CGDCBPHBFDE;
  if (__this == (System_Collections_Generic_List_MNKGBNEMPCI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<MNKGBNEMPCI>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_MoveNext__);
    pMVar2 = (MNKGBNEMPCI_o *)local_48.fields._current;
    if (!bVar1) {
      pMVar2 = (MNKGBNEMPCI_o *)0x0;
      break;
    }
    if ((MNKGBNEMPCI_o *)local_48.fields._current == (MNKGBNEMPCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = ((MNKGBNEMPCI_Fields *)((long)local_48.fields._current + 0x10))->DEKCPPOJFEH;
    if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_Dispose__);
  return pMVar2;
}

