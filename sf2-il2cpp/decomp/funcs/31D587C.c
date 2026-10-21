// KEMCBDKAPBD$$NKLGCNHLBAF @ RVA 0x31D587C

void KEMCBDKAPBD__NKLGCNHLBAF(KEMCBDKAPBD_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  IMPJOEHKNBA_c *pIVar4;
  ulong uVar5;
  int32_t *piVar6;
  IMPJOEHKNBA_o *pIVar7;
  
  if ((DAT_04566cdf & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_IJIHLBLCJMG_FGNINNOOCCL__);
    FUN_01bab630(&IMPJOEHKNBA_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    DAT_04566cdf = 1;
  }
  pIVar7 = (__this->fields).HCBPFENNFHD;
  if (pIVar7 != (IMPJOEHKNBA_o *)0x0) {
    pIVar4 = pIVar7->klass;
    uVar1._0_1_ = (pIVar4->_2).rank;
    uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pIVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)IMPJOEHKNBA_TypeInfo) {
          pVVar3 = pIVar4->vtable + *piVar6;
          goto LAB_032d595c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pIVar7,IMPJOEHKNBA_TypeInfo,0);
LAB_032d595c:
    source = (System_IObservable_T__o *)(*pVVar3->methodPtr)(pIVar7,pVVar3->method);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    disposable = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<bool>
                           (source,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    UniRx_DisposableExtensions__AddTo<object>
              (disposable,
               (System_Collections_Generic_ICollection_IDisposable__o *)
               (__this->fields).super.ACHHOOFKHLD,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    pIVar7 = (__this->fields).HCBPFENNFHD;
    if (pIVar7 != (IMPJOEHKNBA_o *)0x0) {
      pIVar4 = pIVar7->klass;
      uVar2._0_1_ = (pIVar4->_2).rank;
      uVar2._1_1_ = (pIVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar2;
      if (uVar5 != 0) {
        piVar6 = &((pIVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)IMPJOEHKNBA_TypeInfo) {
            pVVar3 = pIVar4->vtable + (*piVar6 + 1);
            goto LAB_032d5a00;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pIVar7,IMPJOEHKNBA_TypeInfo,1);
LAB_032d5a00:
                    /* WARNING: Could not recover jumptable at 0x032d5a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(pIVar7,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

