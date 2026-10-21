// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$get_LastMaterial @ RVA 0x31511C4

Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *
Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_LastMaterial
          (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_MaterialPriceUI__o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *pNVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456680b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_get_Item__);
    DAT_0456680b = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).MIOLFPIJMDH;
  if (__this_00 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      pNVar2 = (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                          Method_System_Collections_Generic_List<MaterialPriceUI>_get_Item__);
      return pNVar2;
    }
    return (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

