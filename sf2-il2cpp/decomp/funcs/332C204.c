// Nekki.SF2.GUI.Fight.ComboModel$$JMMHIPLMPMG @ RVA 0x332C204

int32_t Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG
                  (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t ACCIHBHMFPN,int32_t LHLELGFDIAP,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_045678cc & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045678cc = 1;
  }
  if (ACCIHBHMFPN == 3) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = MGNPHCAAEIO__EOJFKNELJMG((MethodInfo *)0x0);
    return iVar1 + LHLELGFDIAP & (iVar1 + LHLELGFDIAP >> 0x1f ^ 0xffffffffU);
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ACCIHBHMFPN == 4) {
    iVar1 = MGNPHCAAEIO__ENEPBBBBAII((MethodInfo *)0x0);
    return iVar1;
  }
  iVar1 = MGNPHCAAEIO__GEFJDOMPJJH((MethodInfo *)0x0);
  return iVar1;
}

