// TypeDefIndex 238
// Namespace: 
// [Serializable]
// private sealed class GLPEFEEGCPM.<>c
// Fields:
//   public static readonly GLPEFEEGCPM.<>c <>9; // 0x0

// ===== internal GLPEFEEGCPM KBFHKMJCKCO()  [RVA 0x32254A8]
// GLPEFEEGCPM.<>c$$KBFHKMJCKCO @ RVA 0x32254A8

GLPEFEEGCPM_o * GLPEFEEGCPM_<>c__KBFHKMJCKCO(GLPEFEEGCPM___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04566f76 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_04566f76 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo,method);
  GLPEFEEGCPM___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== private static void .cctor()  [RVA 0x32254F8]
// GLPEFEEGCPM.<>c$$.cctor @ RVA 0x32254F8

void GLPEFEEGCPM_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566f77 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_<>c_TypeInfo);
    DAT_04566f77 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(GLPEFEEGCPM_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  GLPEFEEGCPM_<>c_TypeInfo->static_fields->__9 = (GLPEFEEGCPM___c_o *)__this;
  thunk_FUN_01c20e04(GLPEFEEGCPM_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x3225560]
// GLPEFEEGCPM.<>c$$.ctor @ RVA 0x3225560

void GLPEFEEGCPM_<>c___ctor(GLPEFEEGCPM___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

