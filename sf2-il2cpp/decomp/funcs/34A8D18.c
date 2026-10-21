// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsLeftSubItemSelected @ RVA 0x34A8D18

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsLeftSubItemSelected
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = Nekki_SF2_GUI_Profile_UserPerksPanel__get_LastPosition(__this,method);
                    /* catch() { ... } // from try @ 035a8d14 with catch @ 035a8d2c */
  return iVar1 == 2;
}

