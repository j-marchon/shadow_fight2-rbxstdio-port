// HCAICJLDDJO$$IEALNGPAPAF @ RVA 0x339A6A0

int32_t HCAICJLDDJO__IEALNGPAPAF(HOOAAGABMBL_o *ANMFBABEMFD,MethodInfo *method)

{
  Il2CppObject *__this;
  bool bVar1;
  int32_t DPCEFBCDHPA;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *NKCMBEFHFII;
  DEKKGJNMFEB_o *__this_01;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567c75 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c75 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  iVar3 = 0;
  if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
       (__this_00 = (pAVar2->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
LAB_0349a874:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NKCMBEFHFII = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,ANMFBABEMFD,(MethodInfo *)0x0);
    if (NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) {
      iVar3 = 0;
    }
    else {
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if ((__this_01 == (DEKKGJNMFEB_o *)0x0) ||
         (__this_02 = DEKKGJNMFEB__NFKLPHNDMNO(__this_01,NKCMBEFHFII,(MethodInfo *)0x0),
         __this_02 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0)) goto LAB_0349a874;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
      iVar3 = 0;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__
                          );
        __this = local_48.fields._current;
        if (!bVar1) break;
        if ((GGLKHCAIGDI_o *)local_48.fields._current == (GGLKHCAIGDI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = GGLKHCAIGDI__DDAKFOBLNJL
                          ((GGLKHCAIGDI_o *)local_48.fields._current,NKCMBEFHFII,(MethodInfo *)0x0);
        if (bVar1) {
          DPCEFBCDHPA = IGFGDDANEPE__LGIMDOAMCNG(NKCMBEFHFII,(MethodInfo *)0x0);
          bVar1 = GGLKHCAIGDI__EJOADHBJICP
                            ((GGLKHCAIGDI_o *)__this,NKCMBEFHFII,DPCEFBCDHPA,(MethodInfo *)0x0);
          iVar3 = iVar3 + (uint)bVar1;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__)
      ;
    }
  }
  return iVar3;
}

