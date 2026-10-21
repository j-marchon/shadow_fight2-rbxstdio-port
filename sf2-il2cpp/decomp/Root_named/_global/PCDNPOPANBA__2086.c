// TypeDefIndex 2086
// Namespace: 
// public class PCDNPOPANBA : GOCLIOIANDK<PCDNPOPANBA, EEHFMPOFFDG>, EEHFMPOFFDG
// Fields:
//   private readonly IMPJOEHKNBA HCBPFENNFHD; // 0x10
//   private readonly GCPFDLNAFDF DCAEFFHDMGE; // 0x18
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x20

// ===== public void .ctor(IMPJOEHKNBA DEBKGFHOFMA, GCPFDLNAFDF PCMFDDODKED)  [RVA 0x32C260C]
// PCDNPOPANBA$$.ctor @ RVA 0x32C260C

void PCDNPOPANBA___ctor(PCDNPOPANBA_o *__this,IMPJOEHKNBA_o *DEBKGFHOFMA,GCPFDLNAFDF_o *PCMFDDODKED,
                       MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  GCPFDLNAFDF_o **ppGVar2;
  
  if ((DAT_045674d5 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>__ctor__);
    DAT_045674d5 = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>__ctor__);
  (__this->fields).HCBPFENNFHD = DEBKGFHOFMA;
  thunk_FUN_01c20e04(&__this->fields,DEBKGFHOFMA);
  ppGVar2 = &(__this->fields).DCAEFFHDMGE;
  *ppGVar2 = PCMFDDODKED;
  thunk_FUN_01c20e04(ppGVar2,PCMFDDODKED);
  return;
}


// ===== public override void Dispose()  [RVA 0x32C26C4]
// PCDNPOPANBA$$Dispose @ RVA 0x32C26C4

void PCDNPOPANBA__Dispose(PCDNPOPANBA_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_045674d6 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>_Dispose__);
    DAT_045674d6 = 1;
  }
  GOCLIOIANDK<object,_object>__Dispose
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>_Dispose__);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void GIMAJOGGBHM()  [RVA 0x32C2720]
// PCDNPOPANBA$$GIMAJOGGBHM @ RVA 0x32C2720

void PCDNPOPANBA__GIMAJOGGBHM(PCDNPOPANBA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObservable_T__o *pSVar3;
  System_Func_bool__bool__o **ppSVar4;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  IMPJOEHKNBA_c *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  IMPJOEHKNBA_o *pIVar8;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_045674d7 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>_GIMAJOGGBHM__);
    FUN_01bab630(&IMPJOEHKNBA_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_PCDNPOPANBA_FPNNIJCMHML__);
    FUN_01bab630(&Method_PCDNPOPANBA_<>c_FLNDAFMGAIG__);
    FUN_01bab630(&PCDNPOPANBA_<>c_TypeInfo);
    DAT_045674d7 = 1;
  }
  GOCLIOIANDK<object,_object>__GIMAJOGGBHM
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>_GIMAJOGGBHM__);
  pIVar8 = (__this->fields).HCBPFENNFHD;
  if (pIVar8 == (IMPJOEHKNBA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar5 = pIVar8->klass;
  uVar1._0_1_ = (pIVar5->_2).rank;
  uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)IMPJOEHKNBA_TypeInfo) {
        pVVar2 = pIVar5->vtable + *piVar7;
        goto LAB_033c2848;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pIVar8,IMPJOEHKNBA_TypeInfo,0);
