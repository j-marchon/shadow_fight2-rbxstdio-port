// MGNPHCAAEIO$$EHEMFMCGKKK @ RVA 0x34008D8

void MGNPHCAAEIO__EHEMFMCGKKK(HOOAAGABMBL_o *IKKAMAMLIKA,int32_t KLPEHBCJBFC,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  KKEKKPIDGBK_o *pKVar4;
  VirtualInvokeData *pVVar5;
  undefined8 *puVar6;
  KKEKKPIDGBK_c *pKVar7;
  ulong uVar8;
  int32_t *piVar9;
  PKHMIGFEJCL_o *pPVar10;
  System_String_o **ppSVar11;
  
  if ((DAT_04567fec & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&StringLiteral_4465);
    FUN_01bab630(&StringLiteral_11452);
    FUN_01bab630(&StringLiteral_10826);
    FUN_01bab630(&StringLiteral_4592);
    DAT_04567fec = 1;
  }
  pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (pPVar10 = (pNVar3->fields).QuestParameters, pPVar10 == (PKHMIGFEJCL_o *)0x0))
  goto LAB_03500aa8;
  (pPVar10->fields).CJLNOJMBNPN = IKKAMAMLIKA;
  thunk_FUN_01c20e04(&pPVar10->fields,IKKAMAMLIKA);
  switch(KLPEHBCJBFC) {
  case 2:
    puVar6 = &StringLiteral_4465;
    break;
  case 3:
    puVar6 = &StringLiteral_11452;
    break;
  case 4:
    puVar6 = &StringLiteral_4592;
    break;
  default:
    goto switchD_03500988_caseD_5;
  case 6:
    puVar6 = &StringLiteral_10826;
  }
  ppSVar11 = &(pPVar10->fields).LPFMHPBACOJ;
  *ppSVar11 = (System_String_o *)*puVar6;
  thunk_FUN_01c20e04(ppSVar11);
switchD_03500988_caseD_5:
  pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar3,0x14,(MethodInfo *)0x0);
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar4 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pKVar4 != (KKEKKPIDGBK_o *)0x0) {
      pKVar7 = pKVar4->klass;
      uVar1._0_1_ = (pKVar7->_2).rank;
      uVar1._1_1_ = (pKVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pKVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
            pVVar5 = pKVar7->vtable + (*piVar9 + 4);
            goto LAB_03500a88;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar4,KKEKKPIDGBK_TypeInfo,4);
LAB_03500a88:
                    /* try { // try from 03500a8c to 03600baf has its CatchHandler @ 03500a8c
                       catch() { ... } // from try @ 03500a8c with catch @ 03500a8c
                       catch() { ... } // from try @ 03500bb8 with catch @ 03500a8c
                       catch() { ... } // from try @ 03500c14 with catch @ 03500a8c
                       catch() { ... } // from try @ 03500c5c with catch @ 03500a8c */
                    /* WARNING: Could not recover jumptable at 0x03500aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar5->methodPtr)(pKVar4,4,0,1,pVVar5->method);
      return;
    }
  }
LAB_03500aa8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

