// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$CBMLKIFOKJO @ RVA 0x31B2F38

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__CBMLKIFOKJO
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).GOPKOMPBHKM;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

