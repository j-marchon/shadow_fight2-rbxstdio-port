// AMIINPEKKFB$$PFPPJAJFKDL @ RVA 0x35105A4

void AMIINPEKKFB__PFPPJAJFKDL
               (NCCFNKMICGK_o *NLFMDIGKNGP,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  NCCFNKMICGK_o **ppNVar2;
  System_Action_HOOAAGABMBL__o *pSVar3;
  DNELIPCHKLK_o **ppDVar4;
  DNELIPCHKLK_o *pDVar5;
  PKHMIGFEJCL_o *pPVar6;
  
                    /* try { // try from 036105ac to 037105cf has its CatchHandler @ 03610688 */
  if ((DAT_045688e8 & 1) == 0) {
                    /* try { // try from 036105d0 to 03710663 has its CatchHandler @ 03610364 */
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
    DAT_045688e8 = 1;
  }
  pSVar3 = AMIINPEKKFB_TypeInfo->static_fields->PEFBFMPBJAA;
  if (pSVar3 != (System_Action_HOOAAGABMBL__o *)0x0) {
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,IKKAMAMLIKA,
               (pSVar3->fields).super.super.method);
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar6 = (pNVar1->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
    ppDVar4 = &(pPVar6->fields).NMHCLFFOMJH;
    pDVar5 = *ppDVar4;
    ppNVar2 = &(pPVar6->fields).LKNIEMOMBAA;
    *ppNVar2 = NLFMDIGKNGP;
    thunk_FUN_01c20e04(ppNVar2,NLFMDIGKNGP);
    (pPVar6->fields).CJLNOJMBNPN = IKKAMAMLIKA;
    thunk_FUN_01c20e04(&pPVar6->fields,IKKAMAMLIKA);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0x4b,(MethodInfo *)0x0);
      *ppDVar4 = pDVar5;
                    /* try { // try from 03610664 to 0371066b has its CatchHandler @ 0361068c */
                    /* try { // try from 0361066c to 03710673 has its CatchHandler @ 03610698 */
      thunk_FUN_01c20e04(ppDVar4,pDVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03610674 to 03710677 has its CatchHandler @ 03610364 */
  FUN_01bab8c8();
}

