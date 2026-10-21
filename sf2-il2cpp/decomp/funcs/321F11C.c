// FPPKHNNABAD$$INCPDCLNGNJ @ RVA 0x321F11C

KFKFNDEJLKK_o *
FPPKHNNABAD__INCPDCLNGNJ(FPPKHNNABAD_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KFKFNDEJLKK__o *__this_00;
  KFKFNDEJLKK_o *pKVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566f29 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_GetEnumerator__);
    DAT_04566f29 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AFFIHBMACFF;
  if (__this_00 == (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0331f200 to 0341f203 has its CatchHandler @ 0331f218 */
    FUN_01bab8c8();
  }
                    /* try { // try from 0331f188 to 0341f18f has its CatchHandler @ 0331f1e4 */
                    /* try { // try from 0331f190 to 0341f193 has its CatchHandler @ 0331f1cc */
                    /* try { // try from 0331f194 to 0341f197 has its CatchHandler @ 0331f1e4 */
                    /* try { // try from 0331f198 to 0341f19b has its CatchHandler @ 0331f1bc */
                    /* try { // try from 0331f19c to 0341f1a3 has its CatchHandler @ 0331f1e0 */
                    /* try { // try from 0331f1a4 to 0341f1a7 has its CatchHandler @ 0331edb8 */
                    /* try { // try from 0331f1a8 to 0341f1ab has its CatchHandler @ 0331f1b4 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KFKFNDEJLKK>_GetEnumerator__);
  do {
                    /* try { // try from 0331f1ac to 0341f1ff has its CatchHandler @ 0331edb8 */
                    /* catch() { ... } // from try @ 0331f1a8 with catch @ 0331f1b4 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_MoveNext__);
                    /* catch() { ... } // from try @ 0331efdc with catch @ 0331f1b8 */
    if (!bVar1) {
                    /* catch() { ... } // from try @ 0331eff8 with catch @ 0331f1d4 */
      pKVar2 = (KFKFNDEJLKK_o *)0x0;
      break;
    }
                    /* catch() { ... } // from try @ 0331f198 with catch @ 0331f1bc */
                    /* catch() { ... } // from try @ 0331efd4 with catch @ 0331f1c0 */
    if ((KFKFNDEJLKK_o *)local_48.fields._current == (KFKFNDEJLKK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 0331f008 with catch @ 0331f1c4 */
                    /* catch() { ... } // from try @ 0331f010 with catch @ 0331f1c8 */
    pKVar2 = (KFKFNDEJLKK_o *)local_48.fields._current;
                    /* catch() { ... } // from try @ 0331f190 with catch @ 0331f1cc */
  } while (((KFKFNDEJLKK_Fields *)((long)local_48.fields._current + 0x10))->BGHFADDGPAD !=
           HIHCBMNGGEO);
                    /* catch() { ... } // from try @ 0331ef50 with catch @ 0331f1d8 */
                    /* catch() { ... } // from try @ 0331eef4 with catch @ 0331f1dc */
                    /* catch() { ... } // from try @ 0331f19c with catch @ 0331f1e0 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_Dispose__);
                    /* catch() { ... } // from try @ 0331f188 with catch @ 0331f1e4
                       catch() { ... } // from try @ 0331f194 with catch @ 0331f1e4 */
                    /* catch() { ... } // from try @ 0331f028 with catch @ 0331f1e8 */
  return pKVar2;
}

