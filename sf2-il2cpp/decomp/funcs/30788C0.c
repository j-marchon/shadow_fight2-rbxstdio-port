// CFMDGLMCNIL$$JGKFPAAOBOO @ RVA 0x30788C0

bool CFMDGLMCNIL__JGKFPAAOBOO(CFMDGLMCNIL_o *__this,int32_t BCFACBMOMKI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OHPOFOPJIMB__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565fc1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_GetEnumerator__);
    DAT_04565fc1 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HHMMOAAKGCB;
  if (__this_00 == (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OHPOFOPJIMB>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_03178984;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (*(int *)((long)&local_48.fields._current[1].klass + 4) != BCFACBMOMKI);
  iVar2 = 4;
LAB_03178984:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_Dispose__);
  return bVar1 && iVar2 == 4;
}

