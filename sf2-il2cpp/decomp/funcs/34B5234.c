// Nekki.SF2.GUI.Common.Achievements.AchievementMessage$$OnReturnToPool @ RVA 0x34B5234

void Nekki_SF2_GUI_Common_Achievements_AchievementMessage__OnReturnToPool
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).JIODFODFHNC;
                    /* catch() { ... } // from try @ 035b50e8 with catch @ 035b5234 */
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,false,(MethodInfo *)0x0);
  }
  *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
  thunk_FUN_01c20e04(ppDVar1,0);
  return;
}

