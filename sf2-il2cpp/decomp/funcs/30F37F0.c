// Nekki.SF2.GUI.Shop.ShopScrollItem$$get_IconPanelActive @ RVA 0x30F37F0

bool Nekki_SF2_GUI_Shop_ShopScrollItem__get_IconPanelActive
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  
  if ((DAT_0456643d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456643d = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._iconPanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._iconPanel;
    if ((pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

