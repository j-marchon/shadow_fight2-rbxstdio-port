// AJAMDCEKAFE$$DHAAGKPHJLA @ RVA 0x31B4DF8

void AJAMDCEKAFE__DHAAGKPHJLA(System_String_o *JEGADCHPBOO,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ba9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04566ba9 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI__Log(JEGADCHPBOO,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log((Il2CppObject *)JEGADCHPBOO,(MethodInfo *)0x0);
  return;
}

