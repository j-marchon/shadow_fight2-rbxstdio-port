// Nekki.SF2.GUI.Pvp.PvpScene$$SwitchPlayerOneInput @ RVA 0x321BBF0

void Nekki_SF2_GUI_Pvp_PvpScene__SwitchPlayerOneInput(MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  long lVar2;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *__this_00;
  MethodInfo *in_x2;
  
  if ((DAT_04566f08 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    DAT_04566f08 = 1;
  }
  __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      return;
    }
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_Pvp_PvpScene__DDNKEKIOAMP
              (Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH,
               Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM,in_x2);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((**(long **)(lVar2 + 0xb8) != 0) &&
       (__this_00 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)(**(long **)(lVar2 + 0xb8) + 200),
       __this_00 != (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) {
      Nekki_SF2_GUI_Pvp_PvPHintController__RefreshHintsTrackingDevices(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

