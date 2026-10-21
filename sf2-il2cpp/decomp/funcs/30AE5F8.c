// COFFJADEMJF$$EFLLMOAINGJ @ RVA 0x30AE5F8

bool COFFJADEMJF__EFLLMOAINGJ(COFFJADEMJF_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_01;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045661c2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    DAT_045661c2 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).KOFLFFPDOMO;
  if (__this_01 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    __this_00 = local_48.fields._current;
    if (!bVar1) {
      bVar2 = 0;
      iVar3 = 6;
      goto LAB_031ae6dc;
    }
    if ((ECENNHNBAME_o *)local_48.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((ECENNHNBAME_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK,
                       KGLJICLJHEL,(MethodInfo *)0x0);
  } while ((!bVar1) &&
          (bVar1 = ECENNHNBAME__NHELADLJDNP
                             ((ECENNHNBAME_o *)__this_00,KGLJICLJHEL,(MethodInfo *)0x0), !bVar1));
  bVar2 = 1;
  iVar3 = 5;
LAB_031ae6dc:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
  return (bool)(bVar2 & iVar3 == 5);
}

