// Core.Appsflyer.BanzaiAppsFlyer$$ODJCOCHEAIN @ RVA 0x35C85F8

void Core_Appsflyer_BanzaiAppsFlyer__ODJCOCHEAIN
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  undefined8 extraout_x0;
  UniRx_ReactiveProperty_bool__o *__this_00;
  undefined8 extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  HMEJGGGPIPL_o *pHVar3;
  KPKMEEIPCJA_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  KPKMEEIPCJA_o *pKVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04568f7b & 1) == 0) {
    FUN_01bab630(&KPKMEEIPCJA_TypeInfo);
    auVar8 = FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>_set_Value__);
    DAT_04568f7b = 1;
  }
  pHVar3 = (__this->fields).KAPMLAAGDAI;
  if (pHVar3 != (HMEJGGGPIPL_o *)0x0) {
    pKVar7 = (pHVar3->fields).BOGHJANCLLO;
    if (pKVar7 != (KPKMEEIPCJA_o *)0x0) {
      pKVar4 = pKVar7->klass;
      uVar1._0_1_ = (pKVar4->_2).rank;
      uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)KPKMEEIPCJA_TypeInfo) {
            pVVar2 = pKVar4->vtable + (*piVar6 + 1);
            goto LAB_036c8698;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KPKMEEIPCJA_TypeInfo,1);
LAB_036c8698:
      auVar8 = (*pVVar2->methodPtr)(pKVar7,pVVar2->method);
      if ((auVar8._0_4_ | 2) == 3) {
        Core_Appsflyer_BanzaiAppsFlyer__BLPABBKBKDK(__this,auVar8._8_8_);
        auVar8._8_8_ = extraout_x1;
        auVar8._0_8_ = extraout_x0;
      }
    }
    Core_Appsflyer_BanzaiAppsFlyer__FAKGPIAEEBB(auVar8._0_8_,auVar8._8_8_);
    Core_Appsflyer_BanzaiAppsFlyer__LHNEBIPNIGD(__this,method_00);
    Core_Appsflyer_BanzaiAppsFlyer__EPKAEDHPBDE(__this,method_01);
    Core_Appsflyer_BanzaiAppsFlyer__EBPAPDBEPKM(__this,method_02);
    __this_00 = (__this->fields).ECCPBJGMNPE;
    if (__this_00 != (UniRx_ReactiveProperty_bool__o *)0x0) {
      UniRx_ReactiveProperty<bool>__set_Value
                (__this_00,true,Method_UniRx_ReactiveProperty<bool>_set_Value__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

