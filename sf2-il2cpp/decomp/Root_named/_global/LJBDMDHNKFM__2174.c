// TypeDefIndex 2174
// Namespace: 
// public class LJBDMDHNKFM : IKBGLDJFIJH, HONDOIKDLOD
// Fields:
//   private readonly LAJPNJAAODE HKJMPPGPCBD; // 0x38

// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x32DD380]
// LJBDMDHNKFM$$KGGGBHEMAOO @ RVA 0x32DD380

int32_t LJBDMDHNKFM__KGGGBHEMAOO(LJBDMDHNKFM_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x32DD388]
// LJBDMDHNKFM$$JFGBPBOCOIC @ RVA 0x32DD388

bool LJBDMDHNKFM__JFGBPBOCOIC(LJBDMDHNKFM_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  return HJDMBDBJEFL == 0;
}


// ===== private void EPEEGNGDGMH()  [RVA 0x32DD394]
// LJBDMDHNKFM$$EPEEGNGDGMH @ RVA 0x32DD394

void LJBDMDHNKFM__EPEEGNGDGMH(LJBDMDHNKFM_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045675d0 & 1) == 0) {
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_045675d0 = 1;
    method = extraout_x1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MKFAKELPPAC_TypeInfo,method);
  }
  bVar1 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
  if (!bVar1) {
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MKFAKELPPAC__CKBMGIOBIFN((MethodInfo *)0x0);
  }
  IKBGLDJFIJH__OEHBFKCJMFA((IKBGLDJFIJH_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x32DD410]
// LJBDMDHNKFM$$GIMAJOGGBHM @ RVA 0x32DD410

void LJBDMDHNKFM__GIMAJOGGBHM(LJBDMDHNKFM_o *__this,MethodInfo *method)

{
  System_Action_array *DLOFGOGAGAA;
  System_Action_o *pSVar1;
  
  if ((DAT_045675d1 & 1) == 0) {
    FUN_01bab630(&System_Action___TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_LJBDMDHNKFM_EDMKBCNKKCH__);
    FUN_01bab630(&Method_LJBDMDHNKFM_EPEEGNGDGMH__);
    DAT_045675d1 = 1;
  }
  DLOFGOGAGAA = (System_Action_array *)FUN_01bab718(System_Action___TypeInfo,2);
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (DLOFGOGAGAA != (System_Action_array *)0x0) {
    if ((int)DLOFGOGAGAA->max_length != 0) {
      DLOFGOGAGAA->m_Items[0] = pSVar1;
      thunk_FUN_01c20e04(DLOFGOGAGAA->m_Items,pSVar1);
      pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (1 < (uint)DLOFGOGAGAA->max_length) {
        DLOFGOGAGAA->m_Items[1] = pSVar1;
        thunk_FUN_01c20e04(DLOFGOGAGAA->m_Items + 1,pSVar1);
        IKBGLDJFIJH__BOLHJAOMBCB((IKBGLDJFIJH_o *)__this,DLOFGOGAGAA,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(LAJPNJAAODE GPDBEOFKMOH)  [RVA 0x32DD538]
// LJBDMDHNKFM$$.ctor @ RVA 0x32DD538

void LJBDMDHNKFM___ctor(LJBDMDHNKFM_o *__this,LAJPNJAAODE_o *GPDBEOFKMOH,MethodInfo *method)

{
  LAJPNJAAODE_o **ppLVar1;
  
  IKBGLDJFIJH___ctor((IKBGLDJFIJH_o *)__this,(MethodInfo *)0x0);
  ppLVar1 = &(__this->fields).HKJMPPGPCBD;
  *ppLVar1 = GPDBEOFKMOH;
  thunk_FUN_01c20e04(ppLVar1,GPDBEOFKMOH);
  return;
}


// ===== private void EDMKBCNKKCH()  [RVA 0x32DD568]
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


// ===== private void AEDNHMHDFAL(Unit HOKBHLPPCAH)  [RVA 0x32DD6B8]
// LJBDMDHNKFM$$AEDNHMHDFAL @ RVA 0x32DD6B8

void LJBDMDHNKFM__AEDNHMHDFAL(IKBGLDJFIJH_o *__this)

{
  IKBGLDJFIJH__OEHBFKCJMFA(__this,(MethodInfo *)0x0);
  return;
}

