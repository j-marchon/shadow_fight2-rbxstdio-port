// CPNGAIGLKNJ$$KDENPABEMHA @ RVA 0x32E6C28

uint32_t CPNGAIGLKNJ__KDENPABEMHA(CPNGAIGLKNJ_o *__this,int32_t MNPKIDDPNBM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  uint32_t uVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567614 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04567614 = 1;
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
  uVar2 = 0;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
      return uVar2;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) break;
    if (*(int *)((long)&local_48.fields._current[6].klass + 4) == MNPKIDDPNBM) {
      uVar2 = uVar2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

