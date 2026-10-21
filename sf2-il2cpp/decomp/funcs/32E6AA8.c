// CPNGAIGLKNJ$$NMAPGPBDPAN @ RVA 0x32E6AA8

void CPNGAIGLKNJ__NMAPGPBDPAN(CPNGAIGLKNJ_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  OLKPEJMEBPJ_o *__this_00;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  int32_t iVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567613 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04567613 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).super.super.LFJPDELEIHG;
  if (__this_00 == (OLKPEJMEBPJ_o *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar2 = OLKPEJMEBPJ__MMDJGCICIFP(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).super.super.HDDNEKLMLMF;
  if (__this_01 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    iVar4 = 1;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if ((AFFHKININGD_o *)local_48.fields._current == FBFPLEFCDOK) break;
      iVar4 = iVar4 + 1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
      iVar3 = 1;
      if (iVar2 <= iVar4) {
        iVar3 = 2;
      }
      (FBFPLEFCDOK->fields).HHJIJKJCEOF = iVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

