// AFFHKININGD$$HOCKFCMKBDP @ RVA 0x3341340

void AFFHKININGD__HOCKFCMKBDP(AFFHKININGD_o *__this,MethodInfo *method)

{
  bool bVar1;
  PAMEPBLOLPB_o *pPVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  
  pPVar2 = (__this->fields).JPBIBBBMCCD;
  if (pPVar2 != (PAMEPBLOLPB_o *)0x0) {
                    /* catch() { ... } // from try @ 03440f90 with catch @ 03441358
                       try { // try from 03441358 to 03541367 has its CatchHandler @ 03440e48 */
    bVar1 = PAMEPBLOLPB__KPGJMIHLENM(pPVar2,(__this->fields).PIKNKFHOMLP,(MethodInfo *)0x0);
                    /* try { // try from 03441368 to 0354136b has its CatchHandler @ 0344137c */
    if (((!bVar1) || (pPVar2 = (__this->fields).JPBIBBBMCCD, pPVar2 == (PAMEPBLOLPB_o *)0x0)) ||
       (bVar1 = PAMEPBLOLPB__CKGAMIHJOMC(pPVar2,(__this->fields).PIKNKFHOMLP,(MethodInfo *)0x0),
       bVar1)) {
                    /* catch() { ... } // from try @ 03441368 with catch @ 0344137c */
      return;
    }
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x21,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

