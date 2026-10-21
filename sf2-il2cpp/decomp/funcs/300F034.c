// Nekki.SF2.GUI.Common.MenuControls.ADIEOGDNDIO$$BHHIIBFHBFK @ RVA 0x300F034

bool Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__BHHIIBFHBFK
               (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this,int32_t OPHMGAKOJLP,
               MethodInfo *method)

{
  int32_t IKKKILCDMMB;
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  
  bVar1 = DANCCJHADOA__NBEOBEKPHMN((__this->fields).LCDNJBFAOHM,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  IKKKILCDMMB = (__this->fields).EDCHCICLDBD;
  if (bVar1) {
    bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetKey
                      (__this_00,OPHMGAKOJLP,IKKKILCDMMB,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetKeyDown
                    (__this_00,OPHMGAKOJLP,IKKKILCDMMB,(MethodInfo *)0x0);
  return bVar1;
}

