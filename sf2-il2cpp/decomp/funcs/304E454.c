// POFFJOJIHAF$$MCAIKOPDBBC @ RVA 0x304E454

void POFFJOJIHAF__MCAIKOPDBBC(POFFJOJIHAF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  UnityEngine_Object_o *target;
  Core_Appsflyer_BanzaiAppsFlyer_o *pCVar3;
  HMEJGGGPIPL_o *__this_00;
  System_String_o *pSVar4;
  MDHCGLMBHIG_o *pMVar5;
  VirtualInvokeData *pVVar6;
  EAPFCMCJBAG_o *pEVar7;
  CPHBJEDCAEO_o *pCVar8;
  MethodInfo *extraout_x1;
  MDHCGLMBHIG_c *pMVar9;
  ulong uVar10;
  int32_t *piVar11;
  Core_Appsflyer_BanzaiAppsFlyer_o **ppCVar12;
  HMEJGGGPIPL_o **ppHVar13;
  NOCMDCMLGPN_o **ppNVar14;
  
  if ((DAT_04565e2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<BanzaiAppsFlyer>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&HMEJGGGPIPL_TypeInfo);
    FUN_01bab630(&MDHCGLMBHIG_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_3024);
    DAT_04565e2f = 1;
    method = extraout_x1;
  }
  target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo,method);
  UnityEngine_GameObject___ctor
            ((UnityEngine_GameObject_o *)target,StringLiteral_3024,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
  if (target != (UnityEngine_Object_o *)0x0) {
    pCVar3 = (Core_Appsflyer_BanzaiAppsFlyer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       ((UnityEngine_GameObject_o *)target,
                        Method_UnityEngine_GameObject_AddComponent<BanzaiAppsFlyer>__);
    ppCVar12 = &(__this->fields).KEIPGNFOHND;
    *ppCVar12 = pCVar3;
    thunk_FUN_01c20e04(ppCVar12,pCVar3);
    pCVar3 = *ppCVar12;
    __this_00 = (HMEJGGGPIPL_o *)thunk_FUN_01bda818(HMEJGGGPIPL_TypeInfo);
    HMEJGGGPIPL___ctor(__this_00,(MethodInfo *)0x0);
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = BHEDGAKGKPO__PPEONBMJGPL((MethodInfo *)0x0);
    if (__this_00 != (HMEJGGGPIPL_o *)0x0) {
      (__this_00->fields).HLJHFHJDNKL = pSVar4;
      thunk_FUN_01c20e04();
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (iVar2 == 8) {
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = BHEDGAKGKPO__LDGEKDAPFGB((MethodInfo *)0x0);
      }
      else {
        pSVar4 = string_TypeInfo->static_fields->Empty;
      }
      (__this_00->fields).FBCCIDDHLPP = pSVar4;
      thunk_FUN_01c20e04();
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = EOAOCPLIKOI__IEBPOGDJCFL((MethodInfo *)0x0);
      (__this_00->fields).OGEJHINLEND = pSVar4;
      thunk_FUN_01c20e04();
      (__this_00->fields).KGIDNENGGEO = false;
      ppNVar14 = &(__this_00->fields).CKIDHLLMFHL;
      *ppNVar14 = (__this->fields).BMFCDPMHDGB;
      thunk_FUN_01c20e04(ppNVar14);
      (__this_00->fields).INIMAINJABF = false;
      (__this_00->fields).GJBFHGOOFBF = false;
      (__this_00->fields).JJDKCNBKPBE = false;
      (__this_00->fields).EBPAPDBEPKM = true;
      pMVar5 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pMVar5 != (MDHCGLMBHIG_o *)0x0) {
        pMVar9 = pMVar5->klass;
        uVar1._0_1_ = (pMVar9->_2).rank;
        uVar1._1_1_ = (pMVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pMVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)MDHCGLMBHIG_TypeInfo) {
              pVVar6 = pMVar9->vtable + (*piVar11 + 2);
              goto LAB_0314e6e8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pMVar5,MDHCGLMBHIG_TypeInfo,2);
LAB_0314e6e8:
        pEVar7 = (EAPFCMCJBAG_o *)(*pVVar6->methodPtr)(pMVar5,pVVar6->method);
        (__this_00->fields).FHGJNLGDAMD = pEVar7;
        thunk_FUN_01c20e04();
        pCVar8 = LLDOMGIEPNE__AIHNLLGNBLC((MethodInfo *)0x0);
        (__this_00->fields).LODCOBPDCIB = pCVar8;
        thunk_FUN_01c20e04();
        (__this_00->fields).BOGHJANCLLO = (__this->fields).NBFKLJLECCK;
        thunk_FUN_01c20e04();
        (__this_00->fields).AEPDHPHNMMG = (__this->fields).KIHNNLJHPHC;
        thunk_FUN_01c20e04();
        if (pCVar3 != (Core_Appsflyer_BanzaiAppsFlyer_o *)0x0) {
          ppHVar13 = &(pCVar3->fields).KAPMLAAGDAI;
          *ppHVar13 = __this_00;
          thunk_FUN_01c20e04(ppHVar13,__this_00);
          if (*ppCVar12 != (Core_Appsflyer_BanzaiAppsFlyer_o *)0x0) {
            Core_Appsflyer_BanzaiAppsFlyer__Initialize(*ppCVar12,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

