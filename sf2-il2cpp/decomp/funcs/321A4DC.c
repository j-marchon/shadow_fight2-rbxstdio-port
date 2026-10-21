// BKKPAKHJDKB$$FGNINNOOCCL @ RVA 0x321A4DC

void BKKPAKHJDKB__FGNINNOOCCL(BKKPAKHJDKB_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o *pSVar3;
  FAIJGJCCKJC_o *pFVar4;
  System_Action_BKKPAKHJDKB__o *pSVar5;
  DNELIPCHKLK_o **ppDVar6;
  DNELIPCHKLK_o *pDVar7;
  PKHMIGFEJCL_o *pPVar8;
  
  if ((DAT_04566ef6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04566ef6 = 1;
  }
  if ((__this->fields).HHJIJKJCEOF == 0) {
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar1 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
       (pPVar8 = (pNVar1->fields).QuestParameters, pPVar8 == (PKHMIGFEJCL_o *)0x0))
    goto LAB_0331a5d0;
    ppDVar6 = &(pPVar8->fields).NMHCLFFOMJH;
    pDVar7 = *ppDVar6;
    pDVar2 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    *ppDVar6 = pDVar2;
    thunk_FUN_01c20e04(ppDVar6,pDVar2);
    (pPVar8->fields).PNPKEKHEMCD = StringLiteral_1;
    thunk_FUN_01c20e04();
    pFVar4 = (__this->fields).IJDPHADMDKN;
    if (pFVar4 == (FAIJGJCCKJC_o *)0x0) {
      pSVar3 = (System_String_o *)0x0;
    }
    else {
      pSVar3 = (pFVar4->fields).super._COIPKAKHDFP_k__BackingField;
    }
    (pPVar8->fields).LJMELPHJPOG = pSVar3;
    thunk_FUN_01c20e04(&(pPVar8->fields).LJMELPHJPOG);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0331a5d0;
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0x33,(MethodInfo *)0x0);
    *ppDVar6 = pDVar7;
    thunk_FUN_01c20e04(ppDVar6,pDVar7);
  }
  pSVar5 = (__this->fields).IDLOEOMGHOO;
  if (pSVar5 != (System_Action_BKKPAKHJDKB__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0331a5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              ((pSVar5->fields).super.super.method_code,__this,(pSVar5->fields).super.super.method);
    return;
  }
LAB_0331a5d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

