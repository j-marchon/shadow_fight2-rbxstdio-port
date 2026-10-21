// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$Init @ RVA 0x34C3C4C

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__Init
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
                    /* try { // try from 035c3c5c to 036c3c6f has its CatchHandler @ 035c3d80 */
  if ((DAT_04568624 & 1) == 0) {
                    /* try { // try from 035c3c70 to 036c3c73 has its CatchHandler @ 035c3cc0 */
                    /* try { // try from 035c3c74 to 036c3c7b has its CatchHandler @ 035c3ca4 */
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
                    /* try { // try from 035c3c7c to 036c3c7f has its CatchHandler @ 035c3ca0 */
    DAT_04568624 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035c3c80 to 036c3c83 has its CatchHandler @ 035c362c */
                    /* try { // try from 035c3c84 to 036c3c87 has its CatchHandler @ 035c3c9c */
                    /* try { // try from 035c3c88 to 036c3ce3 has its CatchHandler @ 035c362c */
  (__this->fields).GMDIAECHCCO = true;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll(__this,method);
                    /* catch() { ... } // from try @ 035c3b40 with catch @ 035c3c90 */
  (__this->fields).GMDIAECHCCO = false;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__FBPHKFLELNP(__this,method_00);
                    /* catch() { ... } // from try @ 035c3c84 with catch @ 035c3c9c */
                    /* catch() { ... } // from try @ 035c3c7c with catch @ 035c3ca0 */
                    /* catch() { ... } // from try @ 035c3c74 with catch @ 035c3ca4 */
  if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035c38a0 with catch @ 035c3ca8 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 035c38b0 with catch @ 035c3cac */
  }
                    /* catch() { ... } // from try @ 035c388c with catch @ 035c3cb0 */
                    /* catch() { ... } // from try @ 035c3a58 with catch @ 035c3cb4 */
                    /* catch() { ... } // from try @ 035c381c with catch @ 035c3cb8 */
                    /* catch() { ... } // from try @ 035c37c0 with catch @ 035c3cbc */
                    /* catch() { ... } // from try @ 035c3c48 with catch @ 035c3cc0
                       catch() { ... } // from try @ 035c3c70 with catch @ 035c3cc0 */
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__GKPCOMLBGCO
            (__this,FEPCHKMAIBL_TypeInfo->static_fields->PDNICPKGDOL,in_x2);
  return;
}

