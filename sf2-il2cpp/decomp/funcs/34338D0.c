// Nekki.SF2.GUI.Shop.ShopScene$$OAJODMIPLPF @ RVA 0x34338D0

void Nekki_SF2_GUI_Shop_ShopScene__OAJODMIPLPF
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent(__this,(MethodInfo *)CNDPGGAFHEA);
  if (__this_00 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__set_ItemInfo(__this_00,CNDPGGAFHEA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

