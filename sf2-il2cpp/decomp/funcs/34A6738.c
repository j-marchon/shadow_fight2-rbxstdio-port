// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$BJEJCCMFMJH @ RVA 0x34A6738

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__BJEJCCMFMJH
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  DG_Tweening_Sequence_o *t;
  
  t = (__this->fields).MCLDLFHFMGO;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    ppDVar1 = &(__this->fields).MCLDLFHFMGO;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

