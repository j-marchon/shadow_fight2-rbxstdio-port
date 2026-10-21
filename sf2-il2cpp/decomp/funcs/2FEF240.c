// Nekki.SF2.GUI.Fight.EndFightScreen$$PKPDECFBAKK @ RVA 0x2FEF240

bool Nekki_SF2_GUI_Fight_EndFightScreen__PKPDECFBAKK
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,FCJBEKHDLAF_o *MHOFCOHFCGL,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  LPAPAMPGDFN_o *__this_00;
  IGPDCHBJAPD_o *__this_01;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04565a56 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565a56 = 1;
  }
  if (MHOFCOHFCGL != (FCJBEKHDLAF_o *)0x0) {
    iVar2 = FCJBEKHDLAF__IHMLDBDLJON(MHOFCOHFCGL,(MethodInfo *)0x0);
    if (iVar2 == 5) {
      return false;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
       (__this_00 = (pAVar3->fields).LMCDOMHENMC, __this_00 != (LPAPAMPGDFN_o *)0x0)) {
      bVar1 = LPAPAMPGDFN__LBMNAEJPNNJ(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      __this_01 = (__this->fields).CIKGADOJJMG;
      if (__this_01 != (IGPDCHBJAPD_o *)0x0) {
        bVar1 = IGPDCHBJAPD__DONKDCJLBPN(__this_01,(MethodInfo *)0x0);
        return !bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

