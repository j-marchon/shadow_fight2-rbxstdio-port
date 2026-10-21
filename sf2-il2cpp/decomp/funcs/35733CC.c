// Nekki.SF2.GUI.GeneralMenu.MenuItemSlider$$OnSliderChanged @ RVA 0x35733CC

void Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__OnSliderChanged
               (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Slider_o *pUVar1;
  undefined8 uVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  float arg0;
  
                    /* catch() { ... } // from try @ 03671060 with catch @ 036733cc */
                    /* catch() { ... } // from try @ 03671048 with catch @ 036733d0 */
                    /* catch() { ... } // from try @ 03670f98 with catch @ 036733d4 */
                    /* catch() { ... } // from try @ 03671094 with catch @ 036733d8 */
                    /* catch() { ... } // from try @ 0366e1bc with catch @ 036733dc */
                    /* catch() { ... } // from try @ 0366e200 with catch @ 036733e0 */
  if ((DAT_04568c6c & 1) == 0) {
                    /* catch() { ... } // from try @ 0367280c with catch @ 036733e4 */
                    /* catch() { ... } // from try @ 0366e220 with catch @ 036733e8 */
                    /* catch() { ... } // from try @ 0366e1d4 with catch @ 036733ec */
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_Invoke__);
                    /* catch() { ... } // from try @ 0366e208 with catch @ 036733f0 */
                    /* catch() { ... } // from try @ 0366e1e8 with catch @ 036733f4 */
    DAT_04568c6c = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 036715d0 with catch @ 036733f8 */
  pUVar1 = (__this->fields).slider;
                    /* catch() { ... } // from try @ 03671680 with catch @ 036733fc */
  uVar2 = 0;
  if (pUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* catch() { ... } // from try @ 0367170c with catch @ 03673400 */
                    /* catch() { ... } // from try @ 036714a4 with catch @ 03673404 */
    __this_00 = (UnityEngine_Events_UnityEvent_float__o *)(__this->fields)._OnValueChanged;
                    /* catch() { ... } // from try @ 036714b8 with catch @ 03673408 */
                    /* catch() { ... } // from try @ 036714d0 with catch @ 0367340c */
                    /* catch() { ... } // from try @ 036727e8 with catch @ 03673410 */
    uVar2 = (*(pUVar1->klass->vtable)._46_get_value.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._46_get_value.method);
                    /* catch() { ... } // from try @ 036713ec with catch @ 03673414 */
    method = extraout_x1_00;
    if (__this_00 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
                    /* catch() { ... } // from try @ 03671404 with catch @ 03673418 */
                    /* catch() { ... } // from try @ 03671418 with catch @ 0367341c */
                    /* catch() { ... } // from try @ 03671430 with catch @ 03673420 */
                    /* catch() { ... } // from try @ 03671438 with catch @ 03673424 */
                    /* catch() { ... } // from try @ 03671458 with catch @ 03673428 */
                    /* catch() { ... } // from try @ 036727e4 with catch @ 0367342c */
                    /* catch() { ... } // from try @ 0366dea8 with catch @ 03673430 */
      UnityEngine_Events_UnityEvent<float>__Invoke
                (__this_00,arg0,Method_UnityEngine_Events_UnityEvent<float>_Invoke__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0366deb8 with catch @ 03673434 */
  FUN_01bab8c8(uVar2,method);
}

