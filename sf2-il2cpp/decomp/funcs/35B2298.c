// Nekki.SF2.GUI.Fight.RewardPanelItem$$OnDestroy @ RVA 0x35B2298

void Nekki_SF2_GUI_Fight_RewardPanelItem__OnDestroy
               (Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).HOJHFHLCPNL;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

