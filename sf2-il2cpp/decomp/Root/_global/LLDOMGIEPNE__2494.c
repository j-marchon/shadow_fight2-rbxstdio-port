// TypeDefIndex 2494
// Namespace: 
// public class LLDOMGIEPNE : CPHBJEDCAEO, IDisposable
// Fields:
//   private MNBNELNLOCB IOPFMDCMMLD; // 0x10
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x18
//   private Action BIFPFOCAPFD; // 0x20
//   private Action<string> EBFCGDOJJEM; // 0x28
//   private Action<PCJHNLGCCOB> CAMHBHJJKCD; // 0x30
//   private string <JCOGANJOOHC>k__BackingField; // 0x38
//   private static LLDOMGIEPNE CBDMFFMCJBK; // 0x0

// ===== public static void EOHMFJFFFIN()  [RVA 0x3378FD4]
// LLDOMGIEPNE$$EOHMFJFFFIN @ RVA 0x3378FD4

void LLDOMGIEPNE__EOHMFJFFFIN(MethodInfo *method)

{
  LLDOMGIEPNE_o *pLVar1;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04567b65 & 1) == 0) {
    FUN_01bab630(&LLDOMGIEPNE_TypeInfo);
    DAT_04567b65 = 1;
  }
                    /* try { // try from 03479004 to 0357902b has its CatchHandler @ 03479bb4 */
  if (LLDOMGIEPNE_TypeInfo->static_fields->CBDMFFMCJBK != (LLDOMGIEPNE_o *)0x0) {
    return;
  }
  auVar2 = thunk_FUN_01bda818();
  pLVar1 = auVar2._0_8_;
  LLDOMGIEPNE___ctor(pLVar1,auVar2._8_8_);
  LLDOMGIEPNE_TypeInfo->static_fields->CBDMFFMCJBK = pLVar1;
  thunk_FUN_01c20e04(LLDOMGIEPNE_TypeInfo->static_fields,pLVar1);
  pLVar1 = LLDOMGIEPNE_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pLVar1 != (LLDOMGIEPNE_o *)0x0) {
                    /* try { // try from 03479060 to 0357908b has its CatchHandler @ 03479ba0 */
    LLDOMGIEPNE__GIMAJOGGBHM(pLVar1,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OFDOOENPCBE(Action JLPMKKKMANE)  [RVA 0x337955C]
// LLDOMGIEPNE$$OFDOOENPCBE @ RVA 0x337955C

void LLDOMGIEPNE__OFDOOENPCBE(LLDOMGIEPNE_o *__this,System_Action_o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
  if ((DAT_04567b66 & 1) == 0) {
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
    DAT_04567b66 = 1;
  }
  pMVar6 = (__this->fields).IOPFMDCMMLD;
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
        pVVar2 = pMVar3->vtable + (*piVar5 + 5);
        goto LAB_034795ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,5);
LAB_034795ec:
                    /* WARNING: Could not recover jumptable at 0x03479600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void LEGDCFPPPJG(Unit HOKBHLPPCAH)  [RVA 0x3379608]
// LLDOMGIEPNE$$LEGDCFPPPJG @ RVA 0x3379608

void LLDOMGIEPNE__LEGDCFPPPJG(Il2CppObject *__this)

{
  Il2CppClass *pIVar1;
  
  if ((DAT_04567b67 & 1) == 0) {
                    /* try { // try from 0347962c to 03579653 has its CatchHandler @ 034799d4 */
    FUN_01bab630(&StringLiteral_7538/*"InitializeComplete"*/);
    DAT_04567b67 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA(__this,StringLiteral_7538/*"InitializeComplete"*/,(MethodInfo *)0x0);
  pIVar1 = __this[2].klass;
  if (pIVar1 != (Il2CppClass *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03479668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pIVar1->_1).namespaze)
              ((pIVar1->_1).element_class,*(undefined8 *)&(pIVar1->_1).byval_arg.bits);
    return;
  }
  return;
}


// ===== public void BCEAEOIODAP(Action<string> CJNHFNHJHPE)  [RVA 0x3379678]
// LLDOMGIEPNE$$BCEAEOIODAP @ RVA 0x3379678

void LLDOMGIEPNE__BCEAEOIODAP
               (LLDOMGIEPNE_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *source;
  
                    /* try { // try from 03479688 to 035796b3 has its CatchHandler @ 034799c0 */
  if ((DAT_04567b68 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04567b68 = 1;
  }
  ppSVar6 = &(__this->fields).EBFCGDOJJEM;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03479724 to 0357972b has its CatchHandler @ 03479968 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 034796f0 to 035796f7 has its CatchHandler @ 03479988 */
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,source);
                    /* try { // try from 034796fc to 03579703 has its CatchHandler @ 0347998c */
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 03479714 to 0357971b has its CatchHandler @ 0347996c */
  return;
}


// ===== public static CPHBJEDCAEO AIHNLLGNBLC()  [RVA 0x3379728]
// LLDOMGIEPNE$$AIHNLLGNBLC @ RVA 0x3379728

CPHBJEDCAEO_o * LLDOMGIEPNE__AIHNLLGNBLC(MethodInfo *method)

