// TypeDefIndex 2026
// Namespace: 
// public class GDGNDNPEHIG : HONDOIKDLOD, IDisposable
// Fields:
//   private readonly CompositeDisposable IHADHPMEOFI; // 0x10
//   private readonly HCOKCPNMKFK BCHLEFPBFHO; // 0x18
//   private readonly CFOCLEDKNKL CGBEFGDEDKH; // 0x20

// ===== private void BEDDKHEOMPA(OHAHOONNEIC HOKBHLPPCAH)  [RVA 0x32A4F6C]
// GDGNDNPEHIG$$BEDDKHEOMPA @ RVA 0x32A4F6C

void GDGNDNPEHIG__BEDDKHEOMPA(GDGNDNPEHIG_o *__this,OHAHOONNEIC_o *HOKBHLPPCAH,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  HCOKCPNMKFK_c *pHVar3;
  ulong uVar4;
  int32_t *piVar5;
  HCOKCPNMKFK_o *pHVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = HOKBHLPPCAH;
  auVar7._0_8_ = __this;
  if ((DAT_045673e5 & 1) == 0) {
    auVar7 = FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    DAT_045673e5 = 1;
  }
  pHVar6 = (__this->fields).BCHLEFPBFHO;
  if (pHVar6 == (HCOKCPNMKFK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pHVar3 = pHVar6->klass;
  uVar1._0_1_ = (pHVar3->_2).rank;
  uVar1._1_1_ = (pHVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pHVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
        pVVar2 = pHVar3->vtable + (*piVar5 + 4);
        goto LAB_033a4ff8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pHVar6,HCOKCPNMKFK_TypeInfo,4);
LAB_033a4ff8:
                    /* WARNING: Could not recover jumptable at 0x033a5008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pHVar6,pVVar2->method);
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x32A5010]
// GDGNDNPEHIG$$GIMAJOGGBHM @ RVA 0x32A5010

void GDGNDNPEHIG__GIMAJOGGBHM(GDGNDNPEHIG_o *__this,MethodInfo *method)

{
  System_IObservable_OHAHOONNEIC__o *source;
  System_Func_T__bool__o *predicate;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  
  if ((DAT_045673e6 & 1) == 0) {
    FUN_01bab630(&System_Action<OHAHOONNEIC>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<OHAHOONNEIC,_bool>_TypeInfo);
    FUN_01bab630(&Method_GDGNDNPEHIG_BEDDKHEOMPA__);
    FUN_01bab630(&Method_GDGNDNPEHIG_PHLOMKFNCBJ__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<OHAHOONNEIC>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<OHAHOONNEIC>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045673e6 = 1;
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
  return;
}


// ===== public void Dispose()  [RVA 0x32A5180]
// GDGNDNPEHIG$$Dispose @ RVA 0x32A5180

void GDGNDNPEHIG__Dispose(GDGNDNPEHIG_o *__this,MethodInfo *method)

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


// ===== public bool PHLOMKFNCBJ(OHAHOONNEIC DKCGCLNOELC)  [RVA 0x32A519C]
// GDGNDNPEHIG$$PHLOMKFNCBJ @ RVA 0x32A519C

bool GDGNDNPEHIG__PHLOMKFNCBJ(GDGNDNPEHIG_o *__this,OHAHOONNEIC_o *DKCGCLNOELC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  VirtualInvokeData *pVVar7;
  undefined8 uVar8;
  System_String_o *pSVar9;
  OHAHOONNEIC_c *pOVar10;
  HCOKCPNMKFK_c *pHVar11;
  ulong uVar12;
  int32_t *piVar13;
  HCOKCPNMKFK_o *pHVar14;
  
  if ((DAT_045673e7 & 1) == 0) {
    FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    FUN_01bab630(&OHAHOONNEIC_TypeInfo);
    FUN_01bab630(&StringLiteral_9955/*"Operation cancelled"*/);
    FUN_01bab630(&StringLiteral_6013/*"Exception occured"*/);
    DAT_045673e7 = 1;
  }
  if (DKCGCLNOELC != (OHAHOONNEIC_o *)0x0) {
    pOVar10 = DKCGCLNOELC->klass;
    pHVar14 = (__this->fields).BCHLEFPBFHO;
    uVar1._0_1_ = (pOVar10->_2).rank;
    uVar1._1_1_ = (pOVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pOVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
          pVVar7 = pOVar10->vtable + *piVar13;
          goto LAB_033a5250;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,0);
LAB_033a5250:
    uVar8 = (*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
    if (pHVar14 != (HCOKCPNMKFK_o *)0x0) {
      pHVar11 = pHVar14->klass;
      uVar2._0_1_ = (pHVar11->_2).rank;
      uVar2._1_1_ = (pHVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pHVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
            pVVar7 = pHVar11->vtable + (*piVar13 + 3);
            goto LAB_033a52bc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pHVar14,HCOKCPNMKFK_TypeInfo,3);
LAB_033a52bc:
      uVar12 = (*pVVar7->methodPtr)(pHVar14,uVar8,pVVar7->method);
      if ((uVar12 & 1) != 0) {
        pOVar10 = DKCGCLNOELC->klass;
        uVar3._0_1_ = (pOVar10->_2).rank;
        uVar3._1_1_ = (pOVar10->_2).minimumAlignment;
        uVar12 = (ulong)uVar3;
        if (uVar12 != 0) {
          piVar13 = &((pOVar10->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
              pVVar7 = pOVar10->vtable + (*piVar13 + 1);
              goto LAB_033a5320;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,1);
LAB_033a5320:
        pSVar9 = (System_String_o *)(*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
        bVar6 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
        if (!bVar6) {
          pOVar10 = DKCGCLNOELC->klass;
          uVar4._0_1_ = (pOVar10->_2).rank;
          uVar4._1_1_ = (pOVar10->_2).minimumAlignment;
          uVar12 = (ulong)uVar4;
          if (uVar12 != 0) {
            piVar13 = &((pOVar10->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
                pVVar7 = pOVar10->vtable + (*piVar13 + 1);
                goto LAB_033a5388;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,1);
LAB_033a5388:
          pSVar9 = (System_String_o *)(*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
          if (pSVar9 == (System_String_o *)0x0) goto LAB_033a5440;
          bVar6 = System_String__StartsWith(pSVar9,StringLiteral_6013/*"Exception occured"*/,(MethodInfo *)0x0);
          if (!bVar6) {
            pOVar10 = DKCGCLNOELC->klass;
            uVar5._0_1_ = (pOVar10->_2).rank;
            uVar5._1_1_ = (pOVar10->_2).minimumAlignment;
            uVar12 = (ulong)uVar5;
            if (uVar12 != 0) {
              piVar13 = &((pOVar10->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                    (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
                  pVVar7 = pOVar10->vtable + (*piVar13 + 1);
                  goto LAB_033a5414;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,1);
LAB_033a5414:
            pSVar9 = (System_String_o *)(*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
            bVar6 = System_String__op_Inequality(pSVar9,StringLiteral_9955/*"Operation cancelled"*/,(MethodInfo *)0x0);
            return bVar6;
          }
        }
      }
      return false;
    }
  }
LAB_033a5440:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(HCOKCPNMKFK IEADDGPDHIF, CFOCLEDKNKL NFOGGNINBBP)  [RVA 0x32A5444]
// GDGNDNPEHIG$$.ctor @ RVA 0x32A5444

void GDGNDNPEHIG___ctor(GDGNDNPEHIG_o *__this,HCOKCPNMKFK_o *IEADDGPDHIF,CFOCLEDKNKL_o *NFOGGNINBBP,
                       MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  HCOKCPNMKFK_o **ppHVar1;
  CFOCLEDKNKL_o **ppCVar2;
  
  if ((DAT_045673e8 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045673e8 = 1;
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
  return;
}

