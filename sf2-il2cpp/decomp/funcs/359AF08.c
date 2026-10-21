// Nekki.SF2.GUI.Profile.AchievementCell$$OnDestroy @ RVA 0x359AF08

void Nekki_SF2_GUI_Profile_AchievementCell__OnDestroy
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this_00;
  
  Nekki_SF2_GUI_TableViewCell__OnDestroy((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).achievSubItem;
  if (__this_00 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
    SFButton__RemoveAllEventListener((SFButton_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

