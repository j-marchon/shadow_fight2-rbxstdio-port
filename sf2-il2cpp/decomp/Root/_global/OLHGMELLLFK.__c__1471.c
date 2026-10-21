// TypeDefIndex 1471
// Namespace: 
// [Serializable]
// private sealed class OLHGMELLLFK.<>c
// Fields:
//   public static readonly OLHGMELLLFK.<>c <>9; // 0x0

// ===== private static void .cctor()  [RVA 0x31952EC]
// OLHGMELLLFK.<>c$$.cctor @ RVA 0x31952EC

void OLHGMELLLFK_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566a66 & 1) == 0) {
    FUN_01bab630(&OLHGMELLLFK_<>c_TypeInfo);
    DAT_04566a66 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(OLHGMELLLFK_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  OLHGMELLLFK_<>c_TypeInfo->static_fields->__9 = (OLHGMELLLFK___c_o *)__this;
  thunk_FUN_01c20e04(OLHGMELLLFK_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x3195354]
// OLHGMELLLFK.<>c$$.ctor @ RVA 0x3195354

void OLHGMELLLFK_<>c___ctor(OLHGMELLLFK___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal OLHGMELLLFK ICLFIHGKJJH()  [RVA 0x319535C]
// OLHGMELLLFK.<>c$$ICLFIHGKJJH @ RVA 0x319535C

OLHGMELLLFK_o * OLHGMELLLFK_<>c__ICLFIHGKJJH(OLHGMELLLFK___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04566a67 & 1) == 0) {
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    DAT_04566a67 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(OLHGMELLLFK_TypeInfo,method);
  OLHGMELLLFK___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}

