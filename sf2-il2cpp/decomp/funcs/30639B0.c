// ACHLOMELAJE$$EPPLHMKADOJ @ RVA 0x30639B0

void ACHLOMELAJE__EPPLHMKADOJ(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint32_t CJNHFNHJHPE;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  MethodInfo *method_00;
  PKHMIGFEJCL_o *pPVar3;
  
  method_00 = (MethodInfo *)0x0;
  CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o)
                           (__this->fields).GLFINLJNDPI.fields,(MethodInfo *)0x0);
  bVar1 = ACHLOMELAJE__NKOMBDGHDEN(__this,CJNHFNHJHPE,method_00);
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
    (pPVar3->fields).KADCKFHODOE = (uint)bVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

