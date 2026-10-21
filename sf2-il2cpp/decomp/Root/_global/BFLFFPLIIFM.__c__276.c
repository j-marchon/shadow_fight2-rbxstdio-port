// TypeDefIndex 276
// Namespace: 
// [Serializable]
// private sealed class BFLFFPLIIFM.<>c
// Fields:
//   public static readonly BFLFFPLIIFM.<>c <>9; // 0x0

// ===== internal BFLFFPLIIFM ICLFIHGKJJH()  [RVA 0x3233180]
// BFLFFPLIIFM.<>c$$ICLFIHGKJJH @ RVA 0x3233180

BFLFFPLIIFM_o * BFLFFPLIIFM_<>c__ICLFIHGKJJH(BFLFFPLIIFM___c_o *__this,MethodInfo *method)

{
  BFLFFPLIIFM_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ff3 & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    DAT_04566ff3 = 1;
    method = extraout_x1;
  }
  __this_00 = (BFLFFPLIIFM_o *)thunk_FUN_01bda818(BFLFFPLIIFM_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// ===== public void .ctor()  [RVA 0x32331D4]
// BFLFFPLIIFM.<>c$$.ctor @ RVA 0x32331D4

void BFLFFPLIIFM_<>c___ctor(BFLFFPLIIFM___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x32331DC]
// BFLFFPLIIFM.<>c$$.cctor @ RVA 0x32331DC

void BFLFFPLIIFM_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566ff4 & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_<>c_TypeInfo);
    DAT_04566ff4 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(BFLFFPLIIFM_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  BFLFFPLIIFM_<>c_TypeInfo->static_fields->__9 = (BFLFFPLIIFM___c_o *)__this;
  thunk_FUN_01c20e04(BFLFFPLIIFM_<>c_TypeInfo->static_fields,__this);
  return;
}

