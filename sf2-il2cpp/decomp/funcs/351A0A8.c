// FKGKLILLOBG$$.ctor @ RVA 0x351A0A8

void FKGKLILLOBG___ctor(FKGKLILLOBG_o *__this,System_String_o *DCEMFAOHAFH,float DOOMMHEDCDN,
                       MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  bool bVar3;
  System_String_o *ODAMFBHJKIH;
  FKGKLILLOBG_Fields *pFVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  float local_24;
  
  if ((DAT_0456896f & 1) == 0) {
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_0456896f = 1;
  }
  local_24 = 0.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pFVar4 = &__this->fields;
  pFVar4->LKDFNDOEIDD = DCEMFAOHAFH;
  thunk_FUN_01c20e04(pFVar4,DCEMFAOHAFH);
  bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(DCEMFAOHAFH,(MethodInfo *)0x0);
  bVar3 = false;
  if (!bVar2) {
    bVar3 = PCOEHCPGBBG__BCBEBNDAEMK(DCEMFAOHAFH,(MethodInfo *)0x0);
    bVar3 = !bVar3;
  }
  (__this->fields).KDMIGIGGEON = bVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,DOOMMHEDCDN,
             (MethodInfo *)0x0);
  local_50.fakeValueActive = local_68.fakeValueActive;
  local_50.inited = local_68.inited;
  local_50._18_2_ = local_68._18_2_;
  local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
  local_50.fakeValue = local_68.fakeValue;
  local_50.currentCryptoKey = local_68.currentCryptoKey;
  local_50.hiddenValue = local_68.hiddenValue;
  bVar1 = (__this->fields).KDMIGIGGEON;
                    /* try { // try from 0361a158 to 0371a17f has its CatchHandler @ 0361a33c */
  (__this->fields).PCNEDMAJMOJ.fields.fakeValueActive = local_68.fakeValueActive;
  (__this->fields).PCNEDMAJMOJ.fields.inited = local_68.inited;
  *(undefined2 *)&(__this->fields).PCNEDMAJMOJ.fields.field_0x12 = local_68._18_2_;
  (__this->fields).PCNEDMAJMOJ.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
  (__this->fields).PCNEDMAJMOJ.fields.fakeValue = local_68.fakeValue;
  (__this->fields).PCNEDMAJMOJ.fields.currentCryptoKey = local_68.currentCryptoKey;
  (__this->fields).PCNEDMAJMOJ.fields.hiddenValue = local_68.hiddenValue;
  if ((bVar1 == false) && (bVar3 = PCOEHCPGBBG__EDHHJAMCOJH(DCEMFAOHAFH,(MethodInfo *)0x0), !bVar3))
  {
    ODAMFBHJKIH = pFVar4->LKDFNDOEIDD;
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNPPAHHCBOM__MEEKIFOGCCL(ODAMFBHJKIH,&local_24,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,local_24,
               (MethodInfo *)0x0);
                    /* try { // try from 0361a1b4 to 0371a1df has its CatchHandler @ 0361a338 */
    (__this->fields).PCNEDMAJMOJ.fields.fakeValueActive = local_68.fakeValueActive;
    (__this->fields).PCNEDMAJMOJ.fields.inited = local_68.inited;
    *(undefined2 *)&(__this->fields).PCNEDMAJMOJ.fields.field_0x12 = local_68._18_2_;
    (__this->fields).PCNEDMAJMOJ.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
    (__this->fields).PCNEDMAJMOJ.fields.fakeValue = local_68.fakeValue;
    (__this->fields).PCNEDMAJMOJ.fields.currentCryptoKey = local_68.currentCryptoKey;
    (__this->fields).PCNEDMAJMOJ.fields.hiddenValue = local_68.hiddenValue;
  }
  return;
}

