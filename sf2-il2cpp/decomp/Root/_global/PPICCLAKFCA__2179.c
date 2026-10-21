// TypeDefIndex 2179
// Namespace: 
// public class PPICCLAKFCA : HONDOIKDLOD, IDisposable
// Fields:
//   private readonly CompositeDisposable IHADHPMEOFI; // 0x10
//   private readonly HGAPAPKMHCF<CdnZoneMappingConfig> OAOMFCGPCBP; // 0x18
//   private readonly CFOCLEDKNKL CGBEFGDEDKH; // 0x20
//   private readonly HCOKCPNMKFK BCHLEFPBFHO; // 0x28
//   private readonly CJLNLIOJFLM DHBPHINEKBL; // 0x30

// ===== private void PIIJHKMOKAO()  [RVA 0x32DDBDC]
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


// ===== public void Dispose()  [RVA 0x32DDE40]
// PPICCLAKFCA$$Dispose @ RVA 0x32DDE40

void PPICCLAKFCA__Dispose(PPICCLAKFCA_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void LOGHFAANAPE(OHAHOONNEIC DKCGCLNOELC)  [RVA 0x32DDE54]
// PPICCLAKFCA$$LOGHFAANAPE @ RVA 0x32DDE54

void PPICCLAKFCA__LOGHFAANAPE(PPICCLAKFCA_o *__this,OHAHOONNEIC_o *DKCGCLNOELC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  bool bVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_String_o *str2;
  long lVar9;
  undefined8 *puVar10;
  OHAHOONNEIC_c *pOVar11;
  HGAPAPKMHCF_CdnZoneMappingConfig__c *pHVar12;
  CJLNLIOJFLM_c *pCVar13;
  ulong uVar14;
  int32_t *piVar15;
  int *piVar16;
  CJLNLIOJFLM_o *pCVar17;
  HGAPAPKMHCF_CdnZoneMappingConfig__o *pHVar18;
  long *plVar19;
  undefined8 local_40;
  int local_34;
  System_Uri_o *local_28;
  
  if ((DAT_045675d9 & 1) == 0) {
    FUN_01bab630(&CJLNLIOJFLM_TypeInfo);
    FUN_01bab630(&UniRx_IReactiveProperty<Nullable<int>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_int>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&OHAHOONNEIC_TypeInfo);
    FUN_01bab630(&System_Uri_TypeInfo);
    FUN_01bab630(&StringLiteral_2098/*"://"*/);
    DAT_045675d9 = 1;
  }
  local_28 = (System_Uri_o *)0x0;
  local_34 = 0;
  if (DKCGCLNOELC != (OHAHOONNEIC_o *)0x0) {
    pOVar11 = DKCGCLNOELC->klass;
    uVar1._0_1_ = (pOVar11->_2).rank;
    uVar1._1_1_ = (pOVar11->_2).minimumAlignment;
    uVar14 = (ulong)uVar1;
    if (uVar14 != 0) {
      piVar15 = &((pOVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
            (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
          pVVar7 = pOVar11->vtable + *piVar15;
          goto LAB_033ddf60;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,0);
LAB_033ddf60:
    pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
    if ((System_Uri_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Uri_TypeInfo);
    }
    bVar6 = System_Uri__TryCreate(pSVar8,1,&local_28,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    if ((local_28 != (System_Uri_o *)0x0) &&
       (pSVar8 = System_Uri__get_Scheme(local_28,(MethodInfo *)0x0), local_28 != (System_Uri_o *)0x0
       )) {
      str2 = System_Uri__get_Host(local_28,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat(pSVar8,StringLiteral_2098/*"://"*/,str2,(MethodInfo *)0x0);
      pHVar18 = (__this->fields).OAOMFCGPCBP;
      if (pHVar18 != (HGAPAPKMHCF_CdnZoneMappingConfig__o *)0x0) {
        pHVar12 = pHVar18->klass;
        uVar2._0_1_ = (pHVar12->_2).rank;
        uVar2._1_1_ = (pHVar12->_2).minimumAlignment;
        uVar14 = (ulong)uVar2;
        if (uVar14 != 0) {
          piVar15 = &((pHVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo) {
              pVVar7 = pHVar12->vtable + *piVar15;
              goto LAB_033de040;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        pVVar7 = (VirtualInvokeData *)
                 FUN_01b81914(pHVar18,MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo,0);
LAB_033de040:
        lVar9 = (*pVVar7->methodPtr)(pHVar18,pVVar7->method);
        if ((lVar9 != 0) && (plVar19 = *(long **)(lVar9 + 0x10), plVar19 != (long *)0x0)) {
          lVar9 = *plVar19;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IReadOnlyDictionary_string__int__c **)(piVar16 + -2)
                  == System_Collections_Generic_IReadOnlyDictionary<string,_int>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_033de0b0;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01b81914(plVar19,
                                 System_Collections_Generic_IReadOnlyDictionary<string,_int>_TypeInfo
                                 ,1);
LAB_033de0b0:
          uVar14 = (*(code *)*puVar10)(plVar19,pSVar8,&local_34,puVar10[1]);
          if ((uVar14 & 1) == 0) {
            return;
          }
          pCVar17 = (__this->fields).DHBPHINEKBL;
          if (pCVar17 != (CJLNLIOJFLM_o *)0x0) {
            pCVar13 = pCVar17->klass;
            uVar3._0_1_ = (pCVar13->_2).rank;
            uVar3._1_1_ = (pCVar13->_2).minimumAlignment;
            uVar14 = (ulong)uVar3;
            if (uVar14 != 0) {
              piVar15 = &((pCVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                    (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
                  pVVar7 = pCVar13->vtable + *piVar15;
                  goto LAB_033de124;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pCVar17,CJLNLIOJFLM_TypeInfo,0);
LAB_033de124:
            plVar19 = (long *)(*pVVar7->methodPtr)(pCVar17,pVVar7->method);
            if (plVar19 != (long *)0x0) {
              lVar9 = *plVar19;
              uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(UniRx_IReactiveProperty_Nullable_int___c **)(piVar16 + -2) ==
                      UniRx_IReactiveProperty<Nullable<int>>_TypeInfo) {
                    puVar10 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_033de18c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)
                        FUN_01b81914(plVar19,UniRx_IReactiveProperty<Nullable<int>>_TypeInfo,0);
LAB_033de18c:
              uVar14 = (*(code *)*puVar10)(plVar19,puVar10[1]);
              if (((uVar14 & 0xff) != 0) && (local_34 == (int)(uVar14 >> 0x20))) {
                return;
              }
              pCVar17 = (__this->fields).DHBPHINEKBL;
              if (pCVar17 != (CJLNLIOJFLM_o *)0x0) {
                pCVar13 = pCVar17->klass;
                uVar4._0_1_ = (pCVar13->_2).rank;
                uVar4._1_1_ = (pCVar13->_2).minimumAlignment;
                uVar14 = (ulong)uVar4;
                if (uVar14 != 0) {
                  piVar15 = &((pCVar13->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                        (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
                      pVVar7 = pCVar13->vtable + *piVar15;
                      goto LAB_033de204;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                pVVar7 = (VirtualInvokeData *)FUN_01b81914(pCVar17,CJLNLIOJFLM_TypeInfo,0);
LAB_033de204:
                plVar19 = (long *)(*pVVar7->methodPtr)(pCVar17,pVVar7->method);
                local_40 = 0;
                System_Nullable<int>___ctor
                          ((System_Nullable_int__o)&local_40,local_34,
                           Method_System_Nullable<int>__ctor__);
                uVar5 = local_40;
                if (plVar19 != (long *)0x0) {
                  lVar9 = *plVar19;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(UniRx_IReactiveProperty_Nullable_int___c **)(piVar16 + -2) ==
                          UniRx_IReactiveProperty<Nullable<int>>_TypeInfo) {
                        puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_033de288;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar10 = (undefined8 *)
                            FUN_01b81914(plVar19,UniRx_IReactiveProperty<Nullable<int>>_TypeInfo,1);
LAB_033de288:
                  (*(code *)*puVar10)(plVar19,uVar5,puVar10[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(HGAPAPKMHCF<CdnZoneMappingConfig> HLFCHMCOPID, CFOCLEDKNKL NFOGGNINBBP, HCOKCPNMKFK IEADDGPDHIF, CJLNLIOJFLM OKFGLCIAPPA)  [RVA 0x32DE2B0]
// PPICCLAKFCA$$.ctor @ RVA 0x32DE2B0

void PPICCLAKFCA___ctor(PPICCLAKFCA_o *__this,HGAPAPKMHCF_CdnZoneMappingConfig__o *HLFCHMCOPID,
                       CFOCLEDKNKL_o *NFOGGNINBBP,HCOKCPNMKFK_o *IEADDGPDHIF,
                       CJLNLIOJFLM_o *OKFGLCIAPPA,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  HGAPAPKMHCF_CdnZoneMappingConfig__o **ppHVar1;
  CFOCLEDKNKL_o **ppCVar2;
  HCOKCPNMKFK_o **ppHVar3;
  CJLNLIOJFLM_o **ppCVar4;
  
  if ((DAT_045675da & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045675da = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppHVar1 = &(__this->fields).OAOMFCGPCBP;
  *ppHVar1 = HLFCHMCOPID;
  thunk_FUN_01c20e04(ppHVar1,HLFCHMCOPID);
  ppCVar2 = &(__this->fields).CGBEFGDEDKH;
  *ppCVar2 = NFOGGNINBBP;
  thunk_FUN_01c20e04(ppCVar2,NFOGGNINBBP);
  ppHVar3 = &(__this->fields).BCHLEFPBFHO;
  *ppHVar3 = IEADDGPDHIF;
  thunk_FUN_01c20e04(ppHVar3,IEADDGPDHIF);
  ppCVar4 = &(__this->fields).DHBPHINEKBL;
  *ppCVar4 = OKFGLCIAPPA;
  thunk_FUN_01c20e04(ppCVar4,OKFGLCIAPPA);
  return;
}


// ===== private void EBLHDHPPOPG(Unit HOKBHLPPCAH)  [RVA 0x32DE37C]
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


// ===== private void MELMBOKBFFN(Nullable<int> BEAPBDKDNFI)  [RVA 0x32DE380]
// PPICCLAKFCA$$MELMBOKBFFN @ RVA 0x32DE380

void PPICCLAKFCA__MELMBOKBFFN
               (PPICCLAKFCA_o *__this,System_Nullable_int__o BEAPBDKDNFI,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t iVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  HGAPAPKMHCF_CdnZoneMappingConfig__c *pHVar10;
  HCOKCPNMKFK_c *pHVar11;
  ulong uVar12;
  int *piVar13;
  int32_t *piVar14;
  HGAPAPKMHCF_CdnZoneMappingConfig__o *pHVar15;
  long *plVar16;
  HCOKCPNMKFK_o *pHVar17;
  System_String_o *local_30;
  System_Nullable_int__Fields local_28;
  
  local_28 = BEAPBDKDNFI.fields;
  if ((DAT_045675db & 1) == 0) {
    FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<int,_string>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_045675db = 1;
  }
  local_30 = (System_String_o *)0x0;
  if (((ulong)BEAPBDKDNFI.fields & 0xff) == 0) {
    return;
  }
  pHVar15 = (__this->fields).OAOMFCGPCBP;
  if (pHVar15 != (HGAPAPKMHCF_CdnZoneMappingConfig__o *)0x0) {
    pHVar10 = pHVar15->klass;
    uVar1._0_1_ = (pHVar10->_2).rank;
    uVar1._1_1_ = (pHVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar14 = &((pHVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo) {
          pVVar6 = pHVar10->vtable + *piVar14;
          goto LAB_033de450;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pHVar15,MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo,0)
    ;
LAB_033de450:
    lVar7 = (*pVVar6->methodPtr)(pHVar15,pVVar6->method);
    if (lVar7 != 0) {
      plVar16 = *(long **)(lVar7 + 0x18);
      iVar5 = System_Nullable<int>__get_Value
                        ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_get_Value__);
      if (plVar16 != (long *)0x0) {
        lVar7 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IReadOnlyDictionary_int__string__c **)(piVar13 + -2) ==
                System_Collections_Generic_IReadOnlyDictionary<int,_string>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_033de4d8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01b81914(plVar16,
                              System_Collections_Generic_IReadOnlyDictionary<int,_string>_TypeInfo,1
                             );
LAB_033de4d8:
        uVar12 = (*(code *)*puVar8)(plVar16,iVar5,&local_30,puVar8[1]);
        if ((uVar12 & 1) != 0) {
          pHVar17 = (__this->fields).BCHLEFPBFHO;
          if (pHVar17 == (HCOKCPNMKFK_o *)0x0) goto LAB_033de5e8;
          pHVar11 = pHVar17->klass;
          uVar2._0_1_ = (pHVar11->_2).rank;
          uVar2._1_1_ = (pHVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar2;
          if (uVar12 != 0) {
            piVar14 = &((pHVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                  (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
                pVVar6 = pHVar11->vtable + (*piVar14 + 2);
                goto LAB_033de550;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pHVar17,HCOKCPNMKFK_TypeInfo,2);
LAB_033de550:
          pSVar9 = (System_String_o *)(*pVVar6->methodPtr)(pHVar17,pVVar6->method);
          bVar4 = System_String__op_Equality(pSVar9,local_30,(MethodInfo *)0x0);
          pSVar9 = local_30;
          if (!bVar4) {
            pHVar17 = (__this->fields).BCHLEFPBFHO;
            if (pHVar17 == (HCOKCPNMKFK_o *)0x0) goto LAB_033de5e8;
            pHVar11 = pHVar17->klass;
            uVar3._0_1_ = (pHVar11->_2).rank;
            uVar3._1_1_ = (pHVar11->_2).minimumAlignment;
            uVar12 = (ulong)uVar3;
            if (uVar12 != 0) {
              piVar14 = &((pHVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
                  pVVar6 = pHVar11->vtable + (*piVar14 + 1);
                  goto LAB_033de5c8;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            pVVar6 = (VirtualInvokeData *)FUN_01b81914(pHVar17,HCOKCPNMKFK_TypeInfo,1);
LAB_033de5c8:
            (*pVVar6->methodPtr)(pHVar17,pSVar9,pVVar6->method);
          }
        }
        return;
      }
    }
  }
LAB_033de5e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIMAJOGGBHM()  [RVA 0x32DE5EC]
// PPICCLAKFCA$$GIMAJOGGBHM @ RVA 0x32DE5EC

void PPICCLAKFCA__GIMAJOGGBHM(PPICCLAKFCA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObservable_T__o *pSVar3;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  HGAPAPKMHCF_CdnZoneMappingConfig__c *pHVar4;
  ulong uVar5;
  int32_t *piVar6;
  HGAPAPKMHCF_CdnZoneMappingConfig__o *pHVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_045675dc & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&HGAPAPKMHCF<CdnZoneMappingConfig>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_Take<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    auVar8 = FUN_01bab630(&Method_PPICCLAKFCA_EBLHDHPPOPG__);
    DAT_045675dc = 1;
  }
  pHVar7 = (__this->fields).OAOMFCGPCBP;
  if (pHVar7 == (HGAPAPKMHCF_CdnZoneMappingConfig__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pHVar4 = pHVar7->klass;
  uVar1._0_1_ = (pHVar4->_2).rank;
  uVar1._1_1_ = (pHVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pHVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)HGAPAPKMHCF<CdnZoneMappingConfig>_TypeInfo) {
        pVVar2 = pHVar4->vtable + (*piVar6 + 1);
        goto LAB_033de6d4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pHVar7,HGAPAPKMHCF<CdnZoneMappingConfig>_TypeInfo,1);
LAB_033de6d4:
  pSVar3 = (System_IObservable_T__o *)(*pVVar2->methodPtr)(pHVar7,pVVar2->method);
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
  }
  pSVar3 = UniRx_Observable__Take<Unit>(pSVar3,1,Method_UniRx_Observable_Take<Unit>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         (pSVar3,onNext,Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== private bool DDKALGCFGLE(OHAHOONNEIC KEFILECBPMF)  [RVA 0x32DE788]
// PPICCLAKFCA$$DDKALGCFGLE @ RVA 0x32DE788

bool PPICCLAKFCA__DDKALGCFGLE(PPICCLAKFCA_o *__this,OHAHOONNEIC_o *KEFILECBPMF,MethodInfo *method)

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
  
  if ((DAT_045675dd & 1) == 0) {
    FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    FUN_01bab630(&OHAHOONNEIC_TypeInfo);
    DAT_045675dd = 1;
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
          goto LAB_033de820;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(KEFILECBPMF,OHAHOONNEIC_TypeInfo,0);
LAB_033de820:
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
            goto LAB_033de88c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar10,HCOKCPNMKFK_TypeInfo,3);
LAB_033de88c:
                    /* WARNING: Could not recover jumptable at 0x033de8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pVVar4->methodPtr)(pHVar10,uVar5,pVVar4->method);
      return (bool)uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

