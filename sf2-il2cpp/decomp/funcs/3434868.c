// Nekki.SF2.GUI.Shop.ShopScene$$ReloadActiveItemsAndRefresh @ RVA 0x3434868

void Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefresh
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  System_Action_o *pSVar4;
  
  Nekki_SF2_GUI_Shop_ShopScene__FHKMIFJBPEN(__this,method);
  pNVar3 = (__this->fields)._ItemsPanel;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__RememberSelection(pNVar3,(HOOAAGABMBL_o *)0x0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar3,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._ItemsPanel;
      if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastSelection(pNVar3,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Shop_ShopScene__Refresh(__this,method_00);
        bVar2 = Nekki_SF2_GUI_Shop_ShopScene__FJFHCNJBHEP(__this,method_01);
        __this_01 = (__this->fields)._NoItemsMessage;
        if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
          pSVar4 = (__this->fields).ReloadActiveItemsAndRefreshCallback;
          if (pSVar4 != (System_Action_o *)0x0) {
            ppSVar1 = &(__this->fields).ReloadActiveItemsAndRefreshCallback;
            (*(code *)(pSVar4->fields).super.super.invoke_impl)
                      ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method)
            ;
            *ppSVar1 = (System_Action_o *)0x0;
            thunk_FUN_01c20e04(ppSVar1,0);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

