// Nekki.SF2.GUI.Fight.StylePanel$$get_CurrentStyleName @ RVA 0x3293894

System_String_o *
Nekki_SF2_GUI_Fight_StylePanel__get_CurrentStyleName
          (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  KKCEIILPLEC_Fields *pKVar1;
  NDGHNMIHOMN_o *__this_00;
  KKCEIILPLEC_o *pKVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567347 & 1) == 0) {
                    /* try { // try from 033938b8 to 034938bf has its CatchHandler @ 03393a70 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 033938cc to 034938d7 has its CatchHandler @ 03393a68 */
    DAT_04567347 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->EMBDCDBPFFE;
  if (__this_00 != (NDGHNMIHOMN_o *)0x0) {
    pKVar2 = NDGHNMIHOMN__PBOALOOBNEK(__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    pKVar1 = (KKCEIILPLEC_Fields *)&StringLiteral_1;
    if (pKVar2 != (KKCEIILPLEC_o *)0x0) {
      pKVar1 = &pKVar2->fields;
    }
                    /* try { // try from 03393918 to 03493927 has its CatchHandler @ 03393a64 */
    return pKVar1->JIJLBFGKNJK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

