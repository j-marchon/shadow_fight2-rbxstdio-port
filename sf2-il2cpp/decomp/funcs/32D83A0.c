// Nekki.SF2.GUI.Pvp.PhaseBox$$get_TrackingDeviceID @ RVA 0x32D83A0

int32_t Nekki_SF2_GUI_Pvp_PhaseBox__get_TrackingDeviceID
                  (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  
  pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method);
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
    return (pNVar1->fields).AFEOEPFDNLI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

