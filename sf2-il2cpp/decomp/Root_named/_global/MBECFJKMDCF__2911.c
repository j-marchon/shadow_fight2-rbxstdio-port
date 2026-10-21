// TypeDefIndex 2911
// Namespace: 
// public static class MBECFJKMDCF
// Fields:
//   public static readonly DateTime JEJAHBDPAFO; // 0x0
//   private static bool ECCPBJGMNPE; // 0x8

// ===== private static void .cctor()  [RVA 0x344AEA0]
// MBECFJKMDCF$$.cctor @ RVA 0x344AEA0

void MBECFJKMDCF___cctor(MethodInfo *method)

{
  System_DateTime_o SVar1;
  
  if ((DAT_04568270 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&MBECFJKMDCF_TypeInfo);
    DAT_04568270 = 1;
  }
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  (MBECFJKMDCF_TypeInfo->static_fields->JEJAHBDPAFO).fields._dateData =
       (uint64_t)SVar1.fields._dateData;
  return;
}


// ===== public static void GIMAJOGGBHM()  [RVA 0x344AF14]
// MBECFJKMDCF$$GIMAJOGGBHM @ RVA 0x344AF14

void MBECFJKMDCF__GIMAJOGGBHM(MethodInfo *method)

{
  System_String_o *pSVar1;
  MBECFJKMDCF_StaticFields *pMVar2;
  int64_t local_18;
  
  if ((DAT_04568271 & 1) == 0) {
    FUN_01bab630(&AHHELIMMIED_TypeInfo);
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MBECFJKMDCF_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&UnityMainThreadDispatcher_TypeInfo);
    FUN_01bab630(&StringLiteral_6690/*"GameStarted: "*/);
    DAT_04568271 = 1;
  }
  local_18 = 0;
  if ((MBECFJKMDCF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar2 = MBECFJKMDCF_TypeInfo->static_fields;
  if (pMVar2->ECCPBJGMNPE == false) {
    if ((MBECFJKMDCF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar2 = MBECFJKMDCF_TypeInfo->static_fields;
    }
    pMVar2->ECCPBJGMNPE = true;
    if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
    if ((AHHELIMMIED_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AHHELIMMIED__GIENGNEGHPJ((MethodInfo *)0x0);
    IDKEOJGPOME__GIENGNEGHPJ((MethodInfo *)0x0);
    local_18 = DPNBGNOIKEJ__FAJDJBBKNIG
                         ((System_DateTime_o)
                          (MBECFJKMDCF_TypeInfo->static_fields->JEJAHBDPAFO).fields._dateData,
                          (MethodInfo *)0x0);
    pSVar1 = System_Int64__ToString((int64_t)&local_18,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_6690/*"GameStarted: "*/,pSVar1,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    IBILBKNKKDG__GIMAJOGGBHM((MethodInfo *)0x0);
    if ((UnityMainThreadDispatcher_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityMainThreadDispatcher__Init((MethodInfo *)0x0);
    NEHNBJKKABI__GIMAJOGGBHM((MethodInfo *)0x0);
    IEICNBBBNEJ__APOLKMNLACO((MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__Init((MethodInfo *)0x0);
    Nekki_SF2_Core_InputControllers_KeyboardController__Init((MethodInfo *)0x0);
    IGNCJNPCAEN__GIENGNEGHPJ((MethodInfo *)0x0);
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    SF2Paths__GIENGNEGHPJ((MethodInfo *)0x0);
    IMAPABEJECG__PPCPAHAPCNB((MethodInfo *)0x0);
    if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    BBBBKBBFNOG__GIENGNEGHPJ((MethodInfo *)0x0);
  }
  return;
}

