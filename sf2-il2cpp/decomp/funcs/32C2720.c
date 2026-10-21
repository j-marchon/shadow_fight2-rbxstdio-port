// PCDNPOPANBA$$GIMAJOGGBHM @ RVA 0x32C2720

void PCDNPOPANBA__GIMAJOGGBHM(PCDNPOPANBA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObservable_T__o *pSVar3;
  System_Func_bool__bool__o **ppSVar4;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  IMPJOEHKNBA_c *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  IMPJOEHKNBA_o *pIVar8;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_045674d7 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>_GIMAJOGGBHM__);
    FUN_01bab630(&IMPJOEHKNBA_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_PCDNPOPANBA_FPNNIJCMHML__);
    FUN_01bab630(&Method_PCDNPOPANBA_<>c_FLNDAFMGAIG__);
    FUN_01bab630(&PCDNPOPANBA_<>c_TypeInfo);
    DAT_045674d7 = 1;
  }
  GOCLIOIANDK<object,_object>__GIMAJOGGBHM
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>_GIMAJOGGBHM__);
  pIVar8 = (__this->fields).HCBPFENNFHD;
  if (pIVar8 == (IMPJOEHKNBA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar5 = pIVar8->klass;
  uVar1._0_1_ = (pIVar5->_2).rank;
  uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)IMPJOEHKNBA_TypeInfo) {
        pVVar2 = pIVar5->vtable + *piVar7;
        goto LAB_033c2848;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pIVar8,IMPJOEHKNBA_TypeInfo,0);
LAB_033c2848:
  pSVar3 = (System_IObservable_T__o *)(*pVVar2->methodPtr)(pIVar8,pVVar2->method);
  if ((PCDNPOPANBA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PCDNPOPANBA_<>c_TypeInfo);
  }
  predicate = PCDNPOPANBA_<>c_TypeInfo->static_fields->__9__5_0;
  if (predicate == (System_Func_bool__bool__o *)0x0) {
    if ((PCDNPOPANBA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PCDNPOPANBA_<>c_TypeInfo);
    }
    predicate = (System_Func_bool__bool__o *)thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
    System_Func<bool,_bool>___ctor();
    ppSVar4 = &PCDNPOPANBA_<>c_TypeInfo->static_fields->__9__5_0;
    *ppSVar4 = predicate;
    thunk_FUN_01c20e04(ppSVar4,predicate);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = UniRx_Observable__Where<bool>
                     (pSVar3,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<bool>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<bool>
                         (pSVar3,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

