// Nekki.SF2.GUI.Profile.SealsTableViewCell$$set_Opacity @ RVA 0x303B7D8

void Nekki_SF2_GUI_Profile_SealsTableViewCell__set_Opacity
               (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_00;
  
  Nekki_SF2_GUI_TableViewCell__set_Opacity
            ((Nekki_SF2_GUI_TableViewCell_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._image;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_Alpha
              ((Nekki_SF2_GUI_ResolutionImage_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

