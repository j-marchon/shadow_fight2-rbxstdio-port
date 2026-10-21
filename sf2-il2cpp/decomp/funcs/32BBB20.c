// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$Init @ RVA 0x32BBB20

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  GALHNMPIEHA_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  Il2CppObject *extraout_x1;
  
                    /* catch() { ... } // from try @ 033bbb08 with catch @ 033bbb40 */
  if ((DAT_04567495 & 1) == 0) {
                    /* try { // try from 033bbb50 to 034bbb57 has its CatchHandler @ 033bbb6c */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 033bbb58 to 034bbb63 has its CatchHandler @ 033bb8bc */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 033bbb64 to 034bbb6b has its CatchHandler @ 033bbb6c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_CJPKPFBKMNP__);
                    /* catch() { ... } // from try @ 033bbb50 with catch @ 033bbb6c
                       catch() { ... } // from try @ 033bbb64 with catch @ 033bbb6c */
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567495 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    GALHNMPIEHA__COKCPKHDHDN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1,
               StringLiteral_9679,StringLiteral_3640,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

