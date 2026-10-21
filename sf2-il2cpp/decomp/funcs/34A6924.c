// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$OnSelectCell @ RVA 0x34A6924

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__OnSelectCell
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_InfoButton_o *__this_00;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar2;
  ACHLOMELAJE_o *pAVar3;
  LPAPAMPGDFN_o *pLVar4;
  
  if ((DAT_045684f5 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045684f5 = 1;
  }
  pJVar2 = (__this->fields).PPJALGIONOI;
  if ((pJVar2 == (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pJVar2->fields).super.EJEPJCHIGFE,(MethodInfo *)0x0), bVar1)
     ) {
    return;
  }
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (pLVar4 = (pAVar3->fields).LMCDOMHENMC, pLVar4 != (LPAPAMPGDFN_o *)0x0)) {
    if ((pLVar4->fields).AMIMEMOELHE == 10) {
      return;
    }
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
    pJVar2 = (__this->fields).PPJALGIONOI;
    if ((pJVar2 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) &&
       (pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
       pAVar3 != (ACHLOMELAJE_o *)0x0)) {
                    /* try { // try from 035a6a24 to 036a6a2b has its CatchHandler @ 035a6ccc */
      bVar1 = ACHLOMELAJE__EICGOCNDMNI(pAVar3,(pJVar2->fields).super.JIJLBFGKNJK,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
                    /* try { // try from 035a6a40 to 036a6a43 has its CatchHandler @ 035a6c94 */
      __this_00 = (__this->fields)._hintDescriptionButton;
      if (__this_00 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
        Nekki_SF2_GUI_InfoButton__set_HighlightEnabled(__this_00,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a6a5c to 036a6a63 has its CatchHandler @ 035a6cc0 */
  FUN_01bab8c8();
}

