// TypeDefIndex 1835
// Namespace: 
// [Extension]
// public static class BFBAOPNJDKL
// Fields:

// ===== public static string GKMAFGODLLG(MHMFGIIOGBA NMLPMBCLOHA)  [RVA 0x322258C]
// BFBAOPNJDKL$$GKMAFGODLLG @ RVA 0x322258C

System_String_o * BFBAOPNJDKL__GKMAFGODLLG(int32_t NMLPMBCLOHA,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((DAT_04566f49 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6615/*"FullConsole_tab"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_11817/*"SeparateJC_tab"*/);
    DAT_04566f49 = 1;
  }
  puVar1 = &StringLiteral_11817/*"SeparateJC_tab"*/;
  if (NMLPMBCLOHA != 1) {
    puVar1 = &StringLiteral_1/*""*/;
  }
  puVar2 = &StringLiteral_6615/*"FullConsole_tab"*/;
  if (NMLPMBCLOHA != 0) {
    puVar2 = puVar1;
  }
  return (System_String_o *)*puVar2;
}

