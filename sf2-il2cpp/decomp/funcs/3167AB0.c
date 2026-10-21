// Nekki.SF2.GUI.Menu.MenuMaterialUI$$get_MaterialCount @ RVA 0x3167AB0

int32_t Nekki_SF2_GUI_Menu_MenuMaterialUI__get_MaterialCount
                  (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
                    /* catch() { ... } // from try @ 03267a80 with catch @ 03267ab0 */
                    /* catch() { ... } // from try @ 032678e0 with catch @ 03267ab4 */
                    /* catch() { ... } // from try @ 03267918 with catch @ 03267ab8 */
                    /* catch() { ... } // from try @ 03267890 with catch @ 03267abc */
                    /* catch() { ... } // from try @ 03267834 with catch @ 03267ac0 */
  if ((DAT_045668cb & 1) == 0) {
                    /* try { // try from 03267ad0 to 03367ad3 has its CatchHandler @ 03267ae4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668cb = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03267ad0 with catch @ 03267ae4 */
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
                    /* try { // try from 03267b24 to 03367b4b has its CatchHandler @ 03267b60 */
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__FCPIAEEKGEL(__this_00,(__this->fields).FICNNKFIABO,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* try { // try from 03267b4c to 03367b57 has its CatchHandler @ 0326758c */
  return -1;
}

