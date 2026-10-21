// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$Init @ RVA 0x339904C

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog__Init
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  KEIAEKNFNNA_o *__this_00;
  
  if ((DAT_04567c65 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyDialog_UpdateCells__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567c65 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1,StringLiteral_9679,
             StringLiteral_3640,1,(MethodInfo *)0x0);
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
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    KEIAEKNFNNA__EMBJNCBLPNN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

