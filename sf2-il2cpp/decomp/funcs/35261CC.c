// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$JNCKDHJJBPM @ RVA 0x35261CC

/* WARNING: Removing unreachable block (ram,0x03626408) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__JNCKDHJJBPM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  NLFLMJPNOLF_o *pNVar6;
  System_Collections_Generic_IEnumerator_T__c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  
  if ((DAT_045689ff & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_GetEnumerator__);
    DAT_045689ff = 1;
  }
  if ((PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) &&
     ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField == false)) {
    pNVar6 = (__this->fields).PMHMLJDMHFP;
    if ((pNVar6 == (NLFLMJPNOLF_o *)0x0) ||
       (__this_00 = (PBNPKBJKFHE->fields).MJIHCLLODMF,
       __this_00 == (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar10 = (pNVar6->fields).OHMDCKEDOGH;
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                        Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_GetEnumerator__
                       );
    if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar7 = pSVar4->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar7->vtable + *piVar9;
            goto LAB_036262b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      method = (MethodInfo *)0x0;
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_036262b8:
      uVar8 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar8 & 1) == 0) {
        iVar12 = 7;
        iVar11 = 7;
        goto joined_r0x03626358;
      }
      pSVar7 = pSVar4->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo) {
            pVVar5 = pSVar7->vtable + *piVar9;
            goto LAB_03626314;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      method = (MethodInfo *)0x0;
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_03626314:
      pNVar6 = (NLFLMJPNOLF_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (pNVar6 == (NLFLMJPNOLF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while ((pNVar6->fields).OHMDCKEDOGH != lVar10);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__FJIFDGEPKBH(__this,pNVar6,method);
    iVar12 = 6;
    iVar11 = 6;
joined_r0x03626358:
    if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
      pSVar7 = pSVar4->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar3;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar5 = pSVar7->vtable + *piVar9;
            goto LAB_036263b0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_036263b0:
      (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      iVar11 = iVar12;
    }
    if ((iVar11 == 7) || (iVar11 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x036263e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
  }
  return;
}

