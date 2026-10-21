// Nekki.SF2.GUI.Dialogs.SettingsDialog$$FFHKBMDDKBI @ RVA 0x3484438

void Nekki_SF2_GUI_Dialogs_SettingsDialog__FFHKBMDDKBI
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,bool NICNIHADJPO,MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  FKDLCJJOGIP_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  
  method_00 = (MethodInfo *)(ulong)NICNIHADJPO;
  if ((DAT_04568398 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568398 = 1;
    method_00 = extraout_x1;
  }
  if (NICNIHADJPO) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__GBKHEJFFFCP(__this_00,0,(MethodInfo *)0x0);
      __this_01 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (FKDLCJJOGIP_o *)0x0) {
        FKDLCJJOGIP__GDKDINOCDGF(__this_01,(MethodInfo *)0x0);
        method_00 = method_01;
        if ((__this->fields).HCKFHJLLLBN != false) {
          Nekki_SF2_GUI_Dialogs_SettingsDialog__JAAPCLHJNJC(__this,method_01);
          method_00 = extraout_x1_00;
        }
        goto LAB_035844f4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035844f4:
  Nekki_SF2_GUI_Dialogs_SettingsDialog__BDFKOFFLBME(__this,method_00);
  return;
}

