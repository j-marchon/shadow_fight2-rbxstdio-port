// TypeDefIndex 1040
// Namespace: 
// [Serializable]
// private sealed class BECIPDJBAOG.<>c
// Fields:
//   public static readonly BECIPDJBAOG.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x30D27D0]
// BECIPDJBAOG.<>c$$.ctor @ RVA 0x30D27D0

void BECIPDJBAOG_<>c___ctor(BECIPDJBAOG___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x30D27D8]
// BECIPDJBAOG.<>c$$.cctor @ RVA 0x30D27D8

void BECIPDJBAOG_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566318 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_<>c_TypeInfo);
    DAT_04566318 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(BECIPDJBAOG_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  BECIPDJBAOG_<>c_TypeInfo->static_fields->__9 = (BECIPDJBAOG___c_o *)__this;
  thunk_FUN_01c20e04(BECIPDJBAOG_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal BECIPDJBAOG LDPDOLPCIGF()  [RVA 0x30D2840]
// BECIPDJBAOG.<>c$$LDPDOLPCIGF @ RVA 0x30D2840

BECIPDJBAOG_o * BECIPDJBAOG_<>c__LDPDOLPCIGF(BECIPDJBAOG___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04566319 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566319 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo,method);
  BECIPDJBAOG___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}

