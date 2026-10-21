// TypeDefIndex 3077
// Namespace: 
// public class CNNAMJDOPFI : CGLDCCGBNMP
// Fields:
//   private readonly MJPJANJNDCI<CdnMirrorsConfig> OAOMFCGPCBP; // 0x10
//   private readonly HMKGDNALGCC CMJNDHHGCBI; // 0x18
//   private readonly MOBODMIBMKA CEDMDLDOAFG; // 0x20

// ===== public IObservable<string[]> PEGKGIADJAE()  [RVA 0x34C5698]
// CNNAMJDOPFI$$PEGKGIADJAE @ RVA 0x34C5698

System_IObservable_string____o * CNNAMJDOPFI__PEGKGIADJAE(CNNAMJDOPFI_o *__this,MethodInfo *method)

{
  System_Func_IObserver_T___IDisposable__o *subscribe;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568633 & 1) == 0) {
    FUN_01bab630(&Method_CNNAMJDOPFI_NHEMBDBNNCM__);
    FUN_01bab630(&System_Func<IObserver<string[]>,_IDisposable>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_Create<string[]>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568633 = 1;
    method = extraout_x1;
  }
  subscribe = (System_Func_IObserver_T___IDisposable__o *)
              thunk_FUN_01bda818(System_Func<IObserver<string[]>,_IDisposable>_TypeInfo,method);
  System_Func<object,_object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = UniRx_Observable__Create<object>(subscribe,Method_UniRx_Observable_Create<string[]>__);
  return (System_IObservable_string____o *)pSVar1;
}


// ===== public void .ctor(MJPJANJNDCI<CdnMirrorsConfig> HLFCHMCOPID, HMKGDNALGCC EKHFOALLOGF, MOBODMIBMKA HGKDPHNEHNF)  [RVA 0x34C5750]
// CNNAMJDOPFI$$.ctor @ RVA 0x34C5750

void CNNAMJDOPFI___ctor(CNNAMJDOPFI_o *__this,MJPJANJNDCI_CdnMirrorsConfig__o *HLFCHMCOPID,
                       HMKGDNALGCC_o *EKHFOALLOGF,MOBODMIBMKA_o *HGKDPHNEHNF,MethodInfo *method)

{
  HMKGDNALGCC_o **ppHVar1;
  MOBODMIBMKA_o **ppMVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).OAOMFCGPCBP = HLFCHMCOPID;
  thunk_FUN_01c20e04(&__this->fields,HLFCHMCOPID);
  ppHVar1 = &(__this->fields).CMJNDHHGCBI;
  *ppHVar1 = EKHFOALLOGF;
  thunk_FUN_01c20e04(ppHVar1,EKHFOALLOGF);
  ppMVar2 = &(__this->fields).CEDMDLDOAFG;
  *ppMVar2 = HGKDPHNEHNF;
  thunk_FUN_01c20e04(ppMVar2,HGKDPHNEHNF);
  return;
}


// ===== private IDisposable NHEMBDBNNCM(IObserver<string[]> ENHLEPICPGK)  [RVA 0x34C57B0]
// CNNAMJDOPFI$$NHEMBDBNNCM @ RVA 0x34C57B0

