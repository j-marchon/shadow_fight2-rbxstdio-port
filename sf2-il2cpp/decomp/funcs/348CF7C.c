// KICJDJCJLKJ$$OAAMAAEBGBJ @ RVA 0x348CF7C

void KICJDJCJLKJ__OAAMAAEBGBJ(KICJDJCJLKJ_o *__this,KKEKKPIDGBK_o *FDIKDMNIKLC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  System_IObservable_T__o *pSVar4;
  System_Func_bool__bool__o **ppSVar5;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  IMPJOEHKNBA_c *pIVar6;
  GCPFDLNAFDF_c *pGVar7;
  ulong uVar8;
  int32_t *piVar9;
  IMPJOEHKNBA_o *pIVar10;
  GCPFDLNAFDF_o *pGVar11;
  KKEKKPIDGBK_o **ppKVar12;
  System_Func_bool__bool__o *predicate;
  undefined1 auVar13 [16];
  
  if ((DAT_045683ee & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&GCPFDLNAFDF_TypeInfo);
    FUN_01bab630(&IMPJOEHKNBA_TypeInfo);
    FUN_01bab630(&Method_KICJDJCJLKJ_NEDAPEOBMDK__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_AsUnitObservable<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_KICJDJCJLKJ_<>c_DKLMJCELAPJ__);
    FUN_01bab630(&KICJDJCJLKJ_<>c_TypeInfo);
    DAT_045683ee = 1;
  }
  ppKVar12 = &(__this->fields).FOIMNIOLPDJ;
  *ppKVar12 = FDIKDMNIKLC;
  thunk_FUN_01c20e04(ppKVar12,FDIKDMNIKLC);
  pIVar10 = (__this->fields).EMCHBEGFHBC;
  if (pIVar10 != (IMPJOEHKNBA_o *)0x0) {
    pIVar6 = pIVar10->klass;
    uVar1._0_1_ = (pIVar6->_2).rank;
    uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)IMPJOEHKNBA_TypeInfo) {
          pVVar3 = pIVar6->vtable + *piVar9;
          goto LAB_0358d0b4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pIVar10,IMPJOEHKNBA_TypeInfo,0);
LAB_0358d0b4:
    pSVar4 = (System_IObservable_T__o *)(*pVVar3->methodPtr)(pIVar10,pVVar3->method);
    if ((KICJDJCJLKJ_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KICJDJCJLKJ_<>c_TypeInfo);
    }
    predicate = KICJDJCJLKJ_<>c_TypeInfo->static_fields->__9__10_0;
    if (predicate == (System_Func_bool__bool__o *)0x0) {
      if ((KICJDJCJLKJ_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KICJDJCJLKJ_<>c_TypeInfo);
      }
      predicate = (System_Func_bool__bool__o *)thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
      System_Func<bool,_bool>___ctor();
      ppSVar5 = &KICJDJCJLKJ_<>c_TypeInfo->static_fields->__9__10_0;
      *ppSVar5 = predicate;
      thunk_FUN_01c20e04(ppSVar5,predicate);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = UniRx_Observable__Where<bool>
                       (pSVar4,(System_Func_T__bool__o *)predicate,
                        Method_UniRx_Observable_Where<bool>__);
    source = UniRx_Observable__AsUnitObservable<bool>
                       (pSVar4,Method_UniRx_Observable_AsUnitObservable<bool>__);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
    System_Action<Unit>___ctor();
    disposable = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<Unit>
                           ((System_IObservable_T__o *)source,onNext,
                            Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    UniRx_DisposableExtensions__AddTo<object>
              (disposable,
               (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI
               ,Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    pGVar11 = (__this->fields).BDALHPIDKOK;
    if (pGVar11 != (GCPFDLNAFDF_o *)0x0) {
      pGVar7 = pGVar11->klass;
      uVar2._0_1_ = (pGVar7->_2).rank;
      uVar2._1_1_ = (pGVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)GCPFDLNAFDF_TypeInfo) {
            pVVar3 = pGVar7->vtable + (*piVar9 + 3);
            goto LAB_0358d244;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar11,GCPFDLNAFDF_TypeInfo,3);
LAB_0358d244:
      auVar13 = (*pVVar3->methodPtr)(pGVar11,pVVar3->method);
      if ((auVar13._0_8_ & 1) != 0) {
                    /* try { // try from 0358d260 to 0368d31f has its CatchHandler @ 0358d260
                       catch() { ... } // from try @ 0358d260 with catch @ 0358d260
                       catch() { ... } // from try @ 0358d360 with catch @ 0358d260
                       catch() { ... } // from try @ 0358d404 with catch @ 0358d260
                       catch() { ... } // from try @ 0358d428 with catch @ 0358d260
                       catch() { ... } // from try @ 0358d46c with catch @ 0358d260
                       catch() { ... } // from try @ 0358d4d0 with catch @ 0358d260 */
        KICJDJCJLKJ__JEGAPBGMFJJ(__this,auVar13._8_8_);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

