// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToPrevItem @ RVA 0x310EE1C

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToPrevItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,float GGMALJLKHHB,int32_t JGEFFOIOPFI,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *x;
  
  if ((DAT_0456656b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456656b = 1;
  }
  x = (__this->fields).HCMDPJADLOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    __this_00 = (__this->fields)._TableView;
    uVar1 = (__this->fields).AINAHFKFDKG - JGEFFOIOPFI;
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    (__this->fields).AINAHFKFDKG = uVar1;
    if (__this_00 == (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,uVar1,GGMALJLKHHB,(MethodInfo *)0x0);
  }
  return (bool)(~bVar2 & 1);
}

