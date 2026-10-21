// Nekki.SF2.GUI.Profile.AchievementCell$$Init @ RVA 0x359ACD8

void Nekki_SF2_GUI_Profile_AchievementCell__Init
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,KMJDCOABCCG_o *IHEPDIFDBGK,
               int32_t MLNEFBDGKEK,JEIEEMKCNOJ_o *JJHEGPBBMLG,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this_00;
  MethodInfo *method_00;
  JEIEEMKCNOJ_o **ppJVar1;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369acc0 with catch @ 0369acdc
                       catch(type#2 @ 00000000) { ... } // from try @ 0369acd4 with catch @ 0369acdc
                        */
  (*(__this->klass->vtable)._17_Clear.methodPtr)(__this,(__this->klass->vtable)._17_Clear.method);
  Nekki_SF2_GUI_Profile_AchievementCell__GJNMBGMOEHH(__this,method_00);
  ppJVar1 = &(__this->fields).super.MKAAKGJNBHI;
  *ppJVar1 = JJHEGPBBMLG;
  thunk_FUN_01c20e04(ppJVar1,JJHEGPBBMLG);
  __this_00 = (__this->fields).achievSubItem;
  if (__this_00 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
    Nekki_SF2_GUI_Profile_AchievementSubItem__Init
              (__this_00,IHEPDIFDBGK,(float)MLNEFBDGKEK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

