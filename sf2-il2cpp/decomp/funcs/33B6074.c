// GGHCLMEFIGO$$HCGGFBAOINE @ RVA 0x33B6074

void GGHCLMEFIGO__HCGGFBAOINE
               (GGHCLMEFIGO_o *__this,System_String_o *FPDIHDDPOKM,bool KJGJMFPJFGC,
               System_String_o *EJHJFPBAIAL,bool BJABPPEKFEC,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *pPVar3;
  System_String_o **ppSVar4;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(FPDIHDDPOKM,(MethodInfo *)0x0);
  if ((!bVar1) || (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(EJHJFPBAIAL,(MethodInfo *)0x0), !bVar1)) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(FPDIHDDPOKM,(MethodInfo *)0x0);
    if ((!bVar1) &&
       ((KJGJMFPJFGC &&
        (bVar1 = System_String__op_Inequality(FPDIHDDPOKM,EJHJFPBAIAL,(MethodInfo *)0x0), bVar1))))
    {
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if ((pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
         (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 == (PKHMIGFEJCL_o *)0x0))
      goto LAB_034b6178;
      ppSVar4 = &(pPVar3->fields).LMPMHKIABOM;
      *ppSVar4 = FPDIHDDPOKM;
      thunk_FUN_01c20e04(ppSVar4,FPDIHDDPOKM);
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_034b6178;
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x1e,(MethodInfo *)0x0);
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(EJHJFPBAIAL,(MethodInfo *)0x0);
    if ((!bVar1) && (BJABPPEKFEC)) {
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
         (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
        ppSVar4 = &(pPVar3->fields).LMPMHKIABOM;
        *ppSVar4 = EJHJFPBAIAL;
        thunk_FUN_01c20e04(ppSVar4,EJHJFPBAIAL);
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x1d,(MethodInfo *)0x0);
          return;
        }
      }
LAB_034b6178:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

