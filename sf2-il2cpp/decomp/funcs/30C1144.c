// Nekki.SF2.Core.ApplicationController$$Log @ RVA 0x30C1144

void Nekki_SF2_Core_ApplicationController__Log(System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566290 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04566290 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__Log((Il2CppObject *)JLNPKGGFFDD,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI__Log(JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}

