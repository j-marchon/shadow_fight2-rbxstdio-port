// Nekki.SF2.GUI.Shop.ShopScene$$FPBABLHJOMH @ RVA 0x3435F58

void Nekki_SF2_GUI_Shop_ShopScene__FPBABLHJOMH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_00;
  LabelButton_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  
  if ((DAT_0456818e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_EnableAllButtons__);
    DAT_0456818e = 1;
  }
  __this_00 = (__this->fields).GJIPOBCNEPG;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__EnableAllButtons
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_00,
               Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_EnableAllButtons__);
    __this_01 = (__this->fields)._TryItemButton;
    if ((__this_01 != (LabelButton_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ShopScene__ShowSidePanels(__this,false,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

