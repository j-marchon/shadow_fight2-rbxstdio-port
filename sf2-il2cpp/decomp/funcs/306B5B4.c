// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$MDMDNJBHHGF @ RVA 0x306B5B4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__MDMDNJBHHGF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int *piVar1;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_04565f36 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f36 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 == 3) {
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
        ACHLOMELAJE__KCCFPCNJJBJ(__this_00,false,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

