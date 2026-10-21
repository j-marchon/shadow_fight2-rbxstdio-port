// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$Update @ RVA 0x3101340

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__Update
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  System_Collections_Generic_List_ResolutionImage__o *source;
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o value;
  
  if ((DAT_045664c3 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664c3 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__HAPCHDFFICG(__this,method);
  pNVar2 = (__this->fields)._timeLabel;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (lVar3 = (*(pNVar2->klass->vtable)._74_get_text.methodPtr)
                        (pNVar2,(pNVar2->klass->vtable)._74_get_text.method), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x10) < 1) {
      pNVar2 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
    }
    else {
      pNVar2 = (__this->fields)._timeLabel;
      if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03201608;
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      pNVar2 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
      if (bVar1) {
        pNVar2 = (__this->fields)._timeLabel;
      }
    }
    pNVar5 = (__this->fields)._prevSeasonLabel;
    if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (lVar3 = (*(pNVar5->klass->vtable)._74_get_text.methodPtr)
                          (pNVar5,(pNVar5->klass->vtable)._74_get_text.method), lVar3 != 0)) {
      if (0 < *(int *)(lVar3 + 0x10)) {
        pNVar5 = (__this->fields)._prevSeasonLabel;
        if ((pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03201608;
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
        if (bVar1) {
          pNVar2 = (__this->fields)._prevSeasonLabel;
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        source = Nekki_SF2_GUI_TextPic__GetPresentedQuadImages
                           ((Nekki_SF2_GUI_TextPic_o *)pNVar2,false,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_UI_Graphic_o *)
                    System_Linq_Enumerable__FirstOrDefault<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               Method_System_Linq_Enumerable_FirstOrDefault<ResolutionImage>__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if (__this_00 != (UnityEngine_UI_Graphic_o *)0x0) {
          bVar1 = UnityEngine_Behaviour__get_enabled
                            ((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pNVar2 = (__this->fields)._leagueDan;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
              if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
                 (__this_01 = UnityEngine_Transform__get_parent
                                        ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0),
                 __this_01 != (UnityEngine_Transform_o *)0x0)) {
                UVar9 = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0);
                pUVar7 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar10 = UnityEngine_Transform__get_localPosition
                                     ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                    value.fields.z = UVar9.fields.z + UVar10.fields.z;
                    value.fields.y = UVar9.fields.y + UVar10.fields.y;
                    value.fields.x = UVar9.fields.x + UVar10.fields.x;
                    UnityEngine_Transform__set_localPosition
                              ((UnityEngine_Transform_o *)pUVar6,value,(MethodInfo *)0x0);
                    pNVar2 = (__this->fields)._leagueDan;
                    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                                         ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                      pUVar7 = UnityEngine_UI_Graphic__get_rectTransform
                                         (__this_00,(MethodInfo *)0x0);
                      if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
                         (UVar8 = UnityEngine_RectTransform__get_pivot(pUVar7,(MethodInfo *)0x0),
                         pUVar6 != (UnityEngine_RectTransform_o *)0x0)) {
                        UnityEngine_RectTransform__set_pivot(pUVar6,UVar8,(MethodInfo *)0x0);
                        pNVar2 = (__this->fields)._leagueDan;
                        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                          pUVar7 = UnityEngine_UI_Graphic__get_rectTransform
                                             (__this_00,(MethodInfo *)0x0);
                          if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
                             (UVar8 = UnityEngine_RectTransform__get_sizeDelta
                                                (pUVar7,(MethodInfo *)0x0),
                             pUVar6 != (UnityEngine_RectTransform_o *)0x0)) {
                            UnityEngine_RectTransform__set_sizeDelta(pUVar6,UVar8,(MethodInfo *)0x0)
                            ;
                            pNVar2 = (__this->fields)._leagueDan;
                            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              pUVar4 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pNVar2,
                                                  (MethodInfo *)0x0);
                              Util__IHPDCBOFHPA(pUVar4,true,(MethodInfo *)0x0);
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
LAB_03201608:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

