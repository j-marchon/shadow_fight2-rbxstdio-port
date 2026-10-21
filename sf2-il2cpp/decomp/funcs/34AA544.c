// Nekki.SF2.GUI.Shop.Scroll$$ScrollToBegin @ RVA 0x34AA544

void Nekki_SF2_GUI_Shop_Scroll__ScrollToBegin
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  
  if ((DAT_04568521 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035aa570 to 036aa577 has its CatchHandler @ 035aa6f0 */
    DAT_04568521 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._itemsScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 035aa58c to 036aa593 has its CatchHandler @ 035aa6ec */
                    /* try { // try from 035aa594 to 036aa6df has its CatchHandler @ 035aa228 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).ECEJKFAFODM;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).ECEJKFAFODM;
      if (pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
        IKKAMAMLIKA = Nekki_SF2_GUI_BaseScrollContent__get_FirstItem(pNVar3,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar2 = (__this->fields)._itemsScroll;
        if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
          Nekki_SF2_GUI_ItemsScroll__ScrollToItem(pNVar2,IKKAMAMLIKA,0.0,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

