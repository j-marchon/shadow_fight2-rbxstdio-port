// Nekki.SF2.GUI.Shop.Scroll$$ScrollToItem @ RVA 0x34AA3BC

void Nekki_SF2_GUI_Shop_Scroll__ScrollToItem
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               float PNEIGGOFIOA,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  
  if ((DAT_0456851f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456851f = 1;
  }
  pNVar2 = (__this->fields)._itemsScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields)._itemsScroll;
      if (pNVar2 == (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_ItemsScroll__ScrollToItem(pNVar2,IKKAMAMLIKA,PNEIGGOFIOA,(MethodInfo *)0x0);
      if (PNEIGGOFIOA <= 0.001) {
        Nekki_SF2_GUI_Shop_Scroll__UpdateLayout(__this,method_00);
        return;
      }
    }
  }
  return;
}

