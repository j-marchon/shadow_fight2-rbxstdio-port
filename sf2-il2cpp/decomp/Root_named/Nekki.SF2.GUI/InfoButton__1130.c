// TypeDefIndex 1130
// Namespace: Nekki.SF2.GUI
// public class InfoButton : SFButton
// Fields:
//   private LabelAlias _text; // 0x168
//   private ResolutionImage _icon; // 0x170
//   private ResolutionImage _highlight; // 0x178
//   private const float OAIPLEKJMEF = 1;
//   private TweenerCore<Color, Color, ColorOptions> BHBGJMCEHCC; // 0x180

// ===== public bool get_HighlightEnabled()  [RVA 0x30F5A80]
// Nekki.SF2.GUI.InfoButton$$get_HighlightEnabled @ RVA 0x30F5A80

bool Nekki_SF2_GUI_InfoButton__get_HighlightEnabled
               (Nekki_SF2_GUI_InfoButton_o *__this,MethodInfo *method)

{
  return (__this->fields).BHBGJMCEHCC !=
         (DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *)0x0;
}


// ===== private void PBGLGLCDHKF()  [RVA 0x30F5A90]
// Nekki.SF2.GUI.InfoButton$$PBGLGLCDHKF @ RVA 0x30F5A90

void Nekki_SF2_GUI_InfoButton__PBGLGLCDHKF(Nekki_SF2_GUI_InfoButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  
  (__this->fields).BHBGJMCEHCC = (DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).BHBGJMCEHCC,0);
  pNVar1 = (__this->fields)._highlight;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar1,0.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._highlight;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_HighlightEnabled(bool CJNHFNHJHPE)  [RVA 0x30F5AE4]
// Nekki.SF2.GUI.InfoButton$$set_HighlightEnabled @ RVA 0x30F5AE4

void Nekki_SF2_GUI_InfoButton__set_HighlightEnabled
               (Nekki_SF2_GUI_InfoButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o **ppDVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar2;
  Il2CppObject *pIVar3;
  DG_Tweening_TweenCallback_o *pDVar4;
  
  if ((DAT_04566450 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_InfoButton_PBGLGLCDHKF__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnKill<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    DAT_04566450 = 1;
  }
  ppDVar1 = &(__this->fields).BHBGJMCEHCC;
  if (CJNHFNHJHPE) {
    if (*ppDVar1 == (DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *)0x0) {
      __this_00 = (__this->fields)._highlight;
      if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
        pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                           ((UnityEngine_UI_Image_o *)(__this->fields)._highlight,1.0,1.0,
                            (MethodInfo *)0x0);
        pIVar3 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)pDVar2,3,
                            Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                           );
        pIVar3 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                           (pIVar3,-1,1,
                            Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                           );
        pDVar4 = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        pIVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                           (pIVar3,pDVar4,
                            Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Color,_Color,_ColorOptions>>__
                           );
        pDVar4 = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        pDVar2 = (DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *)
                 DG_Tweening_TweenSettingsExtensions__OnKill<object>
                           (pIVar3,pDVar4,
                            Method_DG_Tweening_TweenSettingsExtensions_OnKill<TweenerCore<Color,_Color,_ColorOptions>>__
                           );
        (__this->fields).BHBGJMCEHCC = pDVar2;
        thunk_FUN_01c20e04(ppDVar1,pDVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else if (*ppDVar1 != (DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x30F5CAC]
// Nekki.SF2.GUI.InfoButton$$.ctor @ RVA 0x30F5CAC

void Nekki_SF2_GUI_InfoButton___ctor(Nekki_SF2_GUI_InfoButton_o *__this,MethodInfo *method)

{
  SFButton___ctor((SFButton_o *)__this,(MethodInfo *)0x0);
  return;
}

