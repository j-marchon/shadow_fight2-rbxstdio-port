// Nekki.SF2.GUI.Dialogs.StoryDialog$$HCCGKDLAFOJ @ RVA 0x32C1A10

void Nekki_SF2_GUI_Dialogs_StoryDialog__HCCGKDLAFOJ
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  undefined4 uVar1;
  Il2CppObject *MLANEHFOIPK;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Collections_Generic_List_NBLEEDEAPHB__o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Rect_o UVar13;
  System_Collections_Generic_List_Enumerator_T__o local_c8;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  
  if ((DAT_045674cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LabelAlias>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_12039);
    FUN_01bab630(&StringLiteral_8312);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_10457);
    DAT_045674cf = 1;
  }
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  pUVar3 = (__this->fields)._footerTextsSprite;
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._footerTextsSprite;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__DeleteAllChildrenObjects(pUVar4,(MethodInfo *)0x0);
      __this_00 = (__this->fields).OMJHNOCDBEH;
      if (__this_00 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_c8,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
        iVar7 = 0;
                    /* try { // try from 033c1b58 to 034c1cf3 has its CatchHandler @ 033c1b58
                       catch() { ... } // from try @ 033c1b58 with catch @ 033c1b58
                       catch() { ... } // from try @ 033c1fe0 with catch @ 033c1b58
                       catch() { ... } // from try @ 033c2100 with catch @ 033c1b58
                       catch() { ... } // from try @ 033c2108 with catch @ 033c1b58
                       catch() { ... } // from try @ 033c2244 with catch @ 033c1b58 */
        fVar9 = 0.0;
        local_b0.fields._current = local_c8.fields._current;
        local_b0.fields._index = local_c8.fields._index;
        local_b0.fields._version = local_c8.fields._version;
        local_b0.fields._list = local_c8.fields._list;
        fVar10 = 0.0;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_b0,
                                  Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__
                                 ), MLANEHFOIPK = local_b0.fields._current, bVar2) {
          pUVar3 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
          UnityEngine_GameObject___ctor(pUVar3,StringLiteral_8312,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = (Nekki_SF2_GUI_LabelAlias_o *)
                      UnityEngine_GameObject__AddComponent<object>
                                (pUVar3,Method_UnityEngine_GameObject_AddComponent<LabelAlias>__);
          if ((NBLEEDEAPHB_o *)MLANEHFOIPK == (NBLEEDEAPHB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (__this_01 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          CJNHFNHJHPE = ((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ALFDOLMJLKI;
          if (CJNHFNHJHPE < 1) {
            CJNHFNHJHPE = 0x67;
          }
          Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_UseLabelLineSpacing(__this_01,true,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing(__this_01,0.7,(MethodInfo *)0x0);
          (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                    ((ulong)(uint)(((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ONNNBMCAJMN).
                                  fields.r,
                     (ulong)(uint)(((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ONNNBMCAJMN).
                                  fields.g,
                     (((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ONNNBMCAJMN).fields.b,
                     (((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ONNNBMCAJMN).fields.a,
                     __this_01,(__this_01->klass->vtable)._23_set_color.method);
          UnityEngine_UI_Text__set_alignment((UnityEngine_UI_Text_o *)__this_01,4,(MethodInfo *)0x0)
          ;
          UnityEngine_UI_Text__set_alignByGeometry
                    ((UnityEngine_UI_Text_o *)__this_01,true,(MethodInfo *)0x0);
          UnityEngine_UI_Text__set_verticalOverflow
                    ((UnityEngine_UI_Text_o *)__this_01,1,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_RectTransform__set_sizeDelta
                    (pUVar5,(UnityEngine_Vector2_o)0x4120000044d20000,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_Alias
                    (__this_01,((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ABCHAOKFLGL,
                     (MethodInfo *)0x0);
          if (0 < iVar7) {
            fVar9 = fVar9 + 32.5;
          }
          fVar8 = (float)(*(__this_01->klass->vtable)._82_get_preferredHeight.methodPtr)
                                   (__this_01,
                                    (__this_01->klass->vtable)._82_get_preferredHeight.method);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._footerTextsSprite;
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar6 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1cf4 to 034c1d1b has its CatchHandler @ 033c218c */
          UnityEngine_Transform__SetParent(pUVar4,pUVar6,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          fVar10 = fVar10 + fVar8 * -0.5;
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar4,fVar10 + (float)((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->
                                            OJDCNGCCOBA,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionX
                    (pUVar4,(float)((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ILAJANAMHDM,
                     (MethodInfo *)0x0);
          fVar8 = (float)(*(__this_01->klass->vtable)._82_get_preferredHeight.methodPtr)
                                   (__this_01,
                                    (__this_01->klass->vtable)._82_get_preferredHeight.method);
                    /* try { // try from 033c1d50 to 034c1d7b has its CatchHandler @ 033c2188 */
          if (((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->KOLIPNBCKOB !=
              (LBMOOFGGPEB_o *)0x0) {
            pUVar3 = (__this->fields)._footerTextsSprite;
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_StoryDialog__HALPHJGHPIP
                      (__this,__this_01,(NBLEEDEAPHB_o *)MLANEHFOIPK,pUVar4,in_x4);
          }
                    /* try { // try from 033c1d84 to 034c1d8b has its CatchHandler @ 033c2170 */
          pUVar3 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 033c1d94 to 034c1d9b has its CatchHandler @ 033c2174 */
          UnityEngine_GameObject___ctor(pUVar3,StringLiteral_10457,(MethodInfo *)0x0);
                    /* try { // try from 033c1da0 to 034c1da7 has its CatchHandler @ 033c2180 */
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1db0 to 034c1db7 has its CatchHandler @ 033c2184 */
          __this_02 = (Nekki_SF2_GUI_ResolutionImage_o *)
                      UnityEngine_GameObject__AddComponent<object>
                                (pUVar3,
                                 Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
                    /* try { // try from 033c1db8 to 034c1dc7 has its CatchHandler @ 033c217c */
          if (__this_02 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = StringLiteral_14092._4_4_;
          (__this_02->fields).super.m_PixelsPerUnitMultiplier =
               (float)(undefined4)StringLiteral_14092;
          (__this_02->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
          thunk_FUN_01c20e04(&(__this_02->fields).super.m_PixelsPerUnitMultiplier);
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (__this_02,StringLiteral_12039,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._footerTextsSprite;
                    /* try { // try from 033c1e04 to 034c1e0f has its CatchHandler @ 033c2178 */
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar6 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1e20 to 034c1e23 has its CatchHandler @ 033c2150 */
          UnityEngine_Transform__SetParent(pUVar4,pUVar6,false,(MethodInfo *)0x0);
                    /* try { // try from 033c1e2c to 034c1e33 has its CatchHandler @ 033c216c */
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
                    /* try { // try from 033c1e44 to 034c1e4b has its CatchHandler @ 033c2168 */
          pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1e50 to 034c1e57 has its CatchHandler @ 033c215c */
          UnityEngine_RectTransform__set_sizeDelta
                    (pUVar5,(UnityEngine_Vector2_o)0x42e4000044960000,(MethodInfo *)0x0);
                    /* try { // try from 033c1e60 to 034c1e67 has its CatchHandler @ 033c2164 */
                    /* try { // try from 033c1e68 to 034c1e7b has its CatchHandler @ 033c2158 */
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1e80 to 034c1e8b has its CatchHandler @ 033c2160 */
          UVar11 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionX
                    (pUVar4,UVar11.fields.x,(MethodInfo *)0x0);
                    /* try { // try from 033c1e9c to 034c1ea3 has its CatchHandler @ 033c2130 */
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                    /* try { // try from 033c1eac to 034c1eb3 has its CatchHandler @ 033c2134 */
          pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar11 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
                    /* try { // try from 033c1ec4 to 034c1ecb has its CatchHandler @ 033c2138 */
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar4,UVar11.fields.y,(MethodInfo *)0x0);
                    /* try { // try from 033c1ed0 to 034c1ed7 has its CatchHandler @ 033c2140 */
          pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar13 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
                    /* try { // try from 033c1ee8 to 034c1eef has its CatchHandler @ 033c2144 */
                    /* try { // try from 033c1ef0 to 034c1f03 has its CatchHandler @ 033c2148 */
          fVar9 = fVar9 + UVar13.fields.m_Height;
          fVar10 = fVar10 - (fVar8 * 0.5 + 32.5);
          iVar7 = iVar7 + 1;
        }
                    /* try { // try from 033c1f04 to 034c1f0f has its CatchHandler @ 033c214c */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_b0,
                   Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
        pUVar3 = (__this->fields)._footerTextsSprite;
                    /* try { // try from 033c1f28 to 034c1f2b has its CatchHandler @ 033c2114 */
        if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar5 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
          value.fields.y = fVar9;
          value.fields.x = 1680.0;
                    /* try { // try from 033c1f38 to 034c1f67 has its CatchHandler @ 033c2118 */
          UnityEngine_RectTransform__set_sizeDelta(pUVar5,value,(MethodInfo *)0x0);
          pUVar4 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP(__this,method_00);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._textsSprite;
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              fVar9 = (__this->fields).OAMNJIMNBAC;
              pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
                pUVar3 = (__this->fields)._textsSprite;
                    /* try { // try from 033c1f80 to 034c1fa3 has its CatchHandler @ 033c212c */
                if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                   (pUVar5 = (UnityEngine_RectTransform_o *)
                             UnityEngine_GameObject__GetComponent<object>
                                       (pUVar3,
                                        Method_UnityEngine_GameObject_GetComponent<RectTransform>__)
                   , pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                  UVar13 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields)._footerTextsSprite;
                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 033c1fa4 to 034c1fab has its CatchHandler @ 033c2128 */
                    /* try { // try from 033c1fb0 to 034c1fbb has its CatchHandler @ 033c2124 */
                    fVar10 = UVar12.fields.y - UVar13.fields.m_Height;
                    /* try { // try from 033c1fc0 to 034c1fdf has its CatchHandler @ 033c213c */
                    fVar9 = UVar11.fields.y + fVar9 * -0.9 * 0.8 * 0.5;
                    if (fVar10 <= fVar9) {
                      fVar9 = fVar10;
                    }
                    pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 033c1fe0 to 034c20e7 has its CatchHandler @ 033c1b58 */
                    UnityEngine_TransformExtensions__SetLocalPositionY
                              (pUVar4,fVar9 + -60.0,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

