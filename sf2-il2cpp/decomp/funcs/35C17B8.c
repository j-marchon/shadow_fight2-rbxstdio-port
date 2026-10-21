// IMAPABEJECG$$MHKLAIFGNCN @ RVA 0x35C17B8

void IMAPABEJECG__MHKLAIFGNCN
               (System_Collections_Generic_List_NFKLEEPNELA__o *CIADJOAENAM,bool HLJOHNIDBDM,
               MethodInfo *method)

{
  uint PKEAOHMFMFD;
  bool bVar1;
  MethodInfo *in_x4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 036c17bc to 037c17bf has its CatchHandler @ 036c17e0 */
                    /* try { // try from 036c17c0 to 037c17e7 has its CatchHandler @ 036c15a8 */
  if ((DAT_04568f24 & 1) == 0) {
                    /* catch() { ... } // from try @ 036c17bc with catch @ 036c17e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_Dispose__);
                    /* try { // try from 036c17e8 to 037c17ef has its CatchHandler @ 036c1804 */
                    /* try { // try from 036c17f0 to 037c17fb has its CatchHandler @ 036c15a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_MoveNext__);
                    /* try { // try from 036c17fc to 037c1803 has its CatchHandler @ 036c1804 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_get_Current__);
                    /* catch() { ... } // from try @ 036c17e8 with catch @ 036c1804
                       catch() { ... } // from try @ 036c17fc with catch @ 036c1804 */
                    /* try { // try from 036c1808 to 037c18df has its CatchHandler @ 036c1808
                       catch() { ... } // from try @ 036c1808 with catch @ 036c1808
                       catch() { ... } // from try @ 036c18e8 with catch @ 036c1808
                       catch() { ... } // from try @ 036c19b0 with catch @ 036c1808
                       catch() { ... } // from try @ 036c19bc with catch @ 036c1808
                       catch() { ... } // from try @ 036c19e0 with catch @ 036c1808
                       catch() { ... } // from try @ 036c1a20 with catch @ 036c1808 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NFKLEEPNELA>_GetEnumerator__);
    DAT_04568f24 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (CIADJOAENAM != (System_Collections_Generic_List_NFKLEEPNELA__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)CIADJOAENAM,
               Method_System_Collections_Generic_List<NFKLEEPNELA>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      PKEAOHMFMFD = *(uint *)((long)&local_48.fields._current[1].monitor + 4);
      if (*(int32_t *)&local_48.fields._current[1].monitor < (int)PKEAOHMFMFD) {
        IMAPABEJECG__CLKGKNCGJID
                  ((System_String_o *)local_48.fields._current[1].klass,
                   *(int32_t *)&local_48.fields._current[1].monitor,PKEAOHMFMFD,HLJOHNIDBDM,in_x4);
      }
      else {
        IMAPABEJECG__OPAJGJEKAPD
                  ((System_String_o *)local_48.fields._current[1].klass,HLJOHNIDBDM,
                   (MethodInfo *)(ulong)PKEAOHMFMFD);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