System_IDisposable_o *
CNNAMJDOPFI__NHEMBDBNNCM
          (CNNAMJDOPFI_o *__this,System_IObserver_string____o *ENHLEPICPGK,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  OJJLPLHNGBP_BELGMANHGIJ_o *pOVar8;
  System_Action_GPBHNPOEFDO__o *BLMFLPJJMPF;
  OJJLPLHNGBP_o *pOVar9;
  System_String_o *JLNPKGGFFDD;
  undefined8 uVar10;
  undefined8 *puVar11;
  HMKGDNALGCC_c *pHVar12;
  MJPJANJNDCI_CdnMirrorsConfig__c *pMVar13;
  MOBODMIBMKA_c *pMVar14;
  void *pvVar15;
  ulong uVar16;
  int32_t *piVar17;
  int *piVar18;
  Il2CppClass *pIVar19;
  MOBODMIBMKA_o *pMVar20;
  HMKGDNALGCC_o *pHVar21;
  MJPJANJNDCI_CdnMirrorsConfig__o *pMVar22;
  
  if ((DAT_04568634 & 1) == 0) {
    FUN_01bab630(&System_Action<GPBHNPOEFDO>_TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_BHOHLODBJPE__);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&HMKGDNALGCC_TypeInfo);
    FUN_01bab630(&Method_CNNAMJDOPFI_IHMNFNBFMNB_GFCOMIAEKPG__);
    FUN_01bab630(&CNNAMJDOPFI_IHMNFNBFMNB_TypeInfo);
    FUN_01bab630(&System_IObserver<string[]>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo);
    FUN_01bab630(&MOBODMIBMKA_TypeInfo);
    FUN_01bab630(&StringLiteral_6806/*"GetMirrors: send request to '"*/);
    FUN_01bab630(&StringLiteral_890/*"'."*/);
    FUN_01bab630(&StringLiteral_6805/*"GetMirrors: mirrors selected from cache."*/);
    DAT_04568634 = 1;
  }
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(CNNAMJDOPFI_IHMNFNBFMNB_TypeInfo);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar5[1].monitor = __this;
    thunk_FUN_01c20e04(&pIVar5[1].monitor,__this);
    pIVar5 = pIVar5 + 1;
    pIVar5->klass = (Il2CppClass *)ENHLEPICPGK;
    thunk_FUN_01c20e04(pIVar5,ENHLEPICPGK);
    pHVar21 = (__this->fields).CMJNDHHGCBI;
    if (pHVar21 != (HMKGDNALGCC_o *)0x0) {
      pHVar12 = pHVar21->klass;
      uVar1._0_1_ = (pHVar12->_2).rank;
      uVar1._1_1_ = (pHVar12->_2).minimumAlignment;
      uVar16 = (ulong)uVar1;
      if (uVar16 != 0) {
        piVar17 = &((pHVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
            pVVar6 = pHVar12->vtable + (*piVar17 + 1);
            goto LAB_035c5910;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pHVar21,HMKGDNALGCC_TypeInfo,1);
LAB_035c5910:
      lVar7 = (*pVVar6->methodPtr)(pHVar21,pVVar6->method);
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) < 1)) {
        pOVar8 = OJJLPLHNGBP_BELGMANHGIJ__EOHMFJFFFIN((MethodInfo *)0x0);
        pMVar22 = (__this->fields).OAOMFCGPCBP;
        if (pMVar22 != (MJPJANJNDCI_CdnMirrorsConfig__o *)0x0) {
          pMVar13 = pMVar22->klass;
          uVar3._0_1_ = (pMVar13->_2).rank;
          uVar3._1_1_ = (pMVar13->_2).minimumAlignment;
          uVar16 = (ulong)uVar3;
          if (uVar16 != 0) {
            piVar17 = &((pMVar13->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo) {
                pVVar6 = pMVar13->vtable + *piVar17;
                goto LAB_035c5a00;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          pVVar6 = (VirtualInvokeData *)
                   FUN_01b81914(pMVar22,MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo,0);
LAB_035c5a00:
          lVar7 = (*pVVar6->methodPtr)(pMVar22,pVVar6->method);
          if ((lVar7 != 0) && (pOVar8 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0)) {
            pOVar8 = (OJJLPLHNGBP_BELGMANHGIJ_o *)
                     PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                               ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pOVar8,
                                *(System_String_o **)(lVar7 + 0x10),
                                Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_BHOHLODBJPE__
                               );
            BLMFLPJJMPF = (System_Action_GPBHNPOEFDO__o *)
                          thunk_FUN_01bda818(System_Action<GPBHNPOEFDO>_TypeInfo);
            System_Action<object>___ctor();
            if ((pOVar8 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0) &&
               ((pOVar8 = OJJLPLHNGBP_BELGMANHGIJ__JLDAALDPGIE(pOVar8,BLMFLPJJMPF,(MethodInfo *)0x0)
                , pOVar8 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0 &&
                (pOVar9 = OJJLPLHNGBP_BELGMANHGIJ__HFMIGKLONNL(pOVar8,(MethodInfo *)0x0),
                pOVar9 != (OJJLPLHNGBP_o *)0x0)))) {
              JLNPKGGFFDD = System_String__Concat
                                      (StringLiteral_6806/*"GetMirrors: send request to '"*/,(pOVar9->fields).super.PHONOLEMBHN,
                                       StringLiteral_890/*"'."*/,(MethodInfo *)0x0);
              KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
              pMVar20 = (__this->fields).CEDMDLDOAFG;
              if (pMVar20 != (MOBODMIBMKA_o *)0x0) {
                pMVar14 = pMVar20->klass;
                uVar4._0_1_ = (pMVar14->_2).rank;
                uVar4._1_1_ = (pMVar14->_2).minimumAlignment;
                uVar16 = (ulong)uVar4;
                if (uVar16 != 0) {
                  piVar17 = &((pMVar14->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                        (Il2CppClass *)MOBODMIBMKA_TypeInfo) {
                      pVVar6 = pMVar14->vtable + (*piVar17 + 1);
                      goto LAB_035c5b1c;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                pVVar6 = (VirtualInvokeData *)FUN_01b81914(pMVar20,MOBODMIBMKA_TypeInfo,1);
LAB_035c5b1c:
                (*pVVar6->methodPtr)(pMVar20,pOVar9,pVVar6->method);
                goto LAB_035c5c1c;
              }
            }
          }
        }
      }
      else {
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_6805/*"GetMirrors: mirrors selected from cache."*/,(MethodInfo *)0x0);
        pHVar21 = (__this->fields).CMJNDHHGCBI;
        if (pHVar21 != (HMKGDNALGCC_o *)0x0) {
          pHVar12 = pHVar21->klass;
          pIVar19 = pIVar5->klass;
          uVar2._0_1_ = (pHVar12->_2).rank;
          uVar2._1_1_ = (pHVar12->_2).minimumAlignment;
          uVar16 = (ulong)uVar2;
          if (uVar16 != 0) {
            piVar17 = &((pHVar12->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
                pVVar6 = pHVar12->vtable + (*piVar17 + 1);
                goto LAB_035c5b40;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pHVar21,HMKGDNALGCC_TypeInfo,1);
LAB_035c5b40:
          uVar10 = (*pVVar6->methodPtr)(pHVar21,pVVar6->method);
          if (pIVar19 != (Il2CppClass *)0x0) {
            pvVar15 = (pIVar19->_1).image;
            uVar16 = (ulong)*(ushort *)((long)pvVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)((long)pvVar15 + 0xb0) + 8);
              do {
                if (*(System_IObserver_string____c **)(piVar18 + -2) ==
                    System_IObserver<string[]>_TypeInfo) {
                  puVar11 = (undefined8 *)((long)pvVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_035c5ba8;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)FUN_01b81914(pIVar19,System_IObserver<string[]>_TypeInfo,0);
LAB_035c5ba8:
            (*(code *)*puVar11)(pIVar19,uVar10,puVar11[1]);
            pIVar19 = pIVar5->klass;
            if (pIVar19 != (Il2CppClass *)0x0) {
              pvVar15 = (pIVar19->_1).image;
              uVar16 = (ulong)*(ushort *)((long)pvVar15 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)((long)pvVar15 + 0xb0) + 8);
                do {
                  if (*(System_IObserver_string____c **)(piVar18 + -2) ==
                      System_IObserver<string[]>_TypeInfo) {
                    puVar11 = (undefined8 *)((long)pvVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                    goto LAB_035c5c10;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)FUN_01b81914(pIVar19,System_IObserver<string[]>_TypeInfo,2);
LAB_035c5c10:
              (*(code *)*puVar11)(pIVar19,puVar11[1]);
LAB_035c5c1c:
              if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              return UniRx_Disposable_TypeInfo->static_fields->Empty;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

