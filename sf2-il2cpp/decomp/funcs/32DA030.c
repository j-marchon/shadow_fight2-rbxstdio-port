// NOMBKAHPOHM$$HOMDONPDNEG @ RVA 0x32DA030

void NOMBKAHPOHM__HOMDONPDNEG(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  FPPKHNNABAD_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Il2CppClass *item;
  ACHLOMELAJE_o *pAVar4;
  GGHCLMEFIGO_o *pGVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045675aa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675aa = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
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
  if (((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
      (pGVar5 = (pAVar4->fields).OIDPLCLELEN, pGVar5 == (GGHCLMEFIGO_o *)0x0)) ||
     (__this_00 = (pGVar5->fields).DPOPJKJLDEE,
     __this_00 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__)
      ;
                    /* try { // try from 033da1dc to 034da203 has its CatchHandler @ 033da69c */
      return;
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (__this->fields).NDBPOFMECGL;
    if (__this_01 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = local_50.fields._current[1].klass;
    pSVar6 = (__this_01->fields)._COIPKAKHDFP_k__BackingField;
    *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) =
         *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
    if (pSVar6 == (System_String_o *)0x0) break;
    uVar1 = *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField;
    if (uVar1 < *(uint *)&pSVar6[1].klass) {
      *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
      (&pSVar6[1].monitor)[(int)uVar1] = item;
      thunk_FUN_01c20e04(&pSVar6[1].monitor + (int)uVar1);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

