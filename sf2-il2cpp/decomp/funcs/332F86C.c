// Nekki.SF2.GUI.Pvp.PlayerSelector$$SelectCurrentItem @ RVA 0x332F86C

void Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  UIFigures_UILine_o *pUVar4;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar5;
  Il2CppObject *pIVar6;
  MethodInfo *pMVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *extraout_x1_01;
  int32_t ease;
  int32_t loops;
  UnityEngine_Color_o *pUVar8;
  float duration;
  UnityEngine_Color_o endValue;
  
  pMVar7 = (MethodInfo *)(ulong)CJNHFNHJHPE;
  if ((DAT_045678fc & 1) == 0) {
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    DAT_045678fc = 1;
    pMVar7 = extraout_x1;
  }
  (__this->fields).KKPJEFOMLBP = CJNHFNHJHPE;
  pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,pMVar7);
  DG_Tweening_ShortcutExtensions__DOKill((UnityEngine_Component_o *)pUVar4,false,(MethodInfo *)0x0);
  pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_00);
  if (CJNHFNHJHPE) {
    if (pUVar4 != (UIFigures_UILine_o *)0x0) {
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pUVar4,
                 (pUVar4->klass->vtable)._23_set_color.method);
      pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_01);
      duration = 0.06;
      pUVar8 = &(__this->fields).defaultColor;
      pUVar1 = &(__this->fields).defaultColor;
      pUVar2 = &(__this->fields).defaultColor;
      pUVar3 = &(__this->fields).defaultColor;
      pDVar5 = DG_Tweening_DOTweenModuleUI__DOColor
                         ((UnityEngine_UI_Graphic_o *)pUVar4,(UnityEngine_Color_o)pUVar8->fields,
                          0.06,(MethodInfo *)0x0);
      pIVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                         ((Il2CppObject *)pDVar5,7,1,
                          Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                         );
      DG_Tweening_TweenSettingsExtensions__SetEase<object>
                (pIVar6,6,
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                );
      pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_02);
      DG_Tweening_ShortcutExtensions__DOKill
                ((UnityEngine_Component_o *)pUVar4,false,(MethodInfo *)0x0);
      pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_03);
      if (pUVar4 != (UIFigures_UILine_o *)0x0) {
        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pUVar4,
                   (pUVar4->klass->vtable)._23_set_color.method);
        ease = 6;
        loops = 7;
        pMVar7 = extraout_x1_00;
LAB_0342fa6c:
        pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,pMVar7);
        endValue.fields.r = (pUVar8->fields).r;
        endValue.fields.g = (pUVar1->fields).g;
        endValue.fields.b = (pUVar2->fields).b;
        endValue.fields.a = (pUVar3->fields).a;
        pDVar5 = DG_Tweening_DOTweenModuleUI__DOColor
                           ((UnityEngine_UI_Graphic_o *)pUVar4,endValue,duration,(MethodInfo *)0x0);
        pIVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                           ((Il2CppObject *)pDVar5,loops,1,
                            Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                           );
        DG_Tweening_TweenSettingsExtensions__SetEase<object>
                  (pIVar6,ease,
                   Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                  );
        return;
      }
    }
  }
  else if (pUVar4 != (UIFigures_UILine_o *)0x0) {
    (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
              ((__this->fields).defaultColor.fields.r,(__this->fields).defaultColor.fields.g,
               (__this->fields).defaultColor.fields.b,(__this->fields).defaultColor.fields.a,pUVar4,
               (pUVar4->klass->vtable)._23_set_color.method);
    pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_04);
    duration = 0.3;
    pUVar8 = &(__this->fields).paleColor;
    pUVar1 = &(__this->fields).paleColor;
    pUVar2 = &(__this->fields).paleColor;
    pUVar3 = &(__this->fields).paleColor;
    pDVar5 = DG_Tweening_DOTweenModuleUI__DOColor
                       ((UnityEngine_UI_Graphic_o *)pUVar4,(UnityEngine_Color_o)pUVar8->fields,0.3,
                        (MethodInfo *)0x0);
    pIVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                       ((Il2CppObject *)pDVar5,-1,1,
                        Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                       );
    DG_Tweening_TweenSettingsExtensions__SetEase<object>
              (pIVar6,5,
               Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
              );
    pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_05);
    DG_Tweening_ShortcutExtensions__DOKill
              ((UnityEngine_Component_o *)pUVar4,false,(MethodInfo *)0x0);
    pUVar4 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_06);
    if (pUVar4 != (UIFigures_UILine_o *)0x0) {
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                ((__this->fields).defaultColor.fields.r,(__this->fields).defaultColor.fields.g,
                 (__this->fields).defaultColor.fields.b,(__this->fields).defaultColor.fields.a,
                 pUVar4,(pUVar4->klass->vtable)._23_set_color.method);
      ease = 5;
      loops = -1;
      pMVar7 = extraout_x1_01;
      goto LAB_0342fa6c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

