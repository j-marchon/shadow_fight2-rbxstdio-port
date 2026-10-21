// Nekki.SF2.GUI.Pvp.PhaseBox$$set_TrackingDeviceID @ RVA 0x32D7DC8

void Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this_00;
  HintButton_o *__this_01;
  
  __this_00 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE)
  ;
  __this_01 = (__this->fields)._TagHint;
  if ((__this_01 != (HintButton_o *)0x0) &&
     (HintButton__set_TrackingDeviceID(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0),
     __this_00 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0)) {
    Nekki_SF2_GUI_Pvp_PhaseWeapon__set_TrackingDeviceID(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

