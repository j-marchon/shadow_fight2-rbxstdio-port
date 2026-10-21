// SFButton$$BJEJCCMFMJH @ RVA 0x34BACCC

void SFButton__BJEJCCMFMJH(SFButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  DG_Tweening_Sequence_o *t;
  
  t = (__this->fields).HCLACPMIFEB;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    ppDVar1 = &(__this->fields).HCLACPMIFEB;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

