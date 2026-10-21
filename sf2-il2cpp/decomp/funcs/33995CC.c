// Nekki.SF2.GUI.Common.SceneSelector$$Unselect @ RVA 0x33995CC

void Nekki_SF2_GUI_Common_SceneSelector__Unselect
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_String_o *CJNHFNHJHPE;
  DG_Tweening_Tween_o *t;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  DG_Tweening_Tween_o **ppDVar6;
  
  if ((DAT_04567c6c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_04567c6c = 1;
  }
  pNVar3 = (__this->fields)._Title;
  (__this->fields).KCBIPKCIGMO = false;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03499720;
  (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
            ((__this->fields)._UnselectedTitleColor.fields.r,
             (__this->fields)._UnselectedTitleColor.fields.g,
             (__this->fields)._UnselectedTitleColor.fields.b,
             (__this->fields)._UnselectedTitleColor.fields.a,pNVar3,
             (pNVar3->klass->vtable)._23_set_color.method);
  iVar1 = (__this->fields)._TargetScene;
  if (DAT_04565e5a == '\0') {
    FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
    DAT_04565e5a = '\x01';
  }
  if (iVar1 != KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB) {
    pNVar4 = (__this->fields)._Button;
    if (pNVar4 == (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) goto LAB_03499720;
    pNVar5 = (Nekki_SF2_GUI_ResolutionImage_o *)
             (pNVar4->fields).super.super.super.super.m_TargetGraphic;
    CJNHFNHJHPE = MEJPIPJPKNP__GDFIHPLOOGM((__this->fields)._TargetScene,(MethodInfo *)0x0);
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03499720;
    bVar2 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if (((pNVar5->klass->_2).naturalAligment < bVar2) ||
       ((pNVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) goto LAB_03499720;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  ppDVar6 = &(__this->fields).FMDOKILBAFD;
  t = *ppDVar6;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
    (__this->fields).FMDOKILBAFD = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar6,0);
    pNVar5 = (__this->fields)._SelectionHighlight;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03499720;
    Nekki_SF2_GUI_ResolutionImage__set_Alpha
              (pNVar5,(__this->fields)._SelectionAnimationBaseAlpha,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields)._SelectionHighlight;
  if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
LAB_03499720:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

