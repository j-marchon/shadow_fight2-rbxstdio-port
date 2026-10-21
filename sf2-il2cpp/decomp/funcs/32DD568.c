// LJBDMDHNKFM$$EDMKBCNKKCH @ RVA 0x32DD568

void LJBDMDHNKFM__EDMKBCNKKCH(LJBDMDHNKFM_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  VirtualInvokeData *pVVar2;
  LAJPNJAAODE_c *pLVar3;
  ulong uVar4;
  int32_t *piVar5;
  LAJPNJAAODE_o *pLVar6;
  
  if ((DAT_045675d2 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&LAJPNJAAODE_TypeInfo);
    FUN_01bab630(&Method_LJBDMDHNKFM_AEDNHMHDFAL__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    DAT_045675d2 = 1;
  }
  source = JKGLCCGGPBJ__EBCEFHJFIFA((__this->fields).HKJMPPGPCBD,(MethodInfo *)0x0);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         ((System_IObservable_T__o *)source,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)
             (__this->fields).super.super.ACHHOOFKHLD,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pLVar6 = (__this->fields).HKJMPPGPCBD;
  if (pLVar6 == (LAJPNJAAODE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pLVar3 = pLVar6->klass;
  uVar1._0_1_ = (pLVar3->_2).rank;
  uVar1._1_1_ = (pLVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pLVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)LAJPNJAAODE_TypeInfo) {
        pVVar2 = pLVar3->vtable + (*piVar5 + 1);
        goto LAB_033dd698;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pLVar6,LAJPNJAAODE_TypeInfo,1);
LAB_033dd698:
                    /* WARNING: Could not recover jumptable at 0x033dd6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pLVar6,pVVar2->method);
  return;
}

