// TypeDefIndex 872
// Namespace: 
// [Serializable]
// private sealed class KKGHPKOFEHM.<>c
// Fields:
//   public static readonly KKGHPKOFEHM.<>c <>9; // 0x0

// ===== internal KKGHPKOFEHM AFJKCJDOFEL()  [RVA 0x308DC98]
// KKGHPKOFEHM.<>c$$AFJKCJDOFEL @ RVA 0x308DC98

KKGHPKOFEHM_o * KKGHPKOFEHM_<>c__AFJKCJDOFEL(KKGHPKOFEHM___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04566077 & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    DAT_04566077 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(KKGHPKOFEHM_TypeInfo,method);
  KKGHPKOFEHM___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== private static void .cctor()  [RVA 0x308DCE8]
// KKGHPKOFEHM.<>c$$.cctor @ RVA 0x308DCE8

void KKGHPKOFEHM_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566078 & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_<>c_TypeInfo);
    DAT_04566078 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(KKGHPKOFEHM_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  KKGHPKOFEHM_<>c_TypeInfo->static_fields->__9 = (KKGHPKOFEHM___c_o *)__this;
  thunk_FUN_01c20e04(KKGHPKOFEHM_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x308DD50]
// KKGHPKOFEHM.<>c$$.ctor @ RVA 0x308DD50

void KKGHPKOFEHM_<>c___ctor(KKGHPKOFEHM___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

