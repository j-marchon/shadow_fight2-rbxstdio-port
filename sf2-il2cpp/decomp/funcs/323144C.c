// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$EBIMOCGLMPK @ RVA 0x323144C

void Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__EBIMOCGLMPK
               (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CHDGOFBHAFI_o *pCVar2;
  EEGDOGKBLNG_o *__this_00;
  
                    /* try { // try from 0333145c to 0343152f has its CatchHandler @ 03331570 */
  if ((DAT_04566fe2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<FIMAAAOEIGM>__);
    DAT_04566fe2 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<FIMAAAOEIGM>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if ((pIVar1 != (Il2CppObject *)0x0) && (pCVar2 != (CHDGOFBHAFI_o *)0x0)) {
      CHDGOFBHAFI__BNPLDAHKIED(pCVar2,pIVar1[1].monitor,pIVar1[2].monitor,(MethodInfo *)0x0);
      pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
        (pCVar2->fields).GBGHPLFONHD = true;
        if (pIVar1[3].klass != (Il2CppClass *)0x0) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_03331538;
          EEGDOGKBLNG__JOMFHMDCMNG(__this_00,(KAMBBJFPLGM_o *)pIVar1[3].klass,(MethodInfo *)0x0);
        }
        (__this->fields).EIHCLDJIKFO = *(bool_conflict *)&pIVar1[2].klass;
                    /* try { // try from 03331530 to 0343155f has its CatchHandler @ 03331174 */
        return;
      }
    }
  }
LAB_03331538:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

