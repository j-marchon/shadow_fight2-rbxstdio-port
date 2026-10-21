// AMIINPEKKFB$$AMGIHEOPMEK @ RVA 0x350EEC8

void AMIINPEKKFB__AMGIHEOPMEK(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  DNELIPCHKLK_o *pDVar2;
  System_Action_HOOAAGABMBL__o *pSVar3;
  DNELIPCHKLK_o **ppDVar4;
  DNELIPCHKLK_o *pDVar5;
  PKHMIGFEJCL_o *pPVar6;
  
  if ((DAT_045688f5 & 1) == 0) {
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045688f5 = 1;
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
    pDVar2 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    *ppDVar4 = pDVar2;
    thunk_FUN_01c20e04(ppDVar4,pDVar2);
    (pPVar6->fields).PNPKEKHEMCD = StringLiteral_1;
                    /* try { // try from 0360ef78 to 0370ef9f has its CatchHandler @ 0360f32c */
    thunk_FUN_01c20e04();
    (pPVar6->fields).LOLFFJGLKLD = StringLiteral_1;
    thunk_FUN_01c20e04();
    (pPVar6->fields).CJLNOJMBNPN = IKKAMAMLIKA;
    thunk_FUN_01c20e04(&pPVar6->fields,IKKAMAMLIKA);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0xb,(MethodInfo *)0x0);
      *ppDVar4 = pDVar5;
      thunk_FUN_01c20e04(ppDVar4,pDVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

