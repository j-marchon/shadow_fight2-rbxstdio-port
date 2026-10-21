// AGILEPNENOH$$CNNNGNLGHHJ @ RVA 0x30FE674

void AGILEPNENOH__CNNNGNLGHHJ(AGILEPNENOH_o *__this,bool EMJBGFAHADK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *pSVar2;
  int64_t CJNHFNHJHPE;
  ACHLOMELAJE_o *__this_00;
  Il2CppClass *pIVar3;
  int64_t val2;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045664ab & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045664ab = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).super.HDDNEKLMLMF;
  if (pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    CJNHFNHJHPE = 0;
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                             ), bVar1) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar3 = local_80.fields._current[2].klass;
      *(undefined4 *)((long)&local_80.fields._current[6].klass + 4) = 2;
      if ((pIVar3 != (Il2CppClass *)0x0) && (EMJBGFAHADK)) {
        val2 = *(int64_t *)&(pIVar3->_1).byval_arg.bits;
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CJNHFNHJHPE = System_Math__Max(CJNHFNHJHPE,val2,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    pSVar2 = (__this->fields).super.HDDNEKLMLMF;
    if (pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                               ), bVar1) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar3 = local_80.fields._current[2].klass;
        if (pIVar3 != (Il2CppClass *)0x0) {
          PAMEPBLOLPB__DKLPJPMNILO((PAMEPBLOLPB_o *)pIVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
          PAMEPBLOLPB__HHCDIDGFNHI((PAMEPBLOLPB_o *)pIVar3,0,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

