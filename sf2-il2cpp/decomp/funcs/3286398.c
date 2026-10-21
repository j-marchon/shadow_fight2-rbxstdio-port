// OOMHDDBCBJP$$IEANIFNMNBI @ RVA 0x3286398

bool OOMHDDBCBJP__IEANIFNMNBI(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 033863a4 to 034863ab has its CatchHandler @ 033867cc */
                    /* try { // try from 033863b0 to 034863b3 has its CatchHandler @ 033863c8 */
  if ((DAT_045672b9 & 1) == 0) {
                    /* try { // try from 033863b8 to 034863bb has its CatchHandler @ 033863c4 */
                    /* try { // try from 033863bc to 034863eb has its CatchHandler @ 033852c4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
                    /* catch() { ... } // from try @ 03386238 with catch @ 033863c0 */
                    /* catch() { ... } // from try @ 03386234 with catch @ 033863c4
                       catch() { ... } // from try @ 033863b8 with catch @ 033863c4 */
                    /* catch() { ... } // from try @ 03386218 with catch @ 033863c8
                       catch() { ... } // from try @ 033863b0 with catch @ 033863c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
                    /* catch() { ... } // from try @ 03386208 with catch @ 033863cc */
                    /* catch() { ... } // from try @ 033861f4 with catch @ 033863d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045672b9 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033863ec to 03486403 has its CatchHandler @ 03386784 */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 03386418 to 0348641b has its CatchHandler @ 0338674c */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
  do {
                    /* try { // try from 03386428 to 0348643f has its CatchHandler @ 03386780 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_03386454;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (*(int *)((long)&local_38.fields._current[6].klass + 4) != 1);
                    /* try { // try from 03386448 to 03486467 has its CatchHandler @ 0338677c */
  iVar2 = 4;
LAB_03386454:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
                    /* try { // try from 03386468 to 0348648b has its CatchHandler @ 03386778 */
  return bVar1 && iVar2 == 4;
}

