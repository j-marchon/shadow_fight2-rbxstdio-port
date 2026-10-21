// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$Init @ RVA 0x352DC9C

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__Init
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,ODKDFMHHLIP_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_TextGenerator_o *__this_01;
  UnityEngine_RectTransform_o *pUVar3;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *extraout_x0;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *__this_02;
  Il2CppObject *pIVar6;
  System_IObservable_Unit__o *pSVar7;
  System_Action_T__o *pSVar8;
  System_Action_Action__o **ppSVar9;
  UnityEngine_GameObject_o *pUVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar11;
  System_Action_Action__o *addHandler;
  UnityEngine_UI_Text_o *pUVar12;
  System_String_o *str;
  System_Action_Action__o *removeHandler;
  float fVar13;
  UnityEngine_Vector2_o UVar14;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar15;
  UnityEngine_TextGenerationSettings_o UStack_190;
  UnityEngine_TextGenerationSettings_o UStack_130;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this_00;
  
  pMVar11 = (MethodInfo *)&UStack_190;
  if ((DAT_04568a3c & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MessageItem_HHOLKGEHGAB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MessageItem_NGKAMMODKNF__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&UnityEngine_TextGenerator_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_FJFIMOHEBBM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_MINHBFCDGEC__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo);
    DAT_04568a3c = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  (__this->fields)._DOMCENNEEFM_k__BackingField = IHNKCJHDDKD;
  thunk_FUN_01c20e04(&(__this->fields)._DOMCENNEEFM_k__BackingField,IHNKCJHDDKD);
  if (IHNKCJHDDKD == (ODKDFMHHLIP_o *)0x0) goto LAB_0362e300;
  pUVar12 = (__this->fields)._message;
  (__this->fields).NBMPEEDDGKD = (IHNKCJHDDKD->fields).HCNDEELOKHA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_01 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *)(ulong)bVar2;
  fVar13 = 0.0;
  if (bVar2) {
    pUVar12 = (__this->fields)._message;
    if (pUVar12 == (UnityEngine_UI_Text_o *)0x0) goto LAB_0362e300;
    str = (IHNKCJHDDKD->fields).ABCHAOKFLGL;
    (*(pUVar12->klass->vtable)._75_set_text.methodPtr)
              (pUVar12,str,(pUVar12->klass->vtable)._75_set_text.method);
    __this_01 = (UnityEngine_TextGenerator_o *)
                thunk_FUN_01bda818(UnityEngine_TextGenerator_TypeInfo);
    UnityEngine_TextGenerator___ctor(__this_01,(MethodInfo *)0x0);
    pUVar12 = (__this->fields)._message;
    if ((pUVar12 == (UnityEngine_UI_Text_o *)0x0) ||
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar12,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0362e300;
    UVar15 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    UnityEngine_UI_Text__GetGenerationSettings
              (&UStack_130,pUVar12,(UnityEngine_Vector2_o)UVar15.fields._8_8_,(MethodInfo *)0x0);
    memcpy(&local_d0,&UStack_130,0x60);
    memcpy(&UStack_130,&local_d0,0x60);
    if (__this_01 == (UnityEngine_TextGenerator_o *)0x0) goto LAB_0362e300;
    memcpy(&UStack_190,&UStack_130,0x60);
    fVar13 = UnityEngine_TextGenerator__GetPreferredHeight
                       (__this_01,str,&UStack_190,(MethodInfo *)0x0);
    fVar13 = fVar13 + -40.0;
    __this_00 = extraout_x0;
    method_01 = pMVar11;
  }
  iVar1 = (IHNKCJHDDKD->fields).DNPAFIFHKIP;
  if (iVar1 == 0) {
    pUVar10 = (__this->fields)._systemMessageItemContentPrefab;
LAB_0362decc:
    pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OHNGNOIEJLH(__this_00,pUVar10,method_01);
    (__this->fields).JDLPKBDPEBL = pNVar4;
    thunk_FUN_01c20e04(&(__this->fields).JDLPKBDPEBL);
  }
  else if (iVar1 == 2) {
    pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OHNGNOIEJLH
                       (__this_00,(__this->fields)._raidInvitationMessageItemContentPrefab,method_01
                       );
    (__this->fields).JDLPKBDPEBL = pNVar4;
    thunk_FUN_01c20e04(&(__this->fields).JDLPKBDPEBL);
    pUVar12 = (__this->fields)._message;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar2) {
      pUVar12 = (__this->fields)._message;
      if ((pUVar12 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
         pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0362e300;
      UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 1) {
    pUVar10 = (__this->fields)._memberMessageItemContentPrefab;
    goto LAB_0362decc;
  }
  pNVar4 = (__this->fields).JDLPKBDPEBL;
                    /* try { // try from 0362df4c to 0372e0b3 has its CatchHandler @ 0362df4c
                       catch() { ... } // from try @ 0362df4c with catch @ 0362df4c
                       catch() { ... } // from try @ 0362e0f0 with catch @ 0362df4c
                       catch() { ... } // from try @ 0362e124 with catch @ 0362df4c
                       catch() { ... } // from try @ 0362e158 with catch @ 0362df4c
                       catch() { ... } // from try @ 0362e188 with catch @ 0362df4c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) goto LAB_0362e0f4;
  pUVar3 = (__this->fields).super._visibilityRoot;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = (__this->fields).super._visibilityRoot;
  }
  else {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).JDLPKBDPEBL;
  if ((pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent
              (pUVar5,(UnityEngine_Transform_o *)pUVar3,false,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).JDLPKBDPEBL;
    if ((pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetAsLastSibling(pUVar5,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).JDLPKBDPEBL;
      if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) {
        (*pNVar4->klass[1]._1.image)(pNVar4,IHNKCJHDDKD,pNVar4->klass[1]._1.gc_desc);
        pUVar3 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
          pUVar3 = (UnityEngine_RectTransform_o *)0x0;
        }
        else if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
          pUVar3 = (UnityEngine_RectTransform_o *)0x0;
        }
        pNVar4 = (__this->fields).JDLPKBDPEBL;
        if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) {
          __this_02 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
            __this_02 = (UnityEngine_RectTransform_o *)0x0;
          }
          else if (__this_02->klass != UnityEngine_RectTransform_TypeInfo) {
            __this_02 = (UnityEngine_RectTransform_o *)0x0;
          }
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar2) {
                    /* try { // try from 0362e0b4 to 0372e0bb has its CatchHandler @ 0362e13c */
              if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                UVar14 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
                fVar13 = fVar13 + UVar14.fields.y;
                UVar14.fields.y = fVar13;
                    /* try { // try from 0362e0d0 to 0372e0db has its CatchHandler @ 0362e138 */
                UnityEngine_RectTransform__set_sizeDelta(__this_02,UVar14,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  value.fields.y = fVar13;
                  value.fields.x = UVar14.fields.x;
                    /* try { // try from 0362e0e4 to 0372e0ef has its CatchHandler @ 0362e134 */
                    /* try { // try from 0362e0f0 to 0372e117 has its CatchHandler @ 0362df4c */
                  UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
                  goto LAB_0362e0f4;
                }
              }
              goto LAB_0362e300;
            }
          }
