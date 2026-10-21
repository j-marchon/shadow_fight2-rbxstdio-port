// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$OnButtonPressed @ RVA 0x334CD4C

void Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__OnButtonPressed
               (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,
               int32_t MFGBNOEGCEE,MethodInfo *method)

{
  ulong uVar1;
  ulong extraout_x1;
  ulong extraout_x1_00;
  
  uVar1 = (ulong)(uint)MFGBNOEGCEE;
  if ((DAT_04567a0e & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo,uVar1);
    DAT_04567a0e = 1;
    uVar1 = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    uVar1 = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo,uVar1);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished != 0) {
    return;
  }
  thunk_FUN_01ba7564();
  return;
}

