// OPNFCOGALLI$$BKMANKPEDJN @ RVA 0x310AFB4

void OPNFCOGALLI__BKMANKPEDJN(OPNFCOGALLI_o *__this,CNDPAJOLKFN_o *CIPNNFKDGFP,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  CNDPAJOLKFN_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566537 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    DAT_04566537 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KOHECBJAFKG;
  if ((__this_00 != (GBJGJEGPHKD_o *)0x0) &&
     (__this_01 = GBJGJEGPHKD__HMAAHELNECD(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
        return;
      }
      if ((IEFEBEDLHNN_o *)local_48.fields._current == (IEFEBEDLHNN_o *)0x0) break;
      IEFEBEDLHNN__CFAAJCOBAEE((IEFEBEDLHNN_o *)local_48.fields._current,(MethodInfo *)0x0);
      __this_02 = ((IEFEBEDLHNN_Fields *)((long)pIVar1 + 0x10))->CNMHHKAMGPI;
      if (__this_02 == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CNDPAJOLKFN__LFENGGKOJDO(__this_02,CIPNNFKDGFP,(MethodInfo *)0x0);
                    /* try { // try from 0320b088 to 0330b12b has its CatchHandler @ 0320b088
                       catch() { ... } // from try @ 0320b088 with catch @ 0320b088
                       catch() { ... } // from try @ 0320b18c with catch @ 0320b088
                       catch() { ... } // from try @ 0320b1b4 with catch @ 0320b088
                       catch() { ... } // from try @ 0320b1e8 with catch @ 0320b088
                       catch() { ... } // from try @ 0320b228 with catch @ 0320b088 */
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

