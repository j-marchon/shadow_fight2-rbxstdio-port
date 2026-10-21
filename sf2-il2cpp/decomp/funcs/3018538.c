// ECENNHNBAME$$PHKBMFGNKFL @ RVA 0x3018538

/* WARNING: Type propagation algorithm not settling */

void ECENNHNBAME__PHKBMFGNKFL(ECENNHNBAME_o *__this,CNDPAJOLKFN_o *CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  UnityEngine_Vector3_o CJNHFNHJHPE_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_80 [2];
  
  if ((DAT_04565be2 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04565be2 = 1;
  }
  CJNHFNHJHPE_00 = CNDPAJOLKFN__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *)local_80,CJNHFNHJHPE_00,
             (MethodInfo *)0x0);
  pCVar1 = &(__this->fields).GIBHJGLKJBA;
  (pCVar1->fields).hiddenValue.fields.y = local_80[0].hiddenValue.fields.y;
  (pCVar1->fields).hiddenValue.fields.z = local_80[0].hiddenValue.fields.z;
  (__this->fields).GIBHJGLKJBA.fields.currentCryptoKey = local_80[0].currentCryptoKey;
  (__this->fields).GIBHJGLKJBA.fields.hiddenValue.fields.x = local_80[0].hiddenValue.fields.x;
  pCVar1 = &(__this->fields).GIBHJGLKJBA;
  *(undefined8 *)&(__this->fields).GIBHJGLKJBA.fields.fakeValue.fields.z = local_80[0]._24_8_;
  (pCVar1->fields).fakeValue.fields.x = local_80[0].fakeValue.fields.x;
  (pCVar1->fields).fakeValue.fields.y = local_80[0].fakeValue.fields.y;
  return;
}

