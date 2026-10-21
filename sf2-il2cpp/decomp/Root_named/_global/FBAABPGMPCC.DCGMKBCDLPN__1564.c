// TypeDefIndex 1564
// Namespace: 
// [CompilerGenerated]
// private sealed class FBAABPGMPCC.DCGMKBCDLPN
// Fields:
//   public IObserver<KHODJHFHCDE> observer; // 0x10
//   public FBAABPGMPCC.PBDPKGEIHFM CS$<>8__locals1; // 0x18

// ===== internal void JMHEEICBMHL(KHODJHFHCDE result)  [RVA 0x31AD87C]
// FBAABPGMPCC.DCGMKBCDLPN$$JMHEEICBMHL @ RVA 0x31AD87C

void FBAABPGMPCC_DCGMKBCDLPN__JMHEEICBMHL
               (FBAABPGMPCC_DCGMKBCDLPN_o *__this,KHODJHFHCDE_o *result,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  UniRx_Subject_KHODJHFHCDE__o *__this_00;
  System_IObserver_KHODJHFHCDE__c *pSVar4;
  FBAABPGMPCC_PBDPKGEIHFM_o *pFVar5;
  FBAABPGMPCC_o *pFVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_IObserver_KHODJHFHCDE__o *pSVar9;
  
  if ((DAT_04566b5e & 1) == 0) {
    FUN_01bab630(&System_IObserver<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Subject<KHODJHFHCDE>_OnNext__);
    DAT_04566b5e = 1;
  }
  pSVar9 = (__this->fields).observer;
  if (pSVar9 != (System_IObserver_KHODJHFHCDE__o *)0x0) {
    pSVar4 = pSVar9->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_IObserver<KHODJHFHCDE>_TypeInfo) {
          pVVar3 = pSVar4->vtable + *piVar8;
          goto LAB_032ad918;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_IObserver<KHODJHFHCDE>_TypeInfo,0);
LAB_032ad918:
    (*pVVar3->methodPtr)(pSVar9,result,pVVar3->method);
    pSVar9 = (__this->fields).observer;
    if (pSVar9 != (System_IObserver_KHODJHFHCDE__o *)0x0) {
      pSVar4 = pSVar9->klass;
      uVar2._0_1_ = (pSVar4->_2).rank;
      uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pSVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)System_IObserver<KHODJHFHCDE>_TypeInfo) {
            pVVar3 = pSVar4->vtable + (*piVar8 + 2);
            goto LAB_032ad980;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_IObserver<KHODJHFHCDE>_TypeInfo,2);
LAB_032ad980:
      (*pVVar3->methodPtr)(pSVar9,pVVar3->method);
      pFVar5 = (__this->fields).CS___8__locals1;
      if (((pFVar5 != (FBAABPGMPCC_PBDPKGEIHFM_o *)0x0) &&
          (pFVar6 = (pFVar5->fields).__4__this, pFVar6 != (FBAABPGMPCC_o *)0x0)) &&
         (__this_00 = (pFVar6->fields).NIFBGEKEBGF, __this_00 != (UniRx_Subject_KHODJHFHCDE__o *)0x0
         )) {
        UniRx_Subject<object>__OnNext
                  ((UniRx_Subject_T__o *)__this_00,(Il2CppObject *)result,
                   Method_UniRx_Subject<KHODJHFHCDE>_OnNext__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void IENLJBBBJBN(bool result)  [RVA 0x31AD9C8]
// FBAABPGMPCC.DCGMKBCDLPN$$IENLJBBBJBN @ RVA 0x31AD9C8

void FBAABPGMPCC_DCGMKBCDLPN__IENLJBBBJBN
               (FBAABPGMPCC_DCGMKBCDLPN_o *__this,bool result,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  VirtualInvokeData *pVVar3;
  KHODJHFHCDE_o *__this_00;
  FBAABPGMPCC_PBDPKGEIHFM_o *pFVar4;
  HCOEEOMMEFL_c *pHVar5;
  FBAABPGMPCC_o *pFVar6;
  ulong uVar7;
  AAPGCAPGBLG_o *pAVar8;
  int32_t *piVar9;
  HCOEEOMMEFL_o *pHVar10;
  MethodInfo *method_00;
  
  if ((DAT_04566b5f & 1) == 0) {
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&KHODJHFHCDE_TypeInfo);
    FUN_01bab630(&StringLiteral_9916/*"One or more of downloaded packs required restart!"*/);
    DAT_04566b5f = 1;
  }
  uVar2 = StringLiteral_9916/*"One or more of downloaded packs required restart!"*/;
  pFVar4 = (__this->fields).CS___8__locals1;
  if (((pFVar4 != (FBAABPGMPCC_PBDPKGEIHFM_o *)0x0) &&
      (pFVar6 = (pFVar4->fields).__4__this, pFVar6 != (FBAABPGMPCC_o *)0x0)) &&
     (pAVar8 = (pFVar6->fields).APEEANDPFCG, pAVar8 != (AAPGCAPGBLG_o *)0x0)) {
    if ((pAVar8->fields)._KDBLLEPMIPL_k__BackingField == false) {
      method_00 = (MethodInfo *)(pFVar4->fields).packsToValidate;
      __this_00 = (KHODJHFHCDE_o *)thunk_FUN_01bda818(KHODJHFHCDE_TypeInfo);
      KHODJHFHCDE___ctor(__this_00,result,
                         (System_Collections_Generic_IReadOnlyList_PackSettings__o *)method_00,
                         (MethodInfo *)0x0);
      FBAABPGMPCC_DCGMKBCDLPN__JMHEEICBMHL(__this,__this_00,method_00);
      return;
    }
    pHVar10 = (pFVar6->fields).GLNMNHFKGCO;
    if (pHVar10 != (HCOEEOMMEFL_o *)0x0) {
      pHVar5 = pHVar10->klass;
      uVar1._0_1_ = (pHVar5->_2).rank;
      uVar1._1_1_ = (pHVar5->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar9 = &((pHVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)HCOEEOMMEFL_TypeInfo) {
            pVVar3 = pHVar5->vtable + (*piVar9 + 1);
            goto LAB_032adae0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pHVar10,HCOEEOMMEFL_TypeInfo,1);
LAB_032adae0:
                    /* WARNING: Could not recover jumptable at 0x032adafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(pHVar10,uVar2,0,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31AD874]
// FBAABPGMPCC.DCGMKBCDLPN$$.ctor @ RVA 0x31AD874

void FBAABPGMPCC_DCGMKBCDLPN___ctor(FBAABPGMPCC_DCGMKBCDLPN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

