// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$UpdateRubySale @ RVA 0x344D890

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateRubySale
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  DOPEEDABNEK_o *__this_00;
  int64_t CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  
  if ((DAT_04568284 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568284 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super._BOGAKJOFOEK_k__BackingField != false) {
                    /* try { // try from 0354d8cc to 0364d8f7 has its CatchHandler @ 0354dadc */
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (DOPEEDABNEK_o *)0x0) {
    CJNHFNHJHPE = DOPEEDABNEK__GHLLHJDMMNF(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0354d934 to 0364d93b has its CatchHandler @ 0354dad0 */
    Nekki_SF2_GUI_Menu_MenuMoneyPanel__NHJPFEPAEFN(__this,CJNHFNHJHPE,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0354d944 to 0364d94b has its CatchHandler @ 0354dad4 */
  FUN_01bab8c8();
}

