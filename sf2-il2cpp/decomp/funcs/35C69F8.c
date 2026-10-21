// Core.Appsflyer.BanzaiAppsFlyer$$EBPAPDBEPKM @ RVA 0x35C69F8

void Core_Appsflyer_BanzaiAppsFlyer__EBPAPDBEPKM
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  VirtualInvokeData *pVVar3;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_Func_string__bool__o **ppSVar4;
  System_Action_string__o **ppSVar5;
  System_IObservable_T__o *pSVar6;
  System_Func_HCBNEFEHCBM__bool__o **ppSVar7;
  System_Func_HCBNEFEHCBM__string__o **ppSVar8;
  System_IObservable_TR__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  HMEJGGGPIPL_o *pHVar9;
  EAPFCMCJBAG_c *pEVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int32_t *piVar13;
  EAPFCMCJBAG_o *pEVar14;
  System_Func_string__bool__o *predicate;
  System_Func_HCBNEFEHCBM__bool__o *predicate_00;
  System_Func_HCBNEFEHCBM__string__o *selector;
  
  if ((DAT_04568f66 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<Action<string>>_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_DFLDGIMKFDO__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_HGGMNGPOBIO__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_JGMECBJEPDL__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&EAPFCMCJBAG_TypeInfo);
    FUN_01bab630(&System_Func<HCBNEFEHCBM,_string>_TypeInfo);
    FUN_01bab630(&System_Func<HCBNEFEHCBM,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<string>__);
    FUN_01bab630(&Method_UniRx_Observable_Select<HCBNEFEHCBM,_string>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<HCBNEFEHCBM>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<string>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_JGDMOCDBIID__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_JPBACBDMAOF__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_KAFICFLLEDO__);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_<>c_MAHFBMMPLHE__);
    FUN_01bab630(&Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_5403);
    FUN_01bab630(&StringLiteral_11196);
    FUN_01bab630(&StringLiteral_5404);
    FUN_01bab630(&StringLiteral_9632);
    FUN_01bab630(&StringLiteral_11164);
    DAT_04568f66 = 1;
    method = extraout_x1;
  }
  pHVar9 = (__this->fields).KAPMLAAGDAI;
  if (pHVar9 != (HMEJGGGPIPL_o *)0x0) {
    if ((pHVar9->fields).EBPAPDBEPKM == false) {
      Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_5403,StringLiteral_11164,in_x2);
      return;
    }
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
    }
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar2 == 8) {
      pHVar9 = (__this->fields).KAPMLAAGDAI;
      if (pHVar9 == (HMEJGGGPIPL_o *)0x0) goto LAB_036c7064;
      pEVar14 = (pHVar9->fields).FHGJNLGDAMD;
      if (pEVar14 == (EAPFCMCJBAG_o *)0x0) {
        puVar11 = &StringLiteral_9632;
LAB_036c7040:
        Core_Appsflyer_BanzaiAppsFlyer__FPILEMBEIDC
                  ((System_String_o *)*puVar11,StringLiteral_11164,in_x2);
        return;
      }
      pEVar10 = pEVar14->klass;
      uVar1._0_1_ = (pEVar10->_2).rank;
      uVar1._1_1_ = (pEVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pEVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)EAPFCMCJBAG_TypeInfo) {
            pVVar3 = pEVar10->vtable + (*piVar13 + 1);
            goto LAB_036c6e54;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar14,EAPFCMCJBAG_TypeInfo,1);
LAB_036c6e54:
      pSVar6 = (System_IObservable_T__o *)(*pVVar3->methodPtr)(pEVar14,pVVar3->method);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
      }
      predicate_00 = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_0;
      if (predicate_00 == (System_Func_HCBNEFEHCBM__bool__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
        }
        predicate_00 = (System_Func_HCBNEFEHCBM__bool__o *)
                       thunk_FUN_01bda818(System_Func<HCBNEFEHCBM,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        ppSVar7 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_0;
        *ppSVar7 = predicate_00;
        thunk_FUN_01c20e04(ppSVar7,predicate_00);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = UniRx_Observable__Where<object>
                         (pSVar6,(System_Func_T__bool__o *)predicate_00,
                          Method_UniRx_Observable_Where<HCBNEFEHCBM>__);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
      }
      selector = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_1;
      if (selector == (System_Func_HCBNEFEHCBM__string__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
        }
        selector = (System_Func_HCBNEFEHCBM__string__o *)
                   thunk_FUN_01bda818(System_Func<HCBNEFEHCBM,_string>_TypeInfo);
        System_Func<object,_object>___ctor();
        ppSVar8 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_1;
        *ppSVar8 = selector;
        thunk_FUN_01c20e04(ppSVar8,selector);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = UniRx_Observable__Select<object,_object>
                         (pSVar6,(System_Func_T__TR__o *)selector,
                          Method_UniRx_Observable_Select<HCBNEFEHCBM,_string>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
      System_Action<object>___ctor();
    }
    else {
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (iVar2 != 0xb) {
        Core_Appsflyer_BanzaiAppsFlyer__MCJHDFDBCHK(StringLiteral_5404,StringLiteral_11164,in_x2);
        return;
      }
      pHVar9 = (__this->fields).KAPMLAAGDAI;
      if (pHVar9 == (HMEJGGGPIPL_o *)0x0) goto LAB_036c7064;
      if ((pHVar9->fields).LODCOBPDCIB == (CPHBJEDCAEO_o *)0x0) {
        puVar11 = &StringLiteral_11196;
        goto LAB_036c7040;
      }
      addHandler = (System_Action_Action_T___o *)
                   thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
      System_Action<object>___ctor();
      removeHandler =
           (System_Action_Action_T___o *)thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
      System_Action<object>___ctor();
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = UniRx_Observable__FromEvent<object>
                         (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<string>__);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
      }
      predicate = Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_5;
      if (predicate == (System_Func_string__bool__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
        }
        predicate = (System_Func_string__bool__o *)
                    thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        ppSVar4 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_5;
        *ppSVar4 = predicate;
        thunk_FUN_01c20e04(ppSVar4,predicate);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = (System_IObservable_TR__o *)
               UniRx_Observable__Where<object>
                         (pSVar6,(System_Func_T__bool__o *)predicate,
                          Method_UniRx_Observable_Where<string>__);
      if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
      }
      onNext = (System_Action_T__o *)
               Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_6;
      if (onNext == (System_Action_T__o *)0x0) {
        if ((Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo);
        }
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar5 = &Core_Appsflyer_BanzaiAppsFlyer_<>c_TypeInfo->static_fields->__9__24_6;
        *ppSVar5 = (System_Action_string__o *)onNext;
        thunk_FUN_01c20e04(ppSVar5,onNext);
      }
    }
    disposable = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<object>
                           ((System_IObservable_T__o *)source,onNext,
                            Method_UniRx_ObservableExtensions_Subscribe<string>__);
    UniRx_DisposableExtensions__AddTo<object>
              (disposable,(UnityEngine_Component_o *)__this,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    return;
  }
LAB_036c7064:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

