// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_MinWidth @ RVA 0x3031660

float Nekki_SF2_GUI_Shop_ParameterScrollItem__get_MinWidth
                (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  float fVar2;
  
  pUVar1 = (__this->fields)._layoutElement;
  if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313167c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pUVar1->klass->vtable)._31_get_minWidth.methodPtr)
                             (pUVar1,(pUVar1->klass->vtable)._31_get_minWidth.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

