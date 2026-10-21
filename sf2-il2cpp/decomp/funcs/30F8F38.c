// Nekki.SF2.GUI.Shop.ParametersPanelContent$$JGBBHPHIJNB @ RVA 0x30F8F38

void Nekki_SF2_GUI_Shop_ParametersPanelContent__JGBBHPHIJNB
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,bool NADPOGKBDKD,
               MethodInfo *method)

{
  DG_Tweening_Sequence_o *t;
  Nekki_SF2_GUI_ItemsScroll_o *__this_00;
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).HNKEDPLJLJJ;
  t = *ppDVar1;
  if (t == (DG_Tweening_Sequence_o *)0x0) {
    return;
  }
  if (NADPOGKBDKD) {
    __this_00 = (__this->fields)._itemsScroll;
    if (__this_00 == (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_SFScrollRect__set_verticalNormalizedPosition
              ((Nekki_SF2_GUI_SFScrollRect_o *)__this_00,1.0,(MethodInfo *)0x0);
    t = *ppDVar1;
  }
  DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
  *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
  thunk_FUN_01c20e04(ppDVar1,0);
  return;
}

