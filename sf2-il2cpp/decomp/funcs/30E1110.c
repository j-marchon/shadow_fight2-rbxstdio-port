// PKNBJJPHAKI$$PLJOFBGBAMK @ RVA 0x30E1110

void PKNBJJPHAKI__PLJOFBGBAMK
               (PKNBJJPHAKI_o *__this,GBJGJEGPHKD_o *BCKBBGCOMJD,bool CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_GBJGJEGPHKD__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  OLKKAIFGGAK_o *pOVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045663a2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GBJGJEGPHKD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GBJGJEGPHKD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GBJGJEGPHKD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GBJGJEGPHKD>_GetEnumerator__);
    DAT_045663a2 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DDOAJGPFCNB;
  if (__this_00 == (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GBJGJEGPHKD>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<GBJGJEGPHKD>_MoveNext__);
    if (!bVar1) goto LAB_031e11e0;
  } while ((GBJGJEGPHKD_o *)local_48.fields._current != BCKBBGCOMJD);
  if (BCKBBGCOMJD == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pOVar2 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
  if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = (pOVar2->fields).LDAKOINICNJ;
  if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
LAB_031e11e0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<GBJGJEGPHKD>_Dispose__);
  return;
}

