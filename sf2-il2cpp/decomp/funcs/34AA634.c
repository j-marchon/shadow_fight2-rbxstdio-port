// Nekki.SF2.GUI.Shop.Scroll$$ScrollToEnd @ RVA 0x34AA634

void Nekki_SF2_GUI_Shop_Scroll__ScrollToEnd(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  
  if ((DAT_04568522 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568522 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._itemsScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
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
        IKKAMAMLIKA = Nekki_SF2_GUI_BaseScrollContent__get_LastItem(pNVar3,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 035aa6e0 to 036aa6e3 has its CatchHandler @ 035aa6e8 */
                    /* try { // try from 035aa6e4 to 036aa707 has its CatchHandler @ 035aa228 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035aa6e0 with catch @ 035aa6e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035aa58c with catch @ 035aa6ec
                        */
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035aa570 with catch @ 035aa6f0
                        */
        if (!bVar1) {
          return;
        }
        pNVar2 = (__this->fields)._itemsScroll;
        if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
                    /* try { // try from 035aa708 to 036aa70b has its CatchHandler @ 035aa734 */
                    /* try { // try from 035aa70c to 036aa743 has its CatchHandler @ 035aa228 */
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

