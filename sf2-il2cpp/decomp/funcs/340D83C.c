// MGNPHCAAEIO$$BIFPGEGFDLK @ RVA 0x340D83C

bool MGNPHCAAEIO__BIFPGEGFDLK(int32_t ELHAJJAHLHM,int32_t CPGKPBEINGA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_String_o *pSVar3;
  PKHMIGFEJCL_o *pPVar4;
  System_String_o **ppSVar5;
  
                    /* catch() { ... } // from try @ 0350d830 with catch @ 0350d83c */
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    pPVar4 = (pNVar2->fields).QuestParameters;
    pSVar3 = MMOGKBGEPGM__GKMAFGODLLG(ELHAJJAHLHM,(MethodInfo *)0x0);
    if (pPVar4 != (PKHMIGFEJCL_o *)0x0) {
      (pPVar4->fields).LDDHCAMIBKH = pSVar3;
      thunk_FUN_01c20e04();
      pSVar3 = MMOGKBGEPGM__GKMAFGODLLG(CPGKPBEINGA,(MethodInfo *)0x0);
      ppSVar5 = &(pPVar4->fields).HMGLKIEIMPF;
      *ppSVar5 = pSVar3;
      thunk_FUN_01c20e04(ppSVar5,pSVar3);
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                          (pNVar2,0x13,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

