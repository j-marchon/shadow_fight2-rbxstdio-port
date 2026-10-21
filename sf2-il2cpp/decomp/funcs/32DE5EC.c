// PPICCLAKFCA$$GIMAJOGGBHM @ RVA 0x32DE5EC

void PPICCLAKFCA__GIMAJOGGBHM(PPICCLAKFCA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObservable_T__o *pSVar3;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  HGAPAPKMHCF_CdnZoneMappingConfig__c *pHVar4;
  ulong uVar5;
  int32_t *piVar6;
  HGAPAPKMHCF_CdnZoneMappingConfig__o *pHVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_045675dc & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&HGAPAPKMHCF<CdnZoneMappingConfig>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_Take<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    auVar8 = FUN_01bab630(&Method_PPICCLAKFCA_EBLHDHPPOPG__);
    DAT_045675dc = 1;
  }
  pHVar7 = (__this->fields).OAOMFCGPCBP;
  if (pHVar7 == (HGAPAPKMHCF_CdnZoneMappingConfig__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pHVar4 = pHVar7->klass;
  uVar1._0_1_ = (pHVar4->_2).rank;
  uVar1._1_1_ = (pHVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pHVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)HGAPAPKMHCF<CdnZoneMappingConfig>_TypeInfo) {
        pVVar2 = pHVar4->vtable + (*piVar6 + 1);
        goto LAB_033de6d4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pHVar7,HGAPAPKMHCF<CdnZoneMappingConfig>_TypeInfo,1);
LAB_033de6d4:
  pSVar3 = (System_IObservable_T__o *)(*pVVar2->methodPtr)(pHVar7,pVVar2->method);
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
  }
  pSVar3 = UniRx_Observable__Take<Unit>(pSVar3,1,Method_UniRx_Observable_Take<Unit>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         (pSVar3,onNext,Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

