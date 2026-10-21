// TypeDefIndex 3113
// Namespace: 
// [Serializable]
// private sealed class KCPFIELGGLA.<>c
// Fields:
//   public static readonly KCPFIELGGLA.<>c <>9; // 0x0

// ===== private static void .cctor()  [RVA 0x34CD6FC]
// KCPFIELGGLA.<>c$$.cctor @ RVA 0x34CD6FC

void KCPFIELGGLA_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_0456868f & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_<>c_TypeInfo);
    DAT_0456868f = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(KCPFIELGGLA_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  KCPFIELGGLA_<>c_TypeInfo->static_fields->__9 = (KCPFIELGGLA___c_o *)__this;
  thunk_FUN_01c20e04(KCPFIELGGLA_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x34CD764]
// KCPFIELGGLA.<>c$$.ctor @ RVA 0x34CD764

void KCPFIELGGLA_<>c___ctor(KCPFIELGGLA___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal KCPFIELGGLA ICLFIHGKJJH()  [RVA 0x34CD76C]
// KCPFIELGGLA.<>c$$ICLFIHGKJJH @ RVA 0x34CD76C

KCPFIELGGLA_o * KCPFIELGGLA_<>c__ICLFIHGKJJH(KCPFIELGGLA___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04568690 & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    DAT_04568690 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(KCPFIELGGLA_TypeInfo,method);
  KCPFIELGGLA___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}

