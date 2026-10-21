// Nekki.SF2.GUI.Shop.ParameterScrollItem$$PKNFJBEGCOK @ RVA 0x3030964

void Nekki_SF2_GUI_Shop_ParameterScrollItem__PKNFJBEGCOK
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,System_String_o *AGPODGHEAIO,
               bool DCJABCJDDDL,System_String_o *MHHLKEOKCOB,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o **ppSVar2;
  bool bVar3;
  int32_t JLAFGLDIFOC;
  ABCMPMHNMAP_o *__this_00;
  IHDFIJGDCBL_o *pIVar4;
  DNICJALNLEB_o *__this_01;
  ALJBCELIEHC_o *__this_02;
  ACHLOMELAJE_o *__this_03;
  NFEOGKEAFHL_o *pNVar5;
  float fVar6;
  undefined8 uVar7;
  
  if ((DAT_04565d03 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9367);
    DAT_04565d03 = 1;
  }
  ppSVar2 = &(__this->fields).LBMOMAIHCEM;
  (__this->fields).LBMOMAIHCEM = AGPODGHEAIO;
  thunk_FUN_01c20e04(ppSVar2,AGPODGHEAIO);
  ppSVar1 = &(__this->fields).GCPECKMCAEM;
  (__this->fields).GCPECKMCAEM = MHHLKEOKCOB;
  thunk_FUN_01c20e04(ppSVar1,MHHLKEOKCOB);
  bVar3 = System_String__IsNullOrEmpty((__this->fields).GCPECKMCAEM,(MethodInfo *)0x0);
  if (bVar3) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
    if (__this_00 == (ABCMPMHNMAP_o *)0x0) goto LAB_03130bf4;
    pIVar4 = ABCMPMHNMAP__GAPOKDOKDGD(__this_00,*ppSVar2,(MethodInfo *)0x0);
    if (pIVar4 != (IHDFIJGDCBL_o *)0x0) {
      ppSVar2 = &(pIVar4->fields).FFDAPDCFBDO;
    }
    *ppSVar1 = *ppSVar2;
    thunk_FUN_01c20e04(ppSVar1);
  }
  bVar3 = System_String__IsNullOrEmpty(*ppSVar1,(MethodInfo *)0x0);
  if (bVar3) {
    uVar7 = NEON_fmov(0xbf800000,4);
    (__this->fields).HJNKDGDBDML = (float)(int)uVar7;
    (__this->fields).GPJAHLLAHEA = (float)(int)((ulong)uVar7 >> 0x20);
    (__this->fields).DNIGDKAHPIG = 1.0;
    (__this->fields).KENACCCGOJE = 0;
    return;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->CKACCOEFOEA;
  if (__this_01 == (DNICJALNLEB_o *)0x0) {
LAB_03130bf4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_02 = DNICJALNLEB__HNJLNPEEMOK(__this_01,*ppSVar1,(MethodInfo *)0x0);
  if (__this_02 == (ALJBCELIEHC_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9367,(MethodInfo *)0x0);
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_03 == (ACHLOMELAJE_o *)0x0) goto LAB_03130bf4;
  JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(__this_03,(MethodInfo *)0x0);
  if (DCJABCJDDDL) {
    pNVar5 = ALJBCELIEHC__PBBGPDCKBLO(__this_02,JLAFGLDIFOC,(MethodInfo *)0x0);
    if (pNVar5 == (NFEOGKEAFHL_o *)0x0) {
      pNVar5 = ALJBCELIEHC__NOKMFGNBKHE(__this_02,(MethodInfo *)0x0);
LAB_03130b88:
      (__this->fields).GPJAHLLAHEA = 0.0;
      (__this->fields).HJNKDGDBDML = 0.0;
      if (pNVar5 == (NFEOGKEAFHL_o *)0x0) goto LAB_03130bbc;
    }
  }
  else {
    pNVar5 = ALJBCELIEHC__FCNIFPFAFAF(__this_02,JLAFGLDIFOC,(MethodInfo *)0x0);
    if (pNVar5 == (NFEOGKEAFHL_o *)0x0) {
      pNVar5 = ALJBCELIEHC__ILDMHAKLLJC(__this_02,(MethodInfo *)0x0);
      goto LAB_03130b88;
    }
  }
  (__this->fields).HJNKDGDBDML = (float)(pNVar5->fields).OAJHHJBAINM;
  (__this->fields).GPJAHLLAHEA = (float)(pNVar5->fields).DJNEKDHLEHN;
  (__this->fields).DNIGDKAHPIG = (pNVar5->fields).MJHEJPAHPGF;
  (__this->fields).KENACCCGOJE = (pNVar5->fields).GHKNFJJOIDM;
LAB_03130bbc:
  fVar6 = (__this_02->fields).LDNOMBGGMHF;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (__this->fields).GMCNKDKMHII = fVar6;
  fVar6 = (__this_02->fields).AKPNOPAEKEF;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (__this->fields).CCIKLAFHFAH = fVar6;
  (__this->fields).NDFDLJPANOL = (__this_02->fields).BGHFADDGPAD;
  return;
}

