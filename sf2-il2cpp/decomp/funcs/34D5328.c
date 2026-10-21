// MEKONFPICFH$$GIMAJOGGBHM @ RVA 0x34D5328

void MEKONFPICFH__GIMAJOGGBHM(MEKONFPICFH_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObservable_T__o *pSVar3;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  CFEJGBOOCOG_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CFEJGBOOCOG_o *pCVar7;
  
  if ((DAT_045686d3 & 1) == 0) {
    FUN_01bab630(&System_Action<DGGBFKNKEAH>_TypeInfo);
    FUN_01bab630(&CFEJGBOOCOG_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_MEKONFPICFH_IBOCMDLPAMA__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<DGGBFKNKEAH>__);
    FUN_01bab630(&Method_UniRx_Observable_Take<DGGBFKNKEAH>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&StringLiteral_7529);
    DAT_045686d3 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529,(MethodInfo *)0x0);
  pCVar7 = (__this->fields).AJAPLLENPMB;
  if (pCVar7 == (CFEJGBOOCOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
        pVVar2 = pCVar4->vtable + *piVar6;
        goto LAB_035d5430;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CFEJGBOOCOG_TypeInfo,0);
LAB_035d5430:
  pSVar3 = (System_IObservable_T__o *)(*pVVar2->methodPtr)(pCVar7,pVVar2->method);
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
  }
  pSVar3 = UniRx_Observable__Take<object>(pSVar3,1,Method_UniRx_Observable_Take<DGGBFKNKEAH>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<DGGBFKNKEAH>_TypeInfo);
  System_Action<object>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (pSVar3,onNext,Method_UniRx_ObservableExtensions_Subscribe<DGGBFKNKEAH>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

