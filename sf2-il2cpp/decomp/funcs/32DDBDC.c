// PPICCLAKFCA$$PIIJHKMOKAO @ RVA 0x32DDBDC

void PPICCLAKFCA__PIIJHKMOKAO(PPICCLAKFCA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_IObservable_OHAHOONNEIC__o *source;
  System_Func_T__bool__o *predicate;
  System_IObservable_T__o *pSVar2;
  System_Action_T__o *pSVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  CJLNLIOJFLM_c *pCVar6;
  ulong uVar7;
  int32_t *piVar8;
  CJLNLIOJFLM_o *pCVar9;
  
  if ((DAT_045675d8 & 1) == 0) {
    FUN_01bab630(&System_Action<OHAHOONNEIC>_TypeInfo);
    FUN_01bab630(&System_Action<Nullable<int>>_TypeInfo);
    FUN_01bab630(&CJLNLIOJFLM_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<OHAHOONNEIC,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Nullable<int>>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<OHAHOONNEIC>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<OHAHOONNEIC>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_PPICCLAKFCA_DDKALGCFGLE__);
    FUN_01bab630(&Method_PPICCLAKFCA_LOGHFAANAPE__);
    FUN_01bab630(&Method_PPICCLAKFCA_MELMBOKBFFN__);
    DAT_045675d8 = 1;
  }
  source = CLDGCKOKINJ__HBDJIJNFKFG((__this->fields).CGBEFGDEDKH,(MethodInfo *)0x0);
  predicate = (System_Func_T__bool__o *)thunk_FUN_01bda818(System_Func<OHAHOONNEIC,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = UniRx_Observable__Where<object>
                     ((System_IObservable_T__o *)source,predicate,
                      Method_UniRx_Observable_Where<OHAHOONNEIC>__);
  pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<OHAHOONNEIC>_TypeInfo);
  System_Action<object>___ctor();
  pIVar4 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar2,pSVar3,Method_UniRx_ObservableExtensions_Subscribe<OHAHOONNEIC>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).IHADHPMEOFI,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pCVar9 = (__this->fields).DHBPHINEKBL;
  if (pCVar9 == (CJLNLIOJFLM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar6 = pCVar9->klass;
  uVar1._0_1_ = (pCVar6->_2).rank;
  uVar1._1_1_ = (pCVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pCVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
        pVVar5 = pCVar6->vtable + *piVar8;
        goto LAB_033ddddc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar9,CJLNLIOJFLM_TypeInfo,0);
LAB_033ddddc:
  pSVar2 = (System_IObservable_T__o *)(*pVVar5->methodPtr)(pCVar9,pVVar5->method);
  pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Nullable<int>>_TypeInfo);
  System_Action<Nullable<int>>___ctor();
  pIVar4 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Nullable<int>>
                     (pSVar2,pSVar3,Method_UniRx_ObservableExtensions_Subscribe<Nullable<int>>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).IHADHPMEOFI,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

