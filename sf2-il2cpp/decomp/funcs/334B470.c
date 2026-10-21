// Nekki.SF2.GUI.Common.PaymentUI$$CBMPCEPMFHP @ RVA 0x334B470

void Nekki_SF2_GUI_Common_PaymentUI__CBMPCEPMFHP
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,int32_t AAJGEHHPMGH,
               HOOAAGABMBL_o *ANMFBABEMFD,System_String_o *ENNIFOKKLOA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  DNELIPCHKLK_o *pDVar3;
  DNELIPCHKLK_o **ppDVar4;
  DNELIPCHKLK_o *pDVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_045679ff & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_045679ff = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar6 = (pNVar2->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
    ppDVar4 = &(pPVar6->fields).NMHCLFFOMJH;
    pDVar5 = *ppDVar4;
    pDVar3 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    *ppDVar4 = pDVar3;
    thunk_FUN_01c20e04(ppDVar4,pDVar3);
    (pPVar6->fields).PNPKEKHEMCD = StringLiteral_1;
    thunk_FUN_01c20e04();
    if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
      (pPVar6->fields).CJLNOJMBNPN = ANMFBABEMFD;
      thunk_FUN_01c20e04(&pPVar6->fields,ANMFBABEMFD);
    }
    bVar1 = System_String__IsNullOrEmpty(ENNIFOKKLOA,(MethodInfo *)0x0);
    if (!bVar1) {
      ppSVar7 = &(pPVar6->fields).LPFMHPBACOJ;
      *ppSVar7 = ENNIFOKKLOA;
      thunk_FUN_01c20e04(ppSVar7,ENNIFOKKLOA);
    }
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                (pNVar2,AAJGEHHPMGH,(MethodInfo *)0x0);
      *ppDVar4 = pDVar5;
      thunk_FUN_01c20e04(ppDVar4,pDVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