LAB_0362e0f4:
                    /* try { // try from 0362e118 to 0372e11b has its CatchHandler @ 0362e130 */
                    /* try { // try from 0362e11c to 0372e11f has its CatchHandler @ 0362e12c */
                    /* try { // try from 0362e120 to 0372e123 has its CatchHandler @ 0362e128 */
                    /* try { // try from 0362e124 to 0372e153 has its CatchHandler @ 0362df4c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e120 with catch @ 0362e128
                        */
          pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e11c with catch @ 0362e12c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e118 with catch @ 0362e130
                        */
          pSVar7 = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar6,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e0e4 with catch @ 0362e134
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e0d0 with catch @ 0362e138
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e0b4 with catch @ 0362e13c
                        */
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
                    /* try { // try from 0362e154 to 0372e157 has its CatchHandler @ 0362e178 */
          System_Action<Unit>___ctor();
                    /* try { // try from 0362e158 to 0372e17f has its CatchHandler @ 0362df4c */
          pIVar6 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<Unit>
                             ((System_IObservable_T__o *)pSVar7,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar6,(UnityEngine_Component_o *)__this,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* catch() { ... } // from try @ 0362e154 with catch @ 0362e178 */
          if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0362e180 to 0372e187 has its CatchHandler @ 0362e19c */
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 0362e188 to 0372e193 has its CatchHandler @ 0362df4c */
          addHandler = Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields->
                       __9__21_1;
          if (addHandler == (System_Action_Action__o *)0x0) {
                    /* try { // try from 0362e194 to 0372e19b has its CatchHandler @ 0362e19c */
            if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0362e180 with catch @ 0362e19c
                       catch(type#2 @ 00000000) { ... } // from try @ 0362e194 with catch @ 0362e19c
                        */
              thunk_FUN_01ba7564();
            }
            addHandler = (System_Action_Action__o *)
                         thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar9 = &Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields->
                       __9__21_1;
            *ppSVar9 = addHandler;
            thunk_FUN_01c20e04(ppSVar9,addHandler);
          }
          if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler =
               Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields->__9__21_2;
          if (removeHandler == (System_Action_Action__o *)0x0) {
            if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            removeHandler =
                 (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar9 = &Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields->
                       __9__21_2;
            *ppSVar9 = removeHandler;
            thunk_FUN_01c20e04(ppSVar9,removeHandler);
          }
          if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar7 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
          System_Action<Unit>___ctor();
          pIVar6 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<Unit>
                             ((System_IObservable_T__o *)pSVar7,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar6,(UnityEngine_Component_o *)__this,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OnTimerTick(__this,method_00);
          return;
        }
      }
    }
  }
LAB_0362e300:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

