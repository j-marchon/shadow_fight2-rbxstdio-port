// Core.Appsflyer.BanzaiAppsFlyer$$AKNCLCJGNHB @ RVA 0x35C82F0

void Core_Appsflyer_BanzaiAppsFlyer__AKNCLCJGNHB
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  System_String_o *IPOFCPDLEIO;
  KPKMEEIPCJA_o *pKVar1;
  System_String_o *KJANCFIINNI;
  MJPJANJNDCI_KDKLBPLOHJL__o *pMVar2;
  ushort uVar3;
  ushort uVar4;
  VirtualInvokeData *pVVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  HMEJGGGPIPL_o *pHVar8;
  MJPJANJNDCI_KDKLBPLOHJL__c *pMVar9;
  KPKMEEIPCJA_c *pKVar10;
  ulong uVar11;
  int32_t *piVar12;
  
  if ((DAT_04568f79 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_ODJCOCHEAIN__);
    FUN_01bab630(&KPKMEEIPCJA_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<KDKLBPLOHJL>_TypeInfo);
    DAT_04568f79 = 1;
    method = extraout_x1;
  }
  pHVar8 = (__this->fields).KAPMLAAGDAI;
  if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
    IPOFCPDLEIO = (pHVar8->fields).HLJHFHJDNKL;
    KJANCFIINNI = (pHVar8->fields).FBCCIDDHLPP;
    if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AppsFlyerSDK_AppsFlyer_TypeInfo,method);
    }
    AppsFlyerSDK_AppsFlyer__initSDK
              (IPOFCPDLEIO,KJANCFIINNI,(UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    pHVar8 = (__this->fields).KAPMLAAGDAI;
    if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
      AppsFlyerSDK_AppsFlyer__setIsDebug((pHVar8->fields).KGIDNENGGEO,(MethodInfo *)0x0);
      pHVar8 = (__this->fields).KAPMLAAGDAI;
      if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
        Core_Appsflyer_BanzaiAppsFlyer__EBIAIHOGEEG((pHVar8->fields).OGEJHINLEND,method_00);
        pHVar8 = (__this->fields).KAPMLAAGDAI;
        if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
          if ((pHVar8->fields).BOGHJANCLLO == (KPKMEEIPCJA_o *)0x0) {
            Core_Appsflyer_BanzaiAppsFlyer__ODJCOCHEAIN(__this,method_01);
            return;
          }
          if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          AppsFlyerSDK_AppsFlyer__enableTCFDataCollection(true,(MethodInfo *)0x0);
          pHVar8 = (__this->fields).KAPMLAAGDAI;
          if (pHVar8 != (HMEJGGGPIPL_o *)0x0) {
            pKVar1 = (pHVar8->fields).BOGHJANCLLO;
            pMVar2 = (pHVar8->fields).AEPDHPHNMMG;
            if (pMVar2 == (MJPJANJNDCI_KDKLBPLOHJL__o *)0x0) {
              uVar6 = 0;
            }
            else {
              pMVar9 = pMVar2->klass;
              uVar3._0_1_ = (pMVar9->_2).rank;
              uVar3._1_1_ = (pMVar9->_2).minimumAlignment;
              uVar11 = (ulong)uVar3;
              if (uVar11 != 0) {
                piVar12 = &((pMVar9->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                      (Il2CppClass *)MJPJANJNDCI<KDKLBPLOHJL>_TypeInfo) {
                    pVVar5 = pMVar9->vtable + *piVar12;
                    goto LAB_036c8470;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              pVVar5 = (VirtualInvokeData *)FUN_01b81914(pMVar2,MJPJANJNDCI<KDKLBPLOHJL>_TypeInfo,0)
              ;
LAB_036c8470:
              uVar6 = (*pVVar5->methodPtr)(pMVar2,pVVar5->method);
            }
            uVar7 = thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pKVar1 != (KPKMEEIPCJA_o *)0x0) {
              pKVar10 = pKVar1->klass;
              uVar4._0_1_ = (pKVar10->_2).rank;
              uVar4._1_1_ = (pKVar10->_2).minimumAlignment;
              uVar11 = (ulong)uVar4;
              if (uVar11 != 0) {
                piVar12 = &((pKVar10->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                      (Il2CppClass *)KPKMEEIPCJA_TypeInfo) {
                    pVVar5 = pKVar10->vtable + (*piVar12 + 3);
                    goto LAB_036c84f8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar1,KPKMEEIPCJA_TypeInfo,3);
LAB_036c84f8:
                    /* WARNING: Could not recover jumptable at 0x036c8514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pVVar5->methodPtr)(pKVar1,uVar6,uVar7,pVVar5->method);
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

