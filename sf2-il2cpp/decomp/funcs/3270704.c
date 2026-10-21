// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$BHLHBBKAFHH @ RVA 0x3270704

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__BHLHBBKAFHH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  ProgressLabelButton_o *pPVar2;
  LabelButton_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456721c & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_0456721c = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__DOIICGAGMOL(__this,1.0,method);
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
    return;
  }
  pPVar2 = (__this->fields)._btnFight;
  if (pPVar2 == (ProgressLabelButton_o *)0x0) {
LAB_033707e4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = SFButton__get_ActiveAndInteractable((SFButton_o *)pPVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pPVar2 = (__this->fields)._btnFight;
  }
  else {
    __this_00 = (__this->fields)._btnSkipCooldown;
    if (__this_00 == (LabelButton_o *)0x0) goto LAB_033707e4;
    bVar1 = SFButton__get_ActiveAndInteractable((SFButton_o *)__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pPVar2 = (ProgressLabelButton_o *)(__this->fields)._btnSkipCooldown;
  }
  LJLLAKHOFFF__AKKDDJDBIBD((UnityEngine_UI_Selectable_o *)pPVar2,(MethodInfo *)0x0);
  return;
}

