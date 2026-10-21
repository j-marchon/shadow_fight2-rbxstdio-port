// Nekki.SF2.GUI.Shop.ShopScene$$OpenForgeAndSetRecipe @ RVA 0x3433350

void Nekki_SF2_GUI_Shop_ShopScene__OpenForgeAndSetRecipe
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,System_String_o *JNCMFLKJJMP,
               MethodInfo *method)

{
  bool bVar1;
  DEKKGJNMFEB_o *__this_00;
  GGLKHCAIGDI_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar2;
  
  method_00 = (MethodInfo *)JNCMFLKJJMP;
  if ((DAT_045681b1 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    DAT_045681b1 = 1;
    method_00 = extraout_x1;
  }
  pNVar2 = (__this->fields)._ForgePanel;
  if (pNVar2 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
    if (((uint)(pNVar2->fields).NBAADNACNDJ < 2) ||
       (bVar1 = Nekki_SF2_GUI_Shop_ShopScene__FJLNKLMBKDN(__this,method_00), !bVar1)) {
      return;
    }
    Nekki_SF2_GUI_Shop_ShopScene__set_Mode(__this,1,method);
    pNVar2 = (__this->fields)._ForgePanel;
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((__this_00 != (DEKKGJNMFEB_o *)0x0) &&
       (CJNHFNHJHPE = DEKKGJNMFEB__LDGJEEGACHJ(__this_00,JNCMFLKJJMP,(MethodInfo *)0x0),
       pNVar2 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) {
      Nekki_SF2_GUI_Shop_Forge_ForgePanel__set_CurrentRecipe(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

