// Nekki.SF2.GUI.Shop.Scroll$$ScrollToItem @ RVA 0x34AA4A4

void Nekki_SF2_GUI_Shop_Scroll__ScrollToItem
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,int32_t DPJIDNBJIBG,float PNEIGGOFIOA,
               MethodInfo *method)

{
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *pMVar1;
  MethodInfo *extraout_x1;
  
  pMVar1 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  if ((DAT_04568520 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04568520 = 1;
    pMVar1 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this,pMVar1);
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      pMVar1 = Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__;
      IKKAMAMLIKA = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      Nekki_SF2_GUI_Shop_Scroll__ScrollToItem(__this,IKKAMAMLIKA,PNEIGGOFIOA,pMVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

