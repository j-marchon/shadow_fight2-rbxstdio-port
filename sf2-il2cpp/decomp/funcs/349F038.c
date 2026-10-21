// Nekki.SF2.GUI.Map.MapPanel$$EnableScrolling @ RVA 0x349F038

void Nekki_SF2_GUI_Map_MapPanel__EnableScrolling
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar3;
  
  pNVar3 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    pNVar2 = (pNVar3->fields)._itemsScroll;
    if (CJNHFNHJHPE) {
      bVar1 = (__this->fields)._LGKLAOCDMGF_k__BackingField == false;
    }
    else {
      bVar1 = false;
    }
    if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
      Nekki_SF2_GUI_ItemsScroll__set_EnableDragging(pNVar2,bVar1,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._IENOFGNDANH_k__BackingField;
      if (pNVar3 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
        pNVar2 = (pNVar3->fields)._itemsScroll;
        if (CJNHFNHJHPE) {
          bVar1 = (__this->fields)._LGKLAOCDMGF_k__BackingField == false;
        }
        else {
          bVar1 = false;
        }
        if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
          (pNVar2->fields).super.m_Horizontal = bVar1;
          (pNVar2->fields).super.m_Vertical = false;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

