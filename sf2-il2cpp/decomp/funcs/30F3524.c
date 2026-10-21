// Nekki.SF2.GUI.Shop.ShopScrollItem$$set_IconPanelActive @ RVA 0x30F3524

void Nekki_SF2_GUI_Shop_ShopScrollItem__set_IconPanelActive
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  
  if ((DAT_04566438 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566438 = 1;
  }
  pUVar2 = (__this->fields)._iconPanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031f357c to 032f35b7 has its CatchHandler @ 031f357c
                       catch() { ... } // from try @ 031f357c with catch @ 031f357c
                       catch() { ... } // from try @ 031f36d0 with catch @ 031f357c
                       catch() { ... } // from try @ 031f3738 with catch @ 031f357c
                       catch() { ... } // from try @ 031f3790 with catch @ 031f357c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._iconPanel;
    if ((pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 031f35b8 to 032f35cb has its CatchHandler @ 031f3708 */
      Nekki_SF2_GUI_Shop_ShopScrollItem__CDEPJFBHKID(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

