// MGNPHCAAEIO$$GLJCOFLCPLL @ RVA 0x340310C

bool MGNPHCAAEIO__GLJCOFLCPLL
               (AFFHKININGD_o *BJBAKCMEGDH,int32_t OOGLHLAMAOI,float OKOMNPMNCBG,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  bool bVar4;
  int32_t iVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  OHDDKGHEEPA_o *__this;
  DNELIPCHKLK_o *pDVar7;
  System_String_o **ppSVar8;
  PKHMIGFEJCL_o *pPVar9;
  
  if ((DAT_04568003 & 1) == 0) {
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&StringLiteral_14949);
    FUN_01bab630(&StringLiteral_12536);
    FUN_01bab630(&StringLiteral_8676);
    DAT_04568003 = 1;
  }
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (((pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
      (BJBAKCMEGDH != (AFFHKININGD_o *)0x0)) &&
     (pPVar9 = (pNVar6->fields).QuestParameters, pPVar9 != (PKHMIGFEJCL_o *)0x0)) {
    (pPVar9->fields).NMHCLFFOMJH = (BJBAKCMEGDH->fields).KOILJHHCIEE;
    thunk_FUN_01c20e04();
    puVar1 = &StringLiteral_12536;
    if (OOGLHLAMAOI != -1) {
      puVar1 = &StringLiteral_8676;
    }
    puVar2 = &StringLiteral_14949;
    if (OOGLHLAMAOI != 1) {
      puVar2 = puVar1;
    }
    ppSVar8 = &(pPVar9->fields).PNPKEKHEMCD;
    *ppSVar8 = (System_String_o *)*puVar2;
    thunk_FUN_01c20e04(ppSVar8);
    (pPVar9->fields).FAOAFEINLEL = OKOMNPMNCBG;
    if ((BJBAKCMEGDH->fields).JDNKKGPNHPB == 0x14) {
      pDVar7 = (BJBAKCMEGDH->fields).KOILJHHCIEE;
      if (pDVar7 == (DNELIPCHKLK_o *)0x0) goto LAB_03503278;
      (pPVar9->fields).EICOIEGEFAF = (pDVar7->fields).GJFJPLHCBKJ;
      thunk_FUN_01c20e04();
      __this = (OHDDKGHEEPA_o *)(BJBAKCMEGDH->fields).IFJLLGPGMHM;
      if (__this == (OHDDKGHEEPA_o *)0x0) {
        iVar5 = -1;
      }
      else {
        bVar3 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
        if (((__this->klass->_2).naturalAligment < bVar3) ||
           ((__this->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
            (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        iVar5 = OHDDKGHEEPA__DCAKAGILMOF(__this,(MethodInfo *)0x0);
      }
      (pPVar9->fields).OILECKFDMDB = iVar5;
    }
    pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar4 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar6,2,(MethodInfo *)0x0);
      return bVar4;
    }
  }
LAB_03503278:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

