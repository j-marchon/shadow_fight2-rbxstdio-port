// Nekki.SF2.GUI.Common.MenuControls$$LLNNPOHGDML @ RVA 0x300F1C0

void Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,
               int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetAxisUp
                    (__this_00,OPHMGAKOJLP,IHCDJFOBOEI,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Common_MenuControls__HJNEBABOEIH(__this,2,OPHMGAKOJLP,AAJGEHHPMGH,method);
    return;
  }
  return;
}

