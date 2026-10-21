// Nekki.SF2.GUI.Shop.ItemsPanel$$get_SelectedItemInfo @ RVA 0x310D320

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar3;
  
                    /* catch() { ... } // from try @ 0320d2f8 with catch @ 0320d33c */
  if ((DAT_0456655a & 1) == 0) {
                    /* try { // try from 0320d344 to 0330d34b has its CatchHandler @ 0320d360 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0320d34c to 0330d357 has its CatchHandler @ 0320d1b4 */
    DAT_0456655a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0320d358 to 0330d35f has its CatchHandler @ 0320d360 */
  pNVar3 = (__this->fields).HCMDPJADLOL;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320d344 with catch @ 0320d360
                       catch(type#2 @ 00000000) { ... } // from try @ 0320d358 with catch @ 0320d360
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pHVar2 = (HOOAAGABMBL_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields).HCMDPJADLOL;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar2 = (pNVar3->fields).IHKJJFAEEHM;
  }
  return pHVar2;
}

