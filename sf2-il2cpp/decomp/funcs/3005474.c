// Nekki.SF2.GUI.Shop.InfoPanelContent$$UpdateContent @ RVA 0x3005474

void Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  undefined1 auVar4 [16];
  
  if ((DAT_04565b53 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04565b53 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar4._8_8_ = method;
  auVar4._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar4 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar4._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar4._8_8_);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (pNVar3 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar2 + 0xb8) + 0x178),
     pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
    Nekki_SF2_GUI_Shop_ItemsPanel__RememberSelection
              (pNVar3,(__this->fields).BBODGCMLKFP,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_InfoPanelContent__Refresh(__this,method_00);
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).updateEvent;
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) != 0) &&
         (pNVar3 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar2 + 0xb8) + 0x178),
         pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastSelection(pNVar3,(MethodInfo *)0x0);
        if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        LHKALFIIJKB__LMNENJFLCEB((MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

