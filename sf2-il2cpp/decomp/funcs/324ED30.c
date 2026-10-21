// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$LeaveSectionAnimation @ RVA 0x324ED30

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LeaveSectionAnimation
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_GeneralMenuList__o *pSVar2;
  UnityEngine_Component_o *pUVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *pUVar6;
  DG_Tweening_Core_DOGetter_float__o *pDVar7;
  DG_Tweening_Core_DOSetter_float__o *pDVar8;
  UnityEngine_Transform_o *pUVar9;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar10;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_StaticFields *pUVar11;
  void **ppvVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567116 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_FDIGBCFEHLG__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_DELKCAJHOKD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_LGHFBNHCKNF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_MNDICMPDNNL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_OBCPCJBFHII__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04567116 = 1;
    method = extraout_x1;
  }
  pIVar1 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PPFAJFDIMIH_TypeInfo,method
                             );
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).menuList;
  if (pSVar2 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    pUVar3 = (UnityEngine_Component_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,
                        (__this->fields).FFPCEMDJGIK,
                        Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    if (pUVar3 != (UnityEngine_Component_o *)0x0) {
      pIVar4 = (Il2CppClass *)
               UnityEngine_Component__GetComponent<object>
                         (pUVar3,Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar13 = pIVar1 + 1;
        pIVar13->klass = pIVar4;
        thunk_FUN_01c20e04(pIVar13,pIVar4);
        pSVar2 = (__this->fields).menuList;
        if ((pSVar2 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
           (pUVar3 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,
                                (__this->fields).AIAODGKGPEI,
                                Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
           pUVar3 != (UnityEngine_Component_o *)0x0)) {
          pIVar5 = UnityEngine_Component__GetComponent<object>
                             (pUVar3,Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
          ppvVar12 = &pIVar1[1].monitor;
          *ppvVar12 = pIVar5;
          thunk_FUN_01c20e04(ppvVar12,pIVar5);
          pSVar2 = (__this->fields).menuList;
          if ((pSVar2 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
             ((pUVar3 = (UnityEngine_Component_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar2,
                                   (__this->fields).FFPCEMDJGIK,
                                   Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__
                                  ), pUVar3 != (UnityEngine_Component_o *)0x0 &&
              (pUVar6 = UnityEngine_Component__get_gameObject(pUVar3,(MethodInfo *)0x0),
              pUVar6 != (UnityEngine_GameObject_o *)0x0)))) {
            UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).menuList;
            if ((pSVar2 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
               ((pUVar3 = (UnityEngine_Component_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar2,
                                     (__this->fields).AIAODGKGPEI,
                                     Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__
                                    ), pUVar3 != (UnityEngine_Component_o *)0x0 &&
                (pUVar6 = UnityEngine_Component__get_gameObject(pUVar3,(MethodInfo *)0x0),
                pUVar6 != (UnityEngine_GameObject_o *)0x0)))) {
              UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
              if (pIVar13->klass != (Il2CppClass *)0x0) {
                UnityEngine_CanvasGroup__set_alpha
                          ((UnityEngine_CanvasGroup_o *)pIVar13->klass,1.0,(MethodInfo *)0x0);
                pDVar7 = (DG_Tweening_Core_DOGetter_float__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
                DG_Tweening_Core_DOGetter<float>___ctor();
                pDVar8 = (DG_Tweening_Core_DOSetter_float__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
                DG_Tweening_Core_DOSetter<float>___ctor();
                if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                DG_Tweening_DOTween__To(pDVar7,pDVar8,0.0,0.2,(MethodInfo *)0x0);
                if (pIVar13->klass != (Il2CppClass *)0x0) {
                  pUVar9 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pIVar13->klass,(MethodInfo *)0x0);
                  if (DAT_0455fa7f == '\0') {
                    FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    DAT_0455fa7f = '\x01';
                  }
                  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localScale
                              (pUVar9,(UnityEngine_Vector3_o)
                                      (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).
                                      fields,(MethodInfo *)0x0);
                    if (pIVar13->klass != (Il2CppClass *)0x0) {
                      pUVar9 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pIVar13->klass,
                                          (MethodInfo *)0x0);
                      pDVar10 = DG_Tweening_ShortcutExtensions__DOScale
                                          (pUVar9,0.8,0.2,(MethodInfo *)0x0);
                      DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                ((Il2CppObject *)pDVar10,8,
                                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                );
                      if (*ppvVar12 != (UnityEngine_CanvasGroup_o *)0x0) {
                        UnityEngine_CanvasGroup__set_alpha(*ppvVar12,0.0,(MethodInfo *)0x0);
                        pDVar7 = (DG_Tweening_Core_DOGetter_float__o *)
                                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
                        DG_Tweening_Core_DOGetter<float>___ctor();
                        pDVar8 = (DG_Tweening_Core_DOSetter_float__o *)
                                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
                        DG_Tweening_Core_DOSetter<float>___ctor();
                        DG_Tweening_DOTween__To(pDVar7,pDVar8,1.0,0.2,(MethodInfo *)0x0);
                        if (pIVar1[1].monitor != (UnityEngine_Component_o *)0x0) {
                          pUVar9 = UnityEngine_Component__get_transform
                                             (pIVar1[1].monitor,(MethodInfo *)0x0);
                          if (DAT_0455fa7f == '\0') {
                            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                            DAT_0455fa7f = '\x01';
                          }
                          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                            pUVar11 = UnityEngine_Vector3_TypeInfo->static_fields;
                            value.fields.z = (pUVar11->oneVector).fields.z * 1.1;
                            value.fields.y = (pUVar11->oneVector).fields.y * 1.1;
                            value.fields.x = (pUVar11->oneVector).fields.x * 1.1;
                            UnityEngine_Transform__set_localScale(pUVar9,value,(MethodInfo *)0x0);
                            if (*ppvVar12 != (UnityEngine_Component_o *)0x0) {
                              pUVar9 = UnityEngine_Component__get_transform
                                                 (*ppvVar12,(MethodInfo *)0x0);
                              pDVar10 = DG_Tweening_ShortcutExtensions__DOScale
                                                  (pUVar9,1.0,0.2,(MethodInfo *)0x0);
                              pIVar1 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                                 ((Il2CppObject *)pDVar10,9,
                                                  Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                                 );
                              action = (DG_Tweening_TweenCallback_o *)
                                       thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                              DG_Tweening_TweenCallback___ctor();
                              DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                                        (pIVar1,action,
                                         Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                        );
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

