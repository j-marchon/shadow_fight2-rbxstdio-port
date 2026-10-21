// Nekki.SF2.GUI.Dialogs.DialogTMPTest$$IMHIFGGIIMF @ RVA 0x3568808

void Nekki_SF2_GUI_Dialogs_DialogTMPTest__IMHIFGGIIMF
               (Nekki_SF2_GUI_Dialogs_DialogTMPTest_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  NBLEEDEAPHB_o *item;
  Nekki_SF2_GUI_LabelAliasTMP_o *__this_00;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar10;
  NBLEEDEAPHB_array *pNVar11;
  int index;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Rect_o UVar18;
  
  if ((DAT_04568c11 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LabelAliasTMP>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&StringLiteral_8312);
    DAT_04568c11 = 1;
  }
  pUVar6 = (__this->fields).super.super._textsSprite;
  if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar6 = UnityEngine_GameObject__get_gameObject(pUVar6,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
    pUVar6 = (__this->fields).super.super._textsSprite;
    fVar4 = 1680.0;
    if ((__this->fields).super.super.FKDKFGIFBIJ != false) {
      fVar4 = 900.0;
    }
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__DeleteAllChildrenObjects(pUVar7,(MethodInfo *)0x0);
      pSVar10 = (__this->fields).super.super.OMJHNOCDBEH;
      if (pSVar10 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
        iVar1 = (pSVar10->fields)._size;
        (pSVar10->fields)._size = 0;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        pSVar10 = (__this->fields).super.super.NMBDHGCKNII;
        if (pSVar10 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
          index = 0;
          fVar13 = 0.0;
          fVar14 = 0.0;
          while (index < (pSVar10->fields)._size) {
            item = (NBLEEDEAPHB_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar10,index,
                              Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
            lVar5 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
            if (item == (NBLEEDEAPHB_o *)0x0) goto LAB_03668d60;
            if ((item->fields).EHKKBKHGDHE == false) {
              iVar2 = (item->fields).KFHPFEKBDFM;
              if (iVar2 == 1) {
                pSVar10 = (__this->fields).super.super.OMJHNOCDBEH;
                if (pSVar10 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0)
                goto LAB_03668d60;
                pNVar11 = (pSVar10->fields)._items;
                (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
                if (pNVar11 == (NBLEEDEAPHB_array *)0x0) goto LAB_03668d60;
                uVar3 = (pSVar10->fields)._size;
                if (uVar3 < (uint)pNVar11->max_length) {
                  (pSVar10->fields)._size = uVar3 + 1;
                  pNVar11->m_Items[(int)uVar3] = item;
                  thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar3,item);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar10,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
              }
              else if (iVar2 == 0) {
                pUVar6 = (UnityEngine_GameObject_o *)
                         thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                UnityEngine_GameObject___ctor(pUVar6,StringLiteral_8312,(MethodInfo *)0x0);
                if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
                   (__this_00 = (Nekki_SF2_GUI_LabelAliasTMP_o *)
                                UnityEngine_GameObject__AddComponent<object>
                                          (pUVar6,
                                           Method_UnityEngine_GameObject_AddComponent<LabelAliasTMP>__
                                          ), __this_00 == (Nekki_SF2_GUI_LabelAliasTMP_o *)0x0))
                goto LAB_03668d60;
                iVar1 = (item->fields).ALFDOLMJLKI;
                if (iVar1 < 1) {
                  iVar1 = 0x67;
                }
                Nekki_SF2_GUI_LabelAliasTMP__set_LabelFontSize(__this_00,iVar1,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_lineSpacing((TMPro_TMP_Text_o *)__this_00,0.7,(MethodInfo *)0x0)
                ;
                (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                          ((ulong)(uint)(item->fields).ONNNBMCAJMN.fields.r,
                           (ulong)(uint)(item->fields).ONNNBMCAJMN.fields.g,
                           (item->fields).ONNNBMCAJMN.fields.b,(item->fields).ONNNBMCAJMN.fields.a,
                           __this_00,(__this_00->klass->vtable)._23_set_color.method);
                TMPro_TMP_Text__set_alignment
                          ((TMPro_TMP_Text_o *)__this_00,0x1001,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)__this_00,0,(MethodInfo *)0x0);
                Nekki_SF2_GUI_LabelAliasTMP__set_Alias
                          (__this_00,(item->fields).ABCHAOKFLGL,(MethodInfo *)0x0);
                pUVar7 = TMPro_TMP_Text__get_transform
                                   ((TMPro_TMP_Text_o *)__this_00,(MethodInfo *)0x0);
                pUVar6 = (__this->fields).super.super._textsSprite;
                if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
                   pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03668d60;
                UnityEngine_Transform__SetParent(pUVar7,pUVar8,false,(MethodInfo *)0x0);
                pUVar9 = TMPro_TMP_Text__get_rectTransform
                                   ((TMPro_TMP_Text_o *)__this_00,(MethodInfo *)0x0);
                fVar12 = (float)(*(__this_00->klass->vtable)._85_get_preferredHeight.methodPtr)
                                          (__this_00,
                                           (__this_00->klass->vtable)._85_get_preferredHeight.method
                                          );
                if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03668d60;
                value.fields.y = fVar12 + 32.5;
                value.fields.x = fVar4;
                UnityEngine_RectTransform__set_sizeDelta(pUVar9,value,(MethodInfo *)0x0);
                fVar12 = (float)(*(__this_00->klass->vtable)._85_get_preferredHeight.methodPtr)
                                          (__this_00,
                                           (__this_00->klass->vtable)._85_get_preferredHeight.method
                                          );
                fVar14 = fVar14 - (fVar12 * 0.5 + (float)(item->fields).OJDCNGCCOBA);
                pUVar7 = TMPro_TMP_Text__get_transform
                                   ((TMPro_TMP_Text_o *)__this_00,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionY(pUVar7,fVar14,(MethodInfo *)0x0);
                pUVar7 = TMPro_TMP_Text__get_transform
                                   ((TMPro_TMP_Text_o *)__this_00,(MethodInfo *)0x0);
                if ((__this->fields).super.super.ACPDELFFFHF == false) {
                  fVar12 = (float)(item->fields).ILAJANAMHDM;
                }
                else {
                  pUVar8 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP
                                     ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,
                                      (MethodInfo *)0x0);
                  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_03668d60;
                  UVar17 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0);
                  fVar16 = (__this->fields).super.super.NBGPOPHLIFC;
                  fVar12 = (__this->fields).super.super.BNJJNFFCCCA;
                  fVar15 = (__this->fields).super.super.OAMNJIMNBAC;
                  pUVar9 = TMPro_TMP_Text__get_rectTransform
                                     ((TMPro_TMP_Text_o *)__this_00,(MethodInfo *)0x0);
                  if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03668d60;
                  UVar18 = UnityEngine_RectTransform__get_rect(pUVar9,(MethodInfo *)0x0);
                  fVar12 = (UVar17.fields.x - fVar12) + 40.0 + fVar15 * 0.9 * fVar16 * 0.5 +
                           UVar18.fields.m_Width * 0.5 + (float)(item->fields).ILAJANAMHDM;
                }
                UnityEngine_TransformExtensions__SetLocalPositionX(pUVar7,fVar12,(MethodInfo *)0x0);
                fVar12 = (float)(*(__this_00->klass->vtable)._85_get_preferredHeight.methodPtr)
                                          (__this_00,
                                           (__this_00->klass->vtable)._85_get_preferredHeight.method
                                          );
                fVar14 = fVar14 - (fVar12 * 0.5 + 32.5);
                fVar12 = (float)(*(__this_00->klass->vtable)._85_get_preferredHeight.methodPtr)
                                          (__this_00,
                                           (__this_00->klass->vtable)._85_get_preferredHeight.method
                                          );
                fVar13 = fVar13 + fVar12 + 32.5;
              }
            }
            pSVar10 = (__this->fields).super.super.NMBDHGCKNII;
            index = index + 1;
            if (pSVar10 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) goto LAB_03668d60;
          }
          pUVar6 = (__this->fields).super.super._textsSprite;
          if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar9 = (UnityEngine_RectTransform_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (pUVar6,Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                 ), pUVar9 != (UnityEngine_RectTransform_o *)0x0)) {
            value_00.fields.y = fVar13;
            value_00.fields.x = fVar4;
            UnityEngine_RectTransform__set_sizeDelta(pUVar9,value_00,(MethodInfo *)0x0);
            pUVar6 = (__this->fields).super.super._textsSprite;
            if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
              UnityEngine_TransformExtensions__SetLocalPositionY
                        (pUVar7,fVar14 * -0.5 + -20.0,(MethodInfo *)0x0);
              pSVar10 = (__this->fields).super.super.OMJHNOCDBEH;
              if (pSVar10 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
                if ((pSVar10->fields)._size < 1) {
                  return;
                }
                    /* WARNING: Could not recover jumptable at 0x03668d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(__this->klass->vtable)._48_HCCGKDLAFOJ.methodPtr)
                          (__this,(__this->klass->vtable)._48_HCCGKDLAFOJ.method);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03668d60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

