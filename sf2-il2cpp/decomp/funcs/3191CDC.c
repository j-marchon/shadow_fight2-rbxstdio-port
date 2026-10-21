// Nekki.SF2.GUI.Shop.ShopTableViewCell.<>c$$MLHFGMCEHLM @ RVA 0x3191CDC

void Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c__MLHFGMCEHLM
               (Nekki_SF2_GUI_Shop_ShopTableViewCell___c_o *__this,bool p_isHintShowed,
               bool p_createdByAnimation,MethodInfo *method)

{
  long lVar1;
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_00;
  
  if ((DAT_04566a45 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04566a45 = 1;
  }
  if (p_createdByAnimation) {
    return;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    if (*(int *)(**(long **)(lVar1 + 0xb8) + 0x1c8) != 0) {
      return;
    }
    lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    if ((**(long **)(lVar1 + 0xb8) != 0) &&
       (__this_00 = *(Nekki_SF2_GUI_Shop_SidePanel_o **)(**(long **)(lVar1 + 0xb8) + 0x100),
       __this_00 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0)) {
      Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this_00,p_isHintShowed,-1.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

