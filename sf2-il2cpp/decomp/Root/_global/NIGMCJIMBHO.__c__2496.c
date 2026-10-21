// TypeDefIndex 2496
// Namespace: 
// [Serializable]
// private sealed class NIGMCJIMBHO.<>c
// Fields:
//   public static readonly NIGMCJIMBHO.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x337B328]
// NIGMCJIMBHO.<>c$$.ctor @ RVA 0x337B328

void NIGMCJIMBHO_<>c___ctor(NIGMCJIMBHO___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal NIGMCJIMBHO ICLFIHGKJJH()  [RVA 0x337B330]
// NIGMCJIMBHO.<>c$$ICLFIHGKJJH @ RVA 0x337B330

NIGMCJIMBHO_o * NIGMCJIMBHO_<>c__ICLFIHGKJJH(NIGMCJIMBHO___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
                    /* try { // try from 0347b348 to 0357b34f has its CatchHandler @ 0347b74c */
  if ((DAT_04567b8b & 1) == 0) {
                    /* try { // try from 0347b354 to 0357b35b has its CatchHandler @ 0347b750 */
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    DAT_04567b8b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0347b364 to 0357b373 has its CatchHandler @ 0347b75c */
  auVar1 = thunk_FUN_01bda818(NIGMCJIMBHO_TypeInfo,method);
  NIGMCJIMBHO___ctor(auVar1._0_8_,auVar1._8_8_);
                    /* try { // try from 0347b378 to 0357b397 has its CatchHandler @ 0347b70c */
  return auVar1._0_8_;
}


// ===== private static void .cctor()  [RVA 0x337B380]
// NIGMCJIMBHO.<>c$$.cctor @ RVA 0x337B380

void NIGMCJIMBHO_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567b8c & 1) == 0) {
    FUN_01bab630(&NIGMCJIMBHO_<>c_TypeInfo);
    DAT_04567b8c = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NIGMCJIMBHO_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  NIGMCJIMBHO_<>c_TypeInfo->static_fields->__9 = (NIGMCJIMBHO___c_o *)__this;
                    /* try { // try from 0347b3e0 to 0357b403 has its CatchHandler @ 0347b704 */
  thunk_FUN_01c20e04(NIGMCJIMBHO_<>c_TypeInfo->static_fields,__this);
  return;
}

