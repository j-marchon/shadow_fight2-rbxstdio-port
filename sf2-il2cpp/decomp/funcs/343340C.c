// Nekki.SF2.GUI.Shop.ShopScene$$JINDJMBNDGM @ RVA 0x343340C

void Nekki_SF2_GUI_Shop_ShopScene__JINDJMBNDGM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  undefined8 *puVar1;
  int iVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar4;
  
  if ((DAT_0456817b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&StringLiteral_12038);
    FUN_01bab630(&StringLiteral_12037);
    FUN_01bab630(&StringLiteral_12034);
    FUN_01bab630(&StringLiteral_12035);
    DAT_0456817b = 1;
  }
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  pSVar4 = (CNDPGGAFHEA->fields)._GJPBKHJCFBE_k__BackingField;
  if ((pSVar4 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) &&
     (pNVar3 = (__this->fields)._ItemProperties, pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0)) {
    iVar2 = (pSVar4->fields)._size;
    puVar1 = &StringLiteral_12037;
    if (iVar2 < 1) {
      puVar1 = &StringLiteral_12038;
    }
    Nekki_SF2_GUI_Shop_SidePanel__set_OpenImage(pNVar3,(System_String_o *)*puVar1,(MethodInfo *)0x0)
    ;
    pNVar3 = (__this->fields)._ItemProperties;
    if (pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
      puVar1 = &StringLiteral_12034;
      if (iVar2 < 1) {
        puVar1 = &StringLiteral_12035;
      }
      Nekki_SF2_GUI_Shop_SidePanel__set_CloseImage
                (pNVar3,(System_String_o *)*puVar1,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
      if (__this_00 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
        Nekki_SF2_GUI_Shop_PropertiesPanelContent__set_ItemInfo
                  (__this_00,CNDPGGAFHEA,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

