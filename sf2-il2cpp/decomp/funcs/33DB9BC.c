// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$CellForRowInTableView @ RVA 0x33DB9BC

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Shop_Forge_ForgePanel__CellForRowInTableView
          (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  GGLKHCAIGDI_o *NDLOGJOGFCA;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *ANMFBABEMFD;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this_02;
  ACHLOMELAJE_o *pAVar1;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_c *pNVar2;
  
                    /* try { // try from 034db9cc to 035db9d7 has its CatchHandler @ 034dba64 */
  if ((DAT_04567e72 & 1) == 0) {
                    /* try { // try from 034db9ec to 035db9ef has its CatchHandler @ 034dba58 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 034db9f0 to 035db9ff has its CatchHandler @ 034dba5c */
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<RecipeUI>__);
    FUN_01bab630(&StringLiteral_6549);
                    /* try { // try from 034dba20 to 035dba27 has its CatchHandler @ 034dbba4 */
    DAT_04567e72 = 1;
  }
  __this_00 = (__this->fields).OKIANCELJJF;
  if (__this_00 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* try { // try from 034dba40 to 035dba4b has its CatchHandler @ 034dbb90 */
    NDLOGJOGFCA = (GGLKHCAIGDI_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,HAJDGFPLGNK,
                             Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Item__);
                    /* try { // try from 034dba50 to 035dba53 has its CatchHandler @ 034dba60 */
                    /* try { // try from 034dba54 to 035dba77 has its CatchHandler @ 034db7cc */
                    /* catch() { ... } // from try @ 034db9ec with catch @ 034dba58 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034db9f0 with catch @ 034dba5c */
                    /* catch() { ... } // from try @ 034dba50 with catch @ 034dba60 */
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
                    /* catch() { ... } // from try @ 034db9cc with catch @ 034dba64 */
                    /* catch() { ... } // from try @ 034db9b0 with catch @ 034dba68 */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 034dba78 to 035dba7b has its CatchHandler @ 034dbb84 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 034dba7c to 035dbb53 has its CatchHandler @ 034db7cc */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar1 != (ACHLOMELAJE_o *)0x0) &&
       (__this_01 = (pAVar1->fields).OIDPLCLELEN, __this_01 != (GGHCLMEFIGO_o *)0x0)) {
      ANMFBABEMFD = GGHCLMEFIGO__JNFIBDBHNOA
                              (__this_01,(__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
      if ((NDLOGJOGFCA == (GGLKHCAIGDI_o *)0x0) || (ANMFBABEMFD == (IGFGDDANEPE_o *)0x0)) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_6549,(MethodInfo *)0x0);
        __this_02 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0;
      }
      else {
        if ((GECPJPBIBPN == (Nekki_SF2_GUI_TableView_o *)0x0) ||
           (__this_02 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)
                        Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                                  (GECPJPBIBPN,HAJDGFPLGNK,
                                   Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<RecipeUI>__),
           __this_02 == (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0)) goto LAB_034dbb60;
        pNVar2 = __this_02->klass;
        (__this_02->fields).MKEPHECGCNP.fields = (__this->fields)._HintOffset.fields;
        (*(pNVar2->vtable)._12_set_Opacity.methodPtr)
                  ((ulong)(uint)(__this->fields)._InactiveTableViewCellOpacity,__this_02,
                   (pNVar2->vtable)._12_set_Opacity.method);
        Nekki_SF2_GUI_Shop_Forge_RecipeUI__Refresh
                  (__this_02,NDLOGJOGFCA,ANMFBABEMFD,(MethodInfo *)0x0);
      }
                    /* try { // try from 034dbb54 to 035dbb6f has its CatchHandler @ 034dbc18 */
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_02;
    }
  }
LAB_034dbb60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

