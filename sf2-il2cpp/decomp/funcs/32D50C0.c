// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$JKONMJEBNPH @ RVA 0x32D50C0

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__JKONMJEBNPH
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567582 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_BHLHBBKAFHH__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567582 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._beforeNextTaskLbl;
  (__this->fields).GIFMJFJDFFG = 0;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d5194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,StringLiteral_1,(pNVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

