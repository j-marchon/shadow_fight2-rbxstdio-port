// Nekki.SF2.Core.Fights.Controls.GameController$$PAIBMOAPDLC @ RVA 0x33A4B40

void Nekki_SF2_Core_Fights_Controls_GameController__PAIBMOAPDLC
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,GGFFOJJGHGP_o *EJFPCGICJJB,
               MethodInfo *method)

{
  bool bVar1;
  FCJBEKHDLAF_o *__this_00;
  
  if ((DAT_04567ce0 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* try { // try from 034a4b6c to 035a4b93 has its CatchHandler @ 034a4db0 */
    DAT_04567ce0 = 1;
  }
  if (EJFPCGICJJB == (GGFFOJJGHGP_o *)0x0) {
LAB_034a4c44:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_Core_Fights_Controls_GameController__NPEIOOFJBDO
                    (__this,(EJFPCGICJJB->fields).ACNLHENNKAJ,method);
  if (bVar1) {
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO != (FCJBEKHDLAF_o *)0x0) {
                    /* try { // try from 034a4bdc to 035a4c03 has its CatchHandler @ 034a4da4 */
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
                    /* try { // try from 034a4c24 to 035a4c2b has its CatchHandler @ 034a4cdc */
                    /* try { // try from 034a4c2c to 035a4cc3 has its CatchHandler @ 034a4a54 */
        FCJBEKHDLAF__DDFNLHMCIND(__this_00,EJFPCGICJJB,(MethodInfo *)0x0);
        return;
      }
      goto LAB_034a4c44;
    }
  }
  return;
}

