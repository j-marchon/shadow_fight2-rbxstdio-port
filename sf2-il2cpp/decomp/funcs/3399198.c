// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$OnDestroy @ RVA 0x3399198

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  KEIAEKNFNNA_o *__this_00;
  
  if ((DAT_04567c67 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyDialog_UpdateCells__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c67 = 1;
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
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    KEIAEKNFNNA__KGPAPPFJIDO(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

