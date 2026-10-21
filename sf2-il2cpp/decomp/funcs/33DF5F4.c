// Nekki.SF2.GUI.Pvp.PhaseWeapon$$LNBMOMMOHCB @ RVA 0x33DF5F4

bool Nekki_SF2_GUI_Pvp_PhaseWeapon__LNBMOMMOHCB
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,HOOAAGABMBL_o *KEFILECBPMF,
               MethodInfo *method)

{
  bool bVar1;
  BNAIBAODKAK_o *pBVar2;
  
  if ((KEFILECBPMF != (HOOAAGABMBL_o *)0x0) &&
     (pBVar2 = (__this->fields).super.KPLEAGPMKFD, pBVar2 != (BNAIBAODKAK_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((KEFILECBPMF->fields)._COIPKAKHDFP_k__BackingField,
                       (pBVar2->fields).MHBAKHIIJLP,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

