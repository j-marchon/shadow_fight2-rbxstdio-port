// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$DPDPADFPOBP @ RVA 0x32D4F98

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__DPDPADFPOBP
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  KEIAEKNFNNA_o *__this_00;
  int64_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_0456757d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_BHLHBBKAFHH__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456757d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__JKONMJEBNPH(__this,method);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    iVar1 = KEIAEKNFNNA__FHMOKDNBLAI(__this_00,(MethodInfo *)0x0);
    (__this->fields).GIFMJFJDFFG = iVar1;
    Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__BHLHBBKAFHH(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

