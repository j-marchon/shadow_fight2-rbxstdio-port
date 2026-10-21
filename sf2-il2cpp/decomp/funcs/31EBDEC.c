// KGLCGFMIEGI$$PKLMDBAFDMH @ RVA 0x31EBDEC

void KGLCGFMIEGI__PKLMDBAFDMH(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  Facebook_Unity_InitDelegate_o *pFVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566dac & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_7537);
    auVar3 = FUN_01bab630(&StringLiteral_7536);
    DAT_04566dac = 1;
  }
  bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar3._0_8_,auVar3._8_8_);
  if (!bVar1) {
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_7537,(MethodInfo *)0x0);
    return;
  }
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045604e9 == '\0') {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    DAT_045604e9 = '\x01';
  }
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLNPKGGFFDD = System_String__Concat
                          (StringLiteral_7536,
                           Facebook_Unity_FB_TypeInfo->static_fields->graphApiVersion,
                           StringLiteral_802,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  KGLCGFMIEGI__CHMGIIMLANF(__this,method_00);
  pFVar2 = (__this->fields).BPONHHDHOAB;
  if (pFVar2 != (Facebook_Unity_InitDelegate_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032ebef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pFVar2->fields).super.super.invoke_impl)
              ((pFVar2->fields).super.super.method_code,(pFVar2->fields).super.super.method);
    return;
  }
  return;
}

