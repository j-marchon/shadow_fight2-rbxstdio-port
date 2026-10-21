// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$HCCNPDEPLJA @ RVA 0x34267E4

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HCCNPDEPLJA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  DG_Tweening_Sequence_o *t;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  MethodInfo *extraout_x1;
  
  t = (__this->fields).OMICAAONCIB;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    ppDVar1 = &(__this->fields).OMICAAONCIB;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._icon;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03526844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar2,
               (pNVar2->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

