// Nekki.SF2.GUI.Dialogs.Raids.SeasFinTop100Message$$OJGLIBHMOIE @ RVA 0x34B6AA4

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message__OJGLIBHMOIE
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *pNVar2;
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o **ppNVar3;
  
  if ((DAT_04568591 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
                    /* try { // try from 035b6adc to 036b6adf has its CatchHandler @ 035b6b10 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035b6ae0 to 036b6ae7 has its CatchHandler @ 035b6b0c */
                    /* try { // try from 035b6ae8 to 036b6aeb has its CatchHandler @ 035b6780 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_MNIKEBABNLM__);
                    /* try { // try from 035b6aec to 036b6af7 has its CatchHandler @ 035b6b00 */
    DAT_04568591 = 1;
  }
                    /* catch() { ... } // from try @ 035b6a20 with catch @ 035b6af8
                       try { // try from 035b6af8 to 036b6b27 has its CatchHandler @ 035b6780 */
  pNVar2 = JJPNLEPEAFM__OHIKPLPOJBK((MethodInfo *)0x0);
  ppNVar3 = &(__this->fields).FGANCONLPGD;
                    /* catch() { ... } // from try @ 035b69d4 with catch @ 035b6afc */
                    /* catch() { ... } // from try @ 035b6aec with catch @ 035b6b00 */
  *ppNVar3 = pNVar2;
                    /* catch() { ... } // from try @ 035b69ac with catch @ 035b6b04 */
                    /* catch() { ... } // from try @ 035b6958 with catch @ 035b6b08 */
                    /* catch() { ... } // from try @ 035b6ae0 with catch @ 035b6b0c */
  thunk_FUN_01c20e04(ppNVar3,pNVar2);
                    /* catch() { ... } // from try @ 035b6adc with catch @ 035b6b10 */
                    /* catch() { ... } // from try @ 035b6944 with catch @ 035b6b14 */
  pNVar2 = *ppNVar3;
                    /* catch() { ... } // from try @ 035b6930 with catch @ 035b6b18 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 035b6b28 to 036b6b2b has its CatchHandler @ 035b6b50 */
                    /* try { // try from 035b6b2c to 036b6b57 has its CatchHandler @ 035b6780 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035b6b28 with catch @ 035b6b50 */
                    /* try { // try from 035b6b58 to 036b6b5f has its CatchHandler @ 035b6b74 */
    CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                  thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
                    /* try { // try from 035b6b60 to 036b6b6b has its CatchHandler @ 035b6780 */
                    /* try { // try from 035b6b6c to 036b6b73 has its CatchHandler @ 035b6b74 */
    System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 035b6b58 with catch @ 035b6b74
                       catch() { ... } // from try @ 035b6b6c with catch @ 035b6b74 */
    if (__this_00 != (GCIFMNHADDF_o *)0x0) {
                    /* try { // try from 035b6b78 to 036b6c67 has its CatchHandler @ 035b6b78
                       catch() { ... } // from try @ 035b6b78 with catch @ 035b6b78
                       catch() { ... } // from try @ 035b6cf0 with catch @ 035b6b78
                       catch() { ... } // from try @ 035b6d24 with catch @ 035b6b78
                       catch() { ... } // from try @ 035b6d4c with catch @ 035b6b78
                       catch() { ... } // from try @ 035b6d80 with catch @ 035b6b78 */
      GCIFMNHADDF__DGKGLFOKOLG(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      if (*ppNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SwitchToPrevSeasonLeaderboard
                  (*ppNVar3,(MethodInfo *)0x0);
        if (*ppNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SetArrowBtnsTouchEnable
                    (*ppNVar3,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OJGLIBHMOIE
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}

