// TypeDefIndex 437
// Namespace: 
// public class KICJDJCJLKJ : HONDOIKDLOD, IDisposable
// Fields:
//   private const int IAMEAOGFANB = 6;
//   private readonly CompositeDisposable IHADHPMEOFI; // 0x10
//   private readonly CompositeDisposable GEBDPADMKJP; // 0x18
//   private readonly KICJDJCJLKJ.AIKDHBPGCGN CFMBLNBAEJN; // 0x20
//   private readonly KICJDJCJLKJ.AIKDHBPGCGN ONCJMLPDAKO; // 0x28
//   private IMPJOEHKNBA EMCHBEGFHBC; // 0x30
//   private GCPFDLNAFDF BDALHPIDKOK; // 0x38
//   private KKEKKPIDGBK FOIMNIOLPDJ; // 0x40

// ===== private void POCFIOHCAJL(Action<MPAKDCNMLEG> JLPMKKKMANE)  [RVA 0x348C618]
// KICJDJCJLKJ$$POCFIOHCAJL @ RVA 0x348C618

void KICJDJCJLKJ__POCFIOHCAJL
               (KICJDJCJLKJ_o *__this,System_Action_MPAKDCNMLEG__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_045683e7 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_045683e7 = 1;
  }
  pKVar6 = (__this->fields).FOIMNIOLPDJ;
  if (pKVar6 == (KKEKKPIDGBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 0xc);
        goto LAB_0358c6a8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xc);
