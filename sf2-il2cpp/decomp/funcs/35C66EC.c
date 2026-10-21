// Core.Appsflyer.BanzaiAppsFlyer$$BLPABBKBKDK @ RVA 0x35C66EC

void Core_Appsflyer_BanzaiAppsFlyer__BLPABBKBKDK
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  HMEJGGGPIPL_o *pHVar4;
  NOCMDCMLGPN_c *pNVar5;
  ulong uVar6;
  int32_t *piVar7;
  NOCMDCMLGPN_o *pNVar8;
  
  if ((DAT_04568f63 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&NOCMDCMLGPN_TypeInfo);
    DAT_04568f63 = 1;
  }
  pHVar4 = (__this->fields).KAPMLAAGDAI;
  if ((pHVar4 != (HMEJGGGPIPL_o *)0x0) &&
     (pNVar8 = (pHVar4->fields).CKIDHLLMFHL, pNVar8 != (NOCMDCMLGPN_o *)0x0)) {
    pNVar5 = pNVar8->klass;
    uVar1._0_1_ = (pNVar5->_2).rank;
    uVar1._1_1_ = (pNVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pNVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)NOCMDCMLGPN_TypeInfo) {
          pVVar3 = pNVar5->vtable + *piVar7;
          goto LAB_036c6788;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pNVar8,NOCMDCMLGPN_TypeInfo,0);
LAB_036c6788:
    uVar6 = (*pVVar3->methodPtr)(pNVar8,pVVar3->method);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AppsFlyerSDK_AppsFlyer__waitForATTUserAuthorizationWithTimeoutInterval(0x3c,(MethodInfo *)0x0);
    pHVar4 = (__this->fields).KAPMLAAGDAI;
    if ((pHVar4 != (HMEJGGGPIPL_o *)0x0) &&
       (pNVar8 = (pHVar4->fields).CKIDHLLMFHL, pNVar8 != (NOCMDCMLGPN_o *)0x0)) {
      pNVar5 = pNVar8->klass;
      uVar2._0_1_ = (pNVar5->_2).rank;
      uVar2._1_1_ = (pNVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar2;
      if (uVar6 != 0) {
        piVar7 = &((pNVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)NOCMDCMLGPN_TypeInfo) {
            pVVar3 = pNVar5->vtable + (*piVar7 + 1);
            goto LAB_036c6828;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pNVar8,NOCMDCMLGPN_TypeInfo,1);
LAB_036c6828:
                    /* WARNING: Could not recover jumptable at 0x036c683c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(pNVar8,0,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

