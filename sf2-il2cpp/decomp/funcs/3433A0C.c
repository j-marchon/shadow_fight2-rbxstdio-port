// Nekki.SF2.GUI.Shop.ShopScene$$DGFADJKJNMM @ RVA 0x3433A0C

void Nekki_SF2_GUI_Shop_ShopScene__DGFADJKJNMM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._ItemProperties;
  if (((pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
      (__this_00 = (pNVar1->fields)._MoveButton, __this_00 != (UnityEngine_UI_Button_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__FMBFAPGPDPF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

