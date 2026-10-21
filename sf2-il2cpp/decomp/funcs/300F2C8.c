// Nekki.SF2.GUI.Common.MenuControls.ADIEOGDNDIO$$HBJIAILBIBE @ RVA 0x300F2C8

bool Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__HBJIAILBIBE
               (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this,int32_t OPHMGAKOJLP,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetKeyUp
                      (__this_00,OPHMGAKOJLP,(__this->fields).EDCHCICLDBD,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

