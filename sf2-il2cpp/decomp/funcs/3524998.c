// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$Refresh @ RVA 0x3524998

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Refresh
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._CategoryName;
  CJNHFNHJHPE = BFBAOPNJDKL__GKMAFGODLLG((__this->fields)._Category,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

