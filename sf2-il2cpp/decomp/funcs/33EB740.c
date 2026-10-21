// FCJBEKHDLAF$$BJKCMHNHFDO @ RVA 0x33EB740

MBALPICJBHF_o *
FCJBEKHDLAF__BJKCMHNHFDO
          (FCJBEKHDLAF_o *__this,bool AKNPAEEBHHE,bool NFFEBDBLNBK,bool ABOGGPJGIAI,
          MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MBALPICJBHF__o *__this_00;
  KDDFEFJOIJP_o *pKVar2;
  MBALPICJBHF_o *pMVar3;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* catch() { ... } // from try @ 034eb660 with catch @ 034eb740
                       catch() { ... } // from try @ 034eb6b4 with catch @ 034eb740
                       catch() { ... } // from try @ 034eb738 with catch @ 034eb740 */
                    /* try { // try from 034eb744 to 035eb79b has its CatchHandler @ 034eb744
                       catch() { ... } // from try @ 034eb744 with catch @ 034eb744
                       catch() { ... } // from try @ 034eb890 with catch @ 034eb744
                       catch() { ... } // from try @ 034eb8e0 with catch @ 034eb744
                       catch() { ... } // from try @ 034eb998 with catch @ 034eb744
                       catch() { ... } // from try @ 034eb9dc with catch @ 034eb744
                       catch() { ... } // from try @ 034eba14 with catch @ 034eb744 */
  if ((DAT_04567f0a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_get_Current__);
                    /* try { // try from 034eb79c to 035eb79f has its CatchHandler @ 034eb8e0 */
                    /* try { // try from 034eb7a0 to 035eb7a7 has its CatchHandler @ 034eb8f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_11996);
                    /* try { // try from 034eb7c0 to 035eb7cb has its CatchHandler @ 034eb8fc */
    FUN_01bab630(&StringLiteral_7047);
                    /* try { // try from 034eb7d4 to 035eb7df has its CatchHandler @ 034eb8f4 */
    FUN_01bab630(&StringLiteral_4894);
    DAT_04567f0a = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
                    /* try { // try from 034eb7e8 to 035eb7ef has its CatchHandler @ 034eb8f0 */
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034eb7fc to 035eb803 has its CatchHandler @ 034eb8ec */
  pKVar2 = MGNPHCAAEIO_TypeInfo->static_fields->PJHCPELBBKN;
  if ((pKVar2 == (KDDFEFJOIJP_o *)0x0) ||
     (__this_00 = (pKVar2->fields).HBDMPPHKBMP,
     __this_00 == (System_Collections_Generic_List_MBALPICJBHF__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034eb814 to 035eb823 has its CatchHandler @ 034eb8e8 */
                    /* try { // try from 034eb824 to 035eb82b has its CatchHandler @ 034eb8e4 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MBALPICJBHF>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_MoveNext__);
      pMVar3 = (MBALPICJBHF_o *)local_70.fields._current;
                    /* try { // try from 034eb868 to 035eb88f has its CatchHandler @ 034eb9a8 */
      if (!bVar1) {
        pMVar3 = (MBALPICJBHF_o *)0x0;
        goto LAB_034eb8cc;
      }
      if (ABOGGPJGIAI) {
        if ((MBALPICJBHF_o *)local_70.fields._current == (MBALPICJBHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034eb7a0 with catch @ 034eb8f8 */
          FUN_01bab8c8();
        }
        bVar1 = System_String__op_Equality
                          (((MBALPICJBHF_Fields *)((long)local_70.fields._current + 0x10))->
                           BGHFADDGPAD,StringLiteral_11996,(MethodInfo *)0x0);
        if (bVar1) goto LAB_034eb8cc;
      }
      if (AKNPAEEBHHE) {
                    /* try { // try from 034eb890 to 035eb8d3 has its CatchHandler @ 034eb744 */
        if (pMVar3 == (MBALPICJBHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034eb7c0 with catch @ 034eb8fc
                       catch() { ... } // from try @ 034eb8d4 with catch @ 034eb8fc */
          FUN_01bab8c8();
        }
        bVar1 = System_String__op_Equality
                          (((MBALPICJBHF_Fields *)((long)pMVar3 + 0x10))->BGHFADDGPAD,
                           StringLiteral_4894,(MethodInfo *)0x0);
        if (bVar1) goto LAB_034eb8cc;
      }
    } while (!NFFEBDBLNBK);
    if (pMVar3 == (MBALPICJBHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((MBALPICJBHF_Fields *)((long)pMVar3 + 0x10))->BGHFADDGPAD,StringLiteral_7047
                       ,(MethodInfo *)0x0);
  } while (!bVar1);
LAB_034eb8cc:
                    /* try { // try from 034eb8d4 to 035eb8d7 has its CatchHandler @ 034eb8fc */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_Dispose__);
                    /* try { // try from 034eb8d8 to 035eb8df has its CatchHandler @ 034eb9a8 */
                    /* catch() { ... } // from try @ 034eb79c with catch @ 034eb8e0
                       try { // try from 034eb8e0 to 035eb917 has its CatchHandler @ 034eb744 */
                    /* catch() { ... } // from try @ 034eb824 with catch @ 034eb8e4 */
                    /* catch() { ... } // from try @ 034eb814 with catch @ 034eb8e8 */
                    /* catch() { ... } // from try @ 034eb7fc with catch @ 034eb8ec */
                    /* catch() { ... } // from try @ 034eb7e8 with catch @ 034eb8f0 */
                    /* catch() { ... } // from try @ 034eb7d4 with catch @ 034eb8f4 */
  return pMVar3;
}

