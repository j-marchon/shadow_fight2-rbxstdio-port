// Nekki.SF2.GUI.Map.MapPanel$$ScrollToZone @ RVA 0x349E55C

void Nekki_SF2_GUI_Map_MapPanel__ScrollToZone
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,int32_t DPJIDNBJIBG,float PNEIGGOFIOA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    Nekki_SF2_GUI_Shop_Scroll__ScrollToItem(__this_00,DPJIDNBJIBG,PNEIGGOFIOA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

