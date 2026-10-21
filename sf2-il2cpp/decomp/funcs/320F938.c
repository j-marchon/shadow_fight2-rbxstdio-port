// FPMAFHGLPOB$$OMGLKPMBAPF @ RVA 0x320F938

void FPMAFHGLPOB__OMGLKPMBAPF
               (HOOAAGABMBL_o *IKKAMAMLIKA,int32_t ACCIHBHMFPN,bool OHLGEMOFODG,int64_t *GNMPBJBGAJI
               ,int64_t *OIMLLJHAMPD,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *CJNHFNHJHPE;
  long lVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  CJNHFNHJHPE = &local_60;
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (ACCIHBHMFPN == 1) {
    *OIMLLJHAMPD = (IKKAMAMLIKA->fields)._NLEMHOHEEEC_k__BackingField;
    if (!OHLGEMOFODG) {
      lVar1 = HOOAAGABMBL__MNKCHHFDEGH(IKKAMAMLIKA,(MethodInfo *)0x0);
      goto LAB_0330f9b4;
    }
    local_40.fields.hiddenValue =
         (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
    local_40.fields.currentCryptoKey =
         (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
    local_40.fields.fakeValueActive =
         (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
    local_40.fields.inited = (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
    local_40.fields._26_6_ =
         *(undefined6 *)&(IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
    local_40.fields.fakeValue = (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
    CJNHFNHJHPE = &local_40;
  }
  else {
    *OIMLLJHAMPD = (IKKAMAMLIKA->fields)._LDNHFNABLEK_k__BackingField;
    if (!OHLGEMOFODG) {
      lVar1 = HOOAAGABMBL__ICMFLAFFOFM(IKKAMAMLIKA,(MethodInfo *)0x0);
      goto LAB_0330f9b4;
    }
    local_60.fields.hiddenValue =
         (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.hiddenValue;
    local_60.fields.currentCryptoKey =
         (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.currentCryptoKey;
    local_60.fields.fakeValueActive =
         (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.fakeValueActive;
    local_60.fields.inited = (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.inited;
    local_60.fields._26_6_ =
         *(undefined6 *)&(IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.field_0x1a;
    local_60.fields.fakeValue = (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.fakeValue;
  }
  lVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
LAB_0330f9b4:
  *GNMPBJBGAJI = lVar1 - *OIMLLJHAMPD;
  return;
}

