// Nekki.SF2.GUI.DebugUI$$OnDestroy @ RVA 0x32915D0

void Nekki_SF2_GUI_DebugUI__OnDestroy(Nekki_SF2_GUI_DebugUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this_00;
  System_Action_KeyCode__o *CJNHFNHJHPE;
  
  if ((DAT_04567324 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugUI_AEKEGMAOOHO__);
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    FUN_01bab630(&Util_TypeInfo);
    DAT_04567324 = 1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    return;
  }
  Nekki_SF2_GUI_ModuleHolder__OnDestroy((Nekki_SF2_GUI_ModuleHolder_o *)__this,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_KeyCode__o *)thunk_FUN_01bda818(System_Action<KeyCode>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
    Nekki_SF2_Core_InputControllers_KeyboardController__remove_OnKeyDown
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->CNMHHKAMGPI = (Nekki_SF2_GUI_DebugUI_o *)0x0;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

