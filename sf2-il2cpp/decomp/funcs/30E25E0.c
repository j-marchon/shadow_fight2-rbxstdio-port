// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$UpdateBoss @ RVA 0x30E25E0

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateBoss
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,KDADMJGPAOM_o *LJJOMPLONBH,
               int32_t MKNBFGPHPEE,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  NJNCPNBIPCD_o *__this_01;
  
  if ((DAT_045663c1 & 1) == 0) {
                    /* try { // try from 031e260c to 032e2613 has its CatchHandler @ 031e2724 */
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_045663c1 = 1;
  }
  __this_00 = (__this->fields)._raidInfoSprite;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateBoss
              (__this_00,LJJOMPLONBH,MKNBFGPHPEE,(MethodInfo *)0x0);
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031e2648 to 032e2673 has its CatchHandler @ 031e2720 */
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
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NJNCPNBIPCD__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NJNCPNBIPCD_o *)0x0) {
                    /* try { // try from 031e26a8 to 032e26eb has its CatchHandler @ 031e2728 */
      NJNCPNBIPCD__KDHOEOKEIMP(__this_01,LJJOMPLONBH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