LAB_033c2848:
  pSVar3 = (System_IObservable_T__o *)(*pVVar2->methodPtr)(pIVar8,pVVar2->method);
  if ((PCDNPOPANBA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PCDNPOPANBA_<>c_TypeInfo);
  }
  predicate = PCDNPOPANBA_<>c_TypeInfo->static_fields->__9__5_0;
  if (predicate == (System_Func_bool__bool__o *)0x0) {
    if ((PCDNPOPANBA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PCDNPOPANBA_<>c_TypeInfo);
    }
    predicate = (System_Func_bool__bool__o *)thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
    System_Func<bool,_bool>___ctor();
    ppSVar4 = &PCDNPOPANBA_<>c_TypeInfo->static_fields->__9__5_0;
    *ppSVar4 = predicate;
    thunk_FUN_01c20e04(ppSVar4,predicate);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = UniRx_Observable__Where<bool>
                     (pSVar3,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<bool>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<bool>
                         (pSVar3,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== public void NKLGCNHLBAF()  [RVA 0x32C2980]
// PCDNPOPANBA$$NKLGCNHLBAF @ RVA 0x32C2980

/* WARNING: Removing unreachable block (ram,0x033c2de4) */
/* WARNING: Removing unreachable block (ram,0x033c30a0) */
/* WARNING: Removing unreachable block (ram,0x033c30ac) */

void PCDNPOPANBA__NKLGCNHLBAF(PCDNPOPANBA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  VirtualInvokeData *pVVar5;
  DADDKDFBPIJ_T__o *pDVar6;
  System_Collections_Generic_IEnumerable_T__o *pSVar7;
  long *plVar8;
  undefined8 *puVar9;
  IIHMKHNLJKD_o *__this_00;
  Roster_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  GCPFDLNAFDF_c *pGVar10;
  System_Collections_Generic_IEnumerable_T__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int32_t *piVar15;
  GCPFDLNAFDF_o *pGVar16;
  
  if ((DAT_045674d8 & 1) == 0) {
    FUN_01bab630(&Roster_TypeInfo);
    FUN_01bab630(&Method_DADDKDFBPIJ<CNLIOJMLIFN>_NECJEABEOOH__);
    FUN_01bab630(&Method_DADDKDFBPIJ<OHAKJHMJAKL>_NECJEABEOOH__);
    FUN_01bab630(&GLOBPAMKCCE_TypeInfo);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<CNLIOJMLIFN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OHAKJHMJAKL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OHAKJHMJAKL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<CNLIOJMLIFN>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11470/*"Run"*/);
    FUN_01bab630(&StringLiteral_11472/*"Run: roster is null! Skip..."*/);
    DAT_045674d8 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
    KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,StringLiteral_11472/*"Run: roster is null! Skip..."*/,(MethodInfo *)0x0);
    return;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_11470/*"Run"*/,(MethodInfo *)0x0);
  if ((Roster_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b86 == '\0') {
    FUN_01bab630(&Roster_TypeInfo);
    DAT_04565b86 = '\x01';
  }
  if ((Roster_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Roster_TypeInfo->static_fields->BFJCOMHPDJC != (IIHMKHNLJKD_o *)0x0) {
    pGVar16 = (__this->fields).DCAEFFHDMGE;
    if (pGVar16 != (GCPFDLNAFDF_o *)0x0) {
      pGVar10 = pGVar16->klass;
      uVar1._0_1_ = (pGVar10->_2).rank;
      uVar1._1_1_ = (pGVar10->_2).minimumAlignment;
      uVar13 = (ulong)uVar1;
      if (uVar13 != 0) {
        piVar15 = &((pGVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)GLOBPAMKCCE_TypeInfo) {
            pVVar5 = pGVar10->vtable + (*piVar15 + 1);
            goto LAB_033c2bb0;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar16,GLOBPAMKCCE_TypeInfo,1);
LAB_033c2bb0:
      pDVar6 = (DADDKDFBPIJ_T__o *)(*pVVar5->methodPtr)(pGVar16,pVVar5->method);
      if ((pDVar6 != (DADDKDFBPIJ_T__o *)0x0) &&
         (pSVar7 = DADDKDFBPIJ<object>__NECJEABEOOH
                             (pDVar6,Method_DADDKDFBPIJ<CNLIOJMLIFN>_NECJEABEOOH__),
         pSVar7 != (System_Collections_Generic_IEnumerable_T__o *)0x0)) {
        pSVar11 = pSVar7->klass;
        uVar2._0_1_ = (pSVar11->_2).rank;
        uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar2;
        if (uVar13 != 0) {
          piVar15 = &((pSVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerable<CNLIOJMLIFN>_TypeInfo) {
              pVVar5 = pSVar11->vtable + *piVar15;
              goto LAB_033c2c2c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        pVVar5 = (VirtualInvokeData *)
                 FUN_01b81914(pSVar7,System_Collections_Generic_IEnumerable<CNLIOJMLIFN>_TypeInfo,0)
        ;
LAB_033c2c2c:
        plVar8 = (long *)(*pVVar5->methodPtr)(pSVar7,pVVar5->method);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_033c2ca0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_033c2ca0:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto LAB_033c2de8;
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 == 0) goto LAB_033c2db0;
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_033c2d98;
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_CNLIOJMLIFN__c **)(piVar14 + -2) ==
                  System_Collections_Generic_IEnumerator<CNLIOJMLIFN>_TypeInfo) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_033c2cfc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01b81914(plVar8,System_Collections_Generic_IEnumerator<CNLIOJMLIFN>_TypeInfo,
                                0);
LAB_033c2cfc:
          lVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((Roster_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b86 == '\0') {
            FUN_01bab630(&Roster_TypeInfo);
            DAT_04565b86 = '\x01';
          }
          if ((Roster_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_00 = Roster_TypeInfo->static_fields->BFJCOMHPDJC;
          if (__this_00 == (IIHMKHNLJKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          IIHMKHNLJKD__FOPHMMMLPBN
                    (__this_00,*(System_String_o **)(lVar12 + 0x10),*(int32_t *)(lVar12 + 0x18),true
                     ,(MethodInfo *)0x0);
        } while( true );
      }
    }
    goto LAB_033c3098;
  }
  goto LAB_033c2de8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_033c2d98:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_033c2dcc;
    }
  }
LAB_033c2db0:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_033c2dcc:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_033c2de8:
  pGVar16 = (__this->fields).DCAEFFHDMGE;
  if (pGVar16 != (GCPFDLNAFDF_o *)0x0) {
    pGVar10 = pGVar16->klass;
    uVar3._0_1_ = (pGVar10->_2).rank;
    uVar3._1_1_ = (pGVar10->_2).minimumAlignment;
    uVar13 = (ulong)uVar3;
    if (uVar13 != 0) {
      piVar15 = &((pGVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar5 = pGVar10->vtable + (*piVar15 + 1);
          goto LAB_033c2e48;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar16,HFHIKPAKJFG_TypeInfo,1);
LAB_033c2e48:
    pDVar6 = (DADDKDFBPIJ_T__o *)(*pVVar5->methodPtr)(pGVar16,pVVar5->method);
    if ((pDVar6 != (DADDKDFBPIJ_T__o *)0x0) &&
       (pSVar7 = DADDKDFBPIJ<object>__NECJEABEOOH
                           (pDVar6,Method_DADDKDFBPIJ<OHAKJHMJAKL>_NECJEABEOOH__),
       pSVar7 != (System_Collections_Generic_IEnumerable_T__o *)0x0)) {
      pSVar11 = pSVar7->klass;
      uVar4._0_1_ = (pSVar11->_2).rank;
      uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar4;
      if (uVar13 != 0) {
        piVar15 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<OHAKJHMJAKL>_TypeInfo) {
            pVVar5 = pSVar11->vtable + *piVar15;
            goto LAB_033c2ec4;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar7,System_Collections_Generic_IEnumerable<OHAKJHMJAKL>_TypeInfo,0);
LAB_033c2ec4:
      plVar8 = (long *)(*pVVar5->methodPtr)(pSVar7,pVVar5->method);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_033c2f38;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_033c2f38:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar8 != (long *)0x0) {
            FUN_03f93658(*plVar8);
            return;
          }
          return;
        }
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OHAKJHMJAKL__c **)(piVar14 + -2) ==
                System_Collections_Generic_IEnumerator<OHAKJHMJAKL>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_033c2f94;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01b81914(plVar8,System_Collections_Generic_IEnumerator<OHAKJHMJAKL>_TypeInfo,0)
        ;
LAB_033c2f94:
        lVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_01 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Roster__LMJFPPDAPBF
                  (__this_01,*(System_String_o **)(lVar12 + 0x10),
                   *(System_String_o **)(lVar12 + 0x18),0,(MethodInfo *)0x0);
      } while( true );
    }
  }
LAB_033c3098:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32C3230]
// PCDNPOPANBA$$.ctor @ RVA 0x32C3230

void PCDNPOPANBA___ctor(PCDNPOPANBA_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674d9 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>__ctor__);
    DAT_045674d9 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>__ctor__);
  return;
}


// ===== private void FPNNIJCMHML(bool HOKBHLPPCAH)  [RVA 0x32C32B8]
// PCDNPOPANBA$$FPNNIJCMHML @ RVA 0x32C32B8

/* WARNING: Removing unreachable block (ram,0x033c2de4) */
/* WARNING: Removing unreachable block (ram,0x033c30a0) */
/* WARNING: Removing unreachable block (ram,0x033c30ac) */

void PCDNPOPANBA__FPNNIJCMHML(PCDNPOPANBA_o *__this,bool HOKBHLPPCAH,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  VirtualInvokeData *pVVar5;
  DADDKDFBPIJ_T__o *pDVar6;
  System_Collections_Generic_IEnumerable_T__o *pSVar7;
  long *plVar8;
  undefined8 *puVar9;
  IIHMKHNLJKD_o *__this_00;
  Roster_o *__this_01;
  ulong extraout_x1;
  ulong extraout_x1_00;
  GCPFDLNAFDF_c *pGVar10;
  System_Collections_Generic_IEnumerable_T__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int32_t *piVar15;
  GCPFDLNAFDF_o *pGVar16;
  
  uVar13 = (ulong)HOKBHLPPCAH;
  if ((DAT_045674d8 & 1) == 0) {
    FUN_01bab630(&Roster_TypeInfo,uVar13);
    FUN_01bab630(&Method_DADDKDFBPIJ<CNLIOJMLIFN>_NECJEABEOOH__);
    FUN_01bab630(&Method_DADDKDFBPIJ<OHAKJHMJAKL>_NECJEABEOOH__);
    FUN_01bab630(&GLOBPAMKCCE_TypeInfo);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<CNLIOJMLIFN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OHAKJHMJAKL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OHAKJHMJAKL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<CNLIOJMLIFN>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11470/*"Run"*/);
    FUN_01bab630(&StringLiteral_11472/*"Run: roster is null! Skip..."*/);
    DAT_045674d8 = 1;
    uVar13 = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    uVar13 = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo,uVar13);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
    KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,StringLiteral_11472/*"Run: roster is null! Skip..."*/,(MethodInfo *)0x0);
    return;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_11470/*"Run"*/,(MethodInfo *)0x0);
  if ((Roster_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b86 == '\0') {
    FUN_01bab630(&Roster_TypeInfo);
    DAT_04565b86 = '\x01';
  }
  if ((Roster_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Roster_TypeInfo->static_fields->BFJCOMHPDJC != (IIHMKHNLJKD_o *)0x0) {
    pGVar16 = (__this->fields).DCAEFFHDMGE;
    if (pGVar16 != (GCPFDLNAFDF_o *)0x0) {
      pGVar10 = pGVar16->klass;
      uVar1._0_1_ = (pGVar10->_2).rank;
      uVar1._1_1_ = (pGVar10->_2).minimumAlignment;
      uVar13 = (ulong)uVar1;
      if (uVar13 != 0) {
        piVar15 = &((pGVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)GLOBPAMKCCE_TypeInfo) {
            pVVar5 = pGVar10->vtable + (*piVar15 + 1);
            goto LAB_033c2bb0;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar16,GLOBPAMKCCE_TypeInfo,1);
LAB_033c2bb0:
      pDVar6 = (DADDKDFBPIJ_T__o *)(*pVVar5->methodPtr)(pGVar16,pVVar5->method);
      if ((pDVar6 != (DADDKDFBPIJ_T__o *)0x0) &&
         (pSVar7 = DADDKDFBPIJ<object>__NECJEABEOOH
                             (pDVar6,Method_DADDKDFBPIJ<CNLIOJMLIFN>_NECJEABEOOH__),
         pSVar7 != (System_Collections_Generic_IEnumerable_T__o *)0x0)) {
        pSVar11 = pSVar7->klass;
        uVar2._0_1_ = (pSVar11->_2).rank;
        uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar2;
        if (uVar13 != 0) {
          piVar15 = &((pSVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerable<CNLIOJMLIFN>_TypeInfo) {
              pVVar5 = pSVar11->vtable + *piVar15;
              goto LAB_033c2c2c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        pVVar5 = (VirtualInvokeData *)
                 FUN_01b81914(pSVar7,System_Collections_Generic_IEnumerable<CNLIOJMLIFN>_TypeInfo,0)
        ;
LAB_033c2c2c:
        plVar8 = (long *)(*pVVar5->methodPtr)(pSVar7,pVVar5->method);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_033c2ca0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_033c2ca0:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto LAB_033c2de8;
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 == 0) goto LAB_033c2db0;
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_033c2d98;
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_CNLIOJMLIFN__c **)(piVar14 + -2) ==
                  System_Collections_Generic_IEnumerator<CNLIOJMLIFN>_TypeInfo) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_033c2cfc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01b81914(plVar8,System_Collections_Generic_IEnumerator<CNLIOJMLIFN>_TypeInfo,
                                0);
LAB_033c2cfc:
          lVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((Roster_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b86 == '\0') {
            FUN_01bab630(&Roster_TypeInfo);
            DAT_04565b86 = '\x01';
          }
          if ((Roster_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_00 = Roster_TypeInfo->static_fields->BFJCOMHPDJC;
          if (__this_00 == (IIHMKHNLJKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          IIHMKHNLJKD__FOPHMMMLPBN
                    (__this_00,*(System_String_o **)(lVar12 + 0x10),*(int32_t *)(lVar12 + 0x18),true
                     ,(MethodInfo *)0x0);
        } while( true );
      }
    }
    goto LAB_033c3098;
  }
  goto LAB_033c2de8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_033c2d98:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_033c2dcc;
    }
  }
LAB_033c2db0:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_033c2dcc:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_033c2de8:
  pGVar16 = (__this->fields).DCAEFFHDMGE;
  if (pGVar16 != (GCPFDLNAFDF_o *)0x0) {
    pGVar10 = pGVar16->klass;
    uVar3._0_1_ = (pGVar10->_2).rank;
    uVar3._1_1_ = (pGVar10->_2).minimumAlignment;
    uVar13 = (ulong)uVar3;
    if (uVar13 != 0) {
      piVar15 = &((pGVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar5 = pGVar10->vtable + (*piVar15 + 1);
          goto LAB_033c2e48;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar16,HFHIKPAKJFG_TypeInfo,1);
LAB_033c2e48:
    pDVar6 = (DADDKDFBPIJ_T__o *)(*pVVar5->methodPtr)(pGVar16,pVVar5->method);
    if ((pDVar6 != (DADDKDFBPIJ_T__o *)0x0) &&
       (pSVar7 = DADDKDFBPIJ<object>__NECJEABEOOH
                           (pDVar6,Method_DADDKDFBPIJ<OHAKJHMJAKL>_NECJEABEOOH__),
       pSVar7 != (System_Collections_Generic_IEnumerable_T__o *)0x0)) {
      pSVar11 = pSVar7->klass;
      uVar4._0_1_ = (pSVar11->_2).rank;
      uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar4;
      if (uVar13 != 0) {
        piVar15 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<OHAKJHMJAKL>_TypeInfo) {
            pVVar5 = pSVar11->vtable + *piVar15;
            goto LAB_033c2ec4;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar7,System_Collections_Generic_IEnumerable<OHAKJHMJAKL>_TypeInfo,0);
LAB_033c2ec4:
      plVar8 = (long *)(*pVVar5->methodPtr)(pSVar7,pVVar5->method);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_033c2f38;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_033c2f38:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar8 != (long *)0x0) {
            FUN_03f93658(*plVar8);
            return;
          }
          return;
        }
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OHAKJHMJAKL__c **)(piVar14 + -2) ==
                System_Collections_Generic_IEnumerator<OHAKJHMJAKL>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_033c2f94;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01b81914(plVar8,System_Collections_Generic_IEnumerator<OHAKJHMJAKL>_TypeInfo,0)
        ;
LAB_033c2f94:
        lVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_01 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Roster__LMJFPPDAPBF
                  (__this_01,*(System_String_o **)(lVar12 + 0x10),
                   *(System_String_o **)(lVar12 + 0x18),0,(MethodInfo *)0x0);
      } while( true );
    }
  }
LAB_033c3098:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

