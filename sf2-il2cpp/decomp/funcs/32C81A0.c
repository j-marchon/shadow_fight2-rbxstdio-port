// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$AEFFKMDOLHP @ RVA 0x32C81A0

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__AEFFKMDOLHP
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,bool CGDBMBLKBAB,
               MethodInfo *method)

{
  bool bVar1;
  GKLPDMLELJF_o *pGVar2;
  EEOMEMBBGNA_o *__this_00;
  System_Action_KEFHDOHHHML__o *HFHIAKJDOGK;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  EOLFEKNCPLM_o *pEVar3;
  int64_t KNPEFJLKLAL;
  
  method_00 = (MethodInfo *)(ulong)CGDBMBLKBAB;
                    /* try { // try from 033c81ac to 034c81af has its CatchHandler @ 033c82f8 */
                    /* try { // try from 033c81b0 to 034c81b3 has its CatchHandler @ 033c82f4 */
                    /* try { // try from 033c81b4 to 034c81cf has its CatchHandler @ 033c79c8 */
  if ((DAT_045674ff & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033c81d0 to 034c81df has its CatchHandler @ 033c827c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
                    /* try { // try from 033c81e8 to 034c81f7 has its CatchHandler @ 033c82ac */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_PCJNNJKEJJE__);
    DAT_045674ff = 1;
    method_00 = extraout_x1;
  }
  if (!CGDBMBLKBAB) {
    pEVar3 = (__this->fields).MLAAJICBOAD;
                    /* try { // try from 033c8200 to 034c8203 has its CatchHandler @ 033c8278 */
    if ((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
       (pGVar2 = (pEVar3->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
                    /* try { // try from 033c820c to 034c820f has its CatchHandler @ 033c8274 */
      bVar1 = GKLPDMLELJF__ODJAMCJCHGG(pGVar2,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
      if (!bVar1) goto LAB_033c82a0;
                    /* try { // try from 033c8218 to 034c821b has its CatchHandler @ 033c8270 */
                    /* try { // try from 033c8224 to 034c8227 has its CatchHandler @ 033c826c */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033c8230 to 034c8233 has its CatchHandler @ 033c8268 */
      __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      pEVar3 = (__this->fields).MLAAJICBOAD;
                    /* try { // try from 033c823c to 034c823f has its CatchHandler @ 033c8264 */
      if ((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
         (pGVar2 = (pEVar3->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
                    /* try { // try from 033c8248 to 034c824b has its CatchHandler @ 033c8260 */
        KNPEFJLKLAL = (pGVar2->fields).ADEIKPGDIPM.fields.value;
                    /* try { // try from 033c8250 to 034c82eb has its CatchHandler @ 033c8658 */
                    /* catch() { ... } // from try @ 033c7fa4 with catch @ 033c8258 */
        HFHIAKJDOGK = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch() { ... } // from try @ 033c8248 with catch @ 033c8260 */
                    /* catch() { ... } // from try @ 033c823c with catch @ 033c8264 */
                    /* catch() { ... } // from try @ 033c8230 with catch @ 033c8268 */
                    /* catch() { ... } // from try @ 033c8224 with catch @ 033c826c */
                    /* catch() { ... } // from try @ 033c8218 with catch @ 033c8270 */
                    /* catch() { ... } // from try @ 033c820c with catch @ 033c8274 */
                    /* catch() { ... } // from try @ 033c8200 with catch @ 033c8278 */
        System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 033c81d0 with catch @ 033c827c */
        if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
                    /* catch() { ... } // from try @ 033c8130 with catch @ 033c8288 */
                    /* catch() { ... } // from try @ 033c8120 with catch @ 033c828c */
                    /* catch() { ... } // from try @ 033c8084 with catch @ 033c8290 */
                    /* catch() { ... } // from try @ 033c8050 with catch @ 033c8294 */
                    /* catch() { ... } // from try @ 033c7ff0 with catch @ 033c8298 */
          EEOMEMBBGNA__BGDACMBMPJP(__this_00,KNPEFJLKLAL,HFHIAKJDOGK,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033c80fc with catch @ 033c82b4 */
    FUN_01bab8c8();
  }
LAB_033c82a0:
                    /* catch() { ... } // from try @ 033c81e8 with catch @ 033c82ac */
  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__PCFDKMIEHNG(__this,method_00);
  return;
}

