// Nekki.SF2.GUI.Fight.StyleBar$$Render @ RVA 0x34C9F0C

void Nekki_SF2_GUI_Fight_StyleBar__Render(Nekki_SF2_GUI_Fight_StyleBar_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  Nekki_SF2_GUI_Fight_StyleBarStrip_o *__this_01;
  int index;
  
  if ((DAT_04568659 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    DAT_04568659 = 1;
  }
  __this_00 = (__this->fields).CIKMDLPKCCF;
  if (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      __this_01 = (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
      if (__this_01 == (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)0x0) break;
      Nekki_SF2_GUI_Fight_StyleBarStrip__Render(__this_01,(MethodInfo *)0x0);
      __this_00 = (__this->fields).CIKMDLPKCCF;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

