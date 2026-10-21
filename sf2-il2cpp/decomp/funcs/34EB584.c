// OLKKAIFGGAK$$NJDCEAPMLJP @ RVA 0x34EB584

void OLKKAIFGGAK__NJDCEAPMLJP(OLKKAIFGGAK_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_48 [2];
  
  if (CJNHFNHJHPE <= 1.0) {
    if (CJNHFNHJHPE < 0.0) {
      CJNHFNHJHPE = 0.0;
    }
  }
  else {
    CJNHFNHJHPE = 1.0;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_48,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  (__this->fields).MADKCNIEPLO.fields.fakeValueActive = local_48[0].fakeValueActive;
  (__this->fields).MADKCNIEPLO.fields.inited = local_48[0].inited;
  *(undefined2 *)&(__this->fields).MADKCNIEPLO.fields.field_0x12 = local_48[0]._18_2_;
  (__this->fields).MADKCNIEPLO.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_48[0].hiddenValueOldByte4.fields;
  (__this->fields).MADKCNIEPLO.fields.fakeValue = local_48[0].fakeValue;
  (__this->fields).MADKCNIEPLO.fields.currentCryptoKey = local_48[0].currentCryptoKey;
  (__this->fields).MADKCNIEPLO.fields.hiddenValue = local_48[0].hiddenValue;
  return;
}