LAB_0358c6a8:
                    /* WARNING: Could not recover jumptable at 0x0358c6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public void .ctor(IMPJOEHKNBA JDDEJOEBCAE, GCPFDLNAFDF NMMFNFPCNHC)  [RVA 0x348C6C4]
// KICJDJCJLKJ$$.ctor @ RVA 0x348C6C4

void KICJDJCJLKJ___ctor(KICJDJCJLKJ_o *__this,IMPJOEHKNBA_o *JDDEJOEBCAE,GCPFDLNAFDF_o *NMMFNFPCNHC,
                       MethodInfo *method)

{
  UniRx_CompositeDisposable_o *pUVar1;
  UniRx_CompositeDisposable_o **ppUVar2;
  KICJDJCJLKJ_AIKDHBPGCGN_o *pKVar3;
  KICJDJCJLKJ_AIKDHBPGCGN_o **ppKVar4;
  IMPJOEHKNBA_o **ppIVar5;
  GCPFDLNAFDF_o **ppGVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_045683e8 & 1) == 0) {
    FUN_01bab630(&KICJDJCJLKJ_AIKDHBPGCGN_TypeInfo);
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&StringLiteral_11375/*"Rewarded"*/);
    FUN_01bab630(&StringLiteral_7627/*"Interstitial"*/);
    DAT_045683e8 = 1;
  }
  pUVar1 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = pUVar1;
  thunk_FUN_01c20e04(&__this->fields,pUVar1);
  pUVar1 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).GEBDPADMKJP;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  auVar7 = thunk_FUN_01bda818(KICJDJCJLKJ_AIKDHBPGCGN_TypeInfo);
  pKVar3 = auVar7._0_8_;
  KICJDJCJLKJ_AIKDHBPGCGN___ctor(pKVar3,auVar7._8_8_);
  if (pKVar3 != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
    (pKVar3->fields).KLHHABGHKHA = StringLiteral_11375/*"Rewarded"*/;
    thunk_FUN_01c20e04();
    ppKVar4 = &(__this->fields).CFMBLNBAEJN;
    *ppKVar4 = pKVar3;
    thunk_FUN_01c20e04(ppKVar4,pKVar3);
    auVar7 = thunk_FUN_01bda818(KICJDJCJLKJ_AIKDHBPGCGN_TypeInfo);
    pKVar3 = auVar7._0_8_;
    KICJDJCJLKJ_AIKDHBPGCGN___ctor(pKVar3,auVar7._8_8_);
    if (pKVar3 != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
      (pKVar3->fields).KLHHABGHKHA = StringLiteral_7627/*"Interstitial"*/;
      thunk_FUN_01c20e04();
      ppKVar4 = &(__this->fields).ONCJMLPDAKO;
      *ppKVar4 = pKVar3;
      thunk_FUN_01c20e04(ppKVar4,pKVar3);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      ppIVar5 = &(__this->fields).EMCHBEGFHBC;
      *ppIVar5 = JDDEJOEBCAE;
      thunk_FUN_01c20e04(ppIVar5,JDDEJOEBCAE);
      ppGVar6 = &(__this->fields).BDALHPIDKOK;
      *ppGVar6 = NMMFNFPCNHC;
      thunk_FUN_01c20e04(ppGVar6,NMMFNFPCNHC);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NMNBJNGOALH(MPAKDCNMLEG BDICLGNGCNA)  [RVA 0x348C8A0]
// KICJDJCJLKJ$$NMNBJNGOALH @ RVA 0x348C8A0

void KICJDJCJLKJ__NMNBJNGOALH(KICJDJCJLKJ_o *__this,int32_t BDICLGNGCNA,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = OMMDIMHOHLK__JKOMBMIBMBL(BDICLGNGCNA,(MethodInfo *)0x0);
  lVar1 = 0x20;
  if (!bVar2) {
    lVar1 = 0x28;
  }
  KICJDJCJLKJ__NMNBJNGOALH
            ((KICJDJCJLKJ_o *)(ulong)bVar2,
             *(KICJDJCJLKJ_AIKDHBPGCGN_o **)((long)&__this->klass + lVar1),method);
  return;
}


// ===== private void NMNBJNGOALH(KICJDJCJLKJ.AIKDHBPGCGN JEAMIBIGAON)  [RVA 0x348C900]
// KICJDJCJLKJ$$NMNBJNGOALH @ RVA 0x348C900

void KICJDJCJLKJ__NMNBJNGOALH
               (KICJDJCJLKJ_o *__this,KICJDJCJLKJ_AIKDHBPGCGN_o *JEAMIBIGAON,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_045683e9 & 1) == 0) {
    __this = (KICJDJCJLKJ_o *)FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_045683e9 = 1;
  }
  if (JEAMIBIGAON != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
    __this_00 = (JEAMIBIGAON->fields).KKDOGECGHBO;
    __this = (KICJDJCJLKJ_o *)UniRx_Disposable_TypeInfo;
    if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
      __this = (KICJDJCJLKJ_o *)thunk_FUN_01ba7564();
    }
    if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable
                (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (JEAMIBIGAON->fields).CKMCIBNMADJ = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void IIBOAFNNDLC(Action<MPAKDCNMLEG> JLPMKKKMANE)  [RVA 0x348C97C]
// KICJDJCJLKJ$$IIBOAFNNDLC @ RVA 0x348C97C

void KICJDJCJLKJ__IIBOAFNNDLC
               (KICJDJCJLKJ_o *__this,System_Action_MPAKDCNMLEG__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_045683ea & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_045683ea = 1;
  }
  pKVar6 = (__this->fields).FOIMNIOLPDJ;
  if (pKVar6 == (KKEKKPIDGBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 9);
        goto LAB_0358ca0c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,9);
LAB_0358ca0c:
                    /* WARNING: Could not recover jumptable at 0x0358ca20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void KBENBGOIBBB(MPAKDCNMLEG BDICLGNGCNA)  [RVA 0x348CA28]
// KICJDJCJLKJ$$KBENBGOIBBB @ RVA 0x348CA28

void KICJDJCJLKJ__KBENBGOIBBB(KICJDJCJLKJ_o *__this,int32_t BDICLGNGCNA,MethodInfo *method)

{
  int val2;
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  System_TimeSpan_o dueTime;
  System_IObservable_long__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  UniRx_SerialDisposable_o *__this_01;
  long lVar3;
  double value_00;
  
  if ((DAT_045683eb & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<long>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_KICJDJCJLKJ_PJMEKONAHON_CGHICJCFLEN__);
    FUN_01bab630(&KICJDJCJLKJ_PJMEKONAHON_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_045683eb = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KICJDJCJLKJ_PJMEKONAHON_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(int32_t *)&__this_00[1].monitor = BDICLGNGCNA;
    bVar1 = OMMDIMHOHLK__JKOMBMIBMBL(BDICLGNGCNA,(MethodInfo *)0x0);
    lVar3 = 0x20;
    if (!bVar1) {
      lVar3 = 0x28;
    }
    lVar3 = *(long *)((long)&__this->klass + lVar3);
    if (lVar3 != 0) {
      val2 = *(int *)(lVar3 + 0x18) + 1;
      *(int *)(lVar3 + 0x18) = val2;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = System_Math__Min(6,val2,(MethodInfo *)0x0);
      *(int32_t *)(lVar3 + 0x18) = iVar2;
      value_00 = System_Math__Pow(2.0,(double)iVar2,(MethodInfo *)0x0);
      __this_01 = *(UniRx_SerialDisposable_o **)(lVar3 + 0x20);
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dueTime = System_TimeSpan__FromSeconds(value_00,(MethodInfo *)0x0);
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
      }
                    /* try { // try from 0358cbb4 to 0368cc5b has its CatchHandler @ 0358cbb4
                       catch() { ... } // from try @ 0358cbb4 with catch @ 0358cbb4
                       catch() { ... } // from try @ 0358cc64 with catch @ 0358cbb4
                       catch() { ... } // from try @ 0358cccc with catch @ 0358cbb4
                       catch() { ... } // from try @ 0358ccf0 with catch @ 0358cbb4
                       catch() { ... } // from try @ 0358cd20 with catch @ 0358cbb4 */
      source = UniRx_Observable__Timer(dueTime,(MethodInfo *)0x0);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      value = UniRx_ObservableExtensions__Subscribe<long>
                        ((System_IObservable_T__o *)source,onNext,
                         Method_UniRx_ObservableExtensions_Subscribe<long>__);
      if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
        UniRx_SerialDisposable__set_Disposable(__this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private KICJDJCJLKJ.AIKDHBPGCGN EDJIPCGLKDN(MPAKDCNMLEG BDICLGNGCNA)  [RVA 0x348C8D0]
// KICJDJCJLKJ$$EDJIPCGLKDN @ RVA 0x348C8D0

KICJDJCJLKJ_AIKDHBPGCGN_o *
KICJDJCJLKJ__EDJIPCGLKDN(KICJDJCJLKJ_o *__this,int32_t BDICLGNGCNA,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = OMMDIMHOHLK__JKOMBMIBMBL(BDICLGNGCNA,(MethodInfo *)0x0);
  lVar1 = 0x20;
  if (!bVar2) {
    lVar1 = 0x28;
  }
  return *(KICJDJCJLKJ_AIKDHBPGCGN_o **)((long)&__this->klass + lVar1);
}


// ===== private void JBFDIIJDEBC(Action<MPAKDCNMLEG> JLPMKKKMANE)  [RVA 0x348CC28]
// KICJDJCJLKJ$$JBFDIIJDEBC @ RVA 0x348CC28

void KICJDJCJLKJ__JBFDIIJDEBC
               (KICJDJCJLKJ_o *__this,System_Action_MPAKDCNMLEG__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_045683ec & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_045683ec = 1;
  }
  pKVar6 = (__this->fields).FOIMNIOLPDJ;
                    /* try { // try from 0358cc5c to 0368cc63 has its CatchHandler @ 0358ccd4 */
  if (pKVar6 == (KKEKKPIDGBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358ccc8 with catch @ 0358ccd0
                        */
    FUN_01bab8c8();
  }
                    /* try { // try from 0358cc64 to 0368ccc7 has its CatchHandler @ 0358cbb4 */
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 5);
        goto LAB_0358ccb8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,5);
LAB_0358ccb8:
                    /* try { // try from 0358ccc8 to 0368cccb has its CatchHandler @ 0358ccd0 */
                    /* WARNING: Could not recover jumptable at 0x0358cccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0358cccc to 0368cceb has its CatchHandler @ 0358cbb4 */
  (*pVVar2->methodPtr)(pKVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void JEGAPBGMFJJ(bool KIJABMLCNMD)  [RVA 0x348CCD4]
// KICJDJCJLKJ$$JEGAPBGMFJJ @ RVA 0x348CCD4

void KICJDJCJLKJ__JEGAPBGMFJJ(KICJDJCJLKJ_o *__this,bool KIJABMLCNMD,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  KICJDJCJLKJ_o *__this_01;
  KICJDJCJLKJ_o *__this_02;
  System_Action_Action_T___o *pSVar1;
  System_Action_Action_T___o *pSVar2;
  System_IObservable_T__o *pSVar3;
  System_Action_T__o *pSVar4;
  Il2CppObject *pIVar5;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358cc5c with catch @ 0358ccd4
                        */
                    /* try { // try from 0358ccec to 0368ccef has its CatchHandler @ 0358cd10 */
                    /* try { // try from 0358ccf0 to 0368cd17 has its CatchHandler @ 0358cbb4 */
  if ((DAT_045683ed & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
                    /* catch() { ... } // from try @ 0358ccec with catch @ 0358cd10 */
    FUN_01bab630(&System_Action<Action<MPAKDCNMLEG>>_TypeInfo);
                    /* try { // try from 0358cd18 to 0368cd1f has its CatchHandler @ 0358cd34 */
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 0358cd20 to 0368cd2b has its CatchHandler @ 0358cbb4 */
    FUN_01bab630(&Method_KICJDJCJLKJ_IIBOAFNNDLC__);
                    /* try { // try from 0358cd2c to 0368cd33 has its CatchHandler @ 0358cd34 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0358cd18 with catch @ 0358cd34
                       catch(type#2 @ 00000000) { ... } // from try @ 0358cd2c with catch @ 0358cd34
                        */
    FUN_01bab630(&Method_KICJDJCJLKJ_ILGLILCHONH__);
                    /* try { // try from 0358cd38 to 0368cdfb has its CatchHandler @ 0358cd38
                       catch() { ... } // from try @ 0358cd38 with catch @ 0358cd38
                       catch() { ... } // from try @ 0358ce04 with catch @ 0358cd38
                       catch() { ... } // from try @ 0358ce78 with catch @ 0358cd38
                       catch() { ... } // from try @ 0358ce9c with catch @ 0358cd38
                       catch() { ... } // from try @ 0358cedc with catch @ 0358cd38 */
    FUN_01bab630(&Method_KICJDJCJLKJ_JBFDIIJDEBC__);
    FUN_01bab630(&Method_KICJDJCJLKJ_KBENBGOIBBB__);
    FUN_01bab630(&Method_KICJDJCJLKJ_NMNBJNGOALH__);
    FUN_01bab630(&Method_KICJDJCJLKJ_POCFIOHCAJL__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<MPAKDCNMLEG>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<MPAKDCNMLEG>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045683ed = 1;
  }
  __this_00 = (__this->fields).GEBDPADMKJP;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
    KICJDJCJLKJ__NMNBJNGOALH(__this_01,(__this->fields).CFMBLNBAEJN,method);
    KICJDJCJLKJ__NMNBJNGOALH(__this_02,(__this->fields).ONCJMLPDAKO,method);
    if (KIJABMLCNMD) {
      pSVar1 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<MPAKDCNMLEG>>_TypeInfo);
      System_Action<object>___ctor();
      pSVar2 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<MPAKDCNMLEG>>_TypeInfo);
                    /* try { // try from 0358cdfc to 0368ce03 has its CatchHandler @ 0358ce80 */
                    /* try { // try from 0358ce04 to 0368ce73 has its CatchHandler @ 0358cd38 */
      System_Action<object>___ctor();
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = UniRx_Observable__FromEvent<Int32Enum>
                         (pSVar1,pSVar2,Method_UniRx_Observable_FromEvent<MPAKDCNMLEG>__);
      pSVar4 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
      System_Action<Int32Enum>___ctor();
                    /* try { // try from 0358ce74 to 0368ce77 has its CatchHandler @ 0358ce7c */
                    /* try { // try from 0358ce78 to 0368ce97 has its CatchHandler @ 0358cd38 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358ce74 with catch @ 0358ce7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358cdfc with catch @ 0358ce80
                        */
      pIVar5 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Int32Enum>
                         (pSVar3,pSVar4,Method_UniRx_ObservableExtensions_Subscribe<MPAKDCNMLEG>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar5,(System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).GEBDPADMKJP,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 0358ce98 to 0368ce9b has its CatchHandler @ 0358cec4 */
                    /* try { // try from 0358ce9c to 0368ced3 has its CatchHandler @ 0358cd38 */
      pSVar1 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<MPAKDCNMLEG>>_TypeInfo);
      System_Action<object>___ctor();
      pSVar2 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<MPAKDCNMLEG>>_TypeInfo);
                    /* catch() { ... } // from try @ 0358ce98 with catch @ 0358cec4 */
                    /* try { // try from 0358ced4 to 0368cedb has its CatchHandler @ 0358cef0 */
                    /* try { // try from 0358cedc to 0368cee7 has its CatchHandler @ 0358cd38 */
      System_Action<object>___ctor();
                    /* try { // try from 0358cee8 to 0368ceef has its CatchHandler @ 0358cef0 */
      pSVar3 = UniRx_Observable__FromEvent<Int32Enum>
                         (pSVar1,pSVar2,Method_UniRx_Observable_FromEvent<MPAKDCNMLEG>__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0358ced4 with catch @ 0358cef0
                       catch(type#2 @ 00000000) { ... } // from try @ 0358cee8 with catch @ 0358cef0
                        */
      pSVar4 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      pIVar5 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Int32Enum>
                         (pSVar3,pSVar4,Method_UniRx_ObservableExtensions_Subscribe<MPAKDCNMLEG>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar5,(System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).GEBDPADMKJP,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Dispose()  [RVA 0x348CF68]
// KICJDJCJLKJ$$Dispose @ RVA 0x348CF68

void KICJDJCJLKJ__Dispose(KICJDJCJLKJ_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void OAAMAAEBGBJ(KKEKKPIDGBK FDIKDMNIKLC)  [RVA 0x348CF7C]
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


// ===== public void GIMAJOGGBHM()  [RVA 0x348D3B0]
// KICJDJCJLKJ$$GIMAJOGGBHM @ RVA 0x348D3B0

void KICJDJCJLKJ__GIMAJOGGBHM(KICJDJCJLKJ_o *__this,MethodInfo *method)

{
  System_IObservable_KKEKKPIDGBK__o *source;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  KICJDJCJLKJ_AIKDHBPGCGN_o *pKVar1;
  
                    /* try { // try from 0358d3d4 to 0368d3eb has its CatchHandler @ 0358d428 */
  if ((DAT_045683ef & 1) == 0) {
    FUN_01bab630(&System_Action<KKEKKPIDGBK>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 0358d400 to 0368d403 has its CatchHandler @ 0358d430 */
                    /* try { // try from 0358d404 to 0368d41b has its CatchHandler @ 0358d260 */
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<SerialDisposable>__);
    FUN_01bab630(&Method_KICJDJCJLKJ_OAAMAAEBGBJ__);
                    /* try { // try from 0358d41c to 0368d41f has its CatchHandler @ 0358d434 */
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
                    /* try { // try from 0358d420 to 0368d423 has its CatchHandler @ 0358d43c */
                    /* try { // try from 0358d424 to 0368d427 has its CatchHandler @ 0358d430 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d3d4 with catch @ 0358d428
                       try { // try from 0358d428 to 0368d453 has its CatchHandler @ 0358d260 */
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<KKEKKPIDGBK>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d340 with catch @ 0358d42c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d400 with catch @ 0358d430
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0358d424 with catch @ 0358d430
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d41c with catch @ 0358d434
                        */
    FUN_01bab630(&Method_UniRx_Observable_Take<KKEKKPIDGBK>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d320 with catch @ 0358d438
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d35c with catch @ 0358d43c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0358d420 with catch @ 0358d43c
                        */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045683ef = 1;
  }
                    /* try { // try from 0358d454 to 0368d46b has its CatchHandler @ 0358d4c8 */
  UniRx_DisposableExtensions__AddTo<object>
            ((Il2CppObject *)(__this->fields).GEBDPADMKJP,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI,
             Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
  pKVar1 = (__this->fields).CFMBLNBAEJN;
  if (pKVar1 != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
                    /* try { // try from 0358d46c to 0368d4b7 has its CatchHandler @ 0358d260 */
    UniRx_DisposableExtensions__AddTo<object>
              ((Il2CppObject *)(pKVar1->fields).KKDOGECGHBO,
               (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI
               ,Method_UniRx_DisposableExtensions_AddTo<SerialDisposable>__);
    pKVar1 = (__this->fields).ONCJMLPDAKO;
    if (pKVar1 != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
      UniRx_DisposableExtensions__AddTo<object>
                ((Il2CppObject *)(pKVar1->fields).KKDOGECGHBO,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).IHADHPMEOFI,
                 Method_UniRx_DisposableExtensions_AddTo<SerialDisposable>__);
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0358d4b8 to 0368d4c7 has its CatchHandler @ 0358d4c8 */
                    /* catch() { ... } // from try @ 0358d454 with catch @ 0358d4c8
                       catch() { ... } // from try @ 0358d4b8 with catch @ 0358d4c8 */
                    /* try { // try from 0358d4cc to 0368d4cf has its CatchHandler @ 0358d4d8 */
                    /* try { // try from 0358d4d0 to 0368d4db has its CatchHandler @ 0358d260 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0358d4cc with catch @ 0358d4d8
                        */
      source = MKFAKELPPAC__NDIOMPEMKCM((MethodInfo *)0x0);
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
      }
      source_00 = UniRx_Observable__Take<object>
                            ((System_IObservable_T__o *)source,1,
                             Method_UniRx_Observable_Take<KKEKKPIDGBK>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<KKEKKPIDGBK>_TypeInfo);
      System_Action<object>___ctor();
      disposable = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             (source_00,onNext,
                              Method_UniRx_ObservableExtensions_Subscribe<KKEKKPIDGBK>__);
      UniRx_DisposableExtensions__AddTo<object>
                (disposable,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).IHADHPMEOFI,Method_UniRx_DisposableExtensions_AddTo<IDisposable>__
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JEGAPBGMFJJ()  [RVA 0x348D28C]
// KICJDJCJLKJ$$JEGAPBGMFJJ @ RVA 0x348D28C

void KICJDJCJLKJ__JEGAPBGMFJJ(KICJDJCJLKJ_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  MethodInfo *in_x2;
  GCPFDLNAFDF_c *pGVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  GCPFDLNAFDF_o *pGVar12;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = __this;
  if ((DAT_045683f0 & 1) == 0) {
    FUN_01bab630(&EBGDOILAAEJ_TypeInfo);
    auVar13 = FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    DAT_045683f0 = 1;
  }
  pGVar12 = (__this->fields).BDALHPIDKOK;
  if (pGVar12 != (GCPFDLNAFDF_o *)0x0) {
    pGVar7 = pGVar12->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
                    /* try { // try from 0358d320 to 0368d323 has its CatchHandler @ 0358d438 */
          pVVar4 = pGVar7->vtable + (*piVar10 + 6);
          goto LAB_0358d324;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    in_x2 = (MethodInfo *)0x6;
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pGVar12);
LAB_0358d324:
    auVar13 = (*pVVar4->methodPtr)(pGVar12,pVVar4->method);
    plVar5 = auVar13._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar13._8_8_;
    auVar13 = auVar2 << 0x40;
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
                    /* try { // try from 0358d340 to 0368d347 has its CatchHandler @ 0358d42c */
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 0358d35c to 0368d35f has its CatchHandler @ 0358d43c */
                    /* try { // try from 0358d360 to 0368d3d3 has its CatchHandler @ 0358d260 */
          if (*(EBGDOILAAEJ_c **)(piVar11 + -2) == EBGDOILAAEJ_TypeInfo) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0358d38c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      in_x2 = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0358d38c:
      bVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      KICJDJCJLKJ__JEGAPBGMFJJ(__this,(bool)(bVar3 & 1),in_x2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar13._0_8_,auVar13._8_8_);
}


// ===== private static void JHEIGLGFONB(string NONPLOOOOAG = "", string JJBPCFGELPO = "")  [RVA 0x348D55C]
// KICJDJCJLKJ$$JHEIGLGFONB @ RVA 0x348D55C

void KICJDJCJLKJ__JHEIGLGFONB
               (System_String_o *NONPLOOOOAG,System_String_o *JJBPCFGELPO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *message;
  
  if ((DAT_045683f1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    FUN_01bab630(&StringLiteral_15420/*"[AdvertisingRetryService] "*/);
    DAT_045683f1 = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(NONPLOOOOAG,(MethodInfo *)0x0);
  if (!bVar1) {
    NONPLOOOOAG = System_String__Concat(StringLiteral_2088/*": "*/,NONPLOOOOAG,(MethodInfo *)0x0);
  }
  message = System_String__Concat(StringLiteral_15420/*"[AdvertisingRetryService] "*/,JJBPCFGELPO,NONPLOOOOAG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void NEDAPEOBMDK(Unit HOKBHLPPCAH)  [RVA 0x348D628]
// KICJDJCJLKJ$$NEDAPEOBMDK @ RVA 0x348D628

void KICJDJCJLKJ__NEDAPEOBMDK(KICJDJCJLKJ_o *__this,undefined8 param_2,MethodInfo *param_3)

{
  ushort uVar1;
  byte bVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  GCPFDLNAFDF_c *pGVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  GCPFDLNAFDF_o *pGVar11;
  
  if ((DAT_045683f0 & 1) == 0) {
    FUN_01bab630(&EBGDOILAAEJ_TypeInfo);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    DAT_045683f0 = 1;
  }
  pGVar11 = (__this->fields).BDALHPIDKOK;
  if (pGVar11 != (GCPFDLNAFDF_o *)0x0) {
    pGVar6 = pGVar11->klass;
    uVar1._0_1_ = (pGVar6->_2).rank;
    uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pGVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar3 = pGVar6->vtable + (*piVar9 + 6);
          goto LAB_0358d324;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    param_3 = (MethodInfo *)0x6;
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar11);
LAB_0358d324:
    plVar4 = (long *)(*pVVar3->methodPtr)(pGVar11,pVVar3->method);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(EBGDOILAAEJ_c **)(piVar10 + -2) == EBGDOILAAEJ_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0358d38c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      param_3 = (MethodInfo *)0x0;
      puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_0358d38c:
      bVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      KICJDJCJLKJ__JEGAPBGMFJJ(__this,(bool)(bVar2 & 1),param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ILGLILCHONH(Action<MPAKDCNMLEG> JLPMKKKMANE)  [RVA 0x348D62C]
// KICJDJCJLKJ$$ILGLILCHONH @ RVA 0x348D62C

void KICJDJCJLKJ__ILGLILCHONH
               (KICJDJCJLKJ_o *__this,System_Action_MPAKDCNMLEG__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_045683f2 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_045683f2 = 1;
  }
  pKVar6 = (__this->fields).FOIMNIOLPDJ;
  if (pKVar6 == (KKEKKPIDGBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 0x10);
        goto LAB_0358d6bc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x10);
LAB_0358d6bc:
                    /* WARNING: Could not recover jumptable at 0x0358d6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

