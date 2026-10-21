// Nekki.SF2.GUI.Common.MenuControls$$PNJANJEGPOE @ RVA 0x300F08C

void Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,
               int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar2;
  float GKNIEGGEIFD;
  
  pNVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetAxis
                      (pNVar2,OPHMGAKOJLP,IHCDJFOBOEI,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
      GKNIEGGEIFD = Nekki_SF2_Core_InputControllers_GamePadController__GetAxisValue
                              (pNVar2,OPHMGAKOJLP,IHCDJFOBOEI,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Common_MenuControls__FOOJINDABEO
                (__this,2,OPHMGAKOJLP,AAJGEHHPMGH,GKNIEGGEIFD,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

