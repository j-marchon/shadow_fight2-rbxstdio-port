// GGHCLMEFIGO$$PMOCJINLLOF @ RVA 0x33B5A0C

bool GGHCLMEFIGO__PMOCJINLLOF(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  Il2CppObject *EIKFGOCCOIE;
  bool bVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567d6f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567d6f = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this = NLPJLHOEAOE__GMJMEKENPAP(IKKAMAMLIKA,true,(MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    EIKFGOCCOIE = local_38.fields._current;
    if (!bVar1) {
      bVar1 = false;
      iVar2 = 5;
      goto LAB_034b5b28;
    }
    if ((HEFOANCOHDC_o *)local_38.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (((HEFOANCOHDC_Fields *)((long)local_38.fields._current + 0x10))->OCABLLPNEGL != 0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = MGNPHCAAEIO__DODJBGHCIHD((HEFOANCOHDC_o *)EIKFGOCCOIE,(MethodInfo *)0x0);
  iVar2 = 4;
LAB_034b5b28:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
  return (bool)(bVar1 & iVar2 == 4);
}

