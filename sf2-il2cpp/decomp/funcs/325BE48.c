// ILNFICAMFCI$$CLNAOMIIBLH @ RVA 0x325BE48

void ILNFICAMFCI__CLNAOMIIBLH(MethodInfo *method)

{
  bool bVar1;
  ILNFICAMFCI_c *method_00;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this;
  System_Action_KeyCode__o *CJNHFNHJHPE;
  
  if ((DAT_0456718b & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    FUN_01bab630(&Method_ILNFICAMFCI_AEKEGMAOOHO__);
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    DAT_0456718b = 1;
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ILNFICAMFCI_TypeInfo->static_fields->DHKAODBNGNJ != false) {
    method_00 = ILNFICAMFCI_TypeInfo;
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (ILNFICAMFCI_c *)thunk_FUN_01ba7564();
    }
    bVar1 = ILNFICAMFCI__ABHJLMEPMBF((MethodInfo *)method_00);
    if ((bVar1) &&
       (bVar1 = Nekki_SF2_Core_InputControllers_KeyboardController__get_IsInited((MethodInfo *)0x0),
       bVar1)) {
      __this = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_KeyCode__o *)thunk_FUN_01bda818(System_Action<KeyCode>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (__this == (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_Core_InputControllers_KeyboardController__remove_OnKeyDown
                (__this,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ILNFICAMFCI_TypeInfo->static_fields->DHKAODBNGNJ = false;
  }
  return;
}

