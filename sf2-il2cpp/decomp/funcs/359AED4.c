// Nekki.SF2.GUI.Profile.AchievementCell$$UpdateState @ RVA 0x359AED4

void Nekki_SF2_GUI_Profile_AchievementCell__UpdateState
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *pNVar1;
  
  pNVar1 = (__this->fields).achievSubItem;
  if (pNVar1 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0369aef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._58_UpdateState.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._58_UpdateState.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

