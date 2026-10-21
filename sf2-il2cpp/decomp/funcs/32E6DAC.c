// CPNGAIGLKNJ$$NIKIMDGHLDA @ RVA 0x32E6DAC

int32_t CPNGAIGLKNJ__NIKIMDGHLDA
                  (CPNGAIGLKNJ_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567616 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04567616 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).super.super.HDDNEKLMLMF;
  if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
  iVar2 = 0;
  while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_48,
                            Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                           ), bVar1) {
    if ((AFFHKININGD_o *)local_48.fields._current == FBFPLEFCDOK) goto LAB_033e6e68;
    iVar2 = iVar2 + 1;
  }
  iVar2 = -1;
LAB_033e6e68:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
  return iVar2;
}

