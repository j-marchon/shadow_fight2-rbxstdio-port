// Nekki.SF2.GUI.Shop.PerkProgressBar$$EICIAPIEEAP @ RVA 0x3117D7C

float Nekki_SF2_GUI_Shop_PerkProgressBar__EICIAPIEEAP
                (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar2;
  
  if ((DAT_045665c7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045665c7 = 1;
    method = extraout_x1;
  }
  fVar2 = (__this->fields).PAIPMANMCFP;
  if ((fVar2 < 0.0) || ((__this->fields).PLGLBIKNOLG < 0.0)) {
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
                    /* try { // try from 03217e34 to 03317ec7 has its CatchHandler @ 03217e34
                       catch() { ... } // from try @ 03217e34 with catch @ 03217e34
                       catch() { ... } // from try @ 03218030 with catch @ 03217e34
                       catch() { ... } // from try @ 032180d8 with catch @ 03217e34
                       catch() { ... } // from try @ 032181ac with catch @ 03217e34 */
  return fVar2;
}

