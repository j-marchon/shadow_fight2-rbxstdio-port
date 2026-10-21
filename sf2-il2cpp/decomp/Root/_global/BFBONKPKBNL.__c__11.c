// TypeDefIndex 11
// Namespace: 
// [Serializable]
// private sealed class BFBONKPKBNL.<>c
// Fields:
//   public static readonly BFBONKPKBNL.<>c <>9; // 0x0
//   public static Action<BNKBGIIJNLF> <>9__15_0; // 0x8

// ===== internal void KMDNBGPHGGB(BNKBGIIJNLF x)  [RVA 0x2FF1018]
// BFBONKPKBNL.<>c$$KMDNBGPHGGB @ RVA 0x2FF1018

void BFBONKPKBNL_<>c__KMDNBGPHGGB(BFBONKPKBNL___c_o *__this,BNKBGIIJNLF_o *x,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (x != (BNKBGIIJNLF_o *)0x0) {
    uStack_18._0_4_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValue;
    uStack_18._4_1_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValueActive;
    uStack_18._5_1_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.inited;
    uStack_18._6_2_ = *(undefined2 *)&(x->fields)._PKGCKALOMOF_k__BackingField.fields.field_0xe;
    local_20._0_4_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.currentCryptoKey;
    local_20._4_4_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.hiddenValue;
    __this_00.fields.fakeValue = 0;
    __this_00.fields.fakeValueActive = false;
    __this_00.fields.inited = false;
    __this_00.fields._14_2_ = 0;
    __this_00.fields._0_8_ = &local_20;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,method);
                    /* try { // try from 030f1038 to 031f1067 has its CatchHandler @ 030f11a8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x2FF1048]
// BFBONKPKBNL.<>c$$.cctor @ RVA 0x2FF1048

void BFBONKPKBNL_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04565a69 & 1) == 0) {
    FUN_01bab630(&BFBONKPKBNL_<>c_TypeInfo);
    DAT_04565a69 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(BFBONKPKBNL_<>c_TypeInfo);
                    /* try { // try from 030f1088 to 031f108b has its CatchHandler @ 030f11a4 */
  System_Object___ctor(__this,(MethodInfo *)0x0);
                    /* try { // try from 030f108c to 031f108f has its CatchHandler @ 030f11a0 */
                    /* try { // try from 030f1090 to 031f1093 has its CatchHandler @ 030f119c */
                    /* try { // try from 030f1094 to 031f11bf has its CatchHandler @ 030f0e34 */
  BFBONKPKBNL_<>c_TypeInfo->static_fields->__9 = (BFBONKPKBNL___c_o *)__this;
  thunk_FUN_01c20e04(BFBONKPKBNL_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x2FF10B0]
// BFBONKPKBNL.<>c$$.ctor @ RVA 0x2FF10B0

void BFBONKPKBNL_<>c___ctor(BFBONKPKBNL___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

