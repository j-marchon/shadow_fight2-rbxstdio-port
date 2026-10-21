// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$NOJIAJAMFPH @ RVA 0x32C80D4

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__NOJIAJAMFPH
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  bool bVar1;
  GKLPDMLELJF_o *pGVar2;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_00;
  EEOMEMBBGNA_o *__this_01;
  EOLFEKNCPLM_o *pEVar3;
  
  if ((DAT_045674fe & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 033c80fc to 034c811f has its CatchHandler @ 033c82b4 */
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    DAT_045674fe = 1;
  }
  pEVar3 = (__this->fields).MLAAJICBOAD;
  if ((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar2 = (pEVar3->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
                    /* try { // try from 033c8120 to 034c812f has its CatchHandler @ 033c828c */
    bVar1 = GKLPDMLELJF__ODJAMCJCHGG(pGVar2,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 033c8190 to 034c8193 has its CatchHandler @ 033c85ac */
                    /* try { // try from 033c8194 to 034c8197 has its CatchHandler @ 033c85a0 */
                    /* try { // try from 033c8198 to 034c819b has its CatchHandler @ 033c85ac */
      return;
    }
    __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 033c8130 to 034c813b has its CatchHandler @ 033c8288 */
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_DialogCanvasController__Show(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033c813c to 034c818f has its CatchHandler @ 033c79c8 */
                    /* catch() { ... } // from try @ 033c7f8c with catch @ 033c8144 */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      pEVar3 = (__this->fields).MLAAJICBOAD;
      if (((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
          (pGVar2 = (pEVar3->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) &&
         (__this_01 != (EEOMEMBBGNA_o *)0x0)) {
        EEOMEMBBGNA__ILINPANMKLF
                  (__this_01,(pGVar2->fields).ADEIKPGDIPM.fields.value,(MethodInfo *)0x0);
        EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033c819c to 034c819f has its CatchHandler @ 033c859c */
  FUN_01bab8c8();
}

