// ACHLOMELAJE$$DDKLAHEHGBG @ RVA 0x30612F4

int32_t ACHLOMELAJE__DDKLAHEHGBG(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  GGHCLMEFIGO_o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar4;
  HOOAAGABMBL_o *pHVar5;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565eca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11751);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565eca = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 == (ACHLOMELAJE_o *)0x0) {
    iVar6 = 0;
  }
  else {
    __this_00 = (pAVar4->fields).OIDPLCLELEN;
    if ((__this_00 == (GGHCLMEFIGO_o *)0x0) ||
       (__this_01 = GGHCLMEFIGO__IAHEDEMPGPE
                              (__this_00,StringLiteral_11751,StringLiteral_1,true,(MethodInfo *)0x0)
       , __this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    iVar6 = 0;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      pIVar1 = local_48.fields._current;
      if (!bVar2) break;
      if ((IGFGDDANEPE_o *)local_48.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = IGFGDDANEPE__LDJLMEFOMLG((IGFGDDANEPE_o *)local_48.fields._current,(MethodInfo *)0x0);
      if (0 < iVar3) {
        pHVar5 = ((IGFGDDANEPE_Fields *)((long)pIVar1 + 0x10))->PCBECBEFJOI;
        if (pHVar5 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar6 = iVar6 + (uint)(pHVar5->fields).BDGHEBINKCB;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
  }
  return iVar6;
}

