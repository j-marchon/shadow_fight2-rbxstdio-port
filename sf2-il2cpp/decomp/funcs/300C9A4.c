// Nekki.SF2.GUI.Shop.InfoPanelContent.<>c$$AIBGCCPEGJG @ RVA 0x300C9A4

int32_t Nekki_SF2_GUI_Shop_InfoPanelContent_<>c__AIBGCCPEGJG
                  (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *__this,IconLabelButton_o *b1,
                  IconLabelButton_o *b2,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *pUVar3;
  
  if ((b1 != (IconLabelButton_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)b1,(MethodInfo *)0x0)
     , __this = (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *)0x0,
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    uVar1 = UnityEngine_Transform__GetSiblingIndex(pUVar3,(MethodInfo *)0x0);
    __this = (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *)(ulong)uVar1;
    if ((b2 != (IconLabelButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)b2,(MethodInfo *)0x0),
       __this = (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *)0x0,
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      iVar2 = UnityEngine_Transform__GetSiblingIndex(pUVar3,(MethodInfo *)0x0);
      return uVar1 - iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

