// Nekki.SF2.GUI.Common.Achievements.AchievementMessage$$.ctor @ RVA 0x34B5040

void Nekki_SF2_GUI_Common_Achievements_AchievementMessage___ctor
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035b504c to 036b505b has its CatchHandler @ 035b525c */
  if ((DAT_0456857b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
                    /* try { // try from 035b5070 to 036b507b has its CatchHandler @ 035b5254 */
    DAT_0456857b = 1;
    method = extraout_x1;
  }
  (__this->fields).waitTime = 1.5;
  (__this->fields).maxAlpha = 1.0;
  (__this->fields).showTime = 0.5;
  (__this->fields).hideTime = 1.0;
  __this_00 = (UnityEngine_Events_UnityEvent_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
                    /* try { // try from 035b5090 to 036b5093 has its CatchHandler @ 035b5248 */
  UnityEngine_Events_UnityEvent___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).OnHide;
  *ppUVar1 = __this_00;
                    /* try { // try from 035b509c to 036b50a7 has its CatchHandler @ 035b524c */
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

