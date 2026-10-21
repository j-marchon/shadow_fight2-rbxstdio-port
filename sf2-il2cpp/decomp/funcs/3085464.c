// Nekki.SF2.GUI.Pvp.RandomSelectionModule.NGBNNGGGCOC$$MoveNext @ RVA 0x3085464

bool Nekki_SF2_GUI_Pvp_RandomSelectionModule_NGBNNGGGCOC__MoveNext
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_NGBNNGGGCOC_o *__this,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar5;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *t;
  Il2CppObject *t_00;
  UnityEngine_WaitForSeconds_o *pUVar6;
  Nekki_SF2_GUI_Pvp_RandomItem_o *pNVar7;
  System_Action_string__o *pSVar8;
  Il2CppObject **ppIVar9;
  Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *pNVar10;
  Nekki_SF2_GUI_Pvp_RandomItem_o **ppNVar11;
  UnityEngine_Color_o endValue;
  UnityEngine_Color_o endValue_00;
  UnityEngine_Color_o endValue_01;
  
  if ((DAT_0456601f & 1) == 0) {
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_0456601f = 1;
  }
  uVar2 = (__this->fields).__1__state;
  if (uVar2 < 4) {
    pNVar10 = (__this->fields).__4__this;
    switch(uVar2) {
    case 0:
      (__this->fields).__1__state = -1;
      if (pNVar10 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) {
        lVar1 = 0x28;
        if ((pNVar10->fields).OJODPOEPFHO != false) {
          lVar1 = 0x30;
        }
        (__this->fields)._winner_5__2 =
             *(Nekki_SF2_GUI_Pvp_RandomItem_o **)((long)&pNVar10->klass + lVar1);
        thunk_FUN_01c20e04();
        lVar1 = 0x30;
        if ((pNVar10->fields).OJODPOEPFHO != false) {
          lVar1 = 0x28;
        }
        ppNVar11 = &(__this->fields)._loser_5__3;
        *ppNVar11 = *(Nekki_SF2_GUI_Pvp_RandomItem_o **)((long)&pNVar10->klass + lVar1);
        thunk_FUN_01c20e04(ppNVar11);
        if (*ppNVar11 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) {
          endValue.fields.b = 0.2;
          endValue.fields.a = 1.0;
          endValue.fields.r = 0.2;
          endValue.fields.g = 0.2;
          DG_Tweening_DOTweenModuleUI__DOColor
                    ((UnityEngine_UI_Image_o *)((*ppNVar11)->fields)._GrayBox,endValue,1.0,
                     (MethodInfo *)0x0);
          if (*ppNVar11 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) {
            endValue_00.fields.b = 0.4;
            endValue_00.fields.a = 1.0;
            endValue_00.fields.r = 0.4;
            endValue_00.fields.g = 0.4;
            DG_Tweening_DOTweenModuleUI__DOColor
                      ((UnityEngine_UI_Image_o *)((*ppNVar11)->fields)._Preview,endValue_00,1.0,
                       (MethodInfo *)0x0);
            pUVar6 = (UnityEngine_WaitForSeconds_o *)
                     thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(pUVar6,0.2,(MethodInfo *)0x0);
            ppIVar9 = &(__this->fields).__2__current;
            *ppIVar9 = (Il2CppObject *)pUVar6;
            thunk_FUN_01c20e04(ppIVar9,pUVar6);
            (__this->fields).__1__state = 1;
            return true;
          }
        }
      }
      break;
    case 1:
      pNVar7 = (__this->fields)._loser_5__3;
      (__this->fields).__1__state = -1;
      if (((pNVar7 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
          (pNVar3 = (pNVar7->fields)._GrayBox, pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) &&
         (pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetSiblingIndex(pUVar4,0,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._loser_5__3;
        if ((pNVar7 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
           (pNVar3 = (pNVar7->fields)._GrayBox, pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
          pDVar5 = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                             (pUVar4,0.0,0.8,false,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__SetEase<object>
                    ((Il2CppObject *)pDVar5,6,
                     Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                    );
          pNVar7 = (__this->fields)._winner_5__2;
          if ((pNVar7 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) &&
             (pNVar3 = (pNVar7->fields)._GrayBox, pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
          {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
            pDVar5 = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                               (pUVar4,0.0,0.8,false,(MethodInfo *)0x0);
            DG_Tweening_TweenSettingsExtensions__SetEase<object>
                      ((Il2CppObject *)pDVar5,6,
                       Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                      );
            pUVar6 = (UnityEngine_WaitForSeconds_o *)
                     thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(pUVar6,0.6,(MethodInfo *)0x0);
            ppIVar9 = &(__this->fields).__2__current;
            *ppIVar9 = (Il2CppObject *)pUVar6;
            thunk_FUN_01c20e04(ppIVar9,pUVar6);
            (__this->fields).__1__state = 2;
            return true;
          }
        }
      }
      break;
    case 2:
      pNVar7 = (__this->fields)._winner_5__2;
      (__this->fields).__1__state = -1;
      if (pNVar7 != (Nekki_SF2_GUI_Pvp_RandomItem_o *)0x0) {
        endValue_01.fields.b = 0.6;
        endValue_01.fields.a = 1.0;
        endValue_01.fields.r = 0.6;
        endValue_01.fields.g = 0.6;
        t = DG_Tweening_DOTweenModuleUI__DOColor
                      ((UnityEngine_UI_Image_o *)(pNVar7->fields)._GrayBox,endValue_01,0.06,
                       (MethodInfo *)0x0);
        t_00 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                         ((Il2CppObject *)t,8,1,
                          Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                         );
        DG_Tweening_TweenSettingsExtensions__SetEase<object>
                  (t_00,6,
                   Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                  );
        EDFDANKEBGF__EEPCFJIEALL((MethodInfo *)0x0);
        pUVar6 = (UnityEngine_WaitForSeconds_o *)
                 thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(pUVar6,1.5,(MethodInfo *)0x0);
        ppIVar9 = &(__this->fields).__2__current;
        *ppIVar9 = (Il2CppObject *)pUVar6;
        thunk_FUN_01c20e04(ppIVar9,pUVar6);
        (__this->fields).__1__state = 3;
        return true;
      }
      break;
    case 3:
      (__this->fields).__1__state = -1;
      if ((pNVar10 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) &&
         (pSVar8 = (pNVar10->fields).LKGKDIMGDHL, pSVar8 != (System_Action_string__o *)0x0)) {
        lVar1 = 0x60;
        if ((pNVar10->fields).OJODPOEPFHO != false) {
          lVar1 = 0x68;
        }
        (*(code *)(pSVar8->fields).super.super.invoke_impl)
                  ((pSVar8->fields).super.super.method_code,
                   *(undefined8 *)((long)&pNVar10->klass + lVar1),
                   (pSVar8->fields).super.super.method);
        return false;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

