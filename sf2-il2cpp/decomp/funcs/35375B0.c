// EPFMFHDGMCE$$IIAACPBHHOA @ RVA 0x35375B0

void EPFMFHDGMCE__IIAACPBHHOA(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  EPFMFHDGMCE_o *pEVar2;
  EPFMFHDGMCE_JGKNDMCIPBN_o *LDJFHDMLJMO;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar3;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *pAVar4;
  NFGLEDADCGL_o *pNVar5;
  KJBGNIGNECD_o *pKVar6;
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_00;
  System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *__this_01;
  int32_t DFIBGGDJPLM;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568a9c & 1) == 0) {
    FUN_01bab630(&System_Action<KJBGNIGNECD_AHICALNEICM>_TypeInfo);
    FUN_01bab630(&Method_EPFMFHDGMCE_KONIOMKBHIP__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568a9c = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  EPFMFHDGMCE__IBJONJJDPNP(__this,method);
  pEVar2 = EPFMFHDGMCE__ICEPMHDMFLM(method_00);
  if ((pEVar2 != (EPFMFHDGMCE_o *)0x0) &&
     (__this_00 = (pEVar2->fields).IMFGEOBBNNA,
     __this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_80.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      DFIBGGDJPLM = 1;
      if (*(int *)&((local_80.fields._current[1].klass)->_1).namespaze != 1) {
        DFIBGGDJPLM = 2;
      }
      EPFMFHDGMCE__AIFILIDDBMG
                (__this,*(int32_t *)&local_80.fields._current[1].monitor,DFIBGGDJPLM,in_x3);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_Dispose__)
    ;
    pMVar3 = extraout_x1_00;
    if ((__this_00->fields)._size != 0) {
      pMVar3 = Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__;
      LDJFHDMLJMO = (EPFMFHDGMCE_JGKNDMCIPBN_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,0,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__
                              );
      EPFMFHDGMCE__KONIOMKBHIP(__this,LDJFHDMLJMO,pMVar3);
      pMVar3 = extraout_x1_01;
    }
    EPFMFHDGMCE__FMCAFEPAFDI(__this,pMVar3);
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
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
        (pNVar5 = (pAVar4->fields).CKJAGLDEMAE, pNVar5 != (NFGLEDADCGL_o *)0x0)) &&
       (pKVar6 = (pNVar5->fields).GMHDPMNODMF, pKVar6 != (KJBGNIGNECD_o *)0x0)) {
      __this_01 = (pKVar6->fields).GJBLBEALOBO;
      action = (System_Action_T__o *)
               thunk_FUN_01bda818(System_Action<KJBGNIGNECD_AHICALNEICM>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_01,action,
                   Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

