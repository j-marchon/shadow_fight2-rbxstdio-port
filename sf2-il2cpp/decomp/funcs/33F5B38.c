// Nekki.SF2.GUI.Common.PerkUI$$get_Alpha @ RVA 0x33F5B38

float Nekki_SF2_GUI_Common_PerkUI__get_Alpha
                (Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._Icon;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    fVar1 = Nekki_SF2_GUI_ResolutionImage__get_Alpha(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

