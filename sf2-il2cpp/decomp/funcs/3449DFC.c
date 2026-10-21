// NDPMLPGANCI$$AMHCCGMLBOE @ RVA 0x3449DFC

void NDPMLPGANCI__AMHCCGMLBOE(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Action_object__o **ppSVar3;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar4;
  System_String_o *pSVar5;
  KKEKKPIDGBK_o *pKVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *method_00;
  GLINEGMOOBM_o *pGVar8;
  System_Action_object__o *pSVar9;
  System_Action_DBMPKPJGIPI__o *pSVar10;
  System_Action_o *pSVar11;
  KKEKKPIDGBK_c *pKVar12;
  ulong uVar13;
  int32_t *piVar14;
  PKHMIGFEJCL_o *pPVar15;
  System_String_o **ppSVar16;
  
  if ((DAT_04568264 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04568264 = 1;
  }
  pGVar8 = (__this->fields).KLPOKEJLDHG;
  if (pGVar8 == (GLINEGMOOBM_o *)0x0) goto LAB_03549ff0;
  if ((pGVar8->fields).DBMPKPJGIPI != 0) {
    pSVar9 = (pGVar8->fields).LAALDDOEANK;
    if (pSVar9 == (System_Action_object__o *)0x0) {
      pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03549ff0;
      Nekki_SF2_Core_Quests_QuestsManager__RunQuests(pNVar4,(MethodInfo *)0x0);
    }
    else {
      (*(code *)(pSVar9->fields).super.super.invoke_impl)
                ((pSVar9->fields).super.super.method_code,0,(pSVar9->fields).super.super.method);
      pGVar8 = (__this->fields).KLPOKEJLDHG;
      if (pGVar8 == (GLINEGMOOBM_o *)0x0) goto LAB_03549ff0;
      ppSVar3 = &(pGVar8->fields).LAALDDOEANK;
      *ppSVar3 = (System_Action_object__o *)0x0;
      thunk_FUN_01c20e04(ppSVar3,0);
    }
  }
  pSVar10 = (__this->fields).LGEMJFBPAGO;
  if (pSVar10 != (System_Action_DBMPKPJGIPI__o *)0x0) {
    pGVar8 = (__this->fields).KLPOKEJLDHG;
    if (pGVar8 == (GLINEGMOOBM_o *)0x0) goto LAB_03549ff0;
    (*(code *)(pSVar10->fields).super.super.invoke_impl)
              ((pSVar10->fields).super.super.method_code,(pGVar8->fields).DBMPKPJGIPI,
               (pSVar10->fields).super.super.method);
  }
  pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pGVar8 = (__this->fields).KLPOKEJLDHG, pGVar8 != (GLINEGMOOBM_o *)0x0)) {
    pPVar15 = (pNVar4->fields).QuestParameters;
    pSVar5 = MEJPIPJPKNP__BELOCFNPIAN((pGVar8->fields).DBMPKPJGIPI,method_00);
    if (pPVar15 != (PKHMIGFEJCL_o *)0x0) {
      ppSVar16 = &(pPVar15->fields).DLOIHNBNGDB;
      *ppSVar16 = pSVar5;
      thunk_FUN_01c20e04(ppSVar16,pSVar5);
      pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar4,0x30,(MethodInfo *)0x0);
        pSVar11 = (__this->fields).FMABLOGPGMC;
        if (pSVar11 != (System_Action_o *)0x0) {
          (*(code *)(pSVar11->fields).super.super.invoke_impl)
                    ((pSVar11->fields).super.super.method_code,(pSVar11->fields).super.super.method)
          ;
        }
        pGVar8 = (__this->fields).KLPOKEJLDHG;
        if (pGVar8 != (GLINEGMOOBM_o *)0x0) {
          if ((pGVar8->fields).DBMPKPJGIPI == 5) {
            if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
            if (bVar2) {
              if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
              if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
                pKVar12 = pKVar6->klass;
                uVar1._0_1_ = (pKVar12->_2).rank;
                uVar1._1_1_ = (pKVar12->_2).minimumAlignment;
                uVar13 = (ulong)uVar1;
                if (uVar13 != 0) {
                  piVar14 = &((pKVar12->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                        (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                      pVVar7 = pKVar12->vtable + (*piVar14 + 4);
                      goto LAB_03549fd0;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,4);
LAB_03549fd0:
                    /* WARNING: Could not recover jumptable at 0x03549fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pVVar7->methodPtr)(pKVar6,3,0,1,pVVar7->method);
                return;
              }
              goto LAB_03549ff0;
            }
          }
          return;
        }
      }
    }
  }
LAB_03549ff0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

