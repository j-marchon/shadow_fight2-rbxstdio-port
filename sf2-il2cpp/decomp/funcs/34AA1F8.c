// Nekki.SF2.GUI.Shop.Scroll$$ClearItems @ RVA 0x34AA1F8

void Nekki_SF2_GUI_Shop_Scroll__ClearItems(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_0456851c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035aa228 to 036aa56f has its CatchHandler @ 035aa228
                       catch() { ... } // from try @ 035aa228 with catch @ 035aa228
                       catch() { ... } // from try @ 035aa594 with catch @ 035aa228
                       catch() { ... } // from try @ 035aa6e4 with catch @ 035aa228
                       catch() { ... } // from try @ 035aa70c with catch @ 035aa228
                       catch() { ... } // from try @ 035aa74c with catch @ 035aa228 */
    DAT_0456851c = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      Nekki_SF2_GUI_BaseScrollContent__ClearItems(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

