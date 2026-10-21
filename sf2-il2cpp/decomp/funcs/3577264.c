// Core.Network.ServerProvider$$PurchaseStatistics @ RVA 0x3577264

void Core_Network_ServerProvider__PurchaseStatistics
               (Core_Network_ServerProvider_o *__this,CFEFALDOEMD_o *NDPJAEAKNPP,
               System_Action_bool__string__object__o *BLMFLPJJMPF,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  ServerProviderBase_BNPEHNICKPJ_o *__this_00;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  BKMILGLGFCM_IFBNAEMJLJL_o *pBVar9;
  UnityEngine_WWWForm_o *OFOIILMAIPG;
  System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF_00;
  PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *__this_01;
  BKMILGLGFCM_o *pBVar10;
  MOBODMIBMKA_o *pMVar11;
  VirtualInvokeData *pVVar12;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MOBODMIBMKA_c *pMVar13;
  ulong uVar14;
  int32_t *piVar15;
  Il2CppClass *local_88;
  void *local_80;
  Il2CppClass *local_78;
  void *local_70;
  undefined4 local_64;
  
  if ((DAT_04568c91 & 1) == 0) {
    FUN_01bab630(&System_Action<DMKKAPNMDKJ>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_958);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_959);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_960);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_961);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_962);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_963);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_964);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_965);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_966);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_967);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_968);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_969);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_970);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_971);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_972);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_973);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_974);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_975);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_976);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_977);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_978);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_979);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_980);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_981);
    FUN_01bab630(&ServerProviderBase_BNPEHNICKPJ_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_DAEOHFJJKLG__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_JsonUtility_FromJson<ServerProvider_PaymentData>__);
    FUN_01bab630(&MOBODMIBMKA_TypeInfo);
    FUN_01bab630(&Method_Core_Network_ServerProvider_NIODPIPICOM_GNFMEHOOBLO__);
    FUN_01bab630(&Core_Network_ServerProvider_NIODPIPICOM_TypeInfo);
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568c91 = 1;
  }
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(Core_Network_ServerProvider_NIODPIPICOM_TypeInfo);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[1].klass = (Il2CppClass *)BLMFLPJJMPF;
    thunk_FUN_01c20e04(pIVar3 + 1,BLMFLPJJMPF);
    if (NDPJAEAKNPP != (CFEFALDOEMD_o *)0x0) {
      bVar2 = System_String__IsNullOrEmpty
                        ((NDPJAEAKNPP->fields)._FBNKBJAJBJF_k__BackingField,(MethodInfo *)0x0);
      pIVar3 = (Il2CppObject *)0x0;
      if (!bVar2) {
        pIVar3 = UnityEngine_JsonUtility__FromJson<object>
                           ((NDPJAEAKNPP->fields)._FBNKBJAJBJF_k__BackingField,
                            Method_UnityEngine_JsonUtility_FromJson<ServerProvider_PaymentData>__);
      }
      __this_00 = (ServerProviderBase_BNPEHNICKPJ_o *)
                  thunk_FUN_01bda818(ServerProviderBase_BNPEHNICKPJ_TypeInfo);
      ServerProviderBase_BNPEHNICKPJ___ctor
                (__this_00,(System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_958,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_959,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_960,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_961,(MethodInfo *)0x0
                );
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (__this_00 != (ServerProviderBase_BNPEHNICKPJ_o *)0x0) {
        ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                  (__this_00,pSVar6,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_962,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_963,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                  (__this_00,pSVar6,
                   (Il2CppObject *)(NDPJAEAKNPP->fields)._CIEBCKIBJHL_k__BackingField,
                   (MethodInfo *)0x0);
        bVar2 = CFEFALDOEMD__NCOGGCLHEEE(NDPJAEAKNPP,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_964,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_965,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar7 = (NDPJAEAKNPP->fields)._FDNPEHBNDBI_k__BackingField;
          if (pSVar7 == (System_String_o *)0x0) goto LAB_03677cf0;
          pSVar7 = System_String__ToLower(pSVar7,(MethodInfo *)0x0);
          ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                    (__this_00,pSVar6,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_966,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_967,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                    (__this_00,pSVar6,
                     (Il2CppObject *)(NDPJAEAKNPP->fields)._MFEDPHDGAGE_k__BackingField,
                     (MethodInfo *)0x0);
        }
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_968,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_969,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar7 = CFEFALDOEMD__DNJGEMKEJIB(NDPJAEAKNPP,(MethodInfo *)0x0);
        ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                  (__this_00,pSVar6,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_970,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_971,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        local_70 = (void *)CONCAT44(local_70._4_4_,1);
        pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_70);
        ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO(__this_00,pSVar6,pIVar8,(MethodInfo *)0x0);
        method_00 = extraout_x1;
        if (pIVar3 != (Il2CppObject *)0x0) {
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_972,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_973,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          local_64 = *(undefined4 *)&pIVar3[1].klass;
          pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
          ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO(__this_00,pSVar6,pIVar8,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_974,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_975,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          local_70 = pIVar3[1].monitor;
          pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_70);
          ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO(__this_00,pSVar6,pIVar8,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_976,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_977,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          local_78 = pIVar3[2].klass;
          pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_78);
          ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO(__this_00,pSVar6,pIVar8,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_978,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_979,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          local_80 = pIVar3[2].monitor;
          pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_80);
          ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO(__this_00,pSVar6,pIVar8,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_980,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_981,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          local_88 = pIVar3[3].klass;
          pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_88);
          ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO(__this_00,pSVar6,pIVar3,(MethodInfo *)0x0);
          method_00 = extraout_x1_00;
        }
        Core_Network_ServerProvider__IPKBJDJNAOM(__this_00,method_00);
        pIVar3 = (Il2CppObject *)
                 (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log(pIVar3,(MethodInfo *)0x0);
        pBVar9 = BKMILGLGFCM_IFBNAEMJLJL__EOHMFJFFFIN((MethodInfo *)0x0);
        if (DAT_04568d22 == '\0') {
          FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
          DAT_04568d22 = '\x01';
        }
        if (pBVar9 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
          pBVar9 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
                   PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                             ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar9,
                              Core_Network_ServerProvider_TypeInfo->static_fields->
                              _JJPIPNDJDDC_k__BackingField,
                              Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__)
          ;
          if ((ServerProviderBase_BNPEHNICKPJ_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(ServerProviderBase_BNPEHNICKPJ_TypeInfo);
          }
          OFOIILMAIPG = ServerProviderBase_BNPEHNICKPJ__ALBJPLAPOBO(__this_00,(MethodInfo *)0x0);
          if (pBVar9 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
            pBVar9 = BKMILGLGFCM_IFBNAEMJLJL__EMCCAHPOFDA(pBVar9,OFOIILMAIPG,(MethodInfo *)0x0);
            BLMFLPJJMPF_00 =
                 (System_Action_DMKKAPNMDKJ__o *)
                 thunk_FUN_01bda818(System_Action<DMKKAPNMDKJ>_TypeInfo);
            System_Action<object>___ctor();
            if ((((pBVar9 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) &&
                 (pBVar9 = BKMILGLGFCM_IFBNAEMJLJL__JLDAALDPGIE
                                     (pBVar9,BLMFLPJJMPF_00,(MethodInfo *)0x0),
                 pBVar9 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) &&
                (__this_01 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                             PDBDELCMKJG_DGCHKODLPJG<object>__DAEOHFJJKLG
                                       ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar9,
                                        (Il2CppObject *)NDPJAEAKNPP,
                                        Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_DAEOHFJJKLG__
                                       ), __this_01 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0))
               && (pBVar9 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
                            PDBDELCMKJG_DGCHKODLPJG<object>__IDIJAFLLLJG
                                      (__this_01,
                                       (System_TimeSpan_o)
                                       (Core_Network_ServerProvider_TypeInfo->static_fields->
                                       KBKPDCHPDAD).fields._ticks,
                                       Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__
                                      ), pBVar9 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) {
              pBVar10 = BKMILGLGFCM_IFBNAEMJLJL__HFMIGKLONNL(pBVar9,(MethodInfo *)0x0);
              if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
              }
              pMVar11 = IFAMAAGNCBJ__IAPGOOIGJLK((MethodInfo *)0x0);
              if (pMVar11 != (MOBODMIBMKA_o *)0x0) {
                pMVar13 = pMVar11->klass;
                uVar1._0_1_ = (pMVar13->_2).rank;
                uVar1._1_1_ = (pMVar13->_2).minimumAlignment;
                uVar14 = (ulong)uVar1;
                if (uVar14 != 0) {
                  piVar15 = &((pMVar13->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                        (Il2CppClass *)MOBODMIBMKA_TypeInfo) {
                      pVVar12 = pMVar13->vtable + *piVar15;
                      goto LAB_03677cc0;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                pVVar12 = (VirtualInvokeData *)FUN_01b81914(pMVar11,MOBODMIBMKA_TypeInfo,0);
LAB_03677cc0:
                (*pVVar12->methodPtr)(pMVar11,pBVar10,pVVar12->method);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03677cf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

