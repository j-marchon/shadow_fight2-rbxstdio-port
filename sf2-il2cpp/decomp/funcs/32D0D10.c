// Nekki.SF2.GUI.Profile.PerksController$$Init @ RVA 0x32D0D10

void Nekki_SF2_GUI_Profile_PerksController__Init
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_PerksController_o *__this_00;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Profile_ItemsController__Init
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_Profile_PerksController__get_IsAvailablePerk(__this_00,method_00);
  if (bVar1) {
    Nekki_SF2_GUI_Profile_ItemsController__MBMAFJIBBAB
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  return;
}

