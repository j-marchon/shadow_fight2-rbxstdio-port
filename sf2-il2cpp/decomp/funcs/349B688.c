// NGKBNOEJLPH$$BLFKPBELDKF @ RVA 0x349B688

void NGKBNOEJLPH__BLFKPBELDKF(NGKBNOEJLPH_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_NGKBNOEJLPH_NEFFJJAPAOP__o *__this_00;
  CAAJMGKIPIE_o *pCVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456845c & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<NGKBNOEJLPH_NEFFJJAPAOP>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_NEFFJJAPAOP>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_NEFFJJAPAOP>_MoveNext__
                );
                    /* try { // try from 0359b6d4 to 0369b6db has its CatchHandler @ 0359b740 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_NEFFJJAPAOP>_get_Current__
                );
                    /* try { // try from 0359b6dc to 0369b733 has its CatchHandler @ 0359b63c */
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_NEFFJJAPAOP>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Count__
                );
    DAT_0456845c = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pCVar3 = (__this->fields)._MPABEMCEHCL_k__BackingField;
  if ((pCVar3 != (CAAJMGKIPIE_o *)0x0) &&
     (pSVar4 = (pCVar3->fields).ECCIEDIDMNL,
     pSVar4 != (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)) {
    DJNBJHPDKDP__LJCDLMMMOGD<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).EMHLGOGABBM,
               (pSVar4->fields)._size,Method_DJNBJHPDKDP_LJCDLMMMOGD<NGKBNOEJLPH_NEFFJJAPAOP>__);
                    /* try { // try from 0359b734 to 0369b737 has its CatchHandler @ 0359b73c */
    __this_00 = (__this->fields).EMHLGOGABBM;
                    /* try { // try from 0359b738 to 0369b757 has its CatchHandler @ 0359b63c */
    if (__this_00 != (System_Collections_Generic_List_NGKBNOEJLPH_NEFFJJAPAOP__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0359b734 with catch @ 0359b73c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0359b6d4 with catch @ 0359b740
                        */
                    /* try { // try from 0359b758 to 0369b75b has its CatchHandler @ 0359b780 */
                    /* try { // try from 0359b75c to 0369b787 has its CatchHandler @ 0359b63c */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<NGKBNOEJLPH_NEFFJJAPAOP>_GetEnumerator__);
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_NEFFJJAPAOP>_MoveNext__
                          );
        pIVar1 = local_48.fields._current;
        if (!bVar2) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0359b788 with catch @ 0359b7a4
                       catch(type#2 @ 00000000) { ... } // from try @ 0359b79c with catch @ 0359b7a4
                        */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_NEFFJJAPAOP>_Dispose__
                    );
          return;
        }
                    /* catch() { ... } // from try @ 0359b758 with catch @ 0359b780 */
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0359b788 to 0369b78f has its CatchHandler @ 0359b7a4 */
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0359b790 to 0369b79b has its CatchHandler @ 0359b63c */
        fVar5 = LIIFLGALGNK__FDIGGDLGKOI((MethodInfo *)0x0);
        if (pIVar1 == (Il2CppObject *)0x0) break;
        *(float *)((long)&pIVar1[1].klass + 4) = fVar5;
                    /* try { // try from 0359b79c to 0369b7a3 has its CatchHandler @ 0359b7a4 */
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