{
                    /* try { // try from 03479730 to 0357974b has its CatchHandler @ 03479974 */
  if ((DAT_04567b69 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&LLDOMGIEPNE_TypeInfo);
    DAT_04567b69 = 1;
  }
  LLDOMGIEPNE__EOHMFJFFFIN(method);
  return (CPHBJEDCAEO_o *)LLDOMGIEPNE_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public void GJCJCCHFDKG(Action<PCJHNLGCCOB> CJNHFNHJHPE)  [RVA 0x3379774]
// LLDOMGIEPNE$$GJCJCCHFDKG @ RVA 0x3379774

void LLDOMGIEPNE__GJCJCCHFDKG
               (LLDOMGIEPNE_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *source;
  
                    /* try { // try from 03479794 to 035797b7 has its CatchHandler @ 03479970 */
  if ((DAT_04567b6a & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04567b6a = 1;
  }
  ppSVar6 = &(__this->fields).CAMHBHJJKCD;
  source = *ppSVar6;
  do {
                    /* try { // try from 034797b8 to 0357984f has its CatchHandler @ 03477bc4 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<PCJHNLGCCOB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PCJHNLGCCOB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_PCJHNLGCCOB__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void AJMEOKKLDPF(Action<string> JLPMKKKMANE)  [RVA 0x3379824]
// LLDOMGIEPNE$$AJMEOKKLDPF @ RVA 0x3379824

void LLDOMGIEPNE__AJMEOKKLDPF
               (LLDOMGIEPNE_o *__this,System_Action_string__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
  if ((DAT_04567b6b & 1) == 0) {
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
                    /* try { // try from 03479850 to 03579857 has its CatchHandler @ 03479fe4 */
    DAT_04567b6b = 1;
  }
  pMVar6 = (__this->fields).IOPFMDCMMLD;
                    /* try { // try from 03479858 to 0357985f has its CatchHandler @ 03479f1c */
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034798cc to 035798cf has its CatchHandler @ 03479c80 */
    FUN_01bab8c8();
  }
                    /* try { // try from 03479860 to 03579863 has its CatchHandler @ 03479f10 */
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
                    /* try { // try from 03479864 to 0357986b has its CatchHandler @ 03479e50 */
  uVar4 = (ulong)uVar1;
                    /* try { // try from 0347986c to 03579873 has its CatchHandler @ 03479d90 */
  if (uVar4 != 0) {
                    /* try { // try from 03479874 to 03579877 has its CatchHandler @ 03479d78 */
                    /* try { // try from 03479878 to 0357987b has its CatchHandler @ 03477bc4 */
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0347987c to 03579883 has its CatchHandler @ 03479cb4 */
                    /* try { // try from 03479884 to 03579887 has its CatchHandler @ 03479f0c */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
                    /* try { // try from 034798a4 to 035798a7 has its CatchHandler @ 03479ba4 */
                    /* try { // try from 034798a8 to 035798ab has its CatchHandler @ 03479d74 */
                    /* try { // try from 034798ac to 035798af has its CatchHandler @ 03479b94 */
                    /* try { // try from 034798b0 to 035798b7 has its CatchHandler @ 03479ad0 */
        pVVar2 = pMVar3->vtable + (*piVar5 + 3);
        goto LAB_034798b4;
      }
                    /* try { // try from 03479888 to 0357988b has its CatchHandler @ 03479ca0 */
      uVar4 = uVar4 - 1;
                    /* try { // try from 0347988c to 0357988f has its CatchHandler @ 03479f0c */
      piVar5 = piVar5 + 4;
                    /* try { // try from 03479890 to 03579893 has its CatchHandler @ 03479c94 */
    } while (uVar4 != 0);
  }
                    /* try { // try from 03479894 to 03579897 has its CatchHandler @ 03479c84 */
                    /* try { // try from 03479898 to 0357989f has its CatchHandler @ 03479bb8 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,3);
                    /* try { // try from 034798a0 to 035798a3 has its CatchHandler @ 03479d74 */
LAB_034798b4:
                    /* try { // try from 034798b8 to 035798bb has its CatchHandler @ 03479c90 */
                    /* try { // try from 034798bc to 035798bf has its CatchHandler @ 03479abc */
                    /* try { // try from 034798c0 to 035798c3 has its CatchHandler @ 03479c90 */
                    /* try { // try from 034798c4 to 035798c7 has its CatchHandler @ 03479c80 */
                    /* WARNING: Could not recover jumptable at 0x034798c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034798c8 to 035798cb has its CatchHandler @ 03479aac */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public void MHGKHJHMOED(Action<string> CJNHFNHJHPE)  [RVA 0x33798D0]
// LLDOMGIEPNE$$MHGKHJHMOED @ RVA 0x33798D0

