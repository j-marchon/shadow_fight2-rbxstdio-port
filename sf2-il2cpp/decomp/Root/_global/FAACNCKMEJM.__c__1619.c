// TypeDefIndex 1619
// Namespace: 
// [Serializable]
// private sealed class FAACNCKMEJM.<>c
// Fields:
//   public static readonly FAACNCKMEJM.<>c <>9; // 0x0

// ===== internal FAACNCKMEJM AFJKCJDOFEL()  [RVA 0x31BC58C]
// FAACNCKMEJM.<>c$$AFJKCJDOFEL @ RVA 0x31BC58C

FAACNCKMEJM_o * FAACNCKMEJM_<>c__AFJKCJDOFEL(FAACNCKMEJM___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04566bf1 & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    DAT_04566bf1 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(FAACNCKMEJM_TypeInfo,method);
  FAACNCKMEJM___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== private static void .cctor()  [RVA 0x31BC5DC]
// FAACNCKMEJM.<>c$$.cctor @ RVA 0x31BC5DC

void FAACNCKMEJM_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566bf2 & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_<>c_TypeInfo);
    DAT_04566bf2 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(FAACNCKMEJM_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  FAACNCKMEJM_<>c_TypeInfo->static_fields->__9 = (FAACNCKMEJM___c_o *)__this;
  thunk_FUN_01c20e04(FAACNCKMEJM_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x31BC644]
// FAACNCKMEJM.<>c$$.ctor @ RVA 0x31BC644

void FAACNCKMEJM_<>c___ctor(FAACNCKMEJM___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

