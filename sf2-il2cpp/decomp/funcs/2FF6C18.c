// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$OnDestroy @ RVA 0x2FF6C18

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  System_Action_long__o *pSVar2;
  System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 030f6c34 to 031f6c57 has its CatchHandler @ 030f6ca0 */
  if ((DAT_04565aa6 & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
                    /* try { // try from 030f6c58 to 031f6c93 has its CatchHandler @ 030f6b34 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_EPFNDIJOAKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_LCKKFPIKJJH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_OIHOMNDJOMI__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565aa6 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 030f6c94 to 031f6c9b has its CatchHandler @ 030f6ca0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6bdc with catch @ 030f6c9c
                       try { // try from 030f6c9c to 031f6cb7 has its CatchHandler @ 030f6b34 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6c34 with catch @ 030f6ca0
                       catch(type#1 @ 03f99f68) { ... } // from try @ 030f6c94 with catch @ 030f6ca0
                        */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 030f6cb8 to 031f6cbb has its CatchHandler @ 030f6cc8 */
  pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* catch() { ... } // from try @ 030f6cb8 with catch @ 030f6cc8 */
                    /* try { // try from 030f6cd4 to 031f6cdf has its CatchHandler @ 030f6cf4 */
  System_Action<long>___ctor();
  if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
                    /* try { // try from 030f6ce0 to 031f6ceb has its CatchHandler @ 030f6b34 */
                    /* try { // try from 030f6cec to 031f6cf3 has its CatchHandler @ 030f6cf4 */
    EEOMEMBBGNA__IGNGEHDHCMG(pEVar1,pSVar2,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f6cd4 with catch @ 030f6cf4
                       catch(type#2 @ 00000000) { ... } // from try @ 030f6cec with catch @ 030f6cf4
                        */
                    /* try { // try from 030f6cf8 to 031f6d4f has its CatchHandler @ 030f6cf8
                       catch() { ... } // from try @ 030f6cf8 with catch @ 030f6cf8
                       catch() { ... } // from try @ 030f6e64 with catch @ 030f6cf8
                       catch() { ... } // from try @ 030f6ec0 with catch @ 030f6cf8
                       catch() { ... } // from try @ 030f6ed4 with catch @ 030f6cf8
                       catch() { ... } // from try @ 030f6f38 with catch @ 030f6cf8 */
    pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
    System_Action<long>___ctor();
    if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
      EEOMEMBBGNA__PMFGHFNAOPK(pEVar1,pSVar2,(MethodInfo *)0x0);
      pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 030f6d50 to 031f6d5f has its CatchHandler @ 030f6ee4 */
      CJNHFNHJHPE = (System_Action_MGDJPGGPDJI__o *)
                    thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
      System_Action<object>___ctor();
      if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
        EEOMEMBBGNA__BLGMCMLEBDI(pEVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
                  ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

