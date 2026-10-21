// TypeDefIndex 3031
// Namespace: Nekki.SF2.GUI.Common.Achievements
// public class AchievementMessage : MonoBehaviour, IKIHIGCOLOF
// Fields:
//   private ResolutionImage icon; // 0x20
//   private LabelAlias text; // 0x28
//   private CanvasGroup canvasGroup; // 0x30
//   private float showTime; // 0x38
//   private float hideTime; // 0x3C
//   private float waitTime; // 0x40
//   private float maxAlpha; // 0x44
//   private float minAlpha; // 0x48
//   public UnityEvent OnHide; // 0x50
//   private Sequence JIODFODFHNC; // 0x58
//   private KMJDCOABCCG HNNMAMJOEMB; // 0x60

// ===== public void .ctor()  [RVA 0x34B5040]
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


// ===== public KMJDCOABCCG get_Achievement()  [RVA 0x34B50B8]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessage$$get_Achievement @ RVA 0x34B50B8

KMJDCOABCCG_o *
Nekki_SF2_GUI_Common_Achievements_AchievementMessage__get_Achievement
          (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *__this,MethodInfo *method)

{
                    /* try { // try from 035b50bc to 036b50bf has its CatchHandler @ 035b523c */
  return (__this->fields).HNNMAMJOEMB;
}


// ===== public void set_Achievement(KMJDCOABCCG CJNHFNHJHPE)  [RVA 0x34B50C0]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessage$$set_Achievement @ RVA 0x34B50C0

void Nekki_SF2_GUI_Common_Achievements_AchievementMessage__set_Achievement
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *__this,
               KMJDCOABCCG_o *CJNHFNHJHPE,MethodInfo *method)

