// NLPJLHOEAOE$$KKBIJDHJAFE @ RVA 0x31F7498

void NLPJLHOEAOE__KKBIJDHJAFE(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  Il2CppObject *MHOFCOHFCGL;
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566e14 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e14 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                             ), MHOFCOHFCGL = local_48.fields._current, bVar1) {
      method_00 = extraout_x1_00;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      NLPJLHOEAOE__KIMLAFOBHFI((AFFHKININGD_o *)MHOFCOHFCGL,method_00);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

