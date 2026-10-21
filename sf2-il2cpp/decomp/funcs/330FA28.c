// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$HGNJELDOFKM @ RVA 0x330FA28

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).IBNPNEDABKA;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

