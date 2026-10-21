// Nekki.SF2.GUI.Shop.PerkProgressBar$$HJDCCABBLKF @ RVA 0x3118184

float Nekki_SF2_GUI_Shop_PerkProgressBar__HJDCCABBLKF
                (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar2;
  
                    /* try { // try from 03218184 to 033181ab has its CatchHandler @ 032181c0 */
  if ((DAT_045665c9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032181ac to 033181b7 has its CatchHandler @ 03217e34 */
    DAT_045665c9 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032181b8 to 033181bf has its CatchHandler @ 032181c0 */
                    /* catch() { ... } // from try @ 03218184 with catch @ 032181c0
                       catch() { ... } // from try @ 032181b8 with catch @ 032181c0 */
                    /* try { // try from 032181c4 to 0331828f has its CatchHandler @ 032181c4
                       catch() { ... } // from try @ 032181c4 with catch @ 032181c4
                       catch() { ... } // from try @ 032182d8 with catch @ 032181c4
                       catch() { ... } // from try @ 03218330 with catch @ 032181c4
                       catch() { ... } // from try @ 03218364 with catch @ 032181c4
                       catch() { ... } // from try @ 03218394 with catch @ 032181c4 */
  if (((__this->fields).PAIPMANMCFP < 0.0) || (fVar2 = (__this->fields).PLGLBIKNOLG, fVar2 < 0.0)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    fVar2 = (__this->fields).JHMGOHBKNMG * (float)iVar1 + (__this->fields).NMLGPAGEDKH;
  }
  return fVar2;
}

