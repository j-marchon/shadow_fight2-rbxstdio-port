// Nekki.SF2.GUI.Shop.ShopScene$$BNIAIFODLJK @ RVA 0x3435248

void Nekki_SF2_GUI_Shop_ShopScene__BNIAIFODLJK
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,Nekki_SF2_GUI_TableViewCell_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *y;
  
  if ((DAT_04568189 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568189 = 1;
  }
  pNVar3 = (__this->fields)._ItemsPanel;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    y = (pNVar3->fields).HCMDPJADLOL;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)y,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    uVar1 = (__this->fields).AIAODGKGPEI;
    if ((uVar1 < 5) || (uVar1 == 6)) {
      Nekki_SF2_GUI_Shop_ShopScene__OnTryItemButtonClick(__this,method_00);
      return;
    }
    __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent(__this,method_00);
    if (__this_00 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) {
      Nekki_SF2_GUI_Shop_InfoPanelContent__PaymentOrFreeDoubleClickBuy(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

