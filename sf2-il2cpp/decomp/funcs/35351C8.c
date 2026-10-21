// JJPNLEPEAFM$$NFKLNBFKKLF @ RVA 0x35351C8

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__NFKLNBFKKLF(OHDDKGHEEPA_o *AOMBONOOJFP,MethodInfo *method)

{
  bool bVar1;
  int32_t OILECKFDMDB;
  CNLGMNIEGFG_o *pCVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  AJOGJBFNELI_o *__this;
  IKJOGLIBGJF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar4;
  DNELIPCHKLK_o *pDVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04568a81 & 1) == 0) {
    FUN_01bab630(&IKJOGLIBGJF_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a81 = 1;
  }
  if (AOMBONOOJFP != (OHDDKGHEEPA_o *)0x0) {
    OILECKFDMDB = OHDDKGHEEPA__DCAKAGILMOF(AOMBONOOJFP,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    pCVar2 = MGNPHCAAEIO__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
        (pPVar6 = (pNVar3->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) &&
       ((pPVar6->fields).OILECKFDMDB = OILECKFDMDB, pCVar2 != (CNLGMNIEGFG_o *)0x0)) {
      (pPVar6->fields).NMHCLFFOMJH = (pCVar2->fields).super.KOILJHHCIEE;
      thunk_FUN_01c20e04();
      pDVar5 = (pCVar2->fields).super.KOILJHHCIEE;
      if (pDVar5 != (DNELIPCHKLK_o *)0x0) {
        ppSVar7 = &(pPVar6->fields).EICOIEGEFAF;
        *ppSVar7 = (pDVar5->fields).GJFJPLHCBKJ;
        thunk_FUN_01c20e04(ppSVar7);
        pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar3,0x48,(MethodInfo *)0x0)
          ;
          if (bVar1) {
            pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
              Nekki_SF2_Core_Quests_QuestsManager__RunQuests(pNVar3,(MethodInfo *)0x0);
              return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
            }
          }
          else {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
            if (__this != (AJOGJBFNELI_o *)0x0) {
              AJOGJBFNELI__ILNDICIHADK(__this,(MethodInfo *)0x0);
              __this_00 = (IKJOGLIBGJF_o *)thunk_FUN_01bda818(IKJOGLIBGJF_TypeInfo);
              IKJOGLIBGJF___ctor(__this_00,AOMBONOOJFP,(MethodInfo *)0x0);
              pNVar4 = GCIFMNHADDF__ACDDKABEBAP(0x78,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
              return pNVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

