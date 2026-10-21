// TypeDefIndex 2550
// Namespace: Nekki.SF2.GUI.Common
// public class SceneSelector : MonoBehaviour
// Fields:
//   private LabelAlias _Title; // 0x20
//   private SectionButton _Button; // 0x28
//   private ResolutionImage _SelectionHighlight; // 0x30
//   private TutorialNode _TutorialNode; // 0x38
//   private DBMPKPJGIPI _TargetScene; // 0x40
//   private Color _SelectedTitleColor; // 0x44
//   private Color _UnselectedTitleColor; // 0x54
//   private float _SelectionAnimationBaseAlpha; // 0x64
//   private float _SelectionAnimationDuration; // 0x68
//   private Ease _SelectionAnimationEase; // 0x6C
//   private SceneMenuScroll MKAAKGJNBHI; // 0x70
//   private bool KCBIPKCIGMO; // 0x78
//   private Tween FMDOKILBAFD; // 0x80

// ===== public SectionButton get_Button()  [RVA 0x3399370]
// Nekki.SF2.GUI.Common.SceneSelector$$get_Button @ RVA 0x3399370

Nekki_SF2_GUI_Common_SectionButton_o *
Nekki_SF2_GUI_Common_SceneSelector__get_Button
          (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  return (__this->fields)._Button;
}


// ===== public DBMPKPJGIPI get_TargetScene()  [RVA 0x3399378]
// Nekki.SF2.GUI.Common.SceneSelector$$get_TargetScene @ RVA 0x3399378

int32_t Nekki_SF2_GUI_Common_SceneSelector__get_TargetScene
                  (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  return (__this->fields)._TargetScene;
}


// ===== public void set_TargetScene(DBMPKPJGIPI CJNHFNHJHPE)  [RVA 0x3399380]
// Nekki.SF2.GUI.Common.SceneSelector$$set_TargetScene @ RVA 0x3399380

void Nekki_SF2_GUI_Common_SceneSelector__set_TargetScene
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._TargetScene == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._TargetScene = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_SceneSelector__Refresh(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public bool get_IsCurrentScene()  [RVA 0x3399558]
// Nekki.SF2.GUI.Common.SceneSelector$$get_IsCurrentScene @ RVA 0x3399558

bool Nekki_SF2_GUI_Common_SceneSelector__get_IsCurrentScene
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields)._TargetScene;
  if (DAT_04565e5a == '\0') {
    FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
    DAT_04565e5a = '\x01';
  }
  return iVar1 == KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB;
}


// ===== public void Init(SceneMenuScroll JJHEGPBBMLG)  [RVA 0x33995AC]
// Nekki.SF2.GUI.Common.SceneSelector$$Init @ RVA 0x33995AC

void Nekki_SF2_GUI_Common_SceneSelector__Init
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,
               Nekki_SF2_GUI_Common_SceneMenuScroll_o *JJHEGPBBMLG,MethodInfo *method)

