// Nekki.SF2.GUI.TextPic$$DLLFGLAOKHG @ RVA 0x30B6098

System_Collections_Generic_List_IHIFNKAMALG__o *
Nekki_SF2_GUI_TextPic__DLLFGLAOKHG(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  int32_t iVar7;
  int capacity;
  UnityEngine_Font_o *x;
  System_Collections_Generic_List_IHIFNKAMALG__o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_TextGenerator_o *pUVar8;
  UnityEngine_GameObject_o *context;
  System_Collections_Generic_IList_UIVertex__o *JGHIJMJNJLE;
  Il2CppMethodPointer *ppIVar9;
  IHIFNKAMALG_o *__this_02;
  MethodInfo *method_00;
  System_Action_o *pSVar10;
  System_Collections_Generic_IList_UIVertex__c *pSVar11;
  IHIFNKAMALG_array *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_String_o *str;
  int OGPGLGPMEPD;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector2_o UVar18;
  UnityEngine_Rect_o UVar19;
  float local_1b8;
  float local_1b4;
  UnityEngine_TextGenerationSettings_o UStack_148;
  System_Collections_Generic_List_Enumerator_T__o local_e8;
  UnityEngine_TextGenerationSettings_o local_d0;
  
  if ((DAT_04566210 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_get_Current__);
    FUN_01bab630(&System_Collections_Generic_ICollection<UIVertex>_TypeInfo);
    FUN_01bab630(&IHIFNKAMALG_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<UIVertex>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566210 = 1;
  }
  local_e8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e8.fields._index = 0;
  local_e8.fields._version = 0;
  local_d0.fields.generationExtents.fields.x = 0.0;
  local_d0.fields.generationExtents.fields.y = 0.0;
  local_d0.fields.verticalOverflow = 0;
  local_d0.fields.horizontalOverflow = 0;
  local_d0.fields.generateOutOfBounds = false;
  local_d0.fields._89_7_ = 0;
  local_d0.fields.pivot.fields.x = 0.0;
  local_d0.fields.pivot.fields.y = 0.0;
  local_d0.fields.fontStyle = 0;
  local_d0.fields.textAnchor = 0;
  local_d0.fields.richText = false;
  local_d0.fields._33_3_ = 0;
  local_d0.fields.scaleFactor = 0.0;
  local_d0.fields.resizeTextMaxSize = 0;
  local_d0.fields.updateBounds = false;
  local_d0.fields._61_3_ = 0;
  local_d0.fields.alignByGeometry = false;
  local_d0.fields.resizeTextForBestFit = false;
  local_d0.fields._50_2_ = 0;
  local_d0.fields.resizeTextMinSize = 0;
  local_d0.fields.color.fields.r = 0.0;
  local_d0.fields.color.fields.g = 0.0;
  local_d0.fields.font = (UnityEngine_Font_o *)0x0;
  local_d0.fields.fontSize = 0;
  local_d0.fields.lineSpacing = 0.0;
  local_d0.fields.color.fields.b = 0.0;
  local_d0.fields.color.fields.a = 0.0;
  local_e8.fields._current = (Il2CppObject *)0x0;
  x = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 031b61c8 to 032b61ef has its CatchHandler @ 031b656c */
  if (bVar6) {
    __this_00 = (System_Collections_Generic_List_IHIFNKAMALG__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
LAB_031b6450:
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
                    /* try { // try from 031b6584 to 032b6587 has its CatchHandler @ 031b6598 */
                    /* catch() { ... } // from try @ 031b6584 with catch @ 031b6598 */
    return __this_00;
  }
  __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                        ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar19 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    Nekki_SF2_GUI_TextPic__GGKHBFKNNOC
              (&local_d0,__this,(UnityEngine_Vector2_o)UVar19.fields._8_8_,method_00);
    pUVar8 = UnityEngine_UI_Text__get_cachedTextGenerator
                       ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
    pSVar10 = (__this->fields).NFECDKAEFJL;
    if (pSVar10 != (System_Action_o *)0x0) {
      str = (System_String_o *)(pSVar10->fields).super.super.method_ptr;
                    /* try { // try from 031b6224 to 032b624f has its CatchHandler @ 031b6568 */
      memcpy(&local_1b8,&local_d0,0x60);
      context = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_TextGenerator_o *)0x0) {
        memcpy(&UStack_148,&local_1b8,0x60);
                    /* try { // try from 031b6264 to 032b626f has its CatchHandler @ 031b6304 */
        UnityEngine_TextGenerator__PopulateWithErrors
                  (pUVar8,str,&UStack_148,context,(MethodInfo *)0x0);
                    /* try { // try from 031b627c to 032b6297 has its CatchHandler @ 031b6314 */
        if (*(int *)((long)&(__this->fields).MEIDNEHHHKI + 4) < 1) {
          pUVar8 = UnityEngine_UI_Text__get_cachedTextGenerator
                             ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_TextGenerator_o *)0x0) goto LAB_031b65a4;
          iVar7 = UnityEngine_TextGenerator__get_fontSizeUsedForBestFit(pUVar8,(MethodInfo *)0x0);
          *(int32_t *)((long)&(__this->fields).MEIDNEHHHKI + 4) = iVar7;
        }
                    /* try { // try from 031b629c to 032b62ab has its CatchHandler @ 031b6310 */
        pUVar8 = UnityEngine_UI_Text__get_cachedTextGenerator
                           ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031b62b0 to 032b62cf has its CatchHandler @ 031b630c */
        if ((pUVar8 != (UnityEngine_TextGenerator_o *)0x0) &&
           (JGHIJMJNJLE = UnityEngine_TextGenerator__get_verts(pUVar8,(MethodInfo *)0x0),
           JGHIJMJNJLE != (System_Collections_Generic_IList_UIVertex__o *)0x0)) {
          pSVar11 = JGHIJMJNJLE->klass;
          uVar1._0_1_ = (pSVar11->_2).rank;
          uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
          uVar13 = (ulong)uVar1;
          if (uVar13 != 0) {
                    /* try { // try from 031b62d4 to 032b62f3 has its CatchHandler @ 031b6308 */
            piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_ICollection<UIVertex>_TypeInfo) {
                    /* catch() { ... } // from try @ 031b6264 with catch @ 031b6304 */
                    /* catch() { ... } // from try @ 031b62d4 with catch @ 031b6308 */
                    /* catch() { ... } // from try @ 031b62b0 with catch @ 031b630c */
                ppIVar9 = &pSVar11->vtable[*piVar14].methodPtr;
                goto LAB_031b6310;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
                    /* try { // try from 031b62fc to 032b62ff has its CatchHandler @ 031b6318 */
          ppIVar9 = (Il2CppMethodPointer *)
                    FUN_01b81914(JGHIJMJNJLE,
                                 System_Collections_Generic_ICollection<UIVertex>_TypeInfo,0);
                    /* try { // try from 031b6300 to 032b632f has its CatchHandler @ 031b5f3c */
LAB_031b6310:
                    /* catch() { ... } // from try @ 031b629c with catch @ 031b6310 */
                    /* catch() { ... } // from try @ 031b627c with catch @ 031b6314 */
                    /* catch() { ... } // from try @ 031b62fc with catch @ 031b6318 */
          capacity = (**ppIVar9)(JGHIJMJNJLE,(MethodInfo *)ppIVar9[1]);
          __this_00 = (System_Collections_Generic_List_IHIFNKAMALG__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
                    /* try { // try from 031b6330 to 032b6347 has its CatchHandler @ 031b6404 */
          if (0 < capacity) {
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)__this_00,capacity,
                       Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
                    /* try { // try from 031b6350 to 032b6353 has its CatchHandler @ 031b63f4 */
                    /* try { // try from 031b6358 to 032b636b has its CatchHandler @ 031b63fc */
            OGPGLGPMEPD = 0;
            do {
              __this_02 = (IHIFNKAMALG_o *)thunk_FUN_01bda818(IHIFNKAMALG_TypeInfo);
                    /* try { // try from 031b6370 to 032b637b has its CatchHandler @ 031b63f0 */
              IHIFNKAMALG___ctor(__this_02,JGHIJMJNJLE,OGPGLGPMEPD,(MethodInfo *)0x0);
              lVar5 = Method_System_Collections_Generic_List<IHIFNKAMALG>_Add__;
                    /* try { // try from 031b6380 to 032b639b has its CatchHandler @ 031b63ec */
              if (__this_00 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)
              goto LAB_031b65a4;
              pIVar12 = (__this_00->fields)._items;
              (__this_00->fields)._version = (__this_00->fields)._version + 1;
              if (pIVar12 == (IHIFNKAMALG_array *)0x0) goto LAB_031b65a4;
              uVar4 = (__this_00->fields)._size;
                    /* try { // try from 031b63a0 to 032b63af has its CatchHandler @ 031b63e4 */
              if (uVar4 < (uint)pIVar12->max_length) {
                    /* try { // try from 031b63b0 to 032b63c3 has its CatchHandler @ 031b5f3c */
                (__this_00->fields)._size = uVar4 + 1;
                pIVar12->m_Items[(int)uVar4] = __this_02;
                thunk_FUN_01c20e04(pIVar12->m_Items + (int)uVar4,__this_02);
                    /* try { // try from 031b63c4 to 032b63d3 has its CatchHandler @ 031b6404 */
              }
              else {
                    /* try { // try from 031b63d8 to 032b63df has its CatchHandler @ 031b63e8 */
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              OGPGLGPMEPD = OGPGLGPMEPD + 1;
                    /* catch() { ... } // from try @ 031b63a0 with catch @ 031b63e4 */
                    /* catch() { ... } // from try @ 031b63d8 with catch @ 031b63e8 */
            } while (capacity != OGPGLGPMEPD);
                    /* catch() { ... } // from try @ 031b6380 with catch @ 031b63ec */
                    /* catch() { ... } // from try @ 031b6370 with catch @ 031b63f0 */
                    /* catch() { ... } // from try @ 031b6350 with catch @ 031b63f4 */
            fVar15 = UnityEngine_UI_Text__get_pixelsPerUnit
                               ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b6358 with catch @ 031b63fc */
            pSVar11 = JGHIJMJNJLE->klass;
            uVar2._0_1_ = (pSVar11->_2).rank;
            uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 031b6330 with catch @ 031b6404
                       catch() { ... } // from try @ 031b63c4 with catch @ 031b6404 */
                    /* try { // try from 031b640c to 032b640f has its CatchHandler @ 031b6560 */
            uVar13 = (ulong)uVar2;
                    /* try { // try from 031b6410 to 032b642b has its CatchHandler @ 031b5f3c */
            if (uVar13 != 0) {
              piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
                  ppIVar9 = &pSVar11->vtable[*piVar14].methodPtr;
                  goto LAB_031b6464;
                }
                    /* try { // try from 031b642c to 032b642f has its CatchHandler @ 031b6554 */
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
                    /* try { // try from 031b6434 to 032b643b has its CatchHandler @ 031b6550 */
              } while (uVar13 != 0);
            }
                    /* try { // try from 031b643c to 032b6543 has its CatchHandler @ 031b5f3c */
            ppIVar9 = (Il2CppMethodPointer *)
                      FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0
                                  );
LAB_031b6464:
            fVar15 = 1.0 / fVar15;
            (**ppIVar9)(&local_1b8,JGHIJMJNJLE,0,(MethodInfo *)ppIVar9[1]);
            pSVar11 = JGHIJMJNJLE->klass;
            uVar3._0_1_ = (pSVar11->_2).rank;
            uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
            uVar13 = (ulong)uVar3;
            if (uVar13 != 0) {
              piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
                  ppIVar9 = &pSVar11->vtable[*piVar14].methodPtr;
                  goto LAB_031b64cc;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            ppIVar9 = (Il2CppMethodPointer *)
                      FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0
                                  );
LAB_031b64cc:
            (**ppIVar9)(&local_1b8,JGHIJMJNJLE,0,(MethodInfo *)ppIVar9[1]);
            UVar18.fields.y = fVar15 * local_1b4;
            UVar18.fields.x = fVar15 * local_1b8;
            UVar18 = UnityEngine_UI_Graphic__PixelAdjustPoint
                               ((UnityEngine_UI_Graphic_o *)__this,UVar18,(MethodInfo *)0x0);
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_e8,(System_Collections_Generic_List_object__o *)__this_00,
                       Method_System_Collections_Generic_List<IHIFNKAMALG>_GetEnumerator__);
            while( true ) {
              bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_e8,
                                 Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_MoveNext__
                                );
              if (!bVar6) {
                    /* catch() { ... } // from try @ 031b6224 with catch @ 031b6568 */
                    /* catch() { ... } // from try @ 031b61c8 with catch @ 031b656c */
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_e8,
                           Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_Dispose__)
                ;
                return __this_00;
              }
              if (local_e8.fields._current == (Il2CppObject *)0x0) break;
              fVar16 = *(float *)((long)&local_e8.fields._current[1].klass + 4);
                    /* try { // try from 031b6544 to 032b6547 has its CatchHandler @ 031b6564 */
              fVar17 = *(float *)&local_e8.fields._current[1].monitor;
                    /* try { // try from 031b6548 to 032b6557 has its CatchHandler @ 031b5f3c */
                    /* catch() { ... } // from try @ 031b6434 with catch @ 031b6550 */
                    /* catch() { ... } // from try @ 031b642c with catch @ 031b6554 */
                    /* try { // try from 031b6558 to 032b655f has its CatchHandler @ 031b662c */
              *(float *)&local_e8.fields._current[1].klass =
                   (UVar18.fields.x - fVar15 * local_1b8) +
                   fVar15 * *(float *)&local_e8.fields._current[1].klass;
                    /* catch() { ... } // from try @ 031b640c with catch @ 031b6560
                       try { // try from 031b6560 to 032b6583 has its CatchHandler @ 031b5f3c */
              *(float *)((long)&local_e8.fields._current[1].klass + 4) =
                   (UVar18.fields.y - fVar15 * local_1b4) + fVar15 * fVar16;
              *(float *)&local_e8.fields._current[1].monitor = fVar15 * fVar17;
                    /* catch() { ... } // from try @ 031b6544 with catch @ 031b6564 */
            }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031b65a8 to 032b6617 has its CatchHandler @ 031b662c */
            FUN_01bab8c8();
          }
          goto LAB_031b6450;
        }
      }
    }
  }
LAB_031b65a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

