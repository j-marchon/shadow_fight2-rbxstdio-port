// Nekki.SF2.GUI.Profile.AchievementSubItem$$UpdateProgress @ RVA 0x338F248

void Nekki_SF2_GUI_Profile_AchievementSubItem__UpdateProgress
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  ProgressBar_o *pPVar1;
  
  pPVar1 = (__this->fields)._progress;
  (__this->fields).IFGGFDOALOG = CJNHFNHJHPE;
  if (pPVar1 != (ProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0348f268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar1->klass->vtable)._7_set_Value.methodPtr)
              (pPVar1,(pPVar1->klass->vtable)._7_set_Value.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

