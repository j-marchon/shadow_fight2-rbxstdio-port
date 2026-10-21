// Nekki.SF2.GUI.Common.Achievements.AchievementMessage$$StopAnimation @ RVA 0x34B5238

void Nekki_SF2_GUI_Common_Achievements_AchievementMessage__StopAnimation
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).JIODFODFHNC;
                    /* catch() { ... } // from try @ 035b50c8 with catch @ 035b5238 */
                    /* catch() { ... } // from try @ 035b50bc with catch @ 035b523c */
                    /* catch() { ... } // from try @ 035b51e8 with catch @ 035b5240 */
                    /* catch() { ... } // from try @ 035b51e4 with catch @ 035b5244 */
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
                    /* catch() { ... } // from try @ 035b5090 with catch @ 035b5248 */
                    /* catch() { ... } // from try @ 035b509c with catch @ 035b524c */
                    /* catch() { ... } // from try @ 035b51e0 with catch @ 035b5250 */
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,false,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 035b5070 with catch @ 035b5254 */
  *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
                    /* catch() { ... } // from try @ 035b51dc with catch @ 035b5258 */
                    /* catch() { ... } // from try @ 035b504c with catch @ 035b525c */
                    /* catch() { ... } // from try @ 035b5038 with catch @ 035b5260 */
  thunk_FUN_01c20e04(ppDVar1,0);
  return;
}

