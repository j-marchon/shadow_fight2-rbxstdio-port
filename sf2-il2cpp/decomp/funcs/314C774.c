// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$Reload @ RVA 0x314C774

/* WARNING: Removing unreachable block (ram,0x0324ca7c) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Reload
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,
               NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar4;
  System_Collections_Generic_IEnumerator_T__o *pSVar5;
  VirtualInvokeData *pVVar6;
  int64_t item;
  HCKCBFOGMMJ_o *__this_01;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  System_Collections_Generic_IEnumerator_T__c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  NLFLMJPNOLF_o **ppNVar10;
  
  if ((DAT_045667d3 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_MJLGFNFIHFJ__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<long>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    DAT_045667d3 = 1;
  }
  ppNVar10 = &(__this->fields).PMHMLJDMHFP;
  *ppNVar10 = NLOFDAJCIML;
  thunk_FUN_01c20e04(ppNVar10,NLOFDAJCIML);
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  if ((*ppNVar10 != (NLFLMJPNOLF_o *)0x0) &&
     (pGVar4 = ((*ppNVar10)->fields).MABPCBMOECE,
     pGVar4 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    pSVar5 = Google_Protobuf_Collections_RepeatedField<long>__GetEnumerator
                       (pGVar4,
                        Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
    if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar7 = pSVar5->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar6 = pSVar7->vtable + *piVar9;
            goto LAB_0324c8dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0324c8dc:
      uVar8 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if ((uVar8 & 1) == 0) {
        if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_0324c9c0;
        pSVar7 = pSVar5->klass;
        uVar3._0_1_ = (pSVar7->_2).rank;
        uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar3;
        if (uVar8 == 0) goto LAB_0324c998;
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        goto LAB_0324c980;
      }
      pSVar7 = pSVar5->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<long>_TypeInfo) {
            pVVar6 = pSVar7->vtable + *piVar9;
            goto LAB_0324c938;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerator<long>_TypeInfo,0);
LAB_0324c938:
      item = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if (__this_00 == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pGVar4 = (__this_00->fields).EHBNKDHKJNI;
      if (pGVar4 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (pGVar4,item,Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    } while( true );
  }
  goto LAB_0324ca74;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0324c980:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar6 = pSVar7->vtable + *piVar9;
      goto LAB_0324c9b4;
    }
  }
LAB_0324c998:
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_IDisposable_TypeInfo,0);
LAB_0324c9b4:
  (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
LAB_0324c9c0:
  if ((__this_00 != (IBMLPPNMDCI_o *)0x0) &&
     (pGVar4 = (__this_00->fields).EHBNKDHKJNI,
     pGVar4 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    if ((pGVar4->fields).count < 1) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                  thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
      HCKCBFOGMMJ__EFCMPBGIEGJ(__this_01,__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0324ca74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

