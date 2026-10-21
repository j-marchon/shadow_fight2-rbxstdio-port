// Nekki.SF2.GUI.Shop.Scroll$$SetItems @ RVA 0x34AA0DC

void Nekki_SF2_GUI_Shop_Scroll__SetItems
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,
               System_Collections_Generic_List_BaseScrollItem__o *GHAAKPDHIJJ,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_0456851a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456851a = 1;
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      Nekki_SF2_GUI_BaseScrollContent__SetItems(pNVar2,GHAAKPDHIJJ,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

