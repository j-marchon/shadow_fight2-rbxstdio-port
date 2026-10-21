// TypeDefIndex 1009
// Namespace: 
// public class IntervalAttack.NHJGACDEAGK
// Fields:
//   public bool FPMLNJLCOGA; // 0x10
//   public bool ENADIBNCOMI; // 0x11
//   public ObscuredFloat JHLJELAKADM; // 0x14
//   public ObscuredFloat HKPPIFKAFMP; // 0x28

// ===== public void .ctor(float DCGPDDJFMKE = 1, float KIOEADKABMP = 1, bool PKLNNEABOEM = False, bool KEJGEOEBENH = False)  [RVA 0x30C43F8]
// IntervalAttack.NHJGACDEAGK$$.ctor @ RVA 0x30C43F8

void IntervalAttack_NHJGACDEAGK___ctor
               (IntervalAttack_NHJGACDEAGK_o *__this,float DCGPDDJFMKE,float KIOEADKABMP,
               bool PKLNNEABOEM,bool KEJGEOEBENH,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_88;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).FPMLNJLCOGA = PKLNNEABOEM;
  (__this->fields).ENADIBNCOMI = KEJGEOEBENH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,DCGPDDJFMKE,
             (MethodInfo *)0x0);
  local_50.fakeValueActive = local_70.fakeValueActive;
  local_50.inited = local_70.inited;
  local_50._18_2_ = local_70._18_2_;
  local_50.hiddenValueOldByte4.fields = local_70.hiddenValueOldByte4.fields;
  local_50.fakeValue = local_70.fakeValue;
  local_50.currentCryptoKey = local_70.currentCryptoKey;
  local_50.hiddenValue = local_70.hiddenValue;
  (__this->fields).JHLJELAKADM.fields.fakeValueActive = local_70.fakeValueActive;
  (__this->fields).JHLJELAKADM.fields.inited = local_70.inited;
  *(undefined2 *)&(__this->fields).JHLJELAKADM.fields.field_0x12 = local_70._18_2_;
  (__this->fields).JHLJELAKADM.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_70.hiddenValueOldByte4.fields;
  (__this->fields).JHLJELAKADM.fields.fakeValue = local_70.fakeValue;
  (__this->fields).JHLJELAKADM.fields.currentCryptoKey = local_70.currentCryptoKey;
  (__this->fields).JHLJELAKADM.fields.hiddenValue = local_70.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_88,KIOEADKABMP,
             (MethodInfo *)0x0);
  (__this->fields).HKPPIFKAFMP.fields.fakeValueActive = local_88.fakeValueActive;
  (__this->fields).HKPPIFKAFMP.fields.inited = local_88.inited;
  *(undefined2 *)&(__this->fields).HKPPIFKAFMP.fields.field_0x12 = local_88._18_2_;
  (__this->fields).HKPPIFKAFMP.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_88.hiddenValueOldByte4.fields;
  (__this->fields).HKPPIFKAFMP.fields.fakeValue = local_88.fakeValue;
  (__this->fields).HKPPIFKAFMP.fields.currentCryptoKey = local_88.currentCryptoKey;
  (__this->fields).HKPPIFKAFMP.fields.hiddenValue = local_88.hiddenValue;
  return;
}


// ===== public void DPPIEAMHDCI()  [RVA 0x30C2640]
// IntervalAttack.NHJGACDEAGK$$DPPIEAMHDCI @ RVA 0x30C2640

void IntervalAttack_NHJGACDEAGK__DPPIEAMHDCI(IntervalAttack_NHJGACDEAGK_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_98 [2];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
                    /* try { // try from 031c2658 to 032c267f has its CatchHandler @ 031c2870 */
  if (((__this->fields).FPMLNJLCOGA != false) && ((__this->fields).ENADIBNCOMI != false)) {
    local_40.fakeValueActive = (__this->fields).JHLJELAKADM.fields.fakeValueActive;
    local_40.inited = (__this->fields).JHLJELAKADM.fields.inited;
    local_40._18_2_ = *(undefined2 *)&(__this->fields).JHLJELAKADM.fields.field_0x12;
    local_40.hiddenValueOldByte4.fields =
         (__this->fields).JHLJELAKADM.fields.hiddenValueOldByte4.fields;
    local_40.fakeValue = (__this->fields).JHLJELAKADM.fields.fakeValue;
    local_40.currentCryptoKey = (__this->fields).JHLJELAKADM.fields.currentCryptoKey;
    local_40.hiddenValue = (__this->fields).JHLJELAKADM.fields.hiddenValue;
    fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                       (MethodInfo *)0x0);
    local_60.hiddenValueOldByte4.fields =
         (__this->fields).HKPPIFKAFMP.fields.hiddenValueOldByte4.fields;
    local_60.fakeValue = (__this->fields).HKPPIFKAFMP.fields.fakeValue;
    local_60.currentCryptoKey = (__this->fields).HKPPIFKAFMP.fields.currentCryptoKey;
    local_60.hiddenValue = (__this->fields).HKPPIFKAFMP.fields.hiddenValue;
    local_60.fakeValueActive = (__this->fields).HKPPIFKAFMP.fields.fakeValueActive;
    local_60.inited = (__this->fields).HKPPIFKAFMP.fields.inited;
    local_60._18_2_ = *(undefined2 *)&(__this->fields).HKPPIFKAFMP.fields.field_0x12;
    fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                       (MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_98,fVar1 * fVar2,
               (MethodInfo *)0x0);
                    /* try { // try from 031c26b4 to 032c26df has its CatchHandler @ 031c286c */
    (__this->fields).JHLJELAKADM.fields.fakeValueActive = local_98[0].fakeValueActive;
    (__this->fields).JHLJELAKADM.fields.inited = local_98[0].inited;
    *(undefined2 *)&(__this->fields).JHLJELAKADM.fields.field_0x12 = local_98[0]._18_2_;
    (__this->fields).JHLJELAKADM.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_98[0].hiddenValueOldByte4.fields;
    (__this->fields).JHLJELAKADM.fields.fakeValue = local_98[0].fakeValue;
    (__this->fields).JHLJELAKADM.fields.currentCryptoKey = local_98[0].currentCryptoKey;
    (__this->fields).JHLJELAKADM.fields.hiddenValue = local_98[0].hiddenValue;
  }
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x30C48CC]
// IntervalAttack.NHJGACDEAGK$$RandomizeObscuredVars @ RVA 0x30C48CC

void IntervalAttack_NHJGACDEAGK__RandomizeObscuredVars
               (IntervalAttack_NHJGACDEAGK_o *__this,MethodInfo *method)

{
                    /* try { // try from 031c48dc to 032c48e7 has its CatchHandler @ 031c4988 */
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).JHLJELAKADM,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).HKPPIFKAFMP,(MethodInfo *)0x0);
  return;
}

