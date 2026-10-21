// TypeDefIndex 1132
// Namespace: 
// [Serializable]
// private sealed class IBMLPPNMDCI.<>c
// Fields:
//   public static readonly IBMLPPNMDCI.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x30F657C]
// IBMLPPNMDCI.<>c$$.ctor @ RVA 0x30F657C

void IBMLPPNMDCI_<>c___ctor(IBMLPPNMDCI___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal IBMLPPNMDCI ICLFIHGKJJH()  [RVA 0x30F6584]
// IBMLPPNMDCI.<>c$$ICLFIHGKJJH @ RVA 0x30F6584

IBMLPPNMDCI_o * IBMLPPNMDCI_<>c__ICLFIHGKJJH(IBMLPPNMDCI___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_0456645f & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    DAT_0456645f = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo,method);
  IBMLPPNMDCI___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== private static void .cctor()  [RVA 0x30F65D4]
// IBMLPPNMDCI.<>c$$.cctor @ RVA 0x30F65D4

void IBMLPPNMDCI_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566460 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_<>c_TypeInfo);
    DAT_04566460 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(IBMLPPNMDCI_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  IBMLPPNMDCI_<>c_TypeInfo->static_fields->__9 = (IBMLPPNMDCI___c_o *)__this;
  thunk_FUN_01c20e04(IBMLPPNMDCI_<>c_TypeInfo->static_fields,__this);
  return;
}

