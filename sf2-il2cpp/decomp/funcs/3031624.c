// Nekki.SF2.GUI.Shop.ParameterScrollItem$$set_MinWidth @ RVA 0x3031624

void Nekki_SF2_GUI_Shop_ParameterScrollItem__set_MinWidth
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  pUVar1 = (__this->fields)._layoutElement;
  if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* try { // try from 03131634 to 032316e7 has its CatchHandler @ 03131634
                       catch() { ... } // from try @ 03131634 with catch @ 03131634
                       catch() { ... } // from try @ 03131710 with catch @ 03131634
                       catch() { ... } // from try @ 0313174c with catch @ 03131634
                       catch() { ... } // from try @ 03131794 with catch @ 03131634 */
                    /* WARNING: Could not recover jumptable at 0x03131640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._32_set_minWidth.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._32_set_minWidth.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

