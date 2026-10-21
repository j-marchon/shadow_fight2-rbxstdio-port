// Original name: Nekki.SF2.Core.Fights.Model.Animation.MovesPoint.ShiftValue  (obfuscated FKGKLILLOBG)
// TypeDefIndex 3272
// Namespace: 
// public class ShiftValue
// Fields:
//   private readonly string LKDFNDOEIDD; // 0x10
//   private readonly bool KDMIGIGGEON; // 0x18
//   private readonly ObscuredFloat PCNEDMAJMOJ; // 0x1C

// ===== private float PPOKEOHAHFG(bool FOFCAILEKJD)  [RVA 0x3519EE0]
// ShiftValue$$PPOKEOHAHFG @ RVA 0x3519EE0

float ShiftValue__PPOKEOHAHFG(ShiftValue_o *__this,bool FOFCAILEKJD,MethodInfo *method)

{
  BMMAPANJCEC_o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields *CJNHFNHJHPE;
  Fight_o *pFVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  CJNHFNHJHPE = &local_70;
  if ((DAT_0456896d & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_0456896d = 1;
  }
  if ((__this->fields).KDMIGIGGEON == false) {
    local_70.fakeValueActive = (__this->fields).PCNEDMAJMOJ.fields.fakeValueActive;
    local_70.inited = (__this->fields).PCNEDMAJMOJ.fields.inited;
    local_70._18_2_ = *(undefined2 *)&(__this->fields).PCNEDMAJMOJ.fields.field_0x12;
    local_70.hiddenValueOldByte4.fields =
         (__this->fields).PCNEDMAJMOJ.fields.hiddenValueOldByte4.fields;
    local_70.fakeValue = (__this->fields).PCNEDMAJMOJ.fields.fakeValue;
    local_70.currentCryptoKey = (__this->fields).PCNEDMAJMOJ.fields.currentCryptoKey;
    local_70.hiddenValue = (__this->fields).PCNEDMAJMOJ.fields.hiddenValue;
  }
  else {
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
    if (pFVar1 != (Fight_o *)0x0) {
      __this_00 = (pFVar1->fields).HBMCNPFFCHJ;
      if (__this_00 != (BMMAPANJCEC_o *)0x0) {
        fVar2 = BMMAPANJCEC__KNMENIBLFGF
                          (__this_00,FOFCAILEKJD,(__this->fields).LKDFNDOEIDD,(MethodInfo *)0x0);
        return fVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03619fb8 to 0371a157 has its CatchHandler @ 03619fb8
                       catch() { ... } // from try @ 03619fb8 with catch @ 03619fb8
                       catch() { ... } // from try @ 0361a27c with catch @ 03619fb8
                       catch() { ... } // from try @ 0361a314 with catch @ 03619fb8
                       catch() { ... } // from try @ 0361a31c with catch @ 03619fb8
                       catch() { ... } // from try @ 0361a3d0 with catch @ 03619fb8 */
    local_50.fakeValueActive = (__this->fields).PCNEDMAJMOJ.fields.fakeValueActive;
    local_50.inited = (__this->fields).PCNEDMAJMOJ.fields.inited;
    local_50._18_2_ = *(undefined2 *)&(__this->fields).PCNEDMAJMOJ.fields.field_0x12;
    local_50.hiddenValueOldByte4.fields =
         (__this->fields).PCNEDMAJMOJ.fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (__this->fields).PCNEDMAJMOJ.fields.fakeValue;
    local_50.currentCryptoKey = (__this->fields).PCNEDMAJMOJ.fields.currentCryptoKey;
    local_50.hiddenValue = (__this->fields).PCNEDMAJMOJ.fields.hiddenValue;
    CJNHFNHJHPE = &local_50;
  }
  fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)CJNHFNHJHPE,
                     (MethodInfo *)0x0);
  return fVar2;
}


// ===== public float PPOKEOHAHFG(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3519FEC]
// ShiftValue$$PPOKEOHAHFG @ RVA 0x3519FEC

float ShiftValue__PPOKEOHAHFG(ShiftValue_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  float fVar1;
  
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    fVar1 = ShiftValue__PPOKEOHAHFG(__this,(AHEFOIOKDOK->fields).HJPOJOPKEKI,method);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(float CJNHFNHJHPE)  [RVA 0x351A004]
// ShiftValue$$.ctor @ RVA 0x351A004

void ShiftValue___ctor(ShiftValue_o *__this,float CJNHFNHJHPE,MethodInfo *method)

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


// ===== public void .ctor(string DCEMFAOHAFH, float DOOMMHEDCDN = 0)  [RVA 0x351A0A8]
// ShiftValue$$.ctor @ RVA 0x351A0A8

void ShiftValue___ctor(ShiftValue_o *__this,System_String_o *DCEMFAOHAFH,float DOOMMHEDCDN,
                       MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  bool bVar3;
  System_String_o *ODAMFBHJKIH;
  ShiftValue_Fields *pFVar4;
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


// ===== public float PPOKEOHAHFG(ModelObject BCKBBGCOMJD)  [RVA 0x351A1E0]
// ShiftValue$$PPOKEOHAHFG @ RVA 0x351A1E0

float ShiftValue__PPOKEOHAHFG(ShiftValue_o *__this,ModelObject_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool FOFCAILEKJD;
  Model_o *__this_00;
  float fVar1;
  
  if ((BCKBBGCOMJD != (ModelObject_o *)0x0) &&
     (__this_00 = (BCKBBGCOMJD->fields).KOHECBJAFKG, __this_00 != (Model_o *)0x0)) {
    FOFCAILEKJD = Model__HODPOCMNNIN(__this_00,(MethodInfo *)0x0);
    fVar1 = ShiftValue__PPOKEOHAHFG(__this,FOFCAILEKJD,method);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GPJJDLBJOAL()  [RVA 0x351A210]
// ShiftValue$$GPJJDLBJOAL @ RVA 0x351A210

void ShiftValue__GPJJDLBJOAL(ShiftValue_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
                    /* try { // try from 0361a210 to 0371a21b has its CatchHandler @ 0361a32c */
  local_30.fakeValueActive = (__this->fields).PCNEDMAJMOJ.fields.fakeValueActive;
  local_30.inited = (__this->fields).PCNEDMAJMOJ.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields).PCNEDMAJMOJ.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields).PCNEDMAJMOJ.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields).PCNEDMAJMOJ.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields).PCNEDMAJMOJ.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields).PCNEDMAJMOJ.fields.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,(MethodInfo *)0x0);
  return;
}

