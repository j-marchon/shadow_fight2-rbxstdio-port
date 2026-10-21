// FBAABPGMPCC.PBDPKGEIHFM$$HCKBAFNNFJE @ RVA 0x31AD640

System_IDisposable_o *
FBAABPGMPCC_PBDPKGEIHFM__HCKBAFNNFJE
          (FBAABPGMPCC_PBDPKGEIHFM_o *__this,System_IObserver_KHODJHFHCDE__o *observer,
          MethodInfo *method)

{
  ushort uVar1;
  FBAABPGMPCC_DCGMKBCDLPN_o *__this_00;
  FBAABPGMPCC_PBDPKGEIHFM_o **ppFVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  KHODJHFHCDE_o *__this_01;
  FBAABPGMPCC_o *pFVar5;
  HPNCDKOBCON_c *pHVar6;
  ulong uVar7;
  int32_t *piVar8;
  KAKGABBLHGP_o *pKVar9;
  MethodInfo *method_00;
  System_Collections_Generic_List_PackSettings__o *pSVar10;
  HPNCDKOBCON_o *pHVar11;
  
  if ((DAT_04566b5d & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_FBAABPGMPCC_DCGMKBCDLPN_IENLJBBBJBN__);
    FUN_01bab630(&FBAABPGMPCC_DCGMKBCDLPN_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&HPNCDKOBCON_TypeInfo);
    FUN_01bab630(&KHODJHFHCDE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PackSettings>_get_Count__);
    FUN_01bab630(&StringLiteral_9629);
    DAT_04566b5d = 1;
  }
  __this_00 = (FBAABPGMPCC_DCGMKBCDLPN_o *)thunk_FUN_01bda818(FBAABPGMPCC_DCGMKBCDLPN_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (FBAABPGMPCC_DCGMKBCDLPN_o *)0x0) {
    ppFVar2 = &(__this_00->fields).CS___8__locals1;
    *ppFVar2 = __this;
    thunk_FUN_01c20e04(ppFVar2,__this);
    (__this_00->fields).observer = observer;
    thunk_FUN_01c20e04(&__this_00->fields,observer);
    pSVar10 = (__this->fields).packsToValidate;
    if (pSVar10 != (System_Collections_Generic_List_PackSettings__o *)0x0) {
      if ((pSVar10->fields)._size == 0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__Log(StringLiteral_9629,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)(__this->fields).packsToValidate;
        __this_01 = (KHODJHFHCDE_o *)thunk_FUN_01bda818(KHODJHFHCDE_TypeInfo);
        KHODJHFHCDE___ctor(__this_01,true,
                           (System_Collections_Generic_IReadOnlyList_PackSettings__o *)method_00,
                           (MethodInfo *)0x0);
        FBAABPGMPCC_DCGMKBCDLPN__JMHEEICBMHL(__this_00,__this_01,method_00);
LAB_032ad840:
        if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        return UniRx_Disposable_TypeInfo->static_fields->Empty;
      }
      pFVar5 = (__this->fields).__4__this;
      if (pFVar5 != (FBAABPGMPCC_o *)0x0) {
        pHVar11 = (pFVar5->fields).KMGLHNICAIH;
        pKVar9 = (__this->fields).parameters;
        uVar3 = thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
        System_Action<bool>___ctor();
        if (pHVar11 != (HPNCDKOBCON_o *)0x0) {
          pHVar6 = pHVar11->klass;
          uVar1._0_1_ = (pHVar6->_2).rank;
          uVar1._1_1_ = (pHVar6->_2).minimumAlignment;
          uVar7 = (ulong)uVar1;
          if (uVar7 != 0) {
            piVar8 = &((pHVar6->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)HPNCDKOBCON_TypeInfo) {
                pVVar4 = pHVar6->vtable + *piVar8;
                goto LAB_032ad828;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar11,HPNCDKOBCON_TypeInfo,0);
LAB_032ad828:
          (*pVVar4->methodPtr)(pHVar11,pSVar10,pKVar9,uVar3,pVVar4->method);
          goto LAB_032ad840;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

