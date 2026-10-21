// PJKHAJKEHEL$$MCEMJDBACFG @ RVA 0x303F858

void PJKHAJKEHEL__MCEMJDBACFG(PJKHAJKEHEL_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  undefined2 uVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58 [2];
  
  if ((__this->fields).HMDADENHOFD != false) {
    fVar5 = (__this->fields).MGLLAKLAAOO.fields.fakeValue;
    iVar1 = (__this->fields).MGLLAKLAAOO.fields.currentCryptoKey;
    iVar2 = (__this->fields).MGLLAKLAAOO.fields.hiddenValue;
    (__this->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)
         (__this->fields).MGLLAKLAAOO.fields.hiddenValueOldByte4.fields;
    (__this->fields).JNFNFEJAGGN.fields.fakeValue = fVar5;
    (__this->fields).JNFNFEJAGGN.fields.currentCryptoKey = iVar1;
    (__this->fields).JNFNFEJAGGN.fields.hiddenValue = iVar2;
    bVar3 = (__this->fields).MGLLAKLAAOO.fields.inited;
    uVar4 = *(undefined2 *)&(__this->fields).MGLLAKLAAOO.fields.field_0x12;
    (__this->fields).JNFNFEJAGGN.fields.fakeValueActive =
         (__this->fields).MGLLAKLAAOO.fields.fakeValueActive;
    (__this->fields).JNFNFEJAGGN.fields.inited = bVar3;
    *(undefined2 *)&(__this->fields).JNFNFEJAGGN.fields.field_0x12 = uVar4;
    return;
  }
  if (0.0 <= CJNHFNHJHPE) {
    local_70.fakeValueActive = (__this->fields).MGLLAKLAAOO.fields.fakeValueActive;
    local_70.inited = (__this->fields).MGLLAKLAAOO.fields.inited;
    local_70._18_2_ = *(undefined2 *)&(__this->fields).MGLLAKLAAOO.fields.field_0x12;
    local_70.hiddenValueOldByte4.fields =
         (__this->fields).MGLLAKLAAOO.fields.hiddenValueOldByte4.fields;
    local_70.fakeValue = (__this->fields).MGLLAKLAAOO.fields.fakeValue;
    local_70.currentCryptoKey = (__this->fields).MGLLAKLAAOO.fields.currentCryptoKey;
    local_70.hiddenValue = (__this->fields).MGLLAKLAAOO.fields.hiddenValue;
    fVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                       (MethodInfo *)0x0);
    if (fVar5 < CJNHFNHJHPE) {
      local_58[0].fakeValueActive = (__this->fields).MGLLAKLAAOO.fields.fakeValueActive;
      local_58[0].inited = (__this->fields).MGLLAKLAAOO.fields.inited;
      local_58[0]._18_2_ = *(undefined2 *)&(__this->fields).MGLLAKLAAOO.fields.field_0x12;
      local_58[0].hiddenValueOldByte4.fields =
           (__this->fields).MGLLAKLAAOO.fields.hiddenValueOldByte4.fields;
      local_58[0].fakeValue = (__this->fields).MGLLAKLAAOO.fields.fakeValue;
      local_58[0].currentCryptoKey = (__this->fields).MGLLAKLAAOO.fields.currentCryptoKey;
      local_58[0].hiddenValue = (__this->fields).MGLLAKLAAOO.fields.hiddenValue;
      goto LAB_0313f904;
    }
  }
  else {
    CJNHFNHJHPE = 0.0;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_58,CJNHFNHJHPE,
             (MethodInfo *)0x0);
LAB_0313f904:
  (__this->fields).JNFNFEJAGGN.fields.fakeValueActive = SUB41(local_58[0]._16_4_,0);
  (__this->fields).JNFNFEJAGGN.fields.inited = SUB41(local_58[0]._16_4_,1);
  *(short *)&(__this->fields).JNFNFEJAGGN.fields.field_0x12 = SUB42(local_58[0]._16_4_,2);
  (__this->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)SUB84(local_58[0]._8_8_,0);
  (__this->fields).JNFNFEJAGGN.fields.fakeValue = SUB84(local_58[0]._8_8_,4);
  (__this->fields).JNFNFEJAGGN.fields.currentCryptoKey = (int32_t)local_58[0]._0_8_;
  (__this->fields).JNFNFEJAGGN.fields.hiddenValue = SUB84(local_58[0]._0_8_,4);
  return;
}

