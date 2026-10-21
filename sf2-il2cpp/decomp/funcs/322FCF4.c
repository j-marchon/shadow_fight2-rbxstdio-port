// BAIOKFJKEGH$$MAHFCKJGBPP @ RVA 0x322FCF4

void BAIOKFJKEGH__MAHFCKJGBPP(BAIOKFJKEGH_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  FPPKHNNABAD_o *NDBPOFMECGL;
  
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    NDBPOFMECGL = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                            (pNVar1,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (NDBPOFMECGL != (FPPKHNNABAD_o *)0x0) {
      pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar1 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0332fd58;
      Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack
                (pNVar1,NDBPOFMECGL,true,(MethodInfo *)0x0);
    }
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_0332fd58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

