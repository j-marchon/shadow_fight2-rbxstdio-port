// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$GNEEGOFJEIN @ RVA 0x358C554

System_String_o *
Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__GNEEGOFJEIN
          (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  FGKGKDEJCOG_o *pFVar2;
  undefined8 *puVar3;
  
  if ((DAT_04568d4d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11967);
    FUN_01bab630(&StringLiteral_11965);
    FUN_01bab630(&StringLiteral_11966);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568d4d = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
    uVar1 = (pFVar2->fields).FIIKIHJHLNJ;
    if (uVar1 < 3) {
      puVar3 = (undefined8 *)(&PTR_StringLiteral_11966_03fc6a08)[(int)uVar1];
    }
    else {
      puVar3 = &StringLiteral_1;
    }
    return (System_String_o *)*puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

