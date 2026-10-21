// Nekki.SF2.GUI.Pvp.SelectModule$$ABEMBBBAFPP @ RVA 0x3177A00

bool Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this_00,(MethodInfo *)0x0);
    return 1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

