// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$FDPLPNKKGGO @ RVA 0x3427F84

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields).ENDLGPAGCBA;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    ppDVar1 = &(__this->fields).ENDLGPAGCBA;
    DG_Tweening_TweenExtensions__Kill(t,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

