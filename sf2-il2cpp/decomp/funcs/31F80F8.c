// NLPJLHOEAOE$$OJDOCBFHNBN @ RVA 0x31F80F8

AFFHKININGD_o * NLPJLHOEAOE__OJDOCBFHNBN(DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  bool bVar1;
  NLPJLHOEAOE_c *method_00;
  NLPJLHOEAOE_o *pNVar2;
  System_Collections_Generic_List_AFFHKININGD__o *__this;
  DNELIPCHKLK_o *__this_00;
  OOMHDDBCBJP_o *pOVar3;
  AFFHKININGD_o *pAVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566dd3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dd3 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (DBIAAJNKHLH == (DNELIPCHKLK_o *)0x0) {
LAB_032f824c:
    pAVar4 = (AFFHKININGD_o *)0x0;
  }
  else {
    method_00 = NLPJLHOEAOE_TypeInfo;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)method_00);
    if ((pNVar2 == (NLPJLHOEAOE_o *)0x0) ||
       (__this = (pNVar2->fields).HDDNEKLMLMF,
       __this == (System_Collections_Generic_List_AFFHKININGD__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      pAVar4 = (AFFHKININGD_o *)local_50.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        method_01 = extraout_x1_00;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_01 = extraout_x1_01;
        }
        pOVar3 = NLPJLHOEAOE__JIOEHAPGADN(DBIAAJNKHLH,method_01);
        if (pOVar3 != (OOMHDDBCBJP_o *)0x0) {
          pAVar4 = (AFFHKININGD_o *)
                   (*(pOVar3->klass->vtable)._5_INCIBBGABCB.methodPtr)
                             (pOVar3,(DBIAAJNKHLH->fields).ANOPJEEGOLJ,
                              (pOVar3->klass->vtable)._5_INCIBBGABCB.method);
          return pAVar4;
        }
        goto LAB_032f824c;
      }
      if ((AFFHKININGD_o *)local_50.fields._current == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = ((AFFHKININGD_Fields *)((long)local_50.fields._current + 0x10))->KOILJHHCIEE;
      if (__this_00 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = DNELIPCHKLK__LFHPFJOAJIO(__this_00,DBIAAJNKHLH,(MethodInfo *)0x0);
    } while (!bVar1);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
  }
  return pAVar4;
}

