// Nekki.SF2.GUI.Dialogs.StoryDialog$$IMHIFGGIIMF @ RVA 0x32BEA2C

void Nekki_SF2_GUI_Dialogs_StoryDialog__IMHIFGGIIMF
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  NBLEEDEAPHB_o *MLANEHFOIPK;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *pSVar11;
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar12;
  BHEDGAKGKPO_StaticFields *pBVar13;
  NBLEEDEAPHB_array *pNVar14;
  int index;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Rect_o UVar20;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector3_o UVar21;
  
  if ((DAT_045674bc & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LabelAlias>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Clear__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&StringLiteral_8312);
    FUN_01bab630(&StringLiteral_1);
    DAT_045674bc = 1;
  }
  pUVar6 = (__this->fields)._textsSprite;
  if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar6 = UnityEngine_GameObject__get_gameObject(pUVar6,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
    pSVar11 = (__this->fields).PKCGAKMEKFG;
    fVar4 = 1680.0;
    if ((__this->fields).FKDKFGIFBIJ != false) {
      fVar4 = 900.0;
    }
    if (pSVar11 != (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)0x0) {
      iVar1 = (pSVar11->fields)._size;
      (pSVar11->fields)._size = 0;
      (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pUVar6 = (__this->fields)._textsSprite;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__DeleteAllChildrenObjects(pUVar7,(MethodInfo *)0x0);
        pSVar12 = (__this->fields).OMJHNOCDBEH;
        if (pSVar12 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
          iVar1 = (pSVar12->fields)._size;
          (pSVar12->fields)._size = 0;
          (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar1,(MethodInfo *)0x0
                               );
          }
          pSVar12 = (__this->fields).NMBDHGCKNII;
          if (pSVar12 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
            index = 0;
            fVar16 = 0.0;
            fVar18 = 0.0;
            do {
              if ((pSVar12->fields)._size <= index) {
                pUVar6 = (__this->fields)._textsSprite;
                if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
                   (pUVar10 = (UnityEngine_RectTransform_o *)
                              UnityEngine_GameObject__GetComponent<object>
                                        (pUVar6,
                                         Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                        ), pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
                  value_00.fields.y = fVar16;
                  value_00.fields.x = fVar4;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar10,value_00,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._textsSprite;
                  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                    UnityEngine_TransformExtensions__SetLocalPositionY
                              (pUVar7,fVar18 * -0.5 + -20.0,(MethodInfo *)0x0);
                    pSVar12 = (__this->fields).OMJHNOCDBEH;
                    if (pSVar12 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
                      if ((pSVar12->fields)._size < 1) {
                    /* try { // try from 033bf140 to 034bf143 has its CatchHandler @ 033bf158 */
                    /* try { // try from 033bf144 to 034bf147 has its CatchHandler @ 033bf154 */
                    /* try { // try from 033bf148 to 034bf14b has its CatchHandler @ 033bf150 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf054 with catch @ 033bf14c
                       try { // try from 033bf14c to 034bf173 has its CatchHandler @ 033bec24 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf148 with catch @ 033bf150
                        */
                        return;
                      }
                    /* WARNING: Could not recover jumptable at 0x033bf120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(__this->klass->vtable)._48_HCCGKDLAFOJ.methodPtr)
                                (__this,(__this->klass->vtable)._48_HCCGKDLAFOJ.method);
                      return;
                    }
                  }
                }
                break;
              }
              MLANEHFOIPK = (NBLEEDEAPHB_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar12,index,
                                       Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__
                                      );
              lVar5 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
              if (MLANEHFOIPK == (NBLEEDEAPHB_o *)0x0) break;
              if ((MLANEHFOIPK->fields).EHKKBKHGDHE == false) {
                iVar2 = (MLANEHFOIPK->fields).KFHPFEKBDFM;
                if (iVar2 == 1) {
                  pSVar12 = (__this->fields).OMJHNOCDBEH;
                  if (pSVar12 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) break;
                  pNVar14 = (pSVar12->fields)._items;
                  (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
                  if (pNVar14 == (NBLEEDEAPHB_array *)0x0) break;
                  uVar3 = (pSVar12->fields)._size;
                  if (uVar3 < (uint)pNVar14->max_length) {
                    (pSVar12->fields)._size = uVar3 + 1;
                    pNVar14->m_Items[(int)uVar3] = MLANEHFOIPK;
                    thunk_FUN_01c20e04(pNVar14->m_Items + (int)uVar3,MLANEHFOIPK);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar12,
                               (Il2CppObject *)MLANEHFOIPK,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                }
                else if (iVar2 == 0) {
                  pUVar6 = (UnityEngine_GameObject_o *)
                           thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                  UnityEngine_GameObject___ctor(pUVar6,StringLiteral_8312,(MethodInfo *)0x0);
                  if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
                     (pNVar8 = (Nekki_SF2_GUI_LabelAlias_o *)
                               UnityEngine_GameObject__AddComponent<object>
                                         (pUVar6,
                                          Method_UnityEngine_GameObject_AddComponent<LabelAlias>__),
                     pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) break;
                  iVar1 = (MLANEHFOIPK->fields).ALFDOLMJLKI;
                  if (iVar1 < 1) {
                    iVar1 = 0x67;
                  }
                  Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar8,iVar1,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_LabelAlias__set_UseLabelLineSpacing(pNVar8,true,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing(pNVar8,0.7,(MethodInfo *)0x0);
                  (*(pNVar8->klass->vtable)._23_set_color.methodPtr)
                            ((ulong)(uint)(MLANEHFOIPK->fields).ONNNBMCAJMN.fields.r,
                             (ulong)(uint)(MLANEHFOIPK->fields).ONNNBMCAJMN.fields.g,
                             (MLANEHFOIPK->fields).ONNNBMCAJMN.fields.b,
                             (MLANEHFOIPK->fields).ONNNBMCAJMN.fields.a,pNVar8,
                             (pNVar8->klass->vtable)._23_set_color.method);
                  UnityEngine_UI_Text__set_alignment
                            ((UnityEngine_UI_Text_o *)pNVar8,3,(MethodInfo *)0x0);
                  UnityEngine_UI_Text__set_alignByGeometry
                            ((UnityEngine_UI_Text_o *)pNVar8,true,(MethodInfo *)0x0);
                  UnityEngine_UI_Text__set_verticalOverflow
                            ((UnityEngine_UI_Text_o *)pNVar8,1,(MethodInfo *)0x0);
                  pUVar10 = UnityEngine_UI_Graphic__get_rectTransform
                                      ((UnityEngine_UI_Graphic_o *)pNVar8,(MethodInfo *)0x0);
                  if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) break;
                  value.fields.y = 10.0;
                  value.fields.x = fVar4;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar10,value,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_LabelAlias__set_Alias
                            (pNVar8,(MLANEHFOIPK->fields).ABCHAOKFLGL,(MethodInfo *)0x0);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._textsSprite;
                  if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
                     (pUVar9 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
                     pUVar7 == (UnityEngine_Transform_o *)0x0)) break;
                  UnityEngine_Transform__SetParent(pUVar7,pUVar9,false,(MethodInfo *)0x0);
                  fVar15 = (float)(*(pNVar8->klass->vtable)._82_get_preferredHeight.methodPtr)
                                            (pNVar8,(pNVar8->klass->vtable)._82_get_preferredHeight.
                                                    method);
                  fVar18 = fVar18 - (fVar15 * 0.5 + (float)(MLANEHFOIPK->fields).OJDCNGCCOBA);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                  UnityEngine_TransformExtensions__SetLocalPositionY
                            (pUVar7,fVar18,(MethodInfo *)0x0);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                  if ((__this->fields).ACPDELFFFHF == false) {
                    fVar15 = (float)(MLANEHFOIPK->fields).ILAJANAMHDM;
                  }
                  else {
                    pUVar9 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP(__this,method_00);
                    if (pUVar9 == (UnityEngine_Transform_o *)0x0) break;
                    UVar21 = UnityEngine_Transform__get_localPosition(pUVar9,(MethodInfo *)0x0);
                    fVar19 = (__this->fields).NBGPOPHLIFC;
                    fVar15 = (__this->fields).BNJJNFFCCCA;
                    fVar17 = (__this->fields).OAMNJIMNBAC;
                    pUVar10 = UnityEngine_UI_Graphic__get_rectTransform
                                        ((UnityEngine_UI_Graphic_o *)pNVar8,(MethodInfo *)0x0);
                    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) break;
                    UVar20 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
                    fVar15 = (UVar21.fields.x - fVar15) + 40.0 + fVar17 * 0.9 * fVar19 * 0.5 +
                             UVar20.fields.m_Width * 0.5 + (float)(MLANEHFOIPK->fields).ILAJANAMHDM;
                  }
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (pUVar7,fVar15,(MethodInfo *)0x0);
                  fVar15 = (float)(*(pNVar8->klass->vtable)._82_get_preferredHeight.methodPtr)
                                            (pNVar8,(pNVar8->klass->vtable)._82_get_preferredHeight.
                                                    method);
                    /* try { // try from 033bf028 to 034bf02f has its CatchHandler @ 033bf15c */
                  fVar18 = fVar18 - (fVar15 * 0.5 + 32.5);
                  fVar15 = (float)(*(pNVar8->klass->vtable)._82_get_preferredHeight.methodPtr)
                                            (pNVar8,(pNVar8->klass->vtable)._82_get_preferredHeight.
                                                    method);
                  fVar16 = fVar16 + fVar15 + 32.5;
                  if ((MLANEHFOIPK->fields).KOLIPNBCKOB != (LBMOOFGGPEB_o *)0x0) {
                    /* try { // try from 033bf054 to 034bf05b has its CatchHandler @ 033bf14c */
                    pUVar6 = (__this->fields)._textsSprite;
                    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) break;
                    /* try { // try from 033bf05c to 034bf13f has its CatchHandler @ 033bec24 */
                    pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                    Nekki_SF2_GUI_Dialogs_StoryDialog__HALPHJGHPIP
                              (__this,pNVar8,MLANEHFOIPK,pUVar7,in_x4);
                  }
                }
              }
              else {
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                    /* try { // try from 033bec24 to 034bf027 has its CatchHandler @ 033bec24
                       catch() { ... } // from try @ 033bec24 with catch @ 033bec24
                       catch() { ... } // from try @ 033bf05c with catch @ 033bec24
                       catch() { ... } // from try @ 033bf14c with catch @ 033bec24
                       catch() { ... } // from try @ 033bf178 with catch @ 033bec24
                       catch() { ... } // from try @ 033bf1b8 with catch @ 033bec24 */
                Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar8,StringLiteral_1,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                          (pNVar8,StringLiteral_1,(pNVar8->klass->vtable)._75_set_text.method);
                pNVar8 = (__this->fields)._timeLabel;
                if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                pBVar13 = BHEDGAKGKPO_TypeInfo->static_fields;
                (*(pNVar8->klass->vtable)._23_set_color.methodPtr)
                          ((ulong)(uint)(pBVar13->KPJHDEIJPAN).fields.r,
                           (ulong)(uint)(pBVar13->KPJHDEIJPAN).fields.g,
                           (pBVar13->KPJHDEIJPAN).fields.b,(pBVar13->KPJHDEIJPAN).fields.a,pNVar8,
                           (pNVar8->klass->vtable)._23_set_color.method);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar8,0x67,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if ((pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
                   pUVar6 == (UnityEngine_GameObject_o *)0x0)) break;
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                UnityEngine_UI_Text__set_alignment
                          ((UnityEngine_UI_Text_o *)pNVar8,3,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                pUVar6 = (__this->fields)._textsSprite;
                if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar9 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
                   pUVar7 == (UnityEngine_Transform_o *)0x0)) break;
                UnityEngine_Transform__SetParent(pUVar7,pUVar9,false,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionY
                          (pUVar7,fVar18 + -20.0,(MethodInfo *)0x0);
                fVar18 = fVar18 + -20.0 + -52.5;
                fVar16 = fVar16 + 40.0;
                (*(__this->klass->vtable)._49_EGEMNGPLOKE.methodPtr)
                          (__this,MLANEHFOIPK,(__this->klass->vtable)._49_EGEMNGPLOKE.method);
              }
              pSVar12 = (__this->fields).NMBDHGCKNII;
              index = index + 1;
            } while (pSVar12 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf144 with catch @ 033bf154
                        */
  FUN_01bab8c8();
}

