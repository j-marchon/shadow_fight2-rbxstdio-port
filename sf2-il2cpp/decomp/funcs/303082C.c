// Nekki.SF2.GUI.Shop.ParameterScrollItem$$set_MinHeight @ RVA 0x303082C

void Nekki_SF2_GUI_Shop_ParameterScrollItem__set_MinHeight
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  pUVar1 = (__this->fields)._layoutElement;
  if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03130848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._34_set_minHeight.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._34_set_minHeight.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

