// TypeDefIndex 443
// Namespace: Nekki.SF2.GUI.GeneralMenu
// public class MenuItemSlider : MenuItemButton
// Fields:
//   private Slider slider; // 0x78
//   private MenuItemSlider.ValueChangeEvent _OnValueChanged; // 0x80

// ===== public MenuItemSlider.ValueChangeEvent get_OnValueChanged()  [RVA 0x35732D0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemSlider$$get_OnValueChanged @ RVA 0x35732D0

Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_ValueChangeEvent_o *
Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__get_OnValueChanged
          (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0366d114 with catch @ 036732d0 */
                    /* catch() { ... } // from try @ 0366d0a0 with catch @ 036732d4 */
  return (__this->fields)._OnValueChanged;
}


// ===== public float get_value()  [RVA 0x35732D8]
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


// ===== public void set_value(float CJNHFNHJHPE)  [RVA 0x35732FC]
// Nekki.SF2.GUI.GeneralMenu.MenuItemSlider$$set_value @ RVA 0x35732FC

/* WARNING: Removing unreachable block (ram,0x03673310) */

void Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__set_value
               (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_Slider_o *pUVar1;
  
                    /* catch() { ... } // from try @ 0366f62c with catch @ 036732fc
                       catch() { ... } // from try @ 03672878 with catch @ 036732fc */
                    /* catch() { ... } // from try @ 0366e968 with catch @ 03673300
                       catch() { ... } // from try @ 03672870 with catch @ 03673300 */
  pUVar1 = (__this->fields).slider;
                    /* catch() { ... } // from try @ 0366e570 with catch @ 03673304
                       catch() { ... } // from try @ 03672868 with catch @ 03673304 */
  if (pUVar1 == (UnityEngine_UI_Slider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03670ec8 with catch @ 03673330 */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 0366e070 with catch @ 03673308
                       catch() { ... } // from try @ 03672864 with catch @ 03673308 */
                    /* catch() { ... } // from try @ 0366d35c with catch @ 0367330c */
                    /* catch() { ... } // from try @ 0366d30c with catch @ 03673310 */
                    /* catch() { ... } // from try @ 03670e50 with catch @ 03673314 */
                    /* catch() { ... } // from try @ 0366d988 with catch @ 03673318
                       catch() { ... } // from try @ 03672854 with catch @ 03673318 */
                    /* catch() { ... } // from try @ 0366d5d0 with catch @ 0367331c
                       catch() { ... } // from try @ 03672850 with catch @ 0367331c */
                    /* catch() { ... } // from try @ 0366d0f8 with catch @ 03673320 */
                    /* catch() { ... } // from try @ 0366d038 with catch @ 03673324 */
  if (CJNHFNHJHPE < 0.0) {
    CJNHFNHJHPE = 0.0;
  }
                    /* catch() { ... } // from try @ 0366d5cc with catch @ 03673328
                       catch() { ... } // from try @ 0366e688 with catch @ 03673328
                       catch() { ... } // from try @ 0366e820 with catch @ 03673328
                       catch() { ... } // from try @ 0366ea80 with catch @ 03673328
                       catch() { ... } // from try @ 0366eba4 with catch @ 03673328
                       catch() { ... } // from try @ 0366ee84 with catch @ 03673328
                       catch() { ... } // from try @ 0366ef20 with catch @ 03673328
                       catch() { ... } // from try @ 0366efbc with catch @ 03673328
                       catch() { ... } // from try @ 0366f058 with catch @ 03673328
                       catch() { ... } // from try @ 0366f4e0 with catch @ 03673328
                       catch() { ... } // from try @ 0366f744 with catch @ 03673328
                       catch() { ... } // from try @ 0366f868 with catch @ 03673328
                       catch() { ... } // from try @ 0366fb48 with catch @ 03673328
                       catch() { ... } // from try @ 0366fbe4 with catch @ 03673328
                       catch() { ... } // from try @ 0366fc80 with catch @ 03673328
                       catch() { ... } // from try @ 0366fe14 with catch @ 03673328
                       catch() { ... } // from try @ 03670078 with catch @ 03673328
                       catch() { ... } // from try @ 0367019c with catch @ 03673328
                       catch() { ... } // from try @ 036706f4 with catch @ 03673328
                       catch() { ... } // from try @ 03670b94 with catch @ 03673328
                       catch() { ... } // from try @ 036713a4 with catch @ 03673328
                       catch() { ... } // from try @ 0367185c with catch @ 03673328
                       catch() { ... } // from try @ 03671dec with catch @ 03673328
                       catch() { ... } // from try @ 03671e0c with catch @ 03673328
                       catch() { ... } // from try @ 03671e7c with catch @ 03673328
                       catch() { ... } // from try @ 036720b8 with catch @ 03673328
                       catch() { ... } // from try @ 03672394 with catch @ 03673328
                       catch() { ... } // from try @ 036724ac with catch @ 03673328
                       catch() { ... } // from try @ 03672550 with catch @ 03673328
                       catch() { ... } // from try @ 036725ec with catch @ 03673328
                       catch() { ... } // from try @ 036726b4 with catch @ 03673328
                       catch() { ... } // from try @ 03672758 with catch @ 03673328 */
                    /* WARNING: Could not recover jumptable at 0x0367332c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 0367282c with catch @ 0367332c */
  (*(pUVar1->klass->vtable)._47_set_value.methodPtr)
            (CJNHFNHJHPE,pUVar1,(pUVar1->klass->vtable)._47_set_value.method);
  return;
}


// ===== public void ChangeValue(float FLNNHBPLMKF)  [RVA 0x3573334]
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


// ===== public void OnSliderChanged()  [RVA 0x35733CC]
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


// ===== public void .ctor()  [RVA 0x3573438]
// Nekki.SF2.GUI.GeneralMenu.MenuItemSlider$$.ctor @ RVA 0x3573438

void Nekki_SF2_GUI_GeneralMenu_MenuItemSlider___ctor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_ValueChangeEvent_o *__this_00;
  Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_ValueChangeEvent_o **ppNVar1;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
                    /* catch() { ... } // from try @ 0366decc with catch @ 03673438 */
                    /* catch() { ... } // from try @ 0366dedc with catch @ 0367343c */
                    /* catch() { ... } // from try @ 0366dee4 with catch @ 03673440 */
                    /* catch() { ... } // from try @ 0366df04 with catch @ 03673444 */
                    /* catch() { ... } // from try @ 036727e0 with catch @ 03673448 */
                    /* catch() { ... } // from try @ 036711b8 with catch @ 0367344c */
                    /* catch() { ... } // from try @ 03671198 with catch @ 03673450 */
                    /* catch() { ... } // from try @ 03671184 with catch @ 03673454 */
  if ((DAT_04568c6d & 1) == 0) {
                    /* catch() { ... } // from try @ 036711b0 with catch @ 03673458 */
                    /* catch() { ... } // from try @ 0367116c with catch @ 0367345c */
                    /* catch() { ... } // from try @ 03671244 with catch @ 03673460 */
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_ValueChangeEvent_TypeInfo);
                    /* catch() { ... } // from try @ 036727dc with catch @ 03673464 */
                    /* catch() { ... } // from try @ 0367125c with catch @ 03673468 */
    DAT_04568c6d = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03671218 with catch @ 0367346c */
                    /* catch() { ... } // from try @ 03671298 with catch @ 03673470 */
  auVar2 = thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_ValueChangeEvent_TypeInfo,
                              method);
  __this_00 = auVar2._0_8_;
                    /* catch() { ... } // from try @ 03671280 with catch @ 03673474 */
                    /* catch() { ... } // from try @ 03671230 with catch @ 03673478 */
  Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_ValueChangeEvent___ctor(__this_00,auVar2._8_8_);
  ppNVar1 = &(__this->fields)._OnValueChanged;
                    /* catch() { ... } // from try @ 03671264 with catch @ 0367347c */
                    /* catch() { ... } // from try @ 036719d4 with catch @ 03673480 */
  *ppNVar1 = __this_00;
                    /* catch() { ... } // from try @ 036718f8 with catch @ 03673484 */
                    /* catch() { ... } // from try @ 036718d4 with catch @ 03673488 */
  thunk_FUN_01c20e04(ppNVar1,__this_00);
                    /* catch() { ... } // from try @ 03671900 with catch @ 0367348c */
                    /* catch() { ... } // from try @ 03671920 with catch @ 03673490 */
                    /* catch() { ... } // from try @ 036719c0 with catch @ 03673494 */
                    /* catch() { ... } // from try @ 036718e8 with catch @ 03673498 */
                    /* catch() { ... } // from try @ 036718c4 with catch @ 0367349c */
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton___ctor
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  return;
}

