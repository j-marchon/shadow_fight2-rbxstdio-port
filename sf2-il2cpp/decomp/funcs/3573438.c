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

