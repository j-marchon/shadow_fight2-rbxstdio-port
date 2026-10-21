// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$LHOKAHCKHND @ RVA 0x30BE1D4

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__LHOKAHCKHND
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  if ((DAT_04566260 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566260 = 1;
    method = extraout_x1;
  }
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo,method);
    DAT_045660f3 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdatePlayersDan(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

