// Nekki.SF2.GUI.Common.Achievements.AchievementMessage$$DKIABHBOABK @ RVA 0x34B5268

void Nekki_SF2_GUI_Common_Achievements_AchievementMessage__DKIABHBOABK
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  DG_Tweening_Sequence_o **ppDVar1;
  
  __this_00 = (__this->fields).OnHide;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 035b5278 to 036b527b has its CatchHandler @ 035b52a4 */
                    /* try { // try from 035b527c to 036b52b3 has its CatchHandler @ 035b4ef8 */
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
  }
  ppDVar1 = &(__this->fields).JIODFODFHNC;
  *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
  thunk_FUN_01c20e04(ppDVar1,0);
  return;
}

