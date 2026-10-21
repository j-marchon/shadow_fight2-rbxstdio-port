// Nekki.SF2.GUI.GeneralMenu.MenuItemSlider$$ChangeValue @ RVA 0x3573334

/* WARNING: Removing unreachable block (ram,0x03673370) */

void Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__ChangeValue
               (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *__this,float FLNNHBPLMKF,
               MethodInfo *method)

{
  MethodInfo *method_00;
  UnityEngine_UI_Slider_o *pUVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 0366df20 with catch @ 03673334 */
                    /* catch() { ... } // from try @ 0366e248 with catch @ 03673338 */
                    /* catch() { ... } // from try @ 0366d224 with catch @ 0367333c
                       catch() { ... } // from try @ 03672848 with catch @ 0367333c */
                    /* catch() { ... } // from try @ 03672828 with catch @ 03673340 */
  pUVar1 = (__this->fields).slider;
                    /* catch() { ... } // from try @ 0367167c with catch @ 03673344 */
  if (pUVar1 == (UnityEngine_UI_Slider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0367108c with catch @ 036733c8 */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 036716c4 with catch @ 03673348 */
                    /* catch() { ... } // from try @ 036716f0 with catch @ 0367334c */
                    /* catch() { ... } // from try @ 03671730 with catch @ 03673350 */
                    /* catch() { ... } // from try @ 036716ac with catch @ 03673354 */
                    /* catch() { ... } // from try @ 036716d8 with catch @ 03673358 */
                    /* catch() { ... } // from try @ 036716f8 with catch @ 0367335c */
                    /* catch() { ... } // from try @ 0367161c with catch @ 03673360 */
  fVar2 = (float)(*(pUVar1->klass->vtable)._46_get_value.methodPtr)
                           (pUVar1,(pUVar1->klass->vtable)._46_get_value.method);
                    /* catch() { ... } // from try @ 03671648 with catch @ 03673364 */
                    /* catch() { ... } // from try @ 03671504 with catch @ 03673368 */
  fVar2 = fVar2 + FLNNHBPLMKF;
                    /* catch() { ... } // from try @ 03671530 with catch @ 0367336c */
                    /* catch() { ... } // from try @ 03671558 with catch @ 03673370 */
                    /* catch() { ... } // from try @ 03671584 with catch @ 03673374 */
                    /* catch() { ... } // from try @ 03672824 with catch @ 03673378 */
                    /* catch() { ... } // from try @ 03671604 with catch @ 0367337c */
                    /* catch() { ... } // from try @ 03671630 with catch @ 03673380 */
                    /* catch() { ... } // from try @ 036714ec with catch @ 03673384 */
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
                    /* catch() { ... } // from try @ 03671518 with catch @ 03673388 */
                    /* catch() { ... } // from try @ 03671538 with catch @ 0367338c */
  (*(pUVar1->klass->vtable)._47_set_value.methodPtr)
            (fVar2,pUVar1,(pUVar1->klass->vtable)._47_set_value.method);
                    /* catch() { ... } // from try @ 03671570 with catch @ 03673390 */
                    /* catch() { ... } // from try @ 0367159c with catch @ 03673394 */
  Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__OnSliderChanged(__this,method_00);
                    /* catch() { ... } // from try @ 03671940 with catch @ 03673398 */
                    /* catch() { ... } // from try @ 0366da3c with catch @ 0367339c
                       catch() { ... } // from try @ 0367285c with catch @ 0367339c
                       catch() { ... } // from try @ 036728a4 with catch @ 0367339c */
                    /* catch() { ... } // from try @ 0366e190 with catch @ 036733a0 */
                    /* catch() { ... } // from try @ 03671650 with catch @ 036733a4 */
  if (FLNNHBPLMKF <= 0.0) {
                    /* catch() { ... } // from try @ 036719e8 with catch @ 036733b8 */
                    /* catch() { ... } // from try @ 03670e7c with catch @ 036733bc */
                    /* catch() { ... } // from try @ 03672810 with catch @ 036733c0 */
                    /* catch() { ... } // from try @ 03671074 with catch @ 036733c4 */
    Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TapLeftKunaiAnimation
              ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 036715a4 with catch @ 036733a8 */
                    /* catch() { ... } // from try @ 0366d178 with catch @ 036733ac
                       catch() { ... } // from try @ 03672844 with catch @ 036733ac */
                    /* catch() { ... } // from try @ 0366d0c0 with catch @ 036733b0
                       catch() { ... } // from try @ 03672840 with catch @ 036733b0 */
                    /* catch() { ... } // from try @ 03672814 with catch @ 036733b4 */
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TapRightKunaiAnimation
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  return;
}

