// MGNPHCAAEIO$$JPFEMNNELIF @ RVA 0x33FC9A0

PJKHAJKEHEL_o * MGNPHCAAEIO__JPFEMNNELIF(PJKHAJKEHEL_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  HOOAAGABMBL_o **ppHVar3;
  DOPEEDABNEK_o *__this;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_04568043 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568043 = 1;
    method = extraout_x1;
  }
  if (OKBIKHHKOEN != (PJKHAJKEHEL_o *)0x0) {
    ppHVar3 = &(OKBIKHHKOEN->fields).HLAAFCIMBAP;
    if (*ppHVar3 == (HOOAAGABMBL_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
        method = extraout_x1_00;
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
        method = extraout_x1_01;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
        method = extraout_x1_02;
      }
      __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      }
      if (DAT_0456807b == '\0') {
        FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
        DAT_0456807b = '\x01';
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this == (DOPEEDABNEK_o *)0x0) goto LAB_034fcb6c;
      pHVar2 = DOPEEDABNEK__CKKIPBAIEMN
                         (__this,MGNPHCAAEIO_TypeInfo->static_fields->HJGJPNIFHFC,(MethodInfo *)0x0)
      ;
      *ppHVar3 = pHVar2;
      thunk_FUN_01c20e04(ppHVar3,pHVar2);
    }
    (OKBIKHHKOEN->fields).GPLLAHCFFIH = 0;
    CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    (OKBIKHHKOEN->fields).HJPOJOPKEKI.fields = CVar4;
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (OKBIKHHKOEN->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
    if (iVar1 < 1) {
      CJNHFNHJHPE = 1.0;
    }
    else {
      CJNHFNHJHPE = (float)iVar1;
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,CJNHFNHJHPE,
               (MethodInfo *)0x0);
    local_50.fakeValueActive = local_68.fakeValueActive;
    local_50.inited = local_68.inited;
    local_50._18_2_ = local_68._18_2_;
    local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
    local_50.fakeValue = local_68.fakeValue;
    local_50.currentCryptoKey = local_68.currentCryptoKey;
    local_50.hiddenValue = local_68.hiddenValue;
    (OKBIKHHKOEN->fields).MGLLAKLAAOO.fields.fakeValueActive = local_68.fakeValueActive;
    (OKBIKHHKOEN->fields).MGLLAKLAAOO.fields.inited = local_68.inited;
    *(undefined2 *)&(OKBIKHHKOEN->fields).MGLLAKLAAOO.fields.field_0x12 = local_68._18_2_;
    (OKBIKHHKOEN->fields).MGLLAKLAAOO.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
    (OKBIKHHKOEN->fields).MGLLAKLAAOO.fields.fakeValue = local_68.fakeValue;
    (OKBIKHHKOEN->fields).MGLLAKLAAOO.fields.currentCryptoKey = local_68.currentCryptoKey;
    (OKBIKHHKOEN->fields).MGLLAKLAAOO.fields.hiddenValue = local_68.hiddenValue;
    (OKBIKHHKOEN->fields).AJOIBGBDFKP = true;
    (OKBIKHHKOEN->fields).HLCGIMPHEKO = false;
    PJKHAJKEHEL__DFEJMCADFKD(OKBIKHHKOEN,(MethodInfo *)0x0);
    PJKHAJKEHEL__OBDMCJAPKPJ(OKBIKHHKOEN,(MethodInfo *)0x0);
    (*(OKBIKHHKOEN->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
              (OKBIKHHKOEN,(OKBIKHHKOEN->klass->vtable)._7_LBNKPLKIIOP.method);
    return OKBIKHHKOEN;
  }
LAB_034fcb6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

