// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$NHNIKKNAAPF @ RVA 0x35AE768

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NHNIKKNAAPF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  PEEIMHCMDND_o *__this_01;
  MethodInfo *method_00;
  IFFFKKMMKFO_o *pIVar2;
  GKLPDMLELJF_o *pGVar3;
  
  if ((DAT_04568e6e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568e6e = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
    pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if (((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
        (pGVar3 = (pIVar2->fields)._IPNPNPOLCFO_k__BackingField, pGVar3 != (GKLPDMLELJF_o *)0x0)) &&
       (__this_01 != (PEEIMHCMDND_o *)0x0)) {
      PEEIMHCMDND__JDONKPBCNLL(__this_01,(pGVar3->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
      EDFDANKEBGF__NEOHABBBGKE(1.0,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

