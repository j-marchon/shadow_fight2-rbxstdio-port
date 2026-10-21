// KDDFEFJOIJP$$JBHBNPEBFDN @ RVA 0x32E5510

MBALPICJBHF_o *
KDDFEFJOIJP__JBHBNPEBFDN(KDDFEFJOIJP_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MBALPICJBHF__o *__this_00;
  MBALPICJBHF_o *pMVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e5470 with catch @ 033e5510
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e5500 with catch @ 033e5514
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e54fc with catch @ 033e5518
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e54f8 with catch @ 033e551c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e54f4 with catch @ 033e5520
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e542c with catch @ 033e5524
                        */
  if ((DAT_04567606 & 1) == 0) {
                    /* try { // try from 033e553c to 034e553f has its CatchHandler @ 033e5568 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_Dispose__);
                    /* try { // try from 033e5540 to 034e5577 has its CatchHandler @ 033e52dc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>_GetEnumerator__);
                    /* catch() { ... } // from try @ 033e553c with catch @ 033e5568 */
    DAT_04567606 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HBDMPPHKBMP;
                    /* try { // try from 033e5578 to 034e557f has its CatchHandler @ 033e5594 */
  if (__this_00 == (System_Collections_Generic_List_MBALPICJBHF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033e5580 to 034e558b has its CatchHandler @ 033e52dc */
                    /* try { // try from 033e558c to 034e5593 has its CatchHandler @ 033e5594 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033e5578 with catch @ 033e5594
                       catch(type#2 @ 00000000) { ... } // from try @ 033e558c with catch @ 033e5594
                        */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MBALPICJBHF>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_MoveNext__);
    pMVar2 = (MBALPICJBHF_o *)local_48.fields._current;
    if (!bVar1) {
      pMVar2 = (MBALPICJBHF_o *)0x0;
      break;
    }
    if ((MBALPICJBHF_o *)local_48.fields._current == (MBALPICJBHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((MBALPICJBHF_Fields *)((long)local_48.fields._current + 0x10))->BGHFADDGPAD,
                       ACCIHBHMFPN,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_Dispose__);
  return pMVar2;
}

