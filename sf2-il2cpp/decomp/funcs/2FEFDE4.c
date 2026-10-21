// Nekki.SF2.GUI.Fight.EndFightScreen$$EKFIBOAGPNF @ RVA 0x2FEFDE4

bool Nekki_SF2_GUI_Fight_EndFightScreen__EKFIBOAGPNF
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,FCJBEKHDLAF_o *MHOFCOHFCGL,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  OOMHDDBCBJP_o *__this_00;
  System_String_o *__this_01;
  IGPDCHBJAPD_o *__this_02;
  AFFHKININGD_o *pAVar3;
  
  if ((DAT_04565a5a & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_12439);
    DAT_04565a5a = 1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = FCJBEKHDLAF__FMHOFPCOKPH((MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if ((MHOFCOHFCGL != (FCJBEKHDLAF_o *)0x0) &&
     (pAVar3 = (MHOFCOHFCGL->fields).FBFPLEFCDOK, pAVar3 != (AFFHKININGD_o *)0x0)) {
    if ((pAVar3->fields).HECJHMJKFGB != false) {
      return false;
    }
    __this_00 = (pAVar3->fields).IFJLLGPGMHM;
    if ((__this_00 != (OOMHDDBCBJP_o *)0x0) &&
       (__this_01 = OOMHDDBCBJP__LOHPFCGCHNH(__this_00,(MethodInfo *)0x0),
       __this_01 != (System_String_o *)0x0)) {
      bVar1 = System_String__Contains(__this_01,StringLiteral_12439,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      __this_02 = (__this->fields).CIKGADOJJMG;
      if (__this_02 != (IGPDCHBJAPD_o *)0x0) {
        bVar1 = IGPDCHBJAPD__DONKDCJLBPN(__this_02,(MethodInfo *)0x0);
        if (!bVar1) {
          return true;
        }
        iVar2 = FCJBEKHDLAF__IHMLDBDLJON(MHOFCOHFCGL,(MethodInfo *)0x0);
        return iVar2 == 5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

