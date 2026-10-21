// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$EPFNDIJOAKH @ RVA 0x2FF6A98

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__EPFNDIJOAKH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,int64_t PEJIFIIDFMM,
               MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_c *pNVar2;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6a7c with catch @ 030f6a98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f69ec with catch @ 030f6a9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f69fc with catch @ 030f6aa0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6a14 with catch @ 030f6aa4
                        */
  if ((DAT_04565aa4 & 1) == 0) {
                    /* try { // try from 030f6abc to 031f6abf has its CatchHandler @ 030f6acc */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565aa4 = 1;
  }
                    /* catch() { ... } // from try @ 030f6abc with catch @ 030f6acc */
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
                    /* try { // try from 030f6ad8 to 031f6ae3 has its CatchHandler @ 030f6af8 */
    return;
  }
                    /* try { // try from 030f6ae4 to 031f6aef has its CatchHandler @ 030f6964 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 030f6af0 to 031f6af7 has its CatchHandler @ 030f6af8 */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f6ad8 with catch @ 030f6af8
                       catch(type#2 @ 00000000) { ... } // from try @ 030f6af0 with catch @ 030f6af8
                        */
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    iVar1 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    pNVar2 = __this->klass;
    if (iVar1 == PEJIFIIDFMM) {
      (*(pNVar2->vtable)._34_DFGEGIMMCFG.methodPtr)
                (__this,PEJIFIIDFMM,(pNVar2->vtable)._34_DFGEGIMMCFG.method);
                    /* try { // try from 030f6b34 to 031f6bdb has its CatchHandler @ 030f6b34
                       catch() { ... } // from try @ 030f6b34 with catch @ 030f6b34
                       catch() { ... } // from try @ 030f6c58 with catch @ 030f6b34
                       catch() { ... } // from try @ 030f6c9c with catch @ 030f6b34
                       catch() { ... } // from try @ 030f6ce0 with catch @ 030f6b34 */
                    /* WARNING: Could not recover jumptable at 0x030f6b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x030f6b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->vtable)._35_LPOJCPKJIKF.methodPtr)
              (__this,PEJIFIIDFMM,(pNVar2->vtable)._35_LPOJCPKJIKF.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

