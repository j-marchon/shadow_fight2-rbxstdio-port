// Core.Network.ServerProvider$$SendGiveLogin @ RVA 0x357B504

void Core_Network_ServerProvider__SendGiveLogin
               (Core_Network_ServerProvider_o *__this,
               System_Action_bool__string__object__o *KCPFFLHCCIN,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  ServerProviderBase_BNPEHNICKPJ_o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *PMACBPAMPJA;
  System_String_o *CJNHFNHJHPE;
  BKMILGLGFCM_IFBNAEMJLJL_o *pBVar5;
  UnityEngine_WWWForm_o *OFOIILMAIPG;
  System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF;
  BKMILGLGFCM_o *pBVar6;
  MOBODMIBMKA_o *pMVar7;
  VirtualInvokeData *pVVar8;
  MOBODMIBMKA_c *pMVar9;
  ulong uVar10;
  int32_t *piVar11;
  
  if ((DAT_04568cac & 1) == 0) {
    FUN_01bab630(&System_Action<DMKKAPNMDKJ>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1086);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1087);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1088);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1089);
    FUN_01bab630(&ServerProviderBase_BNPEHNICKPJ_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Core_Network_ServerProvider_EDGKACBPFOA_OJGNNIJINII__);
    FUN_01bab630(&Core_Network_ServerProvider_EDGKACBPFOA_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&MOBODMIBMKA_TypeInfo);
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568cac = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(Core_Network_ServerProvider_EDGKACBPFOA_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)KCPFFLHCCIN;
    thunk_FUN_01c20e04(pIVar2 + 1,KCPFFLHCCIN);
    __this_00 = (ServerProviderBase_BNPEHNICKPJ_o *)
                thunk_FUN_01bda818(ServerProviderBase_BNPEHNICKPJ_TypeInfo);
    ServerProviderBase_BNPEHNICKPJ___ctor
              (__this_00,(System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1086,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1087,(MethodInfo *)0x0)
    ;
    PMACBPAMPJA = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1088,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1089,(MethodInfo *)0x0)
    ;
    CJNHFNHJHPE = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (__this_00 != (ServerProviderBase_BNPEHNICKPJ_o *)0x0) {
      ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                (__this_00,PMACBPAMPJA,(Il2CppObject *)CJNHFNHJHPE,(MethodInfo *)0x0);
      pIVar2 = (Il2CppObject *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log(pIVar2,(MethodInfo *)0x0);
      pBVar5 = BKMILGLGFCM_IFBNAEMJLJL__EOHMFJFFFIN((MethodInfo *)0x0);
      if (DAT_04568d22 == '\0') {
        FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
        DAT_04568d22 = '\x01';
      }
      if (pBVar5 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
        pBVar5 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
                 PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                           ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar5,
                            Core_Network_ServerProvider_TypeInfo->static_fields->
                            _JJPIPNDJDDC_k__BackingField,
                            Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
        if ((ServerProviderBase_BNPEHNICKPJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(ServerProviderBase_BNPEHNICKPJ_TypeInfo);
        }
        OFOIILMAIPG = ServerProviderBase_BNPEHNICKPJ__ALBJPLAPOBO(__this_00,(MethodInfo *)0x0);
        if (pBVar5 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
          pBVar5 = BKMILGLGFCM_IFBNAEMJLJL__EMCCAHPOFDA(pBVar5,OFOIILMAIPG,(MethodInfo *)0x0);
          BLMFLPJJMPF = (System_Action_DMKKAPNMDKJ__o *)
                        thunk_FUN_01bda818(System_Action<DMKKAPNMDKJ>_TypeInfo);
          System_Action<object>___ctor();
          if (((pBVar5 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) &&
              (pBVar5 = BKMILGLGFCM_IFBNAEMJLJL__JLDAALDPGIE(pBVar5,BLMFLPJJMPF,(MethodInfo *)0x0),
              pBVar5 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) &&
             (pBVar5 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
                       PDBDELCMKJG_DGCHKODLPJG<object>__IDIJAFLLLJG
                                 ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar5,
                                  (System_TimeSpan_o)
                                  (Core_Network_ServerProvider_TypeInfo->static_fields->KBKPDCHPDAD)
                                  .fields._ticks,
                                  Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__
                                 ), pBVar5 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) {
            pBVar6 = BKMILGLGFCM_IFBNAEMJLJL__HFMIGKLONNL(pBVar5,(MethodInfo *)0x0);
            if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
            }
            pMVar7 = IFAMAAGNCBJ__IAPGOOIGJLK((MethodInfo *)0x0);
            if (pMVar7 != (MOBODMIBMKA_o *)0x0) {
              pMVar9 = pMVar7->klass;
              uVar1._0_1_ = (pMVar9->_2).rank;
              uVar1._1_1_ = (pMVar9->_2).minimumAlignment;
              uVar10 = (ulong)uVar1;
              if (uVar10 != 0) {
                piVar11 = &((pMVar9->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                      (Il2CppClass *)MOBODMIBMKA_TypeInfo) {
                    pVVar8 = pMVar9->vtable + *piVar11;
                    goto LAB_0367b8d0;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              pVVar8 = (VirtualInvokeData *)FUN_01b81914(pMVar7,MOBODMIBMKA_TypeInfo,0);
LAB_0367b8d0:
                    /* WARNING: Could not recover jumptable at 0x0367b8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pVVar8->methodPtr)(pMVar7,pBVar6,pVVar8->method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

