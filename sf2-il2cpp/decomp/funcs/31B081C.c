// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B081C

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,MFFKCPDBFPG_o *HPGAOGEKHKD,MethodInfo *method)

{
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_00;
  MFFKCPDBFPG_o **ppMVar1;
  
  if ((DAT_04566b7a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_AddRange__);
    DAT_04566b7a = 1;
  }
  if (HPGAOGEKHKD == (MFFKCPDBFPG_o *)0x0) {
    return;
  }
  ppMVar1 = &(__this->fields).GPDMCLBBPAD;
  if (*ppMVar1 == (MFFKCPDBFPG_o *)0x0) {
    *ppMVar1 = HPGAOGEKHKD;
    thunk_FUN_01c20e04(ppMVar1,HPGAOGEKHKD);
    return;
  }
  __this_00 = ((*ppMVar1)->fields).EEIGOFDOLKN;
  if (__this_00 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(HPGAOGEKHKD->fields).EEIGOFDOLKN,
               Method_System_Collections_Generic_List<DILGLGMKOFG>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

