// TypeDefIndex 2569
// Namespace: 
// [Serializable]
// private sealed class LFELBGMCDHD.<>c
// Fields:
//   public static readonly LFELBGMCDHD.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x33A0A20]
// LFELBGMCDHD.<>c$$.ctor @ RVA 0x33A0A20

void LFELBGMCDHD_<>c___ctor(LFELBGMCDHD___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal LFELBGMCDHD ICLFIHGKJJH()  [RVA 0x33A0A28]
// LFELBGMCDHD.<>c$$ICLFIHGKJJH @ RVA 0x33A0A28

LFELBGMCDHD_o * LFELBGMCDHD_<>c__ICLFIHGKJJH(LFELBGMCDHD___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04567cb4 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    DAT_04567cb4 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(LFELBGMCDHD_TypeInfo,method);
  LFELBGMCDHD___ctor(auVar1._0_8_,auVar1._8_8_);
                    /* try { // try from 034a0a68 to 035a0bcb has its CatchHandler @ 034a0a68
                       catch() { ... } // from try @ 034a0a68 with catch @ 034a0a68
                       catch() { ... } // from try @ 034a100c with catch @ 034a0a68
                       catch() { ... } // from try @ 034a10a8 with catch @ 034a0a68
                       catch() { ... } // from try @ 034a10b8 with catch @ 034a0a68
                       catch() { ... } // from try @ 034a1198 with catch @ 034a0a68
                       catch() { ... } // from try @ 034a11d8 with catch @ 034a0a68 */
  return auVar1._0_8_;
}


// ===== private static void .cctor()  [RVA 0x33A0A78]
// LFELBGMCDHD.<>c$$.cctor @ RVA 0x33A0A78

void LFELBGMCDHD_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567cb5 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_<>c_TypeInfo);
    DAT_04567cb5 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(LFELBGMCDHD_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  LFELBGMCDHD_<>c_TypeInfo->static_fields->__9 = (LFELBGMCDHD___c_o *)__this;
  thunk_FUN_01c20e04(LFELBGMCDHD_<>c_TypeInfo->static_fields,__this);
  return;
}

