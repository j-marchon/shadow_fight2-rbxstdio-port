// Nekki.SF2.GUI.Shop.ItemsPanel$$UpdateScrollItems @ RVA 0x310F1DC

void Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  Nekki_SF2_GUI_TableView_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar3;
  
  if ((DAT_04566576 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566576 = 1;
    method = extraout_x1;
  }
  pHVar2 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this,method);
  Nekki_SF2_GUI_Shop_ItemsPanel__NPILGOBEDEI(__this,(__this->fields).BAADKBDJJPJ,in_x2);
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).HCMDPJADLOL;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((pHVar2 != (HOOAAGABMBL_o *)0x0) && (bVar1)) {
      pNVar3 = (__this->fields).HCMDPJADLOL;
      if (pNVar3 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) goto LAB_0320f29c;
      if (pHVar2 != (pNVar3->fields).IHKJJFAEEHM) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                  (__this,(pHVar2->fields)._COIPKAKHDFP_k__BackingField,0.0,method_00);
        return;
      }
    }
    return;
  }
LAB_0320f29c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

