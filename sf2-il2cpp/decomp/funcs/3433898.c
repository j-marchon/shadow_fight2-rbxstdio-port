// Nekki.SF2.GUI.Shop.ShopScene$$IMJPAHJCLHK @ RVA 0x3433898

void Nekki_SF2_GUI_Shop_ShopScene__IMJPAHJCLHK
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  MethodInfo *in_x2;
  
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CNDPGGAFHEA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
  if (CNDPGGAFHEA != (HOOAAGABMBL_o *)0x0) {
    Nekki_SF2_GUI_Shop_ShopScene__OAJODMIPLPF(__this,CNDPGGAFHEA,in_x2);
    return;
  }
  return;
}

