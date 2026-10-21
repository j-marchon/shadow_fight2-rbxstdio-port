// NLPJLHOEAOE$$FNLFJHFCGBJ @ RVA 0x31FB7C0

void NLPJLHOEAOE__FNLFJHFCGBJ(HOOAAGABMBL_o *IKKAMAMLIKA,bool OHLGEMOFODG,MethodInfo *method)

{
  long lVar1;
  ACHLOMELAJE_o *__this;
  int64_t iVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  if ((DAT_04566de4 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
                    /* try { // try from 032fb7f0 to 033fb7f7 has its CatchHandler @ 032fba5c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566de4 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    if (OHLGEMOFODG) {
      local_50.fields.hiddenValue =
           (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
      local_50.fields.currentCryptoKey =
           (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
      local_50.fields.fakeValueActive =
           (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
      local_50.fields.inited = (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
      local_50.fields._26_6_ =
           *(undefined6 *)&(IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
                    /* try { // try from 032fb818 to 033fb827 has its CatchHandler @ 032fba48 */
      local_50.fields.fakeValue =
           (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
      lVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_50,(MethodInfo *)0x0);
    }
    else {
                    /* try { // try from 032fb838 to 033fb83f has its CatchHandler @ 032fb9b8 */
      lVar1 = HOOAAGABMBL__MNKCHHFDEGH(IKKAMAMLIKA,(MethodInfo *)0x0);
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
                    /* try { // try from 032fb884 to 033fb8a7 has its CatchHandler @ 032fb9a0 */
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this != (ACHLOMELAJE_o *)0x0) {
      iVar2 = ACHLOMELAJE__ONABBENIPAN(__this,(MethodInfo *)0x0);
                    /* try { // try from 032fb8a8 to 033fb93f has its CatchHandler @ 032fb220 */
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Math_TypeInfo);
      }
      iVar2 = System_Math__Max(0,lVar1 - iVar2,(MethodInfo *)0x0);
      (IKKAMAMLIKA->fields)._NLEMHOHEEEC_k__BackingField = iVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

