// Nekki.SF2.GUI.GeneralMenu.MenuItemSlider$$get_value @ RVA 0x35732D8

float Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__get_value
                (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Slider_o *pUVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 0366d098 with catch @ 036732d8 */
                    /* catch() { ... } // from try @ 0366d080 with catch @ 036732dc */
  pUVar1 = (__this->fields).slider;
                    /* catch() { ... } // from try @ 0366d06c with catch @ 036732e0 */
  if (pUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* catch() { ... } // from try @ 0366d054 with catch @ 036732e4 */
                    /* catch() { ... } // from try @ 03670c48 with catch @ 036732e8
                       catch() { ... } // from try @ 03672894 with catch @ 036732e8 */
                    /* catch() { ... } // from try @ 0366dff8 with catch @ 036732ec */
                    /* catch() { ... } // from try @ 03670980 with catch @ 036732f0
                       catch() { ... } // from try @ 03672890 with catch @ 036732f0 */
                    /* WARNING: Could not recover jumptable at 0x036732f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 036704dc with catch @ 036732f4
                       catch() { ... } // from try @ 03672888 with catch @ 036732f4 */
    fVar2 = (float)(*(pUVar1->klass->vtable)._46_get_value.methodPtr)
                             (pUVar1,(pUVar1->klass->vtable)._46_get_value.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0366ff60 with catch @ 036732f8
                       catch() { ... } // from try @ 03672880 with catch @ 036732f8 */
  FUN_01bab8c8();
}

