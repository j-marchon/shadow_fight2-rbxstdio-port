// OOMHDDBCBJP$$PFAOOMAGCHN @ RVA 0x3285020

AFFHKININGD_o *
OOMHDDBCBJP__PFAOOMAGCHN(OOMHDDBCBJP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  AFFHKININGD_o *pAVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045672b5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
                    /* try { // try from 03385074 to 0348518b has its CatchHandler @ 03385074
                       catch() { ... } // from try @ 03385074 with catch @ 03385074
                       catch() { ... } // from try @ 0338520c with catch @ 03385074
                       catch() { ... } // from try @ 03385240 with catch @ 03385074
                       catch() { ... } // from try @ 0338527c with catch @ 03385074
                       catch() { ... } // from try @ 033852ac with catch @ 03385074 */
    DAT_045672b5 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    pAVar2 = (AFFHKININGD_o *)local_48.fields._current;
    if (!bVar1) {
      pAVar2 = (AFFHKININGD_o *)0x0;
      break;
    }
    if ((AFFHKININGD_o *)local_48.fields._current == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((AFFHKININGD_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK,
                       KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
  return pAVar2;
}

