// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$EnterSectionAnimation @ RVA 0x324F5B0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__EnterSectionAnimation
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_List_GeneralMenuList__o *pSVar1;
  UnityEngine_Component_o *pUVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  DG_Tweening_Core_DOGetter_float__o *pDVar6;
  DG_Tweening_Core_DOSetter_float__o *pDVar7;
  UnityEngine_Transform_o *pUVar8;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_StaticFields *pUVar9;
  void **ppvVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Vector3_o value;
  
  if ((DAT_0456711b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_FDIGBCFEHLG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_EDMBLFFJOFC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_FJBEHIMBKEE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_HHHKPFDFBIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_JCCLIDGKNBK__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_0456711b = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).menuList;
  if (pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    pUVar2 = (UnityEngine_Component_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,
                        (__this->fields).FFPCEMDJGIK,
                        Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    if (pUVar2 != (UnityEngine_Component_o *)0x0) {
      pIVar3 = (Il2CppClass *)
               UnityEngine_Component__GetComponent<object>
                         (pUVar2,Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
      if (__this_00 != (Il2CppObject *)0x0) {
        pIVar11 = __this_00 + 1;
        pIVar11->klass = pIVar3;
        thunk_FUN_01c20e04(pIVar11,pIVar3);
        pSVar1 = (__this->fields).menuList;
        if ((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
           (pUVar2 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,
                                (__this->fields).AIAODGKGPEI,
                                Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
           pUVar2 != (UnityEngine_Component_o *)0x0)) {
          pIVar4 = UnityEngine_Component__GetComponent<object>
                             (pUVar2,Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
          ppvVar10 = &__this_00[1].monitor;
          *ppvVar10 = pIVar4;
          thunk_FUN_01c20e04(ppvVar10,pIVar4);
          pSVar1 = (__this->fields).menuList;
          if ((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
             ((pUVar2 = (UnityEngine_Component_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar1,
                                   (__this->fields).FFPCEMDJGIK,
                                   Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__
                                  ), pUVar2 != (UnityEngine_Component_o *)0x0 &&
              (pUVar5 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
              pUVar5 != (UnityEngine_GameObject_o *)0x0)))) {
            UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
            pSVar1 = (__this->fields).menuList;
            if ((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
               ((pUVar2 = (UnityEngine_Component_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar1,
                                     (__this->fields).AIAODGKGPEI,
                                     Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__
                                    ), pUVar2 != (UnityEngine_Component_o *)0x0 &&
                (pUVar5 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
                pUVar5 != (UnityEngine_GameObject_o *)0x0)))) {
              UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
              if (pIVar11->klass != (Il2CppClass *)0x0) {
                    /* try { // try from 0334f784 to 0344f7ab has its CatchHandler @ 0334fe44 */
                UnityEngine_CanvasGroup__set_alpha
                          ((UnityEngine_CanvasGroup_o *)pIVar11->klass,1.0,(MethodInfo *)0x0);
                pDVar6 = (DG_Tweening_Core_DOGetter_float__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
                DG_Tweening_Core_DOGetter<float>___ctor();
                pDVar7 = (DG_Tweening_Core_DOSetter_float__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
                    /* try { // try from 0334f7e0 to 0344f82b has its CatchHandler @ 0334fe4c */
                DG_Tweening_Core_DOSetter<float>___ctor();
                if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                DG_Tweening_DOTween__To(pDVar6,pDVar7,0.0,0.2,(MethodInfo *)0x0);
                if (pIVar11->klass != (Il2CppClass *)0x0) {
                  pUVar8 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pIVar11->klass,(MethodInfo *)0x0);
                    /* try { // try from 0334f830 to 0344f837 has its CatchHandler @ 0334fdbc */
                  if (DAT_0455fa7f == '\0') {
                    /* try { // try from 0334f83c to 0344f847 has its CatchHandler @ 0334fdc8 */
                    FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    DAT_0455fa7f = '\x01';
                  }
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0334f864 to 0344f86f has its CatchHandler @ 0334fdb4 */
                    UnityEngine_Transform__set_localScale
                              (pUVar8,(UnityEngine_Vector3_o)
                                      (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).
                                      fields,(MethodInfo *)0x0);
                    if (pIVar11->klass != (Il2CppClass *)0x0) {
                    /* try { // try from 0334f87c to 0344f887 has its CatchHandler @ 0334fdb8 */
                      pUVar8 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pIVar11->klass,
                                          (MethodInfo *)0x0);
                    /* try { // try from 0334f890 to 0344f89f has its CatchHandler @ 0334fda0 */
                      DG_Tweening_ShortcutExtensions__DOScale(pUVar8,1.1,0.2,(MethodInfo *)0x0);
                      if (*ppvVar10 != (UnityEngine_CanvasGroup_o *)0x0) {
                    /* try { // try from 0334f8a4 to 0344f8af has its CatchHandler @ 0334fdb0 */
                    /* try { // try from 0334f8b8 to 0344f8c3 has its CatchHandler @ 0334fda4 */
                        UnityEngine_CanvasGroup__set_alpha(*ppvVar10,0.0,(MethodInfo *)0x0);
                        pDVar6 = (DG_Tweening_Core_DOGetter_float__o *)
                                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
                    /* try { // try from 0334f8c4 to 0344f9db has its CatchHandler @ 0334f534 */
                        DG_Tweening_Core_DOGetter<float>___ctor();
                        pDVar7 = (DG_Tweening_Core_DOSetter_float__o *)
                                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
                        DG_Tweening_Core_DOSetter<float>___ctor();
                        DG_Tweening_DOTween__To(pDVar6,pDVar7,1.0,0.2,(MethodInfo *)0x0);
                        if (__this_00[1].monitor != (UnityEngine_Component_o *)0x0) {
                          pUVar8 = UnityEngine_Component__get_transform
                                             (__this_00[1].monitor,(MethodInfo *)0x0);
                          if (DAT_0455fa7f == '\0') {
                            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                            DAT_0455fa7f = '\x01';
                          }
                          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                            pUVar9 = UnityEngine_Vector3_TypeInfo->static_fields;
                            value.fields.z = (pUVar9->oneVector).fields.z * 0.8;
                            value.fields.y = (pUVar9->oneVector).fields.y * 0.8;
                            value.fields.x = (pUVar9->oneVector).fields.x * 0.8;
                            UnityEngine_Transform__set_localScale(pUVar8,value,(MethodInfo *)0x0);
                            if (*ppvVar10 != (UnityEngine_Component_o *)0x0) {
                              pUVar8 = UnityEngine_Component__get_transform
                                                 (*ppvVar10,(MethodInfo *)0x0);
                              t = DG_Tweening_ShortcutExtensions__DOScale
                                            (pUVar8,1.0,0.2,(MethodInfo *)0x0);
                              action = (DG_Tweening_TweenCallback_o *)
                                       thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                              DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 0334f9dc to 0344f9e3 has its CatchHandler @ 0334fdcc */
                    /* try { // try from 0334f9ec to 0344f9f3 has its CatchHandler @ 0334fa2c */
                              DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                                        ((Il2CppObject *)t,action,
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