{
  undefined4 uVar1;
  bool bVar2;
  KMJDCOABCCG_o *pKVar3;
  KMJDCOABCCG_o **ppKVar4;
  UnityEngine_CanvasGroup_o *pUVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  
                    /* try { // try from 035b50c8 to 036b50d3 has its CatchHandler @ 035b5238 */
  if ((DAT_0456857c & 1) == 0) {
                    /* try { // try from 035b50e8 to 036b50eb has its CatchHandler @ 035b5234 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035b50f4 to 036b50ff has its CatchHandler @ 035b522c */
    FUN_01bab630(&StringLiteral_14091/*"UI/Achievements/"*/);
    DAT_0456857c = 1;
  }
  ppKVar4 = &(__this->fields).HNNMAMJOEMB;
  if (*ppKVar4 != CJNHFNHJHPE) {
                    /* try { // try from 035b5114 to 036b5117 has its CatchHandler @ 035b5228 */
                    /* try { // try from 035b5120 to 036b512b has its CatchHandler @ 035b5224 */
    (__this->fields).HNNMAMJOEMB = CJNHFNHJHPE;
    thunk_FUN_01c20e04(ppKVar4,CJNHFNHJHPE);
    pNVar6 = (__this->fields).text;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035b5140 to 036b5143 has its CatchHandler @ 035b521c */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 035b5154 to 036b515f has its CatchHandler @ 035b5214 */
    if ((bVar2) && (*ppKVar4 != (KMJDCOABCCG_o *)0x0)) {
      pNVar6 = (__this->fields).text;
      if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035b5230;
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar6,((*ppKVar4)->fields).JIJLBFGKNJK,(MethodInfo *)0x0)
      ;
    }
    pNVar7 = (__this->fields).icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035b517c to 036b5183 has its CatchHandler @ 035b5210 */
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((bVar2) && (*ppKVar4 != (KMJDCOABCCG_o *)0x0)) {
      pNVar7 = (__this->fields).icon;
                    /* try { // try from 035b51a0 to 036b51a3 has its CatchHandler @ 035b5208 */
      if (pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_035b5230;
                    /* try { // try from 035b51a4 to 036b51db has its CatchHandler @ 035b4ef8 */
      uVar1 = StringLiteral_14091/*"UI/Achievements/"*/._4_4_;
      (pNVar7->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14091/*"UI/Achievements/"*/;
      (pNVar7->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
      thunk_FUN_01c20e04(&(pNVar7->fields).super.m_PixelsPerUnitMultiplier);
      pKVar3 = (__this->fields).HNNMAMJOEMB;
      if ((pKVar3 == (KMJDCOABCCG_o *)0x0) ||
         (pNVar7 = (__this->fields).icon, pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
      goto LAB_035b5230;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar7,(pKVar3->fields)._PGCEKJLODEJ_k__BackingField,(MethodInfo *)0x0);
    }
                    /* try { // try from 035b51dc to 036b51df has its CatchHandler @ 035b5258 */
    pUVar5 = (__this->fields).canvasGroup;
                    /* try { // try from 035b51e0 to 036b51e3 has its CatchHandler @ 035b5250 */
                    /* try { // try from 035b51e4 to 036b51e7 has its CatchHandler @ 035b5244 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035b51e8 to 036b51eb has its CatchHandler @ 035b5240 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035b51ec to 036b51ef has its CatchHandler @ 035b5230 */
                    /* try { // try from 035b51f0 to 036b51f3 has its CatchHandler @ 035b4ef8 */
                    /* try { // try from 035b51f4 to 036b51f7 has its CatchHandler @ 035b5220 */
                    /* try { // try from 035b51f8 to 036b51fb has its CatchHandler @ 035b5218 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 035b51fc to 036b51ff has its CatchHandler @ 035b520c */
    if (bVar2) {
                    /* try { // try from 035b5200 to 036b5203 has its CatchHandler @ 035b5204 */
      pUVar5 = (__this->fields).canvasGroup;
                    /* catch() { ... } // from try @ 035b5200 with catch @ 035b5204
                       try { // try from 035b5204 to 036b5277 has its CatchHandler @ 035b4ef8 */
      if (pUVar5 != (UnityEngine_CanvasGroup_o *)0x0) {
                    /* catch() { ... } // from try @ 035b51a0 with catch @ 035b5208 */
                    /* catch() { ... } // from try @ 035b51fc with catch @ 035b520c */
                    /* catch() { ... } // from try @ 035b517c with catch @ 035b5210 */
                    /* catch() { ... } // from try @ 035b5154 with catch @ 035b5214 */
                    /* catch() { ... } // from try @ 035b51f8 with catch @ 035b5218 */
                    /* catch() { ... } // from try @ 035b5140 with catch @ 035b521c */
        UnityEngine_CanvasGroup__set_alpha(pUVar5,(__this->fields).minAlpha,(MethodInfo *)0x0);
        return;
      }
LAB_035b5230:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035b51ec with catch @ 035b5230 */
      FUN_01bab8c8();
    }
  }
                    /* catch() { ... } // from try @ 035b51f4 with catch @ 035b5220 */
                    /* catch() { ... } // from try @ 035b5120 with catch @ 035b5224 */
                    /* catch() { ... } // from try @ 035b5114 with catch @ 035b5228 */
                    /* catch() { ... } // from try @ 035b50f4 with catch @ 035b522c */
  return;
}


// ===== public void OnReturnToPool()  [RVA 0x34B5234]
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


// ===== public void StopAnimation()  [RVA 0x34B5238]
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


// ===== private void DKIABHBOABK()  [RVA 0x34B5268]
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


// ===== private GameObject FHAMIBNCNHI()  [RVA 0x34B5294]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessage$$FHAMIBNCNHI @ RVA 0x34B5294

UnityEngine_GameObject_o *
Nekki_SF2_GUI_Common_Achievements_AchievementMessage__FHAMIBNCNHI
          (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  return pUVar1;
}


// ===== public void StartAnimation()  [RVA 0x34B529C]
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

