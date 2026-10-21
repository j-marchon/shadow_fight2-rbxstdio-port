// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$DOIICGAGMOL @ RVA 0x326EC94

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__DOIICGAGMOL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,float PJHOLDOLLCN,
               MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *pCVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
                    /* catch() { ... } // from try @ 0336ead4 with catch @ 0336ec94 */
                    /* catch() { ... } // from try @ 0336ea34 with catch @ 0336ec98 */
                    /* catch() { ... } // from try @ 0336ec28 with catch @ 0336ec9c */
                    /* catch() { ... } // from try @ 0336e8f8 with catch @ 0336eca0 */
                    /* catch() { ... } // from try @ 0336e90c with catch @ 0336eca4 */
                    /* catch() { ... } // from try @ 0336e918 with catch @ 0336eca8 */
                    /* catch() { ... } // from try @ 0336e8d4 with catch @ 0336ecac */
                    /* catch() { ... } // from try @ 0336e8e0 with catch @ 0336ecb0 */
                    /* catch() { ... } // from try @ 0336ec24 with catch @ 0336ecb4 */
                    /* catch() { ... } // from try @ 0336e86c with catch @ 0336ecb8 */
  if ((DAT_0456721b & 1) == 0) {
                    /* catch() { ... } // from try @ 0336e810 with catch @ 0336ecbc */
                    /* catch() { ... } // from try @ 0336ec1c with catch @ 0336ecc0 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456721b = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__CIHKNMDAPBG(__this,PJHOLDOLLCN,method);
                    /* try { // try from 0336ece0 to 0346ece3 has its CatchHandler @ 0336ecf4 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0336ece0 with catch @ 0336ecf4 */
  if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
    bVar1 = OOBBAGLCFPF__IFFNMNFGOII((pCVar2->fields).AABMLCNHHPN,(MethodInfo *)0x0);
                    /* try { // try from 0336ed04 to 0346ed73 has its CatchHandler @ 0336ed88 */
    if (bVar1) {
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__FPGFFBKLIPP(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

