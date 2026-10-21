// Nekki.SF2.GUI.Shop.Scroll$$GetItem @ RVA 0x34AA968

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_Shop_Scroll__GetItem
          (Nekki_SF2_GUI_Shop_Scroll_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  if ((DAT_04568527 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04568527 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this,method_00);
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      pNVar1 = (Nekki_SF2_GUI_BaseScrollItem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      return pNVar1;
    }
    return (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

