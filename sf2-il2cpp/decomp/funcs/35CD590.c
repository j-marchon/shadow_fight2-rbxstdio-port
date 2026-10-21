// Nekki.SF2.GUI.BaseScrollContent$$get_FirstItem @ RVA 0x35CD590

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_BaseScrollContent__get_FirstItem
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fb3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04568fb3 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._Items;
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      pNVar1 = (Nekki_SF2_GUI_BaseScrollItem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      return pNVar1;
    }
    return (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

