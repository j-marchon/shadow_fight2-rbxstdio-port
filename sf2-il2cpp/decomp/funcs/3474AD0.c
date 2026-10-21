// Nekki.SF2.GUI.Map.BattleButton$$CCPABLFBFFA @ RVA 0x3474AD0

void Nekki_SF2_GUI_Map_BattleButton__CCPABLFBFFA
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields).IDMFMIPALLP;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    ppDVar1 = &(__this->fields).IDMFMIPALLP;
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

