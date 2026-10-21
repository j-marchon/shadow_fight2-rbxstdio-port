// LAMJOHEKJNJ$$EKEDMLKAGIK @ RVA 0x30A1680

void LAMJOHEKJNJ__EKEDMLKAGIK(LAMJOHEKJNJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  PKHMIGFEJCL_o *pPVar2;
  System_String_o **ppSVar3;
  System_Action_string__o *pSVar4;
  
  pSVar4 = (__this->fields).HMIIDMMEAED;
  if (pSVar4 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,KGLJICLJHEL,
               (pSVar4->fields).super.super.method);
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar2 = (pNVar1->fields).QuestParameters, pPVar2 != (PKHMIGFEJCL_o *)0x0)) {
    ppSVar3 = &(pPVar2->fields).BEMCEBHHIEC;
    *ppSVar3 = KGLJICLJHEL;
    thunk_FUN_01c20e04(ppSVar3,KGLJICLJHEL);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0x18,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

