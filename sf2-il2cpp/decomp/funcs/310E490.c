// Nekki.SF2.GUI.Shop.ItemsPanel$$ELGDDCNOLJL @ RVA 0x310E490

void Nekki_SF2_GUI_Shop_ItemsPanel__ELGDDCNOLJL
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_Slider_o *pUVar1;
  
  pUVar1 = (__this->fields)._slider;
  if (pUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0320e4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._48_SetValueWithoutNotify.methodPtr)
              (1.0 - CJNHFNHJHPE.fields.y,pUVar1,
               (pUVar1->klass->vtable)._48_SetValueWithoutNotify.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.x);
}

