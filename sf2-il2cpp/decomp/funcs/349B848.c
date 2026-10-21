// NGKBNOEJLPH$$HBMGBBBLLJC @ RVA 0x349B848

void NGKBNOEJLPH__HBMGBBBLLJC(NGKBNOEJLPH_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_NGKBNOEJLPH_NEFFJJAPAOP__o *__this_00;
  CAAJMGKIPIE_o *pCVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456845f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<NGKBNOEJLPH_NEFFJJAPAOP>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_NEFFJJAPAOP>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_NEFFJJAPAOP>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_NEFFJJAPAOP>_get_Current__
                );
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_NEFFJJAPAOP>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Count__
                );
    DAT_0456845f = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pCVar3 = (__this->fields)._MPABEMCEHCL_k__BackingField;
  if ((pCVar3 != (CAAJMGKIPIE_o *)0x0) &&
     (pSVar4 = (pCVar3->fields).EPIHANAMOIN,
     pSVar4 != (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)) {
    DJNBJHPDKDP__LJCDLMMMOGD<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).JMAPJDAAABE,
               (pSVar4->fields)._size,Method_DJNBJHPDKDP_LJCDLMMMOGD<NGKBNOEJLPH_NEFFJJAPAOP>__);
    __this_00 = (__this->fields).JMAPJDAAABE;
    if (__this_00 != (System_Collections_Generic_List_NGKBNOEJLPH_NEFFJJAPAOP__o *)0x0) {
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
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_NEFFJJAPAOP>_Dispose__
                    );
                    /* try { // try from 0359b974 to 0369b99b has its CatchHandler @ 0359bba0 */
          return;
        }
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar5 = LIIFLGALGNK__FDIGGDLGKOI((MethodInfo *)0x0);
        if (pIVar1 == (Il2CppObject *)0x0) break;
        *(float *)((long)&pIVar1[1].klass + 4) = fVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

