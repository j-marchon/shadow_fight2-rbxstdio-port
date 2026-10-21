// NOMBKAHPOHM$$GAGPPNKKINC @ RVA 0x32D982C

void NOMBKAHPOHM__GAGPPNKKINC(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_AMJMGFCCAKN__o *__this_00;
  System_String_o *item;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  GGHCLMEFIGO_o *pGVar4;
  System_String_o *pSVar5;
  FPPKHNNABAD_o *__this_01;
  GGHCLMEFIGO_AHCHAFNJKIH_o *__this_02;
  ACHLOMELAJE_o *pAVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045675a8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_NOMBKAHPOHM_MBIEGCODNMB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<AMJMGFCCAKN>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_AddListener__);
    DAT_045675a8 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
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
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
      (pGVar4 = (pAVar6->fields).OIDPLCLELEN, pGVar4 != (GGHCLMEFIGO_o *)0x0)) &&
     (__this_00 = (pGVar4->fields).AAMHHEENLMC,
     __this_00 != (System_Collections_Generic_List_AMJMGFCCAKN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AMJMGFCCAKN>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_MoveNext__
                             ), bVar3) {
      if ((AMJMGFCCAKN_o *)local_70.fields._current == (AMJMGFCCAKN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (__this->fields).NDBPOFMECGL;
      item = AMJMGFCCAKN__FDPFMIPBLPH((AMJMGFCCAKN_o *)local_70.fields._current,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (__this_01 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar5 = (__this_01->fields)._COIPKAKHDFP_k__BackingField;
      *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) =
           *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
      if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField;
      if (uVar1 < *(uint *)&pSVar5[1].klass) {
        *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
        (&pSVar5[1].monitor)[(int)uVar1] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_Dispose__);
    pGVar4 = (pAVar6->fields).OIDPLCLELEN;
    if (pGVar4 != (GGHCLMEFIGO_o *)0x0) {
      __this_02 = (pGVar4->fields).MBIEGCODNMB;
      call = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<AMJMGFCCAKN>_TypeInfo);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (__this_02 != (GGHCLMEFIGO_AHCHAFNJKIH_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__AddListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call,
                   Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_AddListener__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

