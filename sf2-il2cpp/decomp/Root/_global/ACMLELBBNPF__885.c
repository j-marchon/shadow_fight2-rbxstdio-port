// TypeDefIndex 885
// Namespace: 
// public class ACMLELBBNPF : HONDOIKDLOD, IDisposable
// Fields:
//   private readonly CompositeDisposable IHADHPMEOFI; // 0x10
//   private readonly HCOKCPNMKFK BCHLEFPBFHO; // 0x18
//   private readonly CFOCLEDKNKL CGBEFGDEDKH; // 0x20
//   private readonly HMKGDNALGCC CMJNDHHGCBI; // 0x28
//   private readonly APCCLHJNENF FLEMAGEBBFJ; // 0x30
//   private int EENGGOCLBOD; // 0x38

// ===== public void Dispose()  [RVA 0x3092254]
// ACMLELBBNPF$$Dispose @ RVA 0x3092254

void ACMLELBBNPF__Dispose(ACMLELBBNPF_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EOPICMLBFHB()  [RVA 0x3092270]
// ACMLELBBNPF$$EOPICMLBFHB @ RVA 0x3092270

void ACMLELBBNPF__EOPICMLBFHB(ACMLELBBNPF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  VirtualInvokeData *pVVar4;
  HMKGDNALGCC_c *pHVar5;
  APCCLHJNENF_c *pAVar6;
  ulong uVar7;
  int32_t *piVar8;
  APCCLHJNENF_o *pAVar9;
  HMKGDNALGCC_o *pHVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = __this;
  if ((DAT_045660ae & 1) == 0) {
    FUN_01bab630(&APCCLHJNENF_TypeInfo);
    auVar11 = FUN_01bab630(&HMKGDNALGCC_TypeInfo);
    DAT_045660ae = 1;
  }
  pHVar10 = (__this->fields).CMJNDHHGCBI;
  if (pHVar10 != (HMKGDNALGCC_o *)0x0) {
    pHVar5 = pHVar10->klass;
    pAVar9 = (__this->fields).FLEMAGEBBFJ;
    uVar1._0_1_ = (pHVar5->_2).rank;
    uVar1._1_1_ = (pHVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pHVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
          pVVar4 = pHVar5->vtable + *piVar8;
          goto LAB_0319230c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar10,HMKGDNALGCC_TypeInfo,0);
LAB_0319230c:
    auVar11 = (*pVVar4->methodPtr)(pHVar10,pVVar4->method);
    if (pAVar9 != (APCCLHJNENF_o *)0x0) {
      pAVar6 = pAVar9->klass;
      uVar2._0_1_ = (pAVar6->_2).rank;
      uVar2._1_1_ = (pAVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pAVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)APCCLHJNENF_TypeInfo) {
            pVVar4 = pAVar6->vtable + *piVar8;
            goto LAB_03192378;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pAVar9,APCCLHJNENF_TypeInfo,0);
LAB_03192378:
      auVar11 = (*pVVar4->methodPtr)(pAVar9,auVar11._0_8_,auVar11._8_8_,pVVar4->method);
      if ((auVar11._0_8_ & 1) == 0) {
        return;
      }
      pHVar10 = (__this->fields).CMJNDHHGCBI;
      if (pHVar10 != (HMKGDNALGCC_o *)0x0) {
        pHVar5 = pHVar10->klass;
        uVar3._0_1_ = (pHVar5->_2).rank;
        uVar3._1_1_ = (pHVar5->_2).minimumAlignment;
        uVar7 = (ulong)uVar3;
        if (uVar7 != 0) {
          piVar8 = &((pHVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
              pVVar4 = pHVar5->vtable + (*piVar8 + 3);
              goto LAB_031923f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar10,HMKGDNALGCC_TypeInfo,3);
LAB_031923f8:
                    /* WARNING: Could not recover jumptable at 0x0319240c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pHVar10,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
}


// ===== private bool OKCIMJLPJJD(OHAHOONNEIC KEFILECBPMF)  [RVA 0x3092414]
// ACMLELBBNPF$$OKCIMJLPJJD @ RVA 0x3092414

bool ACMLELBBNPF__OKCIMJLPJJD(ACMLELBBNPF_o *__this,OHAHOONNEIC_o *KEFILECBPMF,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  OHAHOONNEIC_c *pOVar6;
  HCOKCPNMKFK_c *pHVar7;
  ulong uVar8;
  int32_t *piVar9;
  HCOKCPNMKFK_o *pHVar10;
  
  if ((DAT_045660af & 1) == 0) {
    FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    FUN_01bab630(&OHAHOONNEIC_TypeInfo);
    DAT_045660af = 1;
  }
  if (KEFILECBPMF != (OHAHOONNEIC_o *)0x0) {
    pOVar6 = KEFILECBPMF->klass;
    pHVar10 = (__this->fields).BCHLEFPBFHO;
    uVar1._0_1_ = (pOVar6->_2).rank;
    uVar1._1_1_ = (pOVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pOVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
          pVVar4 = pOVar6->vtable + *piVar9;
          goto LAB_031924ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(KEFILECBPMF,OHAHOONNEIC_TypeInfo,0);
LAB_031924ac:
    uVar5 = (*pVVar4->methodPtr)(KEFILECBPMF,pVVar4->method);
    if (pHVar10 != (HCOKCPNMKFK_o *)0x0) {
      pHVar7 = pHVar10->klass;
      uVar2._0_1_ = (pHVar7->_2).rank;
      uVar2._1_1_ = (pHVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pHVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
            pVVar4 = pHVar7->vtable + (*piVar9 + 3);
            goto LAB_03192518;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar10,HCOKCPNMKFK_TypeInfo,3);
LAB_03192518:
                    /* WARNING: Could not recover jumptable at 0x0319252c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pVVar4->methodPtr)(pHVar10,uVar5,pVVar4->method);
      return (bool)uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GNGNNCAILCD(OHAHOONNEIC HOKBHLPPCAH)  [RVA 0x3092534]
// ACMLELBBNPF$$GNGNNCAILCD @ RVA 0x3092534

void ACMLELBBNPF__GNGNNCAILCD(ACMLELBBNPF_o *__this,OHAHOONNEIC_o *HOKBHLPPCAH,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  VirtualInvokeData *pVVar4;
  APCCLHJNENF_c *pAVar5;
  HMKGDNALGCC_c *pHVar6;
  ulong uVar7;
  int32_t *piVar8;
  HMKGDNALGCC_o *pHVar9;
  APCCLHJNENF_o *pAVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = HOKBHLPPCAH;
  auVar11._0_8_ = __this;
  if ((DAT_045660b0 & 1) == 0) {
    FUN_01bab630(&APCCLHJNENF_TypeInfo);
    auVar11 = FUN_01bab630(&HMKGDNALGCC_TypeInfo);
    DAT_045660b0 = 1;
  }
  pAVar10 = (__this->fields).FLEMAGEBBFJ;
  uVar1 = (__this->fields).EENGGOCLBOD + 1;
  (__this->fields).EENGGOCLBOD = uVar1;
  if (pAVar10 != (APCCLHJNENF_o *)0x0) {
    pAVar5 = pAVar10->klass;
    uVar2._0_1_ = (pAVar5->_2).rank;
    uVar2._1_1_ = (pAVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pAVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)APCCLHJNENF_TypeInfo) {
          pVVar4 = pAVar5->vtable + (*piVar8 + 1);
          goto LAB_031925dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pAVar10,APCCLHJNENF_TypeInfo,1);
LAB_031925dc:
    auVar11 = (*pVVar4->methodPtr)(pAVar10,(ulong)uVar1,pVVar4->method);
    if ((auVar11._0_8_ & 1) == 0) {
      return;
    }
    pHVar9 = (__this->fields).CMJNDHHGCBI;
    (__this->fields).EENGGOCLBOD = 0;
    if (pHVar9 != (HMKGDNALGCC_o *)0x0) {
      pHVar6 = pHVar9->klass;
      uVar3._0_1_ = (pHVar6->_2).rank;
      uVar3._1_1_ = (pHVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar3;
      if (uVar7 != 0) {
        piVar8 = &((pHVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
            pVVar4 = pHVar6->vtable + (*piVar8 + 3);
            goto LAB_03192660;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar9,HMKGDNALGCC_TypeInfo,3);
LAB_03192660:
                    /* WARNING: Could not recover jumptable at 0x03192670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pHVar9,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
}


// ===== private void MHLELHMLBAJ()  [RVA 0x3092538]
// ACMLELBBNPF$$MHLELHMLBAJ @ RVA 0x3092538

void ACMLELBBNPF__MHLELHMLBAJ(ACMLELBBNPF_o *__this,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  VirtualInvokeData *pVVar4;
  APCCLHJNENF_c *pAVar5;
  HMKGDNALGCC_c *pHVar6;
  ulong uVar7;
  int32_t *piVar8;
  HMKGDNALGCC_o *pHVar9;
  APCCLHJNENF_o *pAVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = __this;
  if ((DAT_045660b0 & 1) == 0) {
    FUN_01bab630(&APCCLHJNENF_TypeInfo);
    auVar11 = FUN_01bab630(&HMKGDNALGCC_TypeInfo);
    DAT_045660b0 = 1;
  }
  pAVar10 = (__this->fields).FLEMAGEBBFJ;
  uVar1 = (__this->fields).EENGGOCLBOD + 1;
  (__this->fields).EENGGOCLBOD = uVar1;
  if (pAVar10 != (APCCLHJNENF_o *)0x0) {
    pAVar5 = pAVar10->klass;
    uVar2._0_1_ = (pAVar5->_2).rank;
    uVar2._1_1_ = (pAVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pAVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)APCCLHJNENF_TypeInfo) {
          pVVar4 = pAVar5->vtable + (*piVar8 + 1);
          goto LAB_031925dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pAVar10,APCCLHJNENF_TypeInfo,1);
LAB_031925dc:
    auVar11 = (*pVVar4->methodPtr)(pAVar10,(ulong)uVar1,pVVar4->method);
    if ((auVar11._0_8_ & 1) == 0) {
      return;
    }
    pHVar9 = (__this->fields).CMJNDHHGCBI;
    (__this->fields).EENGGOCLBOD = 0;
    if (pHVar9 != (HMKGDNALGCC_o *)0x0) {
      pHVar6 = pHVar9->klass;
      uVar3._0_1_ = (pHVar6->_2).rank;
      uVar3._1_1_ = (pHVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar3;
      if (uVar7 != 0) {
        piVar8 = &((pHVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
            pVVar4 = pHVar6->vtable + (*piVar8 + 3);
            goto LAB_03192660;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar9,HMKGDNALGCC_TypeInfo,3);
LAB_03192660:
                    /* WARNING: Could not recover jumptable at 0x03192670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pHVar9,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
}


// ===== public void .ctor(HCOKCPNMKFK IEADDGPDHIF, CFOCLEDKNKL NFOGGNINBBP, HMKGDNALGCC EKHFOALLOGF, APCCLHJNENF MMCAPKEBMJF)  [RVA 0x3092678]
// ACMLELBBNPF$$.ctor @ RVA 0x3092678

void ACMLELBBNPF___ctor(ACMLELBBNPF_o *__this,HCOKCPNMKFK_o *IEADDGPDHIF,CFOCLEDKNKL_o *NFOGGNINBBP,
                       HMKGDNALGCC_o *EKHFOALLOGF,APCCLHJNENF_o *MMCAPKEBMJF,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  HCOKCPNMKFK_o **ppHVar1;
  CFOCLEDKNKL_o **ppCVar2;
  HMKGDNALGCC_o **ppHVar3;
  APCCLHJNENF_o **ppAVar4;
  
  if ((DAT_045660b1 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045660b1 = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppHVar1 = &(__this->fields).BCHLEFPBFHO;
  *ppHVar1 = IEADDGPDHIF;
  thunk_FUN_01c20e04(ppHVar1,IEADDGPDHIF);
  ppCVar2 = &(__this->fields).CGBEFGDEDKH;
  *ppCVar2 = NFOGGNINBBP;
  thunk_FUN_01c20e04(ppCVar2,NFOGGNINBBP);
  ppHVar3 = &(__this->fields).CMJNDHHGCBI;
  *ppHVar3 = EKHFOALLOGF;
  thunk_FUN_01c20e04(ppHVar3,EKHFOALLOGF);
  ppAVar4 = &(__this->fields).FLEMAGEBBFJ;
  *ppAVar4 = MMCAPKEBMJF;
  thunk_FUN_01c20e04(ppAVar4,MMCAPKEBMJF);
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x3092744]
// ACMLELBBNPF$$GIMAJOGGBHM @ RVA 0x3092744

void ACMLELBBNPF__GIMAJOGGBHM(ACMLELBBNPF_o *__this,MethodInfo *method)

{
  System_IObservable_OHAHOONNEIC__o *source;
  System_Func_T__bool__o *predicate;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *method_00;
  
  if ((DAT_045660b2 & 1) == 0) {
    FUN_01bab630(&Method_ACMLELBBNPF_GNGNNCAILCD__);
    FUN_01bab630(&Method_ACMLELBBNPF_OKCIMJLPJJD__);
    FUN_01bab630(&System_Action<OHAHOONNEIC>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<OHAHOONNEIC,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<OHAHOONNEIC>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<OHAHOONNEIC>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045660b2 = 1;
  }
  source = CLDGCKOKINJ__HHLMIGDFBMO((__this->fields).CGBEFGDEDKH,(MethodInfo *)0x0);
  predicate = (System_Func_T__bool__o *)thunk_FUN_01bda818(System_Func<OHAHOONNEIC,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source_00 = UniRx_Observable__Where<object>
                        ((System_IObservable_T__o *)source,predicate,
                         Method_UniRx_Observable_Where<OHAHOONNEIC>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<OHAHOONNEIC>_TypeInfo);
  System_Action<object>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (source_00,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<OHAHOONNEIC>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  ACMLELBBNPF__EOPICMLBFHB(__this,method_00);
  return;
}

