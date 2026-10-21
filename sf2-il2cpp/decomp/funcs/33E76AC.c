// FCJBEKHDLAF$$CDMKPLACPMB @ RVA 0x33E76AC

void FCJBEKHDLAF__CDMKPLACPMB
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_GNGMELOMKNL_o *CCMEIJGPBLE,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar1;
  
  if (DAT_04565c84 == '\0') {
    __this = (FCJBEKHDLAF_o *)FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04565c84 = '\x01';
  }
  pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if (((pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) &&
      (CCMEIJGPBLE != (OLKKAIFGGAK_GNGMELOMKNL_o *)0x0)) &&
     (__this_00 = (pNVar1->fields)._ActionButtons, __this = (FCJBEKHDLAF_o *)0x0,
     __this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0)) {
                    /* try { // try from 034e76fc to 035e7703 has its CatchHandler @ 034e7760 */
                    /* try { // try from 034e7710 to 035e771f has its CatchHandler @ 034e7758 */
    Nekki_SF2_Core_Fights_Controls_ActionButtons__SetBulletsCountToActBtn
              (__this_00,(CCMEIJGPBLE->fields).PJGBIHBEFBK,(CCMEIJGPBLE->fields).CKOLCJBGDEH,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

