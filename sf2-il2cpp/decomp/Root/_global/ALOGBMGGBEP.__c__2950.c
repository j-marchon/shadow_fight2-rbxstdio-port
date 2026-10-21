// TypeDefIndex 2950
// Namespace: 
// [Serializable]
// private sealed class ALOGBMGGBEP.<>c
// Fields:
//   public static readonly ALOGBMGGBEP.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x3492B70]
// ALOGBMGGBEP.<>c$$.ctor @ RVA 0x3492B70

void ALOGBMGGBEP_<>c___ctor(ALOGBMGGBEP___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x3492B78]
// ALOGBMGGBEP.<>c$$.cctor @ RVA 0x3492B78

/* WARNING: Control flow encountered unimplemented instructions */

void ALOGBMGGBEP_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568431 & 1) == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(ALOGBMGGBEP_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  ALOGBMGGBEP_<>c_TypeInfo->static_fields->__9 = (ALOGBMGGBEP___c_o *)__this;
  thunk_FUN_01c20e04(ALOGBMGGBEP_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal ALOGBMGGBEP AFJKCJDOFEL()  [RVA 0x3492BE0]
// ALOGBMGGBEP.<>c$$AFJKCJDOFEL @ RVA 0x3492BE0

ALOGBMGGBEP_o * ALOGBMGGBEP_<>c__AFJKCJDOFEL(ALOGBMGGBEP___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04568432 & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    DAT_04568432 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(ALOGBMGGBEP_TypeInfo,method);
  ALOGBMGGBEP___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}

