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

