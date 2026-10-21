// TypeDefIndex 2491
// Namespace: 
// [Serializable]
// private sealed class ENFPENIMCIK.<>c
// Fields:
//   public static readonly ENFPENIMCIK.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x3378F14]
// ENFPENIMCIK.<>c$$.ctor @ RVA 0x3378F14

void ENFPENIMCIK_<>c___ctor(ENFPENIMCIK___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal ENFPENIMCIK AFJKCJDOFEL()  [RVA 0x3378F1C]
// ENFPENIMCIK.<>c$$AFJKCJDOFEL @ RVA 0x3378F1C

ENFPENIMCIK_o * ENFPENIMCIK_<>c__AFJKCJDOFEL(ENFPENIMCIK___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04567b63 & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    DAT_04567b63 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(ENFPENIMCIK_TypeInfo,method);
  ENFPENIMCIK___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== private static void .cctor()  [RVA 0x3378F6C]
// ENFPENIMCIK.<>c$$.cctor @ RVA 0x3378F6C

void ENFPENIMCIK_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567b64 & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_<>c_TypeInfo);
    DAT_04567b64 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(ENFPENIMCIK_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  ENFPENIMCIK_<>c_TypeInfo->static_fields->__9 = (ENFPENIMCIK___c_o *)__this;
  thunk_FUN_01c20e04(ENFPENIMCIK_<>c_TypeInfo->static_fields,__this);
  return;
}

