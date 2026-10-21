// NCNJEIBHGBH$$OANGGKCBAOJ @ RVA 0x32F181C

void NCNJEIBHGBH__OANGGKCBAOJ(NCNJEIBHGBH_o *__this,System_String_o *BGCBJECODII,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  PKHMIGFEJCL_o *pPVar2;
  System_String_o **ppSVar3;
  System_Action_string__o *pSVar4;
  
                    /* try { // try from 033f181c to 034f183f has its CatchHandler @ 033f1f90 */
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar2 = (pNVar1->fields).QuestParameters, pPVar2 != (PKHMIGFEJCL_o *)0x0)) {
    ppSVar3 = &(pPVar2->fields).GLKBIGJCDIP;
    *ppSVar3 = BGCBJECODII;
    thunk_FUN_01c20e04(ppSVar3,BGCBJECODII);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 033f1858 to 034f1863 has its CatchHandler @ 033f1f7c */
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0x19,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).FBENJEIDACA;
      if (pSVar4 != (System_Action_string__o *)0x0) {
                    /* try { // try from 033f1878 to 034f187f has its CatchHandler @ 033f1f50 */
                    /* WARNING: Could not recover jumptable at 0x033f1884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,BGCBJECODII,
                   (pSVar4->fields).super.super.method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

