// Nekki.SF2.GUI.ProgressButton$$CCPABLFBFFA @ RVA 0x30ADC14

void Nekki_SF2_GUI_ProgressButton__CCPABLFBFFA
               (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields).OGBOMAHLDKN;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    ppDVar1 = &(__this->fields).OGBOMAHLDKN;
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

