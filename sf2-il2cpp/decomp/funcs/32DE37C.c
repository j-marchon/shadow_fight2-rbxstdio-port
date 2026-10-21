// PPICCLAKFCA$$EBLHDHPPOPG @ RVA 0x32DE37C

void PPICCLAKFCA__EBLHDHPPOPG(long __this)

{
  System_IObservable_OHAHOONNEIC__o *source;
  System_Func_T__bool__o *predicate;
  System_IObservable_T__o *pSVar1;
  System_Action_T__o *pSVar2;
  Il2CppObject *pIVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
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
  source = CLDGCKOKINJ__HBDJIJNFKFG(*(CFOCLEDKNKL_o **)(__this + 0x20),(MethodInfo *)0x0);
  predicate = (System_Func_T__bool__o *)thunk_FUN_01bda818(System_Func<OHAHOONNEIC,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = UniRx_Observable__Where<object>
                     ((System_IObservable_T__o *)source,predicate,
                      Method_UniRx_Observable_Where<OHAHOONNEIC>__);
  pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<OHAHOONNEIC>_TypeInfo);
  System_Action<object>___ctor();
  pIVar3 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar1,pSVar2,Method_UniRx_ObservableExtensions_Subscribe<OHAHOONNEIC>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar3,*(System_Collections_Generic_ICollection_IDisposable__o **)(__this + 0x10),
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  plVar8 = *(long **)(__this + 0x30);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(CJLNLIOJFLM_c **)(piVar7 + -2) == CJLNLIOJFLM_TypeInfo) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_033ddddc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_01b81914(plVar8,CJLNLIOJFLM_TypeInfo,0);
LAB_033ddddc:
  pSVar1 = (System_IObservable_T__o *)(*(code *)*puVar4)(plVar8,puVar4[1]);
  pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Nullable<int>>_TypeInfo);
  System_Action<Nullable<int>>___ctor();
  pIVar3 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Nullable<int>>
                     (pSVar1,pSVar2,Method_UniRx_ObservableExtensions_Subscribe<Nullable<int>>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar3,*(System_Collections_Generic_ICollection_IDisposable__o **)(__this + 0x10),
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

