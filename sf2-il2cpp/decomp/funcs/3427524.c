// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$SetBtnFightValueBorders_MS @ RVA 0x3427524

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetBtnFightValueBorders_MS
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int64_t PEOMJHJICCM,
               int64_t GKBCJOEFFCP,MethodInfo *method)

{
  ProgressLabelButton_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._btnFight;
  if (__this_00 != (ProgressLabelButton_o *)0x0) {
    ProgressLabelButton__SetProgBarValueBorders
              (__this_00,(float)PEOMJHJICCM,(float)GKBCJOEFFCP,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__CIHKNMDAPBG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