void LLDOMGIEPNE__MHGKHJHMOED
               (LLDOMGIEPNE_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *a;
  
                    /* try { // try from 034798d0 to 035798d3 has its CatchHandler @ 03479aa0 */
                    /* try { // try from 034798d4 to 035798db has its CatchHandler @ 034799d8 */
                    /* try { // try from 034798dc to 035798df has its CatchHandler @ 03479b90 */
                    /* try { // try from 034798e0 to 035798e3 has its CatchHandler @ 034799c4 */
                    /* try { // try from 034798e4 to 035798e7 has its CatchHandler @ 03479b90 */
                    /* try { // try from 034798e8 to 035798eb has its CatchHandler @ 034799b8 */
                    /* try { // try from 034798ec to 035798f3 has its CatchHandler @ 03477bc4 */
  if ((DAT_04567b6c & 1) == 0) {
                    /* try { // try from 034798f4 to 035798f7 has its CatchHandler @ 03479a9c */
                    /* try { // try from 034798f8 to 035798fb has its CatchHandler @ 0347999c */
                    /* try { // try from 034798fc to 035798ff has its CatchHandler @ 03479a9c */
    FUN_01bab630(&System_Action<string>_TypeInfo);
                    /* try { // try from 03479900 to 03579903 has its CatchHandler @ 03479994 */
                    /* try { // try from 03479904 to 03579907 has its CatchHandler @ 034799b4 */
    DAT_04567b6c = 1;
  }
                    /* try { // try from 03479908 to 0357990b has its CatchHandler @ 03479978 */
  ppSVar6 = &(__this->fields).EBFCGDOJJEM;
                    /* try { // try from 0347990c to 0357990f has its CatchHandler @ 034799b4 */
                    /* try { // try from 03479910 to 03579913 has its CatchHandler @ 03479990 */
  a = *ppSVar6;
  do {
                    /* try { // try from 03479914 to 03579917 has its CatchHandler @ 03479964 */
                    /* try { // try from 03479918 to 0357991b has its CatchHandler @ 03479990 */
                    /* try { // try from 0347991c to 0357991f has its CatchHandler @ 03479960 */
                    /* try { // try from 03479920 to 03579923 has its CatchHandler @ 0347995c */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
                    /* try { // try from 03479924 to 03579927 has its CatchHandler @ 03479958 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 03479938 with catch @ 03479944 */
      lVar4 = 0;
    }
    else {
                    /* try { // try from 03479928 to 0357992b has its CatchHandler @ 03479954 */
                    /* try { // try from 0347992c to 0357992f has its CatchHandler @ 03479950 */
                    /* try { // try from 03479930 to 03579933 has its CatchHandler @ 0347994c */
                    /* try { // try from 03479934 to 03579937 has its CatchHandler @ 03479948 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
                    /* try { // try from 03479938 to 0357993b has its CatchHandler @ 03479944 */
                    /* try { // try from 0347993c to 035799ef has its CatchHandler @ 03477bc4 */
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 03479730 with catch @ 03479974 */
                    /* catch() { ... } // from try @ 03479908 with catch @ 03479978 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0347940c with catch @ 0347997c */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* catch() { ... } // from try @ 03479934 with catch @ 03479948 */
                    /* catch() { ... } // from try @ 03479930 with catch @ 0347994c */
                    /* catch() { ... } // from try @ 0347992c with catch @ 03479950 */
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,a);
                    /* catch() { ... } // from try @ 03479928 with catch @ 03479954 */
    bVar2 = a != pSVar5;
    a = pSVar5;
                    /* catch() { ... } // from try @ 03479924 with catch @ 03479958 */
                    /* catch() { ... } // from try @ 03479920 with catch @ 0347995c */
  } while (bVar2);
                    /* catch() { ... } // from try @ 0347991c with catch @ 03479960 */
                    /* catch() { ... } // from try @ 03479914 with catch @ 03479964 */
                    /* catch() { ... } // from try @ 03479724 with catch @ 03479968 */
                    /* catch() { ... } // from try @ 03479714 with catch @ 0347996c */
                    /* catch() { ... } // from try @ 03479794 with catch @ 03479970 */
  return;
}


// ===== private void OGMDDKMLMKO(Action<PCJHNLGCCOB> JLPMKKKMANE)  [RVA 0x3379980]
// LLDOMGIEPNE$$OGMDDKMLMKO @ RVA 0x3379980

void LLDOMGIEPNE__OGMDDKMLMKO
               (LLDOMGIEPNE_o *__this,System_Action_PCJHNLGCCOB__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
                    /* catch() { ... } // from try @ 034793fc with catch @ 03479980 */
                    /* catch() { ... } // from try @ 0347947c with catch @ 03479984 */
                    /* catch() { ... } // from try @ 034796f0 with catch @ 03479988 */
                    /* catch() { ... } // from try @ 034796fc with catch @ 0347998c */
                    /* catch() { ... } // from try @ 03479910 with catch @ 03479990
                       catch() { ... } // from try @ 03479918 with catch @ 03479990 */
                    /* catch() { ... } // from try @ 03479900 with catch @ 03479994 */
                    /* catch() { ... } // from try @ 03479418 with catch @ 03479998 */
  if ((DAT_04567b6d & 1) == 0) {
                    /* catch() { ... } // from try @ 034798f8 with catch @ 0347999c */
                    /* catch() { ... } // from try @ 034790fc with catch @ 034799a0 */
                    /* catch() { ... } // from try @ 034790ec with catch @ 034799a4 */
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
                    /* catch() { ... } // from try @ 0347916c with catch @ 034799a8 */
                    /* catch() { ... } // from try @ 034793d8 with catch @ 034799ac */
    DAT_04567b6d = 1;
  }
                    /* catch() { ... } // from try @ 034793e4 with catch @ 034799b0 */
  pMVar6 = (__this->fields).IOPFMDCMMLD;
                    /* catch() { ... } // from try @ 03479904 with catch @ 034799b4
                       catch() { ... } // from try @ 0347990c with catch @ 034799b4 */
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 034798e8 with catch @ 034799b8 */
                    /* catch() { ... } // from try @ 03479108 with catch @ 034799bc */
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 03479688 with catch @ 034799c0 */
                    /* catch() { ... } // from try @ 034798e0 with catch @ 034799c4 */
  uVar4 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 03478e04 with catch @ 034799c8 */
                    /* catch() { ... } // from try @ 03478df4 with catch @ 034799cc */
  if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 03478e74 with catch @ 034799d0 */
                    /* catch() { ... } // from try @ 0347962c with catch @ 034799d4 */
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 034798d4 with catch @ 034799d8 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
                    /* catch() { ... } // from try @ 034799f0 with catch @ 03479a08 */
        pVVar2 = pMVar3->vtable + *piVar5;
        goto LAB_03479a0c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 034799f0 to 035799f3 has its CatchHandler @ 03479a08 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,0);
