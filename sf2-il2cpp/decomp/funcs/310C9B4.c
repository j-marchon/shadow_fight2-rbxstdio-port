// Nekki.SF2.GUI.Profile.TrickCell$$OnDestroy @ RVA 0x310C9B4

void Nekki_SF2_GUI_Profile_TrickCell__OnDestroy
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_TrickSubItem_o *__this_00;
  
  Nekki_SF2_GUI_TableViewCell__OnDestroy((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._trickSubItem;
  if (__this_00 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) {
    SFButton__RemoveAllEventListener((SFButton_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

