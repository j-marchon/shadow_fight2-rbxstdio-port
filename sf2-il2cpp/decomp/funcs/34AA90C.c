// Nekki.SF2.GUI.Shop.Scroll$$GetIndexOfItem @ RVA 0x34AA90C

int32_t Nekki_SF2_GUI_Shop_Scroll__GetIndexOfItem
                  (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
                  MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *extraout_x1;
  Nekki_SF2_GUI_BaseScrollItem_o *method_00;
  
  method_00 = IKKAMAMLIKA;
  if ((DAT_04568526 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_IndexOf__);
    DAT_04568526 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this,(MethodInfo *)method_00);
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    iVar1 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_List<BaseScrollItem>_IndexOf__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

