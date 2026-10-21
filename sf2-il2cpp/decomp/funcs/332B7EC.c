// JGMAPPPOEOF$$NKLGCNHLBAF @ RVA 0x332B7EC

void JGMAPPPOEOF__NKLGCNHLBAF(JGMAPPPOEOF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  ODEIOKOJGDM_c *pOVar4;
  ulong uVar5;
  int32_t *piVar6;
  ODEIOKOJGDM_o *pOVar7;
  
  if ((DAT_045678c8 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_JGMAPPPOEOF_JEGLOKEBHBM__);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    DAT_045678c8 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar2 != 0xb) {
    IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
    return;
  }
  source = AFIJIPMBKHP__DFKGJOOBNPB((__this->fields).BFCFIPCBCJK,(MethodInfo *)0x0);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         ((System_IObservable_T__o *)source,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)
             (__this->fields).super.ACHHOOFKHLD,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pOVar7 = (__this->fields).BFCFIPCBCJK;
  if (pOVar7 == (ODEIOKOJGDM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pOVar4 = pOVar7->klass;
  uVar1._0_1_ = (pOVar4->_2).rank;
  uVar1._1_1_ = (pOVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pOVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)ODEIOKOJGDM_TypeInfo) {
        pVVar3 = pOVar4->vtable + *piVar6;
        goto LAB_0342b95c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pOVar7,ODEIOKOJGDM_TypeInfo,0);
LAB_0342b95c:
                    /* WARNING: Could not recover jumptable at 0x0342b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pOVar7,2,pVVar3->method);
  return;
}

