// FCJBEKHDLAF$$IINOGMNAIII @ RVA 0x33E4B5C

void FCJBEKHDLAF__IINOGMNAIII
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_GNGMELOMKNL_o *CCMEIJGPBLE,MethodInfo *method)

{
  float GCFNBDDDGIF;
  bool bVar1;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  AFFHKININGD_o *pAVar2;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar3;
  float fVar4;
  
  if (CCMEIJGPBLE != (OLKKAIFGGAK_GNGMELOMKNL_o *)0x0) {
    fVar4 = (CCMEIJGPBLE->fields).JAICMIMBIOA * 100.0;
    bVar1 = false;
    if ((97.0 < fVar4 && (CCMEIJGPBLE->fields).PJGBIHBEFBK == 0xc) && (bVar1 = false, !NAN(fVar4)))
    {
      bVar1 = fVar4 < 100.0;
    }
    GCFNBDDDGIF = 97.0;
    if (!bVar1) {
      GCFNBDDDGIF = fVar4;
    }
    if ((CCMEIJGPBLE->fields).HMJOAMFPODG != 0) {
      pAVar2 = (__this->fields).FBFPLEFCDOK;
      if (pAVar2 == (AFFHKININGD_o *)0x0) goto LAB_034e4c2c;
      if ((pAVar2->fields).JDNKKGPNHPB != 0x11) {
        return;
      }
    }
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((pNVar3 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) &&
       (__this_00 = (pNVar3->fields)._ActionButtons,
       __this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0)) {
      Nekki_SF2_Core_Fights_Controls_ActionButtons__SetNeededPercentageToActBtn
                (__this_00,(CCMEIJGPBLE->fields).PJGBIHBEFBK,GCFNBDDDGIF,
                 (float)(CCMEIJGPBLE->fields).EGNNBHJHNON,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034e4c2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

