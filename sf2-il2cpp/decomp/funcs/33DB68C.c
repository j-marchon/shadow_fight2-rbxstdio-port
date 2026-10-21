// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$set_ItemInfo @ RVA 0x33DB68C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__set_ItemInfo
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  HOOAAGABMBL_o **ppHVar1;
  
  ppHVar1 = &(__this->fields).PCBECBEFJOI;
  *ppHVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppHVar1);
  if (((__this->fields).DMAFCPPFLEN == (GGLKHCAIGDI_o *)0x0) &&
     (((__this->fields).NBAADNACNDJ & 0xfffffffeU) == 2)) {
    (__this->fields).LJCKJIAEIGD = true;
    return;
  }
  Nekki_SF2_GUI_Shop_Forge_ForgePanel__LPNCEHPFOAF(__this,method_00);
  return;
}

