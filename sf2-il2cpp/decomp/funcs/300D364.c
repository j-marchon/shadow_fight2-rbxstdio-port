// Nekki.SF2.GUI.Common.MenuControls$$ICKIMMADNPK @ RVA 0x300D364

void Nekki_SF2_GUI_Common_MenuControls__ICKIMMADNPK
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  MethodInfo *in_x4;
  int OPHMGAKOJLP;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this_00,(MethodInfo *)0x0);
    if (0 < iVar1) {
      OPHMGAKOJLP = 0;
      do {
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,0,0,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,1,1,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,2,2,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,3,3,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,4,4,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,5,5,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,6,7,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,7,6,in_x4);
        OPHMGAKOJLP = OPHMGAKOJLP + 1;
      } while (iVar1 != OPHMGAKOJLP);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

