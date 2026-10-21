// ProgressBarMask$$SetSpriteName @ RVA 0x307A54C

void ProgressBarMask__SetSpriteName
               (ProgressBarMask_o *__this,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  
  __this_00 = (__this->fields)._maskedImage;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_00,HCAAAAMDCNO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

