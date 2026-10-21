// Nekki.SF2.GUI.Profile.PerksController$$get_IsLeftSubItemSelected @ RVA 0x32D0E1C

bool Nekki_SF2_GUI_Profile_PerksController__get_IsLeftSubItemSelected
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  iVar2 = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method);
  if (iVar2 == 2) {
    bVar1 = true;
  }
  else {
    iVar2 = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method_00);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}

