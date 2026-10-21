// Nekki.SF2.GUI.Common.SceneSelector$$Select @ RVA 0x3399724

void Nekki_SF2_GUI_Common_SceneSelector__Select
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_String_o *CJNHFNHJHPE;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *t;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar4;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  
  if ((DAT_04567c6b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    DAT_04567c6b = 1;
  }
  pNVar3 = (__this->fields)._Title;
  (__this->fields).KCBIPKCIGMO = true;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034998bc;
  (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
            ((__this->fields)._SelectedTitleColor.fields.r,
             (__this->fields)._SelectedTitleColor.fields.g,
             (__this->fields)._SelectedTitleColor.fields.b,
             (__this->fields)._SelectedTitleColor.fields.a,pNVar3,
             (pNVar3->klass->vtable)._23_set_color.method);
  iVar1 = (__this->fields)._TargetScene;
  if (DAT_04565e5a == '\0') {
    FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
    DAT_04565e5a = '\x01';
  }
  if (iVar1 != KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB) {
    pNVar5 = (__this->fields)._Button;
    if (pNVar5 == (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) goto LAB_034998bc;
    pNVar6 = (Nekki_SF2_GUI_ResolutionImage_o *)
             (pNVar5->fields).super.super.super.super.m_TargetGraphic;
    CJNHFNHJHPE = MEJPIPJPKNP__NABCOFEDBGM((__this->fields)._TargetScene,(MethodInfo *)0x0);
    if (pNVar6 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_034998bc;
    bVar2 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if (((pNVar6->klass->_2).naturalAligment < bVar2) ||
       ((pNVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) goto LAB_034998bc;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar6 = (__this->fields)._SelectionHighlight;
  if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_Alpha
              (pNVar6,(__this->fields)._SelectionAnimationBaseAlpha,(MethodInfo *)0x0);
    t = DG_Tweening_DOTweenModuleUI__DOFade
                  ((UnityEngine_UI_Image_o *)(__this->fields)._SelectionHighlight,1.0,
                   (__this->fields)._SelectionAnimationDuration,(MethodInfo *)0x0);
    t_00 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                     ((Il2CppObject *)t,(__this->fields)._SelectionAnimationEase,
                      Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                     );
    pDVar4 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                       (t_00,-1,1,
                        Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                       );
    (__this->fields).FMDOKILBAFD = pDVar4;
    thunk_FUN_01c20e04();
    pNVar6 = (__this->fields)._SelectionHighlight;
    if ((pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034998bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

