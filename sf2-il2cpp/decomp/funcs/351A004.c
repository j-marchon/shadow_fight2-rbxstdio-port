// FKGKLILLOBG$$.ctor @ RVA 0x351A004

void FKGKLILLOBG___ctor(FKGKLILLOBG_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68 [2];
  
  if ((DAT_0456896e & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_0456896e = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).LKDFNDOEIDD = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(&__this->fields);
  (__this->fields).KDMIGIGGEON = false;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_68,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  (__this->fields).PCNEDMAJMOJ.fields.fakeValueActive = local_68[0].fakeValueActive;
  (__this->fields).PCNEDMAJMOJ.fields.inited = local_68[0].inited;
  *(undefined2 *)&(__this->fields).PCNEDMAJMOJ.fields.field_0x12 = local_68[0]._18_2_;
  (__this->fields).PCNEDMAJMOJ.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68[0].hiddenValueOldByte4.fields;
  (__this->fields).PCNEDMAJMOJ.fields.fakeValue = local_68[0].fakeValue;
  (__this->fields).PCNEDMAJMOJ.fields.currentCryptoKey = local_68[0].currentCryptoKey;
  (__this->fields).PCNEDMAJMOJ.fields.hiddenValue = local_68[0].hiddenValue;
  return;
}

