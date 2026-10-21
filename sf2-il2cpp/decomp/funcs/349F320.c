// Nekki.SF2.GUI.Map.MapPanel$$GetCurrentItemIndex @ RVA 0x349F320

int32_t Nekki_SF2_GUI_Map_MapPanel__GetCurrentItemIndex
                  (Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_Shop_Scroll__GetCurrentItemIndex(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

