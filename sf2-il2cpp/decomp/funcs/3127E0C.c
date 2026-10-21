// Nekki.SF2.GUI.Shop.ItemsPanel.DEODPPLKFFN$$GOPCDAFILKC @ RVA 0x3127E0C

bool Nekki_SF2_GUI_Shop_ItemsPanel_DEODPPLKFFN__GOPCDAFILKC
               (Nekki_SF2_GUI_Shop_ItemsPanel_DEODPPLKFFN_o *__this,IGFGDDANEPE_o *p_item,
               MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o *pHVar3;
  
  if (p_item != (IGFGDDANEPE_o *)0x0) {
    pHVar2 = (p_item->fields).PCBECBEFJOI;
    if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
      return false;
    }
    pHVar3 = (__this->fields).p_itemInfo;
    if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
      bVar1 = System_String__op_Equality
                        ((pHVar2->fields)._COIPKAKHDFP_k__BackingField,
                         (pHVar3->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