LAB_03479a0c:
                    /* try { // try from 03479a18 to 03579a93 has its CatchHandler @ 0347a0ac */
                    /* WARNING: Could not recover jumptable at 0x03479a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private static MNBNELNLOCB ADLLFHPKFIB()  [RVA 0x3379A28]
// LLDOMGIEPNE$$ADLLFHPKFIB @ RVA 0x3379A28

MNBNELNLOCB_o * LLDOMGIEPNE__ADLLFHPKFIB(MethodInfo *method)

{
  int32_t iVar1;
  LGPCBNIFHNN_o *__this;
  FLGBBOGNOFL_o *__this_00;
  
  if ((DAT_04567b6e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&FLGBBOGNOFL_TypeInfo);
    FUN_01bab630(&LGPCBNIFHNN_TypeInfo);
    DAT_04567b6e = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar1 != 8) {
                    /* catch() { ... } // from try @ 034790c8 with catch @ 03479a94
                       try { // try from 03479a94 to 03579ae7 has its CatchHandler @ 03477bc4 */
                    /* catch() { ... } // from try @ 034790d4 with catch @ 03479a98 */
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034798f4 with catch @ 03479a9c
                       catch() { ... } // from try @ 034798fc with catch @ 03479a9c */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 034798d0 with catch @ 03479aa0 */
                    /* catch() { ... } // from try @ 03478e10 with catch @ 03479aa4 */
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03479370 with catch @ 03479aa8 */
                    /* catch() { ... } // from try @ 034798c8 with catch @ 03479aac */
    if (iVar1 != 0xb) {
                    /* catch() { ... } // from try @ 034798b0 with catch @ 03479ad0 */
      __this_00 = (FLGBBOGNOFL_o *)thunk_FUN_01bda818(FLGBBOGNOFL_TypeInfo);
                    /* try { // try from 03479ae8 to 03579aeb has its CatchHandler @ 03479afc */
      FLGBBOGNOFL___ctor(__this_00,(MethodInfo *)0x0);
      return (MNBNELNLOCB_o *)__this_00;
    }
  }
                    /* catch() { ... } // from try @ 03478b0c with catch @ 03479ab0 */
                    /* catch() { ... } // from try @ 03478afc with catch @ 03479ab4 */
                    /* catch() { ... } // from try @ 03478b7c with catch @ 03479ab8 */
                    /* catch() { ... } // from try @ 034798bc with catch @ 03479abc */
  __this = (LGPCBNIFHNN_o *)thunk_FUN_01bda818(LGPCBNIFHNN_TypeInfo);
                    /* catch() { ... } // from try @ 03478814 with catch @ 03479ac0 */
                    /* catch() { ... } // from try @ 03478804 with catch @ 03479ac4 */
                    /* catch() { ... } // from try @ 03478884 with catch @ 03479ac8 */
  LGPCBNIFHNN___ctor(__this,(MethodInfo *)0x0);
  return (MNBNELNLOCB_o *)__this;
                    /* catch() { ... } // from try @ 03479314 with catch @ 03479acc */
}


// ===== private void OKJEMPOOMOD(PCJHNLGCCOB NONPLOOOOAG)  [RVA 0x3379AFC]
// LLDOMGIEPNE$$OKJEMPOOMOD @ RVA 0x3379AFC

void LLDOMGIEPNE__OKJEMPOOMOD(LLDOMGIEPNE_o *__this,PCJHNLGCCOB_o *NONPLOOOOAG,MethodInfo *method)

