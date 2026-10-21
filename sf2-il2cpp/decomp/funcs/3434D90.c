// Nekki.SF2.GUI.Shop.ShopScene$$Refresh @ RVA 0x3434D90

void Nekki_SF2_GUI_Shop_ShopScene__Refresh
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this_01;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_02;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar2;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this_04;
  
  if ((DAT_045681a7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045681a7 = 1;
    method = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent(__this,method);
  if (__this_00 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__Refresh(__this_00,(MethodInfo *)0x0);
    __this_01 = Nekki_SF2_GUI_Shop_ShopScene__get_ParametersPanelContent(__this,method_00);
    if (__this_01 != (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *)0x0) {
      Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToRefresh(__this_01,0.0,(MethodInfo *)0x0);
      __this_02 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_01);
      if (__this_02 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
        Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll(__this_02,(MethodInfo *)0x0);
        __this_03 = (__this->fields)._ForgePanel;
        if (__this_03 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
          Nekki_SF2_GUI_Shop_Forge_ForgePanel__NeedToRefresh(__this_03,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._ItemsPanel;
          if (pNVar2 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
            __this_04 = (pNVar2->fields).HCMDPJADLOL;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            method_02 = (MethodInfo *)0x0;
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            if (__this_04 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
              Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK
                        (__this,(__this_04->fields).IHKJJFAEEHM,method_02);
              Nekki_SF2_GUI_Shop_ShopTableViewCell__UpdateItem(__this_04,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

