// Nekki.SF2.Core.Fights.Controls.GameController$$HCLIIHBKIIG @ RVA 0x33A4D64

void Nekki_SF2_Core_Fights_Controls_GameController__HCLIIHBKIIG
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,GGFFOJJGHGP_o *EJFPCGICJJB,
               MethodInfo *method)

{
  int IKKKILCDMMB;
  bool bVar1;
  FCJBEKHDLAF_o *__this_00;
  
  if ((DAT_04567ce3 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* catch() { ... } // from try @ 034a4d04 with catch @ 034a4d8c
                       try { // try from 034a4d8c to 035a4dcb has its CatchHandler @ 034a4a54 */
    DAT_04567ce3 = 1;
  }
  if (EJFPCGICJJB == (GGFFOJJGHGP_o *)0x0) {
LAB_034a4e6c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  IKKKILCDMMB = (EJFPCGICJJB->fields).ACNLHENNKAJ;
                    /* catch() { ... } // from try @ 034a4b04 with catch @ 034a4d9c */
                    /* catch() { ... } // from try @ 034a4ae0 with catch @ 034a4da0 */
                    /* catch() { ... } // from try @ 034a4bdc with catch @ 034a4da4
                       catch() { ... } // from try @ 034a4cc8 with catch @ 034a4da4 */
  if ((IKKKILCDMMB != 0) &&
     (bVar1 = Nekki_SF2_Core_Fights_Controls_GameController__NPEIOOFJBDO(__this,IKKKILCDMMB,method),
     bVar1)) {
                    /* catch() { ... } // from try @ 034a4b6c with catch @ 034a4db0
                       catch() { ... } // from try @ 034a4cd0 with catch @ 034a4db0 */
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034a4dcc to 035a4dcf has its CatchHandler @ 034a4e64 */
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO != (FCJBEKHDLAF_o *)0x0) {
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a4e0c to 035a4e33 has its CatchHandler @ 034a4ee8 */
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
                    /* try { // try from 034a4e34 to 035a4e4b has its CatchHandler @ 034a4a54 */
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
                    /* try { // try from 034a4e4c to 035a4e4f has its CatchHandler @ 034a4e74 */
                    /* try { // try from 034a4e5c to 035a4ed3 has its CatchHandler @ 034a4ee8 */
        FCJBEKHDLAF__KAIJCNCDMLO(__this_00,EJFPCGICJJB,(MethodInfo *)0x0);
        return;
      }
      goto LAB_034a4e6c;
    }
  }
                    /* catch() { ... } // from try @ 034a4dcc with catch @ 034a4e64 */
  return;
}

