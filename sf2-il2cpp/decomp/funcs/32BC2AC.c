// MainMenuRaidRatingPanel$$LEHAAENBCND @ RVA 0x32BC2AC

void MainMenuRaidRatingPanel__LEHAAENBCND(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  HCKCBFOGMMJ_o *__this_00;
  EEGDOGKBLNG_o *pEVar3;
  int64_t OGPGLGPMEPD;
  GKLPDMLELJF_o *pGVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  int32_t *piVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  System_String_o **ppSVar8;
  
  if ((DAT_0456749d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_7231);
    DAT_0456749d = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if ((pEVar3 != (EEGDOGKBLNG_o *)0x0) &&
     (OGPGLGPMEPD = EEGDOGKBLNG__APCMGOCHMGC(pEVar3,(MethodInfo *)0x0),
     __this_00 != (HCKCBFOGMMJ_o *)0x0)) {
    pGVar4 = HCKCBFOGMMJ__LLEJFHJIBHC(__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (pGVar4 == (GKLPDMLELJF_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar3 == (EEGDOGKBLNG_o *)0x0) goto LAB_033bc480;
      iVar2 = EEGDOGKBLNG__IGIHHCEONEM(pEVar3,(MethodInfo *)0x0);
    }
    else {
      iVar2 = (pGVar4->fields).PEBHLKLGDBM;
    }
    piVar6 = &(__this->fields).AAKJNHODIMO;
    if (*piVar6 != iVar2) {
      pNVar7 = (__this->fields)._labelDan;
      (__this->fields).AAKJNHODIMO = iVar2;
      pSVar5 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
      if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033bc480;
      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                (pNVar7,pSVar5,(pNVar7->klass->vtable)._75_set_text.method);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
      pSVar5 = EEGDOGKBLNG__GKMAFGODLLG(pEVar3,(MethodInfo *)0x0);
      ppSVar8 = &(__this->fields).ELBBBIIBIKM;
      bVar1 = System_String__op_Inequality(*ppSVar8,pSVar5,(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields).ELBBBIIBIKM = pSVar5;
        thunk_FUN_01c20e04(ppSVar8,pSVar5);
        pNVar7 = (__this->fields)._labelUserName;
        if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033bc480;
        (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                  (pNVar7,*ppSVar8,(pNVar7->klass->vtable)._75_set_text.method);
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
        pSVar5 = EEGDOGKBLNG__GGHGAIBPPJO(pEVar3,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(StringLiteral_7231,pSVar5,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._labelUserNameId;
        if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033bc47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                    (pNVar7,pSVar5,(pNVar7->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
LAB_033bc480:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