{
  System_String_array *values;
  System_Func_KeyValuePair_string__string___string__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TResult__o *values_00;
  System_String_o *pSVar2;
  System_Action_PCJHNLGCCOB__o *pSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_KeyValuePair_string__string___string__o *selector;
  System_String_o *local_80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  System_String_o *pSStack_68;
  System_Collections_Generic_IDictionary_string__string__o *local_60;
  
                    /* catch() { ... } // from try @ 03479ae8 with catch @ 03479afc */
                    /* try { // try from 03479b0c to 03579b87 has its CatchHandler @ 0347a0ac */
  if ((DAT_04567b6f & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__);
    FUN_01bab630(&System_Func<KeyValuePair<string,_string>,_string>_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&Method_LLDOMGIEPNE_<>c_IJLAGGGOAKC__);
    FUN_01bab630(&LLDOMGIEPNE_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_49/*"\n	Body: "*/);
    FUN_01bab630(&StringLiteral_50/*"\n	Data:"*/);
                    /* catch() { ... } // from try @ 03478dd0 with catch @ 03479b88
                       try { // try from 03479b88 to 03579bcf has its CatchHandler @ 03477bc4 */
                    /* catch() { ... } // from try @ 03478ddc with catch @ 03479b8c */
    FUN_01bab630(&StringLiteral_54/*"\n	Title: "*/);
                    /* catch() { ... } // from try @ 034798dc with catch @ 03479b90
                       catch() { ... } // from try @ 034798e4 with catch @ 03479b90 */
                    /* catch() { ... } // from try @ 034798ac with catch @ 03479b94 */
                    /* catch() { ... } // from try @ 03478b18 with catch @ 03479b98 */
    FUN_01bab630(&StringLiteral_2419/*"<null>"*/);
                    /* catch() { ... } // from try @ 03478820 with catch @ 03479b9c */
                    /* catch() { ... } // from try @ 03479060 with catch @ 03479ba0 */
                    /* catch() { ... } // from try @ 034798a4 with catch @ 03479ba4 */
    FUN_01bab630(&StringLiteral_53/*"\n	Id: "*/);
                    /* catch() { ... } // from try @ 03478510 with catch @ 03479ba8 */
                    /* catch() { ... } // from try @ 03478500 with catch @ 03479bac */
                    /* catch() { ... } // from try @ 03478580 with catch @ 03479bb0 */
    FUN_01bab630(&StringLiteral_48/*"\n	"*/);
                    /* catch() { ... } // from try @ 03479004 with catch @ 03479bb4 */
                    /* catch() { ... } // from try @ 03479898 with catch @ 03479bb8 */
    FUN_01bab630(&StringLiteral_8997/*"MessageReceived:\n	From: "*/);
    DAT_04567b6f = 1;
  }
                    /* try { // try from 03479bd0 to 03579bd3 has its CatchHandler @ 03479bec */
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,10);
  if (values == (System_String_array *)0x0) {
LAB_03479e78:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03479e68 with catch @ 03479e78 */
    FUN_01bab8c8();
  }
  if ((int)values->max_length != 0) {
                    /* catch() { ... } // from try @ 03479bd0 with catch @ 03479bec */
    values->m_Items[0] = StringLiteral_8997/*"MessageReceived:\n	From: "*/;
                    /* try { // try from 03479bfc to 03579c77 has its CatchHandler @ 0347a0ac */
    thunk_FUN_01c20e04(values->m_Items);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = (NONPLOOOOAG->fields).DBNCGNGNGNM;
      thunk_FUN_01c20e04(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = StringLiteral_53/*"\n	Id: "*/;
        thunk_FUN_01c20e04(values->m_Items + 2);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = (NONPLOOOOAG->fields).IGLHCNLNIPK;
          thunk_FUN_01c20e04(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 03478ad8 with catch @ 03479c78
                       try { // try from 03479c78 to 03579ccb has its CatchHandler @ 03477bc4 */
                    /* catch() { ... } // from try @ 03478ae4 with catch @ 03479c7c */
                    /* catch() { ... } // from try @ 034798c4 with catch @ 03479c80
                       catch() { ... } // from try @ 034798cc with catch @ 03479c80 */
                    /* catch() { ... } // from try @ 03479894 with catch @ 03479c84 */
            values->m_Items[4] = StringLiteral_54/*"\n	Title: "*/;
                    /* catch() { ... } // from try @ 034787e0 with catch @ 03479c88 */
                    /* catch() { ... } // from try @ 034787ec with catch @ 03479c8c */
            thunk_FUN_01c20e04(values->m_Items + 4);
                    /* catch() { ... } // from try @ 034798b8 with catch @ 03479c90
                       catch() { ... } // from try @ 034798c0 with catch @ 03479c90 */
                    /* catch() { ... } // from try @ 03479890 with catch @ 03479c94 */
                    /* catch() { ... } // from try @ 0347851c with catch @ 03479c98 */
            if (5 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 03478d68 with catch @ 03479c9c */
                    /* catch() { ... } // from try @ 03479888 with catch @ 03479ca0 */
                    /* catch() { ... } // from try @ 03478218 with catch @ 03479ca4 */
              values->m_Items[5] = (NONPLOOOOAG->fields).IKIINEOIIAK;
                    /* catch() { ... } // from try @ 03478208 with catch @ 03479ca8 */
                    /* catch() { ... } // from try @ 03478288 with catch @ 03479cac */
              thunk_FUN_01c20e04(values->m_Items + 5);
                    /* catch() { ... } // from try @ 03478d0c with catch @ 03479cb0 */
                    /* catch() { ... } // from try @ 0347987c with catch @ 03479cb4 */
              if (6 < (uint)values->max_length) {
                    /* try { // try from 03479ccc to 03579ccf has its CatchHandler @ 03479ce0 */
                values->m_Items[6] = StringLiteral_49/*"\n	Body: "*/;
                thunk_FUN_01c20e04(values->m_Items + 6);
                    /* catch() { ... } // from try @ 03479ccc with catch @ 03479ce0 */
                if (7 < (uint)values->max_length) {
                  values->m_Items[7] = (NONPLOOOOAG->fields).DJGNIBCJDLM;
                    /* try { // try from 03479cf0 to 03579d6b has its CatchHandler @ 0347a0ac */
                  thunk_FUN_01c20e04(values->m_Items + 7);
                  if (8 < (uint)values->max_length) {
                    values->m_Items[8] = StringLiteral_50/*"\n	Data:"*/;
                    thunk_FUN_01c20e04();
                    source = (System_Collections_Generic_IEnumerable_TSource__o *)
                             (NONPLOOOOAG->fields).KOANCCDDBDA;
                    pSVar2 = StringLiteral_2419/*"<null>"*/;
                    if (source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                      if ((LLDOMGIEPNE_<>c_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pSVar2 = StringLiteral_48/*"\n	"*/;
                      selector = LLDOMGIEPNE_<>c_TypeInfo->static_fields->__9__21_9;
                      if (selector == (System_Func_KeyValuePair_string__string___string__o *)0x0) {
                        if ((LLDOMGIEPNE_<>c_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 034784dc with catch @ 03479d6c
                       try { // try from 03479d6c to 03579da7 has its CatchHandler @ 03477bc4 */
                        }
                    /* catch() { ... } // from try @ 034784e8 with catch @ 03479d70 */
                    /* catch() { ... } // from try @ 034798a0 with catch @ 03479d74
                       catch() { ... } // from try @ 034798a8 with catch @ 03479d74 */
                    /* catch() { ... } // from try @ 03479874 with catch @ 03479d78 */
                    /* catch() { ... } // from try @ 03478224 with catch @ 03479d7c */
                    /* catch() { ... } // from try @ 03478a70 with catch @ 03479d80 */
                    /* catch() { ... } // from try @ 03478778 with catch @ 03479d84 */
                        selector = (System_Func_KeyValuePair_string__string___string__o *)
                                   thunk_FUN_01bda818(
                                                  System_Func<KeyValuePair<string,_string>,_string>_TypeInfo
                                                  );
                    /* catch() { ... } // from try @ 03478a14 with catch @ 03479d88 */
                    /* catch() { ... } // from try @ 0347871c with catch @ 03479d8c */
                    /* catch() { ... } // from try @ 0347986c with catch @ 03479d90 */
                        System_Func<KeyValuePair<object,_object>,_object>___ctor();
                    /* try { // try from 03479da8 to 03579dab has its CatchHandler @ 03479dc4 */
                        ppSVar1 = &LLDOMGIEPNE_<>c_TypeInfo->static_fields->__9__21_9;
                        *ppSVar1 = selector;
                        thunk_FUN_01c20e04(ppSVar1,selector);
                      }
                    /* catch() { ... } // from try @ 03479da8 with catch @ 03479dc4 */
                      values_00 = System_Linq_Enumerable__Select<KeyValuePair<object,_object>,_object>
                                            (source,(System_Func_TSource__TResult__o *)selector,
                                             Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__
                                            );
                    /* try { // try from 03479dd4 to 03579e4f has its CatchHandler @ 0347a0ac */
                      pSVar2 = System_String__Join(pSVar2,(
                                                  System_Collections_Generic_IEnumerable_string__o *
                                                  )values_00,(MethodInfo *)0x0);
                      if (source == (System_Collections_Generic_IEnumerable_TSource__o *)0x0)
                      goto LAB_03479e78;
                    }
                    if (9 < (uint)values->max_length) {
                      values->m_Items[9] = pSVar2;
                      thunk_FUN_01c20e04();
                      pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
                      pSVar3 = (__this->fields).CAMHBHJJKCD;
                      if (pSVar3 != (System_Action_PCJHNLGCCOB__o *)0x0) {
                        local_60 = (NONPLOOOOAG->fields).KOANCCDDBDA;
                        pSStack_78 = (NONPLOOOOAG->fields).IGLHCNLNIPK;
                        local_80 = (NONPLOOOOAG->fields).DBNCGNGNGNM;
                        pSStack_68 = (NONPLOOOOAG->fields).DJGNIBCJDLM;
                        pSStack_70 = (NONPLOOOOAG->fields).IKIINEOIIAK;
                    /* catch() { ... } // from try @ 03479864 with catch @ 03479e50
                       try { // try from 03479e50 to 03579e67 has its CatchHandler @ 03477bc4 */
                        (*(code *)(pSVar3->fields).super.super.invoke_impl)
                                  ((pSVar3->fields).super.super.method_code,&local_80,
                                   (pSVar3->fields).super.super.method);
                      }
                    /* try { // try from 03479e68 to 03579e6b has its CatchHandler @ 03479e78 */
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void Dispose()  [RVA 0x3379E7C]
// LLDOMGIEPNE$$Dispose @ RVA 0x3379E7C

void LLDOMGIEPNE__Dispose(LLDOMGIEPNE_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
                    /* try { // try from 03479e88 to 03579f03 has its CatchHandler @ 0347a0ac */
  if ((DAT_04567b70 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_04567b70 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
  }
  (__this->fields).IOPFMDCMMLD = (MNBNELNLOCB_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  return;
}


// ===== public void BIEFPKNCHOG(Action CJNHFNHJHPE)  [RVA 0x3379EE8]
// LLDOMGIEPNE$$BIEFPKNCHOG @ RVA 0x3379EE8

void LLDOMGIEPNE__BIEFPKNCHOG(LLDOMGIEPNE_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
                    /* catch() { ... } // from try @ 034781e4 with catch @ 03479f04
                       try { // try from 03479f04 to 03579f3b has its CatchHandler @ 03477bc4 */
  if ((DAT_04567b71 & 1) == 0) {
                    /* catch() { ... } // from try @ 034781f0 with catch @ 03479f08 */
                    /* catch() { ... } // from try @ 03479884 with catch @ 03479f0c
                       catch() { ... } // from try @ 0347988c with catch @ 03479f0c */
                    /* catch() { ... } // from try @ 03479860 with catch @ 03479f10 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 03478474 with catch @ 03479f14 */
                    /* catch() { ... } // from try @ 03478418 with catch @ 03479f18 */
    DAT_04567b71 = 1;
  }
                    /* catch() { ... } // from try @ 03479858 with catch @ 03479f1c */
  ppSVar4 = &(__this->fields).BIFPFOCAPFD;
  source = *ppSVar4;
                    /* try { // try from 03479f3c to 03579f3f has its CatchHandler @ 03479f50 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* catch() { ... } // from try @ 03479f3c with catch @ 03479f50 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
                    /* try { // try from 03479f60 to 03579fdb has its CatchHandler @ 0347a0ac */
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void KJHBAIINPKL(string NPAAFDINGAB)  [RVA 0x3379F84]
// LLDOMGIEPNE$$KJHBAIINPKL @ RVA 0x3379F84

void LLDOMGIEPNE__KJHBAIINPKL(LLDOMGIEPNE_o *__this,System_String_o *NPAAFDINGAB,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  System_Action_string__o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567b72 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13861/*"TokenReceived: "*/);
    DAT_04567b72 = 1;
  }
  ppSVar2 = &(__this->fields)._JCOGANJOOHC_k__BackingField;
  *ppSVar2 = NPAAFDINGAB;
  thunk_FUN_01c20e04(ppSVar2,NPAAFDINGAB);
                    /* catch() { ... } // from try @ 0347817c with catch @ 03479fdc
                       try { // try from 03479fdc to 0357a003 has its CatchHandler @ 03477bc4 */
                    /* catch() { ... } // from try @ 03478120 with catch @ 03479fe0 */
  JLNPKGGFFDD = System_String__Concat(StringLiteral_13861/*"TokenReceived: "*/,*ppSVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03479850 with catch @ 03479fe4 */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).EBFCGDOJJEM;
  if (pSVar1 != (System_Action_string__o *)0x0) {
                    /* try { // try from 0347a004 to 0357a007 has its CatchHandler @ 0347a018 */
                    /* WARNING: Could not recover jumptable at 0x0347a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 0347a004 with catch @ 0347a018 */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,*ppSVar2,(pSVar1->fields).super.super.method
              );
    return;
  }
                    /* try { // try from 0347a028 to 0357a097 has its CatchHandler @ 0347a0ac */
  return;
}


// ===== private void BGEJPAJNJHI(Action JLPMKKKMANE)  [RVA 0x337A02C]
// LLDOMGIEPNE$$BGEJPAJNJHI @ RVA 0x337A02C

void LLDOMGIEPNE__BGEJPAJNJHI(LLDOMGIEPNE_o *__this,System_Action_o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
  if ((DAT_04567b73 & 1) == 0) {
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
    DAT_04567b73 = 1;
  }
  pMVar6 = (__this->fields).IOPFMDCMMLD;
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
                    /* catch() { ... } // from try @ 03479a18 with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479b0c with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479bfc with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479cf0 with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479dd4 with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479e88 with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479f60 with catch @ 0347a0ac
                       catch() { ... } // from try @ 0347a028 with catch @ 0347a0ac
                       catch() { ... } // from try @ 0347a0a4 with catch @ 0347a0ac */
                    /* try { // try from 0347a0b0 to 0357a553 has its CatchHandler @ 0347a0b0
                       catch() { ... } // from try @ 0347a0b0 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347acc4 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347ad44 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b404 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b674 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b6b0 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b6c0 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b848 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b920 with catch @ 0347a0b0 */
        pVVar2 = pMVar3->vtable + (*piVar5 + 2);
        goto LAB_0347a0bc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
                    /* try { // try from 0347a098 to 0357a0a3 has its CatchHandler @ 03477bc4 */
    } while (uVar4 != 0);
  }
                    /* try { // try from 0347a0a4 to 0357a0ab has its CatchHandler @ 0347a0ac */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,2);
LAB_0347a0bc:
                    /* WARNING: Could not recover jumptable at 0x0347a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void AHEKNMBPDEL(Action<PCJHNLGCCOB> JLPMKKKMANE)  [RVA 0x337A0D8]
// LLDOMGIEPNE$$AHEKNMBPDEL @ RVA 0x337A0D8

void LLDOMGIEPNE__AHEKNMBPDEL
               (LLDOMGIEPNE_o *__this,System_Action_PCJHNLGCCOB__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
  if ((DAT_04567b74 & 1) == 0) {
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
    DAT_04567b74 = 1;
  }
  pMVar6 = (__this->fields).IOPFMDCMMLD;
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
        pVVar2 = pMVar3->vtable + (*piVar5 + 4);
        goto LAB_0347a168;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,4);
LAB_0347a168:
                    /* WARNING: Could not recover jumptable at 0x0347a17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void GIMAJOGGBHM()  [RVA 0x33790D4]
// LLDOMGIEPNE$$GIMAJOGGBHM @ RVA 0x33790D4

void LLDOMGIEPNE__GIMAJOGGBHM(LLDOMGIEPNE_o *__this,MethodInfo *method)

{
  ushort uVar1;
  MethodInfo *method_00;
  MNBNELNLOCB_o *pMVar2;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *source;
  System_Action_T__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Action_Action_T___o *pSVar5;
  System_Action_Action_T___o *pSVar6;
  System_IObservable_T__o *pSVar7;
  VirtualInvokeData *pVVar8;
  MNBNELNLOCB_c *pMVar9;
  ulong uVar10;
  int32_t *piVar11;
  
                    /* try { // try from 034790d4 to 035790db has its CatchHandler @ 03479a98 */
                    /* try { // try from 034790ec to 035790f3 has its CatchHandler @ 034799a4 */
  if ((DAT_04567b75 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
                    /* try { // try from 034790fc to 03579103 has its CatchHandler @ 034799a0 */
    FUN_01bab630(&System_Action<Action>_TypeInfo);
                    /* try { // try from 03479108 to 03579123 has its CatchHandler @ 034799bc */
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<Action<PCJHNLGCCOB>>_TypeInfo);
    FUN_01bab630(&System_Action<Action<string>>_TypeInfo);
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<MNBNELNLOCB>__);
    FUN_01bab630(&Method_LLDOMGIEPNE_ABCEGHINJDD__);
    FUN_01bab630(&Method_LLDOMGIEPNE_AHEKNMBPDEL__);
                    /* try { // try from 0347916c to 0357918f has its CatchHandler @ 034799a8 */
    FUN_01bab630(&Method_LLDOMGIEPNE_AJMEOKKLDPF__);
    FUN_01bab630(&Method_LLDOMGIEPNE_BGEJPAJNJHI__);
    FUN_01bab630(&Method_LLDOMGIEPNE_KJHBAIINPKL__);
                    /* try { // try from 03479190 to 03579313 has its CatchHandler @ 03477bc4 */
    FUN_01bab630(&Method_LLDOMGIEPNE_LEGDCFPPPJG__);
    FUN_01bab630(&Method_LLDOMGIEPNE_OFDOOENPCBE__);
    FUN_01bab630(&Method_LLDOMGIEPNE_OGMDDKMLMKO__);
    FUN_01bab630(&Method_LLDOMGIEPNE_OKJEMPOOMOD__);
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<PCJHNLGCCOB>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<PCJHNLGCCOB>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<string>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_04567b75 = 1;
  }
  if ((__this->fields).IOPFMDCMMLD == (MNBNELNLOCB_o *)0x0) {
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
    pMVar2 = LLDOMGIEPNE__ADLLFHPKFIB(method_00);
    (__this->fields).IOPFMDCMMLD = pMVar2;
    thunk_FUN_01c20e04(&__this->fields,pMVar2);
    if ((__this->fields).IOPFMDCMMLD != (MNBNELNLOCB_o *)0x0) {
      addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
      pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
                    /* try { // try from 03479314 to 0357933b has its CatchHandler @ 03479acc */
      System_Action<Unit>___ctor();
      pIVar4 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         ((System_IObservable_T__o *)source,pSVar3,
                          Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).BNAIPPCOGPE,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      pSVar5 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
                    /* try { // try from 03479370 to 0357939b has its CatchHandler @ 03479aa8 */
      System_Action<object>___ctor();
      pSVar6 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
      System_Action<object>___ctor();
      pSVar7 = UniRx_Observable__FromEvent<object>
                         (pSVar5,pSVar6,Method_UniRx_Observable_FromEvent<string>__);
      pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
                    /* try { // try from 034793d8 to 035793df has its CatchHandler @ 034799ac */
                    /* try { // try from 034793e4 to 035793eb has its CatchHandler @ 034799b0 */
      System_Action<object>___ctor();
                    /* try { // try from 034793fc to 03579403 has its CatchHandler @ 03479980 */
      pIVar4 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (pSVar7,pSVar3,Method_UniRx_ObservableExtensions_Subscribe<string>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).BNAIPPCOGPE,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 0347940c to 03579413 has its CatchHandler @ 0347997c */
                    /* try { // try from 03479418 to 03579433 has its CatchHandler @ 03479998 */
      pSVar5 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<PCJHNLGCCOB>>_TypeInfo);
      System_Action<object>___ctor();
      pSVar6 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<PCJHNLGCCOB>>_TypeInfo);
      System_Action<object>___ctor();
      pSVar7 = UniRx_Observable__FromEvent<PCJHNLGCCOB>
                         (pSVar5,pSVar6,Method_UniRx_Observable_FromEvent<PCJHNLGCCOB>__);
                    /* try { // try from 0347947c to 0357949f has its CatchHandler @ 03479984 */
      pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<PCJHNLGCCOB>_TypeInfo);
                    /* try { // try from 034794a0 to 0357962b has its CatchHandler @ 03477bc4 */
      System_Action<PCJHNLGCCOB>___ctor();
      pIVar4 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<PCJHNLGCCOB>
                         (pSVar7,pSVar3,Method_UniRx_ObservableExtensions_Subscribe<PCJHNLGCCOB>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).BNAIPPCOGPE,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      pMVar2 = (__this->fields).IOPFMDCMMLD;
      if (pMVar2 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar9 = pMVar2->klass;
      uVar1._0_1_ = (pMVar9->_2).rank;
      uVar1._1_1_ = (pMVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pMVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
            pVVar8 = pMVar9->vtable + (*piVar11 + 6);
            goto LAB_0347952c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pMVar2,MNBNELNLOCB_TypeInfo,6);
LAB_0347952c:
      (*pVVar8->methodPtr)(pMVar2,pVVar8->method);
      UniRx_DisposableExtensions__AddTo<object>
                ((Il2CppObject *)(__this->fields).IOPFMDCMMLD,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).BNAIPPCOGPE,Method_UniRx_DisposableExtensions_AddTo<MNBNELNLOCB>__
                );
      return;
    }
  }
  return;
}


// ===== public void IBHIOIHHJED(Action<PCJHNLGCCOB> CJNHFNHJHPE)  [RVA 0x337A184]
// LLDOMGIEPNE$$IBHIOIHHJED @ RVA 0x337A184

void LLDOMGIEPNE__IBHIOIHHJED
               (LLDOMGIEPNE_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *a;
  
  if ((DAT_04567b76 & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04567b76 = 1;
  }
  ppSVar6 = &(__this->fields).CAMHBHJJKCD;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<PCJHNLGCCOB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PCJHNLGCCOB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_PCJHNLGCCOB__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void ABCEGHINJDD(Action<string> JLPMKKKMANE)  [RVA 0x337A234]
// LLDOMGIEPNE$$ABCEGHINJDD @ RVA 0x337A234

void LLDOMGIEPNE__ABCEGHINJDD
               (LLDOMGIEPNE_o *__this,System_Action_string__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
  if ((DAT_04567b77 & 1) == 0) {
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
    DAT_04567b77 = 1;
  }
  pMVar6 = (__this->fields).IOPFMDCMMLD;
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
        pVVar2 = pMVar3->vtable + (*piVar5 + 1);
        goto LAB_0347a2c4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,1);
LAB_0347a2c4:
                    /* WARNING: Could not recover jumptable at 0x0347a2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void .ctor()  [RVA 0x3379068]
// LLDOMGIEPNE$$.ctor @ RVA 0x3379068

void LLDOMGIEPNE___ctor(LLDOMGIEPNE_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b78 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04567b78 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
                    /* try { // try from 034790c8 to 035790cf has its CatchHandler @ 03479a94 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static void DGLJCGNHLIG()  [RVA 0x337A2E0]
// LLDOMGIEPNE$$DGLJCGNHLIG @ RVA 0x337A2E0

void LLDOMGIEPNE__DGLJCGNHLIG(MethodInfo *method)

{
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  LLDOMGIEPNE_StaticFields *pLVar1;
  
  if ((DAT_04567b79 & 1) == 0) {
    FUN_01bab630(&LLDOMGIEPNE_TypeInfo);
    DAT_04567b79 = 1;
    in_x1 = extraout_x1;
  }
  pLVar1 = LLDOMGIEPNE_TypeInfo->static_fields;
  if (pLVar1->CBDMFFMCJBK != (LLDOMGIEPNE_o *)0x0) {
    LLDOMGIEPNE__Dispose(pLVar1->CBDMFFMCJBK,in_x1);
    pLVar1 = LLDOMGIEPNE_TypeInfo->static_fields;
  }
  pLVar1->CBDMFFMCJBK = (LLDOMGIEPNE_o *)0x0;
  thunk_FUN_01c20e04(LLDOMGIEPNE_TypeInfo->static_fields,0);
  return;
}


// ===== private void EHOBLGGACEP(string CJNHFNHJHPE)  [RVA 0x337A348]
// LLDOMGIEPNE$$EHOBLGGACEP @ RVA 0x337A348

void LLDOMGIEPNE__EHOBLGGACEP(LLDOMGIEPNE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JCOGANJOOHC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void FIILGBEMHCH(Action CJNHFNHJHPE)  [RVA 0x337A350]
// LLDOMGIEPNE$$FIILGBEMHCH @ RVA 0x337A350

void LLDOMGIEPNE__FIILGBEMHCH(LLDOMGIEPNE_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567b7a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567b7a = 1;
  }
  ppSVar4 = &(__this->fields).BIFPFOCAPFD;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public string OLHFINKFKDK()  [RVA 0x337A3EC]
// LLDOMGIEPNE$$OLHFINKFKDK @ RVA 0x337A3EC

System_String_o * LLDOMGIEPNE__OLHFINKFKDK(LLDOMGIEPNE_o *__this,MethodInfo *method)

{
  return (__this->fields)._JCOGANJOOHC_k__BackingField;
}

