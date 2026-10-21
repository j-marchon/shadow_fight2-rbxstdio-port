// TypeDefIndex 462
// Namespace: 
// [CompilerGenerated]
// private sealed class ServerProvider.COIAGMGJOJF
// Fields:
//   public string p_md5; // 0x10
//   public ServerProvider <>4__this; // 0x18
//   public Dictionary<string, ServerProviderBase.ECJOKKDKDGB> p_dumpFiles; // 0x20
//   public Action<bool, JSONNode, object> p_delegate; // 0x28

// ===== public void .ctor()  [RVA 0x35790F0]
// Core.Network.ServerProvider.COIAGMGJOJF$$.ctor @ RVA 0x35790F0

void Core_Network_ServerProvider_COIAGMGJOJF___ctor
               (Core_Network_ServerProvider_COIAGMGJOJF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void MDBLGJAGJKE()  [RVA 0x357E8FC]
// Core.Network.ServerProvider.COIAGMGJOJF$$MDBLGJAGJKE @ RVA 0x357E8FC

void Core_Network_ServerProvider_COIAGMGJOJF__MDBLGJAGJKE
               (Core_Network_ServerProvider_COIAGMGJOJF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  ServerProviderBase_BNPEHNICKPJ_o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Core_Network_ServerProvider_o *__this_01;
  Il2CppObject *message;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  BKMILGLGFCM_IFBNAEMJLJL_o *pBVar7;
  UnityEngine_WWWForm_o *OFOIILMAIPG;
  System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF;
  PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *__this_03;
  BKMILGLGFCM_o *pBVar8;
  MOBODMIBMKA_o *pMVar9;
  VirtualInvokeData *pVVar10;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Roster_o *pAVar11;
  MOBODMIBMKA_c *pMVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  int32_t local_54;
  
  if ((DAT_04568cb9 & 1) == 0) {
    FUN_01bab630(&System_Action<DMKKAPNMDKJ>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1124);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1125);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1126);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1127);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1128);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1129);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1130);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1131);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1132);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1133);
    FUN_01bab630(&ServerProviderBase_BNPEHNICKPJ_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_DAEOHFJJKLG__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ServerProviderBase_ECJOKKDKDGB>_GetEnumerator__
                );
    FUN_01bab630(&Method_EHGPENHOICN_GCHJCMGHILN__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ServerProviderBase_ECJOKKDKDGB>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ServerProviderBase_ECJOKKDKDGB>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ServerProviderBase_ECJOKKDKDGB>_get_Current__
                );
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_ServerProviderBase_ECJOKKDKDGB>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_ServerProviderBase_ECJOKKDKDGB>_get_Value__
                );
    FUN_01bab630(&MOBODMIBMKA_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568cb9 = 1;
    method = extraout_x1;
  }
  local_54 = 0;
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (ServerProviderBase_BNPEHNICKPJ_o *)
              thunk_FUN_01bda818(ServerProviderBase_BNPEHNICKPJ_TypeInfo,method);
  ServerProviderBase_BNPEHNICKPJ___ctor
            (__this_00,(System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1124,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1125,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1126,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1127,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (__this_00 != (ServerProviderBase_BNPEHNICKPJ_o *)0x0) {
    ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
              (__this_00,pSVar5,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1128,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1129,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
              (__this_00,pSVar5,(Il2CppObject *)(__this->fields).p_md5,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1130,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1131,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar11 != (Roster_o *)0x0) {
      method_01 = (MethodInfo *)(pAVar11->fields).super.GEONGCPLLFJ;
      ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                (__this_00,pSVar5,(Il2CppObject *)method_01,(MethodInfo *)0x0);
      if ((__this->fields).__4__this != (Core_Network_ServerProvider_o *)0x0) {
        Core_Network_ServerProvider__IBMDMGOLALI(__this_01,__this_00,method_01);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1132,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1133,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar11 != (Roster_o *)0x0) {
          local_54 = Roster__EOEAKGGDBFH(pAVar11,(MethodInfo *)0x0);
          pSVar6 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
          ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                    (__this_00,pSVar5,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          Core_Network_ServerProvider__IPKBJDJNAOM(__this_00,method_00);
          message = (Il2CppObject *)
                    (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
          __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).p_dumpFiles;
          if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                      (&local_b8,__this_02,
                       Method_System_Collections_Generic_Dictionary<string,_ServerProviderBase_ECJOKKDKDGB>_GetEnumerator__
                      );
            local_90.fields._version = local_b8.fields._version;
            local_90.fields._index = local_b8.fields._index;
            local_90.fields._dictionary = local_b8.fields._dictionary;
            local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
            local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
            local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
            local_90.fields._36_4_ = local_b8.fields._36_4_;
            while (bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                                     (&local_90,
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_ServerProviderBase_ECJOKKDKDGB>_MoveNext__
                                     ), bVar2) {
              ServerProviderBase_BNPEHNICKPJ__NPLNHOJAFCE
                        (__this_00,(System_String_o *)local_90.fields._current.fields.key,
                         (ServerProviderBase_ECJOKKDKDGB_o *)local_90.fields._current.fields.value,
                         (MethodInfo *)0x0);
            }
            System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                      (&local_90,
                       Method_System_Collections_Generic_Dictionary_Enumerator<string,_ServerProviderBase_ECJOKKDKDGB>_Dispose__
                      );
          }
          pBVar7 = BKMILGLGFCM_IFBNAEMJLJL__EOHMFJFFFIN((MethodInfo *)0x0);
          if (DAT_04568d27 == '\0') {
            FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
            DAT_04568d27 = '\x01';
          }
          if (pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
            pBVar7 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
                     PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                               ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar7,
                                Core_Network_ServerProvider_TypeInfo->static_fields->
                                _DHIMEKHHLLB_k__BackingField,
                                Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__
                               );
            if ((ServerProviderBase_BNPEHNICKPJ_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(ServerProviderBase_BNPEHNICKPJ_TypeInfo);
            }
            OFOIILMAIPG = ServerProviderBase_BNPEHNICKPJ__ALBJPLAPOBO(__this_00,(MethodInfo *)0x0);
            if (pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
              pBVar7 = BKMILGLGFCM_IFBNAEMJLJL__EMCCAHPOFDA(pBVar7,OFOIILMAIPG,(MethodInfo *)0x0);
              BLMFLPJJMPF = (System_Action_DMKKAPNMDKJ__o *)
                            thunk_FUN_01bda818(System_Action<DMKKAPNMDKJ>_TypeInfo);
              System_Action<object>___ctor();
              if ((((pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) &&
                   (pBVar7 = BKMILGLGFCM_IFBNAEMJLJL__JLDAALDPGIE
                                       (pBVar7,BLMFLPJJMPF,(MethodInfo *)0x0),
                   pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) &&
                  (__this_03 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                               PDBDELCMKJG_DGCHKODLPJG<object>__DAEOHFJJKLG
                                         ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar7,
                                          (Il2CppObject *)(__this->fields).p_delegate,
                                          Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_DAEOHFJJKLG__
                                         ), __this_03 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0)
                  ) && (pBVar7 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
                                 PDBDELCMKJG_DGCHKODLPJG<object>__IDIJAFLLLJG
                                           (__this_03,
                                            (System_TimeSpan_o)
                                            (Core_Network_ServerProvider_TypeInfo->static_fields->
                                            KBKPDCHPDAD).fields._ticks,
                                            Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__
                                           ), pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) {
                pBVar8 = BKMILGLGFCM_IFBNAEMJLJL__HFMIGKLONNL(pBVar7,(MethodInfo *)0x0);
                if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
                }
                pMVar9 = IFAMAAGNCBJ__IAPGOOIGJLK((MethodInfo *)0x0);
                if (pMVar9 != (MOBODMIBMKA_o *)0x0) {
                  pMVar12 = pMVar9->klass;
                  uVar1._0_1_ = (pMVar12->_2).rank;
                  uVar1._1_1_ = (pMVar12->_2).minimumAlignment;
                  uVar13 = (ulong)uVar1;
                  if (uVar13 != 0) {
                    piVar14 = &((pMVar12->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                          (Il2CppClass *)MOBODMIBMKA_TypeInfo) {
                        pVVar10 = pMVar12->vtable + *piVar14;
                        goto LAB_0367efe8;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  pVVar10 = (VirtualInvokeData *)FUN_01b81914(pMVar9,MOBODMIBMKA_TypeInfo,0);
LAB_0367efe8:
                  (*pVVar10->methodPtr)(pMVar9,pBVar8,pVVar10->method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

