// Nekki.SF2.GUI.Shop.ParametersPanelContent$$Init @ RVA 0x30F8FA4

void Nekki_SF2_GUI_Shop_ParametersPanelContent__Init
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollContent_o *__this_00;
  Nekki_SF2_GUI_ItemsScroll_o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_BaseScrollItem__o *GHAAKPDHIJJ;
  MethodInfo *method_00;
  
  if ((DAT_04566486 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10132);
    DAT_04566486 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_ParametersPanelContent__LGJMJMJJGIM(__this,method);
  GHAAKPDHIJJ = (__this->fields).DNHMKKDMGFA;
  if (GHAAKPDHIJJ == (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10132,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (__this->fields)._baseScrollContent;
                    /* try { // try from 031f8ff0 to 032f9087 has its CatchHandler @ 031f8ff0
                       catch() { ... } // from try @ 031f8ff0 with catch @ 031f8ff0
                       catch() { ... } // from try @ 031f90ac with catch @ 031f8ff0
                       catch() { ... } // from try @ 031f90e4 with catch @ 031f8ff0
                       catch() { ... } // from try @ 031f910c with catch @ 031f8ff0
                       catch() { ... } // from try @ 031f914c with catch @ 031f8ff0 */
    if (__this_00 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) goto LAB_031f904c;
    Nekki_SF2_GUI_BaseScrollContent__SetItems(__this_00,GHAAKPDHIJJ,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._itemsScroll;
  if (__this_01 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
    Nekki_SF2_GUI_ItemsScroll__Init(__this_01,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP(__this,method_00);
    return;
  }
LAB_031f904c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

