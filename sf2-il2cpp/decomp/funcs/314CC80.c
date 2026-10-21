// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$BADMDODBKLB @ RVA 0x314CC80

/* WARNING: Removing unreachable block (ram,0x0324ce98) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__BADMDODBKLB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,
               KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Il2CppObject *pIVar4;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar5;
  VirtualInvokeData *pVVar6;
  void *pvVar7;
  NLFLMJPNOLF_o *pNVar8;
  System_Collections_Generic_IEnumerator_T__c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  
  if ((DAT_045667d5 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<long>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
    DAT_045667d5 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar4 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    pNVar8 = (__this->fields).PMHMLJDMHFP;
    if ((pNVar8 != (NLFLMJPNOLF_o *)0x0) &&
       (__this_00 = (pNVar8->fields).MABPCBMOECE,
       __this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
      pSVar5 = Google_Protobuf_Collections_RepeatedField<long>__GetEnumerator
                         (__this_00,
                          Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
      if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        pSVar9 = pSVar5->klass;
        uVar1._0_1_ = (pSVar9->_2).rank;
        uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar6 = pSVar9->vtable + *piVar11;
              goto LAB_0324cd90;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        method = (MethodInfo *)0x0;
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5);
LAB_0324cd90:
        uVar10 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        if ((uVar10 & 1) == 0) goto LAB_0324ce14;
        pSVar9 = pSVar5->klass;
        uVar2._0_1_ = (pSVar9->_2).rank;
        uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar2;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerator<long>_TypeInfo) {
              pVVar6 = pSVar9->vtable + *piVar11;
              goto LAB_0324cdec;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        method = (MethodInfo *)0x0;
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5);
LAB_0324cdec:
        pvVar7 = (void *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (pIVar4[1].monitor != pvVar7);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Reload
                (__this,(__this->fields).PMHMLJDMHFP,method);
LAB_0324ce14:
      if (pSVar5 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        pSVar9 = pSVar5->klass;
        uVar3._0_1_ = (pSVar9->_2).rank;
        uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar3;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_IDisposable_TypeInfo) {
              pVVar6 = pSVar9->vtable + *piVar11;
              goto LAB_0324ce68;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_IDisposable_TypeInfo,0);
LAB_0324ce68:
        (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

