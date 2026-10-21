// TypeDefIndex 2032
// Namespace: 
// [Serializable]
// private sealed class NLFLMJPNOLF.<>c
// Fields:
//   public static readonly NLFLMJPNOLF.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x32A7F94]
// NLFLMJPNOLF.<>c$$.ctor @ RVA 0x32A7F94

void NLFLMJPNOLF_<>c___ctor(NLFLMJPNOLF___c_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033a7e48 with catch @ 033a7f94 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x32A7F9C]
// NLFLMJPNOLF.<>c$$.cctor @ RVA 0x32A7F9C

void NLFLMJPNOLF_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
                    /* try { // try from 033a7fb0 to 034a7feb has its CatchHandler @ 033a8148 */
  if ((DAT_04567410 & 1) == 0) {
    FUN_01bab630(&NLFLMJPNOLF_<>c_TypeInfo);
    DAT_04567410 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NLFLMJPNOLF_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  NLFLMJPNOLF_<>c_TypeInfo->static_fields->__9 = (NLFLMJPNOLF___c_o *)__this;
                    /* try { // try from 033a7ff8 to 034a7ffb has its CatchHandler @ 033a813c */
  thunk_FUN_01c20e04(NLFLMJPNOLF_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal NLFLMJPNOLF LNJPIHAONCC()  [RVA 0x32A8004]
// NLFLMJPNOLF.<>c$$LNJPIHAONCC @ RVA 0x32A8004

NLFLMJPNOLF_o * NLFLMJPNOLF_<>c__LNJPIHAONCC(NLFLMJPNOLF___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
                    /* try { // try from 033a8018 to 034a8043 has its CatchHandler @ 033a8138 */
  if ((DAT_04567411 & 1) == 0) {
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
    DAT_04567411 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(NLFLMJPNOLF_TypeInfo,method);
  NLFLMJPNOLF___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}

