// Nekki.SF2.GUI.Shop.Scroll$$AddItem @ RVA 0x34AA044

void Nekki_SF2_GUI_Shop_Scroll__AddItem
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_04568519 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568519 = 1;
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
      Nekki_SF2_GUI_BaseScrollContent__AddItem(pNVar2,IKKAMAMLIKA,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

