// Nekki.SF2.GUI.Common.Achievements.AchievementMessage$$StartAnimation @ RVA 0x34B529C

void Nekki_SF2_GUI_Common_Achievements_AchievementMessage__StartAnimation
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar3;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar4;
  UnityEngine_CanvasGroup_o *pUVar5;
  
                    /* catch() { ... } // from try @ 035b5278 with catch @ 035b52a4 */
                    /* try { // try from 035b52b4 to 036b52bb has its CatchHandler @ 035b52d0 */
                    /* try { // try from 035b52bc to 036b52c7 has its CatchHandler @ 035b4ef8 */
  if ((DAT_0456857d & 1) == 0) {
                    /* try { // try from 035b52c8 to 036b52cf has its CatchHandler @ 035b52d0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Achievements_AchievementMessage_DKIABHBOABK__);
                    /* catch() { ... } // from try @ 035b52b4 with catch @ 035b52d0
                       catch() { ... } // from try @ 035b52c8 with catch @ 035b52d0 */
                    /* try { // try from 035b52d4 to 036b53c3 has its CatchHandler @ 035b52d4
                       catch() { ... } // from try @ 035b52d4 with catch @ 035b52d4
                       catch() { ... } // from try @ 035b5440 with catch @ 035b52d4
                       catch() { ... } // from try @ 035b5480 with catch @ 035b52d4
                       catch() { ... } // from try @ 035b54b0 with catch @ 035b52d4
                       catch() { ... } // from try @ 035b54e0 with catch @ 035b52d4 */
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_0456857d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Common_Achievements_AchievementMessage__StopAnimation(__this,method);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  ppDVar4 = &(__this->fields).JIODFODFHNC;
  *ppDVar4 = pDVar2;
  thunk_FUN_01c20e04(ppDVar4,pDVar2);
  pUVar5 = (__this->fields).canvasGroup;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pDVar2 = (__this->fields).JIODFODFHNC;
    pDVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                       ((__this->fields).canvasGroup,(__this->fields).maxAlpha,
                        (__this->fields).showTime,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append
              (pDVar2,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
  }
  DG_Tweening_TweenSettingsExtensions__AppendInterval
            ((__this->fields).JIODFODFHNC,(__this->fields).waitTime,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).canvasGroup;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 035b53c4 to 036b53cb has its CatchHandler @ 035b548c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pDVar2 = (__this->fields).JIODFODFHNC;
    pDVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                       ((__this->fields).canvasGroup,(__this->fields).minAlpha,
                        (__this->fields).hideTime,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append
              (pDVar2,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
  }
  pDVar2 = (__this->fields).JIODFODFHNC;
  callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 035b541c to 036b543f has its CatchHandler @ 035b5484 */
  DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
  return;
}

