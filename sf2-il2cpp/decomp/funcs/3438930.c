// Nekki.SF2.GUI.Shop.ShopScene$$GNBIFHFHBEL @ RVA 0x3438930

void Nekki_SF2_GUI_Shop_ShopScene__GNBIFHFHBEL
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  
  if ((DAT_045681b0 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_HideButton__);
    DAT_045681b0 = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_IsPaidItemsAvailable(__this,method);
  method_00 = extraout_x1_00;
  if (!bVar1) {
    pNVar2 = (__this->fields).GJIPOBCNEPG;
    if (pNVar2 == (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) goto LAB_035389c0;
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__HideButton
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar2,5,
               Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_HideButton__);
    method_00 = extraout_x1_01;
  }
  bVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_IsFreeItemsAvailable(__this,method_00);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields).GJIPOBCNEPG;
  if (pNVar2 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__HideButton
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar2,7,
               Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_HideButton__);
    return;
  }
LAB_035389c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

