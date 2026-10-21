// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$OIHOMNDJOMI @ RVA 0x2FF6814

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OIHOMNDJOMI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,int64_t PEJIFIIDFMM,
               MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_c *pNVar2;
  
  if ((DAT_04565aa2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565aa2 = 1;
  }
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    iVar1 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    pNVar2 = __this->klass;
    if (iVar1 == PEJIFIIDFMM) {
      (*(pNVar2->vtable)._36_DNDPMHKMMAB.methodPtr)
                (__this,PEJIFIIDFMM,(pNVar2->vtable)._36_DNDPMHKMMAB.method);
                    /* catch() { ... } // from try @ 030f68e0 with catch @ 030f68b8
                       catch() { ... } // from try @ 030f6910 with catch @ 030f68b8
                       catch() { ... } // from try @ 030f694c with catch @ 030f68b8 */
                    /* WARNING: Could not recover jumptable at 0x030f68bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x030f68d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->vtable)._38_CKIGEFAKKDJ.methodPtr)
              (__this,PEJIFIIDFMM,(pNVar2->vtable)._38_CKIGEFAKKDJ.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 030f68dc to 031f68df has its CatchHandler @ 030f68f4 */
  FUN_01bab8c8();
}

