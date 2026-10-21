// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_LeftLimit @ RVA 0x303168C

float Nekki_SF2_GUI_Shop_ParameterScrollItem__get_LeftLimit
                (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar2;
  
  if ((DAT_04565d04 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565d04 = 1;
    method = extraout_x1;
  }
  fVar2 = (__this->fields).HJNKDGDBDML;
  if ((fVar2 < 0.0) || ((__this->fields).GPJAHLLAHEA < 0.0)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
                    /* try { // try from 031316e8 to 032316f3 has its CatchHandler @ 03131758 */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 031316f8 to 032316fb has its CatchHandler @ 03131754 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
                    /* try { // try from 03131708 to 0323170f has its CatchHandler @ 0313174c */
                    /* try { // try from 03131710 to 03231747 has its CatchHandler @ 03131634 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031316f8 with catch @ 03131754
                        */
      FUN_01bab8c8();
    }
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    fVar2 = (__this->fields).DNIGDKAHPIG * (float)iVar1 + (float)(__this->fields).KENACCCGOJE;
  }
                    /* try { // try from 03131748 to 0323174b has its CatchHandler @ 03131750 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131708 with catch @ 0313174c
                       try { // try from 0313174c to 0323176f has its CatchHandler @ 03131634 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131748 with catch @ 03131750
                        */
  return fVar2;
}

