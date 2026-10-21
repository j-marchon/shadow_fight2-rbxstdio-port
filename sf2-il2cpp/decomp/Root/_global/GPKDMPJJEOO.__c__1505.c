// TypeDefIndex 1505
// Namespace: 
// [Serializable]
// private sealed class GPKDMPJJEOO.<>c
// Fields:
//   public static readonly GPKDMPJJEOO.<>c <>9; // 0x0

// ===== private static void .cctor()  [RVA 0x319E1DC]
// GPKDMPJJEOO.<>c$$.cctor @ RVA 0x319E1DC

void GPKDMPJJEOO_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566ac6 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_<>c_TypeInfo);
    DAT_04566ac6 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(GPKDMPJJEOO_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  GPKDMPJJEOO_<>c_TypeInfo->static_fields->__9 = (GPKDMPJJEOO___c_o *)__this;
  thunk_FUN_01c20e04(GPKDMPJJEOO_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x319E244]
// GPKDMPJJEOO.<>c$$.ctor @ RVA 0x319E244

void GPKDMPJJEOO_<>c___ctor(GPKDMPJJEOO___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal GPKDMPJJEOO AFJKCJDOFEL()  [RVA 0x319E24C]
// GPKDMPJJEOO.<>c$$AFJKCJDOFEL @ RVA 0x319E24C

GPKDMPJJEOO_o * GPKDMPJJEOO_<>c__AFJKCJDOFEL(GPKDMPJJEOO___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04566ac7 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    DAT_04566ac7 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(GPKDMPJJEOO_TypeInfo,method);
  GPKDMPJJEOO___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}

