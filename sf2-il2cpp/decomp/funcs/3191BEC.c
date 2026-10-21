// Nekki.SF2.GUI.Shop.ShopTableViewCell$$set_IconPanelActive @ RVA 0x3191BEC

void Nekki_SF2_GUI_Shop_ShopTableViewCell__set_IconPanelActive
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  
                    /* try { // try from 03291bec to 03391bef has its CatchHandler @ 03291c30 */
                    /* try { // try from 03291bf0 to 03391bf3 has its CatchHandler @ 03291c28 */
                    /* try { // try from 03291bf4 to 03391bf7 has its CatchHandler @ 03291c1c */
                    /* try { // try from 03291bf8 to 03391bfb has its CatchHandler @ 0329172c */
                    /* try { // try from 03291bfc to 03391bff has its CatchHandler @ 03291c14 */
                    /* try { // try from 03291c00 to 03391c03 has its CatchHandler @ 03291c0c */
                    /* catch() { ... } // from try @ 03291ab4 with catch @ 03291c04
                       try { // try from 03291c04 to 03391c67 has its CatchHandler @ 0329172c */
                    /* catch() { ... } // from try @ 03291acc with catch @ 03291c08 */
                    /* catch() { ... } // from try @ 03291c00 with catch @ 03291c0c */
                    /* catch() { ... } // from try @ 03291ae0 with catch @ 03291c10 */
  if ((DAT_04566a43 & 1) == 0) {
                    /* catch() { ... } // from try @ 03291bfc with catch @ 03291c14 */
                    /* catch() { ... } // from try @ 03291ae8 with catch @ 03291c18 */
                    /* catch() { ... } // from try @ 03291bf4 with catch @ 03291c1c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 032919a0 with catch @ 03291c20 */
                    /* catch() { ... } // from try @ 03291988 with catch @ 03291c24 */
    DAT_04566a43 = 1;
  }
                    /* catch() { ... } // from try @ 03291bf0 with catch @ 03291c28 */
                    /* catch() { ... } // from try @ 032919ec with catch @ 03291c2c */
  pUVar2 = (__this->fields)._iconPanel;
                    /* catch() { ... } // from try @ 03291bec with catch @ 03291c30 */
                    /* catch() { ... } // from try @ 03291be8 with catch @ 03291c34 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03291970 with catch @ 03291c38 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 03291be4 with catch @ 03291c3c */
                    /* catch() { ... } // from try @ 032919d8 with catch @ 03291c40 */
                    /* catch() { ... } // from try @ 0329194c with catch @ 03291c44 */
                    /* catch() { ... } // from try @ 03291a50 with catch @ 03291c48 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03291a74 with catch @ 03291c4c */
  if (bVar1) {
                    /* catch() { ... } // from try @ 03291a1c with catch @ 03291c50 */
    pUVar2 = (__this->fields)._iconPanel;
                    /* catch() { ... } // from try @ 03291a58 with catch @ 03291c54 */
                    /* catch() { ... } // from try @ 03291bdc with catch @ 03291c58 */
    if ((pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03291c68 to 03391c6b has its CatchHandler @ 03291c98 */
                    /* try { // try from 03291c6c to 03391ca7 has its CatchHandler @ 0329172c */
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ShopTableViewCell__CDEPJFBHKID(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

