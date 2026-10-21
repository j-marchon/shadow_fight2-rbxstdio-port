// Nekki.SF2.GUI.Map.MapButton$$DNIJFEPCHFA @ RVA 0x34A1078

void Nekki_SF2_GUI_Map_MapButton__DNIJFEPCHFA
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_CompositeImage_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Nekki_SF2_GUI_ResolutionImageLE_o *pNVar6;
  long *plVar7;
  System_String_o *pSVar8;
  Il2CppRGCTXData *pIVar9;
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo_27FC88C *method_03;
  MethodInfo *pMVar10;
  FKNCNNOOOIO_o *pFVar11;
  System_String_o *pSVar12;
  undefined8 in_d1;
  undefined4 uVar13;
  UnityEngine_Vector2_o UVar14;
  System_Nullable_Vector2__o __this_01;
  
  uVar13 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_0456849c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_12931);
    FUN_01bab630(&StringLiteral_16240);
    FUN_01bab630(&StringLiteral_4465);
    FUN_01bab630(&StringLiteral_5700);
    FUN_01bab630(&StringLiteral_16185);
    FUN_01bab630(&StringLiteral_304);
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_16223);
    FUN_01bab630(&StringLiteral_16009);
    FUN_01bab630(&StringLiteral_5699);
    FUN_01bab630(&StringLiteral_18943);
    FUN_01bab630(&StringLiteral_20419);
    FUN_01bab630(&StringLiteral_8821);
    DAT_0456849c = 1;
  }
  pFVar11 = (__this->fields).AEPNEAIEKOL;
  if (pFVar11 == (FKNCNNOOOIO_o *)0x0) {
    return;
  }
  pNVar3 = (__this->fields)._CompositeImage;
  if (pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) goto LAB_035a16f8;
  if ((pFVar11->fields).JHFAAGIPDAJ == (JOCNCPCOEAC_o *)0x0) {
    Nekki_SF2_GUI_CompositeImage__set_Data(pNVar3,(IGNEHHMICKB_o *)0x0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._CompositeImage;
    if ((pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035a16f8;
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    pNVar6 = (__this->fields)._Image;
    if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar6,true,(MethodInfo *)0x0);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) ||
       (pSVar12 = (pFVar11->fields).KPDPJONADPJ, pSVar12 == (System_String_o *)0x0))
    goto LAB_035a16f8;
    bVar1 = System_String__Contains(pSVar12,StringLiteral_1492,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_String__Contains(pSVar12,StringLiteral_20419,(MethodInfo *)0x0), bVar1)) {
      iVar2 = System_String__LastIndexOf(pSVar12,StringLiteral_1492,(MethodInfo *)0x0);
      pSVar12 = System_String__Substring(pSVar12,iVar2 + 1,(MethodInfo *)0x0);
      if (pSVar12 == (System_String_o *)0x0) goto LAB_035a16f8;
    }
    bVar1 = System_String__Contains(pSVar12,StringLiteral_5699,(MethodInfo *)0x0);
    if ((((bVar1) &&
         (bVar1 = System_String__EndsWith(pSVar12,StringLiteral_16009,(MethodInfo *)0x0), bVar1)) &&
        (pSVar12 = StringLiteral_5700, StringLiteral_5700 == (System_String_o *)0x0)) ||
       (((bVar1 = System_String__EndsWith(pSVar12,StringLiteral_16240,(MethodInfo *)0x0), bVar1 ||
         (bVar1 = System_String__EndsWith(pSVar12,StringLiteral_16185,(MethodInfo *)0x0), bVar1)) &&
        ((iVar2 = System_String__LastIndexOf(pSVar12,StringLiteral_18943,(MethodInfo *)0x0),
         StringLiteral_18943 == (System_String_o *)0x0 ||
         (pSVar12 = System_String__Remove
                              (pSVar12,iVar2,(StringLiteral_18943->fields)._stringLength,
                               (MethodInfo *)0x0), pSVar12 == (System_String_o *)0x0))))))
    goto LAB_035a16f8;
    bVar1 = System_String__Contains(pSVar12,StringLiteral_4465,(MethodInfo *)0x0);
    if (bVar1) {
      pMVar10 = (MethodInfo *)0x0;
      bVar1 = System_String__EndsWith(pSVar12,StringLiteral_16223,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar12 = Nekki_SF2_GUI_Map_MapButton__HEPKJDDDIOC
                            ((Nekki_SF2_GUI_Map_MapButton_o *)0x1,pSVar12,pMVar10);
      }
    }
    pNVar6 = (__this->fields)._Image;
    method_03 = (MethodInfo_27FC88C *)FUN_01bab718(string___TypeInfo,4);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (method_03 == (MethodInfo_27FC88C *)0x0))
    goto LAB_035a16f8;
    if (*(int *)&method_03->name == 0) {
LAB_035a16fc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    method_03->klass = (System_Nullable_T__c *)(pFVar11->fields).MEONABNPAPF;
    thunk_FUN_01c20e04(&method_03->klass);
    if (*(uint *)&method_03->name < 2) goto LAB_035a16fc;
    method_03->return_type = StringLiteral_12931;
    thunk_FUN_01c20e04();
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
    if (*(uint *)&method_03->name < 3) goto LAB_035a16fc;
    method_03->parameters = (Il2CppType **)pSVar8;
    thunk_FUN_01c20e04(&method_03->parameters,pSVar8);
    pIVar9 = (Il2CppRGCTXData *)MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
    if (*(uint *)&method_03->name < 4) goto LAB_035a16fc;
    method_03->rgctx_data = pIVar9;
    thunk_FUN_01c20e04();
    if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
    bVar1 = Nekki_SF2_GUI_ResolutionImage__TryImageWithPaths
                      ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar6,pSVar12,
                       (System_Collections_Generic_IEnumerable_string__o *)method_03,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pNVar6 = (__this->fields)._Image;
      if ((__this->fields).LKNPLNODCGF <= 0.0) {
        if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
        (*(pNVar6->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar6,(pNVar6->klass->vtable)._45_SetNativeSize.method);
        pMVar10 = extraout_x1_02;
      }
      else {
        if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
        (*(pNVar6->klass->vtable)._89_SetNativeSize.methodPtr)
                  (pNVar6,(pNVar6->klass->vtable)._89_SetNativeSize.method);
        pMVar10 = extraout_x1_00;
      }
    }
    else {
      pFVar11 = (__this->fields).AEPNEAIEKOL;
      if (pFVar11 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a16f8;
      method_03 = StringLiteral_304;
      pSVar12 = System_String__Concat
                          (StringLiteral_8821,(pFVar11->fields).KPDPJONADPJ,
                           (System_String_o *)StringLiteral_304,(pFVar11->fields).MEONABNPAPF,
                           (MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
      pMVar10 = extraout_x1_01;
    }
    pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,pMVar10);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (pUVar5 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_035a16f8;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar5,(UnityEngine_Vector2_o)(pFVar11->fields).FKICEICKCOG.fields,(MethodInfo *)0x0)
    ;
    pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_00);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (pUVar5 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_035a16f8;
    UnityEngine_RectTransform__set_anchorMax
              (pUVar5,(UnityEngine_Vector2_o)(pFVar11->fields).CCEKJNEFJKP.fields,(MethodInfo *)0x0)
    ;
    pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_01);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (pUVar5 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_035a16f8;
    UnityEngine_RectTransform__set_pivot
              (pUVar5,(UnityEngine_Vector2_o)(pFVar11->fields).LNBKBMNLJNG.fields,(MethodInfo *)0x0)
    ;
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if (pFVar11 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a16f8;
    bVar1 = Util__DJAEMCOEKOI((double)(pFVar11->fields).MJNNMHHINEF,1.0,1.000000013351432e-10,
                              (MethodInfo *)0x0);
    pMVar10 = method_02;
    if (!bVar1) {
      pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_02);
      pFVar11 = (__this->fields).AEPNEAIEKOL;
      if (pFVar11 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a16f8;
      UnityEngine_TransformExtensions__SetLocalScale
                ((UnityEngine_Transform_o *)pUVar5,(pFVar11->fields).MJNNMHHINEF,(MethodInfo *)0x0);
      pMVar10 = extraout_x1_03;
    }
    pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,pMVar10);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (pUVar5 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_035a16f8;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar5,(UnityEngine_Vector2_o)(pFVar11->fields).BEKOHBPEEKP.fields,(MethodInfo *)0x0)
    ;
    pMVar10 = extraout_x1_04;
  }
  else {
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_035a16f8;
    UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) ||
       (pNVar3 = (__this->fields)._CompositeImage, pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0))
    goto LAB_035a16f8;
    Nekki_SF2_GUI_CompositeImage__set_Data
              (pNVar3,(IGNEHHMICKB_o *)(pFVar11->fields).JHFAAGIPDAJ,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._CompositeImage;
    if ((pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) ||
       (pUVar5 = Nekki_SF2_GUI_CompositeImage__get_RectTransform(pNVar3,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035a16f8;
    UVar14 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
    pNVar6 = (__this->fields)._Image;
    if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
       (pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035a16f8;
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar5,0,UVar14.fields.x,(MethodInfo *)0x0)
    ;
    pNVar6 = (__this->fields)._Image;
    if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
       (pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035a16f8;
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar5,1,UVar14.fields.y,(MethodInfo *)0x0)
    ;
    pNVar6 = (__this->fields)._Image;
    if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
       (plVar7 = *(long **)&(pNVar6->fields).super.UseCacheForSingleSprites, plVar7 == (long *)0x0))
    goto LAB_035a16f8;
    (**(code **)(*plVar7 + 0x338))
              ((ulong)UVar14.fields & 0xffffffff,plVar7,*(undefined8 *)(*plVar7 + 0x340));
    pNVar6 = (__this->fields)._Image;
    if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
       (plVar7 = *(long **)&(pNVar6->fields).super.UseCacheForSingleSprites, plVar7 == (long *)0x0))
    goto LAB_035a16f8;
    (**(code **)(*plVar7 + 0x358))
              (CONCAT44(uVar13,UVar14.fields.y),plVar7,*(undefined8 *)(*plVar7 + 0x360));
    pNVar6 = (__this->fields)._Image;
    if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
    method_03 = (MethodInfo_27FC88C *)0x0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar6,false,(MethodInfo *)0x0);
    pMVar10 = extraout_x1;
  }
  pFVar11 = (__this->fields).AEPNEAIEKOL;
  if (pFVar11 != (FKNCNNOOOIO_o *)0x0) {
    if ((pFVar11->fields).OLBNFCKMBEL.fields.hasValue == false) {
      return;
    }
    __this_00 = (__this->fields)._indicator;
    if (__this_00 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
      pUVar5 = Nekki_SF2_GUI_Common_Indicator__get_RectTransform(__this_00,pMVar10);
      pFVar11 = (__this->fields).AEPNEAIEKOL;
      if (pFVar11 != (FKNCNNOOOIO_o *)0x0) {
        __this_01.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
        __this_01.fields._0_8_ = &(pFVar11->fields).OLBNFCKMBEL;
        UVar14 = System_Nullable<Vector2>__get_Value(__this_01,method_03);
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UVar14.fields.y = (float)((ulong)UVar14.fields >> 0x20);
          UnityEngine_RectTransform__set_anchoredPosition(pUVar5,UVar14,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_035a16f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

