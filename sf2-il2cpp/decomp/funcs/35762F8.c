// Core.Network.ServerProvider$$CheckLedger @ RVA 0x35762F8

void Core_Network_ServerProvider__CheckLedger
               (Core_Network_ServerProvider_o *__this,System_String_o *CJFAPGEEPLM,
               System_Action_bool__string__object__o *KCPFFLHCCIN,int32_t MPANAFCMKEB,
               MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  ServerProviderBase_BNPEHNICKPJ_o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  BKMILGLGFCM_IFBNAEMJLJL_o *pBVar7;
  UnityEngine_WWWForm_o *OFOIILMAIPG;
  System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF;
  PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *__this_01;
  BKMILGLGFCM_o *pBVar8;
  MOBODMIBMKA_o *pMVar9;
  VirtualInvokeData *pVVar10;
  MOBODMIBMKA_c *pMVar11;
  ulong uVar12;
  int32_t *piVar13;
  int32_t local_64;
  
  if ((DAT_04568c8b & 1) == 0) {
    FUN_01bab630(&System_Action<DMKKAPNMDKJ>_TypeInfo);
                    /* try { // try from 03676348 to 03776727 has its CatchHandler @ 03676348
                       catch() { ... } // from try @ 03676348 with catch @ 03676348
                       catch() { ... } // from try @ 03676b64 with catch @ 03676348
                       catch() { ... } // from try @ 03676bf0 with catch @ 03676348
                       catch() { ... } // from try @ 03676e28 with catch @ 03676348
                       catch() { ... } // from try @ 03676e60 with catch @ 03676348
                       catch() { ... } // from try @ 03676f50 with catch @ 03676348
                       catch() { ... } // from try @ 03676f64 with catch @ 03676348
                       catch() { ... } // from try @ 03676fb8 with catch @ 03676348
                       catch() { ... } // from try @ 03677004 with catch @ 03676348
                       catch() { ... } // from try @ 036770cc with catch @ 03676348 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_928);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_929);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_930);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_931);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_932);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_933);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_934);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_935);
    FUN_01bab630(&ServerProviderBase_BNPEHNICKPJ_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_DAEOHFJJKLG__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GIBOBFHPAFE_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&MOBODMIBMKA_TypeInfo);
    FUN_01bab630(&Method_Core_Network_ServerProvider_OKCOFKOBFBM_DOLLEDCCGBH__);
    FUN_01bab630(&Core_Network_ServerProvider_OKCOFKOBFBM_TypeInfo);
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c8b = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(Core_Network_ServerProvider_OKCOFKOBFBM_TypeInfo);
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
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_928,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_929,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_930,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_931,(MethodInfo *)0x0);
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (__this_00 != (ServerProviderBase_BNPEHNICKPJ_o *)0x0) {
      ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                (__this_00,pSVar5,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_932,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_933,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pSVar6 = HLIDLFKDMHG__CJGIKJBCAII((MethodInfo *)0x0);
      ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                (__this_00,pSVar5,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_934,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_935,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pSVar6 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      pSVar5 = System_String__Concat(pSVar5,pSVar6,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      pBVar7 = BKMILGLGFCM_IFBNAEMJLJL__EOHMFJFFFIN((MethodInfo *)0x0);
      if (pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
        pBVar7 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
                 PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                           ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar7,CJFAPGEEPLM,
                            Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
        if ((ServerProviderBase_BNPEHNICKPJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(ServerProviderBase_BNPEHNICKPJ_TypeInfo);
        }
        OFOIILMAIPG = ServerProviderBase_BNPEHNICKPJ__ALBJPLAPOBO(__this_00,(MethodInfo *)0x0);
        if (pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
          pBVar7 = BKMILGLGFCM_IFBNAEMJLJL__EMCCAHPOFDA(pBVar7,OFOIILMAIPG,(MethodInfo *)0x0);
          BLMFLPJJMPF = (System_Action_DMKKAPNMDKJ__o *)
                        thunk_FUN_01bda818(System_Action<DMKKAPNMDKJ>_TypeInfo);
          System_Action<object>___ctor();
          if (pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
            pBVar7 = BKMILGLGFCM_IFBNAEMJLJL__JLDAALDPGIE(pBVar7,BLMFLPJJMPF,(MethodInfo *)0x0);
                    /* try { // try from 03676728 to 0377674f has its CatchHandler @ 03677020 */
            local_64 = MPANAFCMKEB;
            pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(GIBOBFHPAFE_TypeInfo,&local_64);
            if (((pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) &&
                (__this_01 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                             PDBDELCMKJG_DGCHKODLPJG<object>__DAEOHFJJKLG
                                       ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar7,pIVar2,
                                        Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_DAEOHFJJKLG__
                                       ), __this_01 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0))
               && (pBVar7 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
                            PDBDELCMKJG_DGCHKODLPJG<object>__IDIJAFLLLJG
                                      (__this_01,
                                       (System_TimeSpan_o)
                                       (Core_Network_ServerProvider_TypeInfo->static_fields->
                                       KBKPDCHPDAD).fields._ticks,
                                       Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__
                                      ), pBVar7 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) {
              pBVar8 = BKMILGLGFCM_IFBNAEMJLJL__HFMIGKLONNL(pBVar7,(MethodInfo *)0x0);
                    /* try { // try from 03676790 to 037767bb has its CatchHandler @ 0367701c */
              if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
              }
              pMVar9 = IFAMAAGNCBJ__IAPGOOIGJLK((MethodInfo *)0x0);
              if (pMVar9 != (MOBODMIBMKA_o *)0x0) {
                pMVar11 = pMVar9->klass;
                uVar1._0_1_ = (pMVar11->_2).rank;
                uVar1._1_1_ = (pMVar11->_2).minimumAlignment;
                uVar12 = (ulong)uVar1;
                if (uVar12 != 0) {
                    /* try { // try from 036767d0 to 037767d3 has its CatchHandler @ 0367700c */
                  piVar13 = &((pMVar11->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                        (Il2CppClass *)MOBODMIBMKA_TypeInfo) {
                      pVVar10 = pMVar11->vtable + *piVar13;
                      goto LAB_03676808;
                    }
                    uVar12 = uVar12 - 1;
                    /* try { // try from 036767e4 to 037767eb has its CatchHandler @ 03677018 */
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                pVVar10 = (VirtualInvokeData *)FUN_01b81914(pMVar9,MOBODMIBMKA_TypeInfo,0);
LAB_03676808:
                    /* try { // try from 03676808 to 0377680f has its CatchHandler @ 03676bcc */
                (*pVVar10->methodPtr)(pMVar9,pBVar8,pVVar10->method);
                    /* try { // try from 03676824 to 03776827 has its CatchHandler @ 03676b90 */
                    /* try { // try from 03676828 to 0377682f has its CatchHandler @ 03676bc8 */
                return;
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

