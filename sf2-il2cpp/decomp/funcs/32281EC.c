// PLCCJCFAFKA$$PKMBANJNKBC @ RVA 0x32281EC

bool PLCCJCFAFKA__PKMBANJNKBC(PLCCJCFAFKA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LGABIPDBOEP__o *__this_00;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *pIVar2;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *pAVar3;
  int iVar4;
  Il2CppClass *IKKAMAMLIKA;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566f85 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGABIPDBOEP>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566f85 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).GFBNJPMOEKD;
  if (__this_00 == (System_Collections_Generic_List_LGABIPDBOEP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LGABIPDBOEP>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_MoveNext__);
    if (!bVar1) {
      iVar4 = 6;
      goto LAB_03328330;
    }
    if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IKKAMAMLIKA = local_60.fields._current[3].klass;
    if (IKKAMAMLIKA == (Il2CppClass *)0x0) break;
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (pAVar3->fields).OIDPLCLELEN;
    if (__this_01 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar2 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,(HOOAAGABMBL_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
  } while (pIVar2 != (IGFGDDANEPE_o *)0x0);
  iVar4 = 5;
LAB_03328330:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_Dispose__);
  return iVar4 != 5;
}

