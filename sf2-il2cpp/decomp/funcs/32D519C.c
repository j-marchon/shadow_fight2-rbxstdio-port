// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$BHLHBBKAFHH @ RVA 0x32D519C

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__BHLHBBKAFHH
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  long ECLENFDGNKL;
  KEIAEKNFNNA_o *__this_00;
  int64_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  
  if ((DAT_04567581 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567581 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    iVar1 = KEIAEKNFNNA__LPLDEDLPJFA(__this_00,(MethodInfo *)0x0);
    ECLENFDGNKL = (__this->fields).GIFMJFJDFFG - iVar1;
    if (-1 < ECLENFDGNKL) {
      Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__KGHBEACKHIB(__this,ECLENFDGNKL,in_x2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