{
  (__this->fields).MKAAKGJNBHI = JJHEGPBBMLG;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void Refresh()  [RVA 0x3399398]
// Nekki.SF2.GUI.Common.SceneSelector$$Refresh @ RVA 0x3399398

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Common_SceneSelector__Refresh
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t NFOBCFADDHA;
  byte bVar2;
  bool bVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar5;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04567c6a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_04567c6a = 1;
  }
  __this_02 = (__this->fields)._Title;
  pSVar4 = MEJPIPJPKNP__LJOKKJPBMGO((__this->fields)._TargetScene,(MethodInfo *)0x0);
  if (__this_02 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03499554;
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this_02,pSVar4,(MethodInfo *)0x0);
  pNVar5 = (__this->fields)._Button;
  if (pNVar5 == (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) goto LAB_03499554;
  __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)
              (pNVar5->fields).super.super.super.super.m_TargetGraphic;
  if (__this_01 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_03499430:
    __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
  }
  else {
    bVar2 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((__this_01->klass->_2).naturalAligment < bVar2) goto LAB_03499430;
    if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
      __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar3) {
    iVar1 = (__this->fields)._TargetScene;
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
      DAT_04565e5a = '\x01';
    }
    if (iVar1 == KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB) {
      pSVar4 = MEJPIPJPKNP__HLKGHMBHAEF((__this->fields)._TargetScene,(MethodInfo *)0x0);
    }
    else {
      NFOBCFADDHA = (__this->fields)._TargetScene;
      if ((__this->fields).KCBIPKCIGMO == false) {
        pSVar4 = MEJPIPJPKNP__GDFIHPLOOGM(NFOBCFADDHA,(MethodInfo *)0x0);
      }
      else {
        pSVar4 = MEJPIPJPKNP__NABCOFEDBGM(NFOBCFADDHA,(MethodInfo *)0x0);
      }
    }
    if (__this_01 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03499554;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,pSVar4,(MethodInfo *)0x0);
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pNVar6 = (__this->fields)._TutorialNode;
  pSVar4 = MEJPIPJPKNP__BELOCFNPIAN((__this->fields)._TargetScene,(MethodInfo *)0x0);
  if (pNVar6 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
    ppSVar7 = &(pNVar6->fields)._ID;
    *ppSVar7 = pSVar4;
    thunk_FUN_01c20e04(ppSVar7,pSVar4);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03499554:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x33995B4]
// Nekki.SF2.GUI.Common.SceneSelector$$Awake @ RVA 0x33995B4

void Nekki_SF2_GUI_Common_SceneSelector__Awake
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Common_SceneSelector__Unselect(__this,method);
  Nekki_SF2_GUI_Common_SceneSelector__Refresh(__this,method_00);
  return;
}


// ===== public void Select()  [RVA 0x3399724]
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


// ===== public void Unselect()  [RVA 0x33995CC]
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


// ===== public void OnButtonClick()  [RVA 0x33998C0]
// Nekki.SF2.GUI.Common.SceneSelector$$OnButtonClick @ RVA 0x33998C0

void Nekki_SF2_GUI_Common_SceneSelector__OnButtonClick
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  int iVar1;
  NDPMLPGANCI_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar2;
  
  pNVar2 = (__this->fields).MKAAKGJNBHI;
  if (pNVar2 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
    if ((pNVar2->fields).GLDOIEEOPCB != 0) {
      return;
    }
    iVar1 = (__this->fields)._TargetScene;
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
      DAT_04565e5a = '\x01';
      method = extraout_x1;
    }
    if (iVar1 == KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB) {
      if (DAT_04566913 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo,method);
        DAT_04566913 = '\x01';
      }
      pNVar2 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar2 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
        Nekki_SF2_GUI_Common_SceneMenuScroll__Close(pNVar2,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_00,(__this->fields)._TargetScene,(Il2CppObject *)0x0,
                   (System_Action_object__o *)0x0,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33999A0]
// Nekki.SF2.GUI.Common.SceneSelector$$.ctor @ RVA 0x33999A0

void Nekki_SF2_GUI_Common_SceneSelector___ctor
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  (__this->fields)._TargetScene = 3;
  (__this->fields)._SelectedTitleColor.fields.b = (float)(int)auVar1._8_8_;
  (__this->fields)._SelectedTitleColor.fields.a = (float)(int)((ulong)auVar1._8_8_ >> 0x20);
  (__this->fields)._SelectedTitleColor.fields.r = (float)(int)auVar1._0_8_;
  (__this->fields)._SelectedTitleColor.fields.g = (float)(int)((ulong)auVar1._0_8_ >> 0x20);
  (__this->fields)._UnselectedTitleColor.fields.b = 0.0;
  (__this->fields)._UnselectedTitleColor.fields.a = 1.0;
  (__this->fields)._UnselectedTitleColor.fields.r = 0.0;
  (__this->fields)._UnselectedTitleColor.fields.g = 0.0;
  (__this->fields)._SelectionAnimationBaseAlpha = 0.2;
  (__this->fields)._SelectionAnimationDuration = 0.6;
  (__this->fields)._SelectionAnimationEase = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

