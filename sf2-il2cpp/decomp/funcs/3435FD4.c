// Nekki.SF2.GUI.Shop.ShopScene$$ShowSidePanels @ RVA 0x3435FD4

void Nekki_SF2_GUI_Shop_ShopScene__ShowSidePanels
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool value;
  
  if (CJNHFNHJHPE) {
    value = 2 < (__this->fields).AIAODGKGPEI - 5U;
  }
  else {
    value = false;
  }
  pNVar1 = (__this->fields)._ItemInfo;
  if ((pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ItemParameters;
    if ((pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._ItemProperties;
      if ((pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

