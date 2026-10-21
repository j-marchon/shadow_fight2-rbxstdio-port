// Nekki.SF2.GUI.Dialogs.StrangerDialog$$GLJGIJNALCA @ RVA 0x317B5E0

void Nekki_SF2_GUI_Dialogs_StrangerDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  SFToggle_o *pSVar5;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector3_o UVar10;
  
  if ((DAT_04566986 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    DAT_04566986 = 1;
  }
  pNVar2 = (__this->fields).super._text;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    CJNHFNHJHPE = (System_String_o *)
                  (*(pNVar2->klass->vtable)._74_get_text.methodPtr)
                            (pNVar2,(pNVar2->klass->vtable)._74_get_text.method);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = (__this->fields).super._textsSprite;
      if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0327b828;
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      fVar7 = 0.0;
      if (bVar1) {
        pUVar3 = (__this->fields).super._textsSprite;
        if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0327b828;
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar7 = UVar8.fields.m_Height + 0.0;
      }
    }
    else {
      pNVar2 = (__this->fields).super._text;
      if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0327b828;
      UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      fVar7 = UVar9.fields.y + 0.0;
    }
    pSVar5 = (__this->fields)._checkBox;
    if ((pSVar5 != (SFToggle_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar5 = (__this->fields)._checkBox;
        if ((pSVar5 == (SFToggle_o *)0x0) ||
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pSVar5,
                                Method_UnityEngine_Component_GetComponent<RectTransform>__),
           pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0327b828;
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar7 = fVar7 + UVar8.fields.m_Height;
      }
      pUVar3 = (__this->fields).super._footerTextsSprite;
      if ((__this->fields).JCLHNHKKPNP != false) {
        fVar7 = fVar7 + 240.0;
      }
      fVar6 = (__this->fields).super.OAMNJIMNBAC * 0.9 * 0.8;
      if (fVar7 <= fVar6) {
        fVar7 = fVar6;
      }
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar3 = (__this->fields).super._footerTextsSprite;
          if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
             (pUVar4 = (UnityEngine_RectTransform_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                 ), pUVar4 == (UnityEngine_RectTransform_o *)0x0))
          goto LAB_0327b828;
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).super.super._content;
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0327b828;
          transform = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).super.super._content;
          if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
             (__this_00 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0327b828;
          fVar6 = UVar8.fields.m_Height + 60.0 + 30.0;
          fVar7 = fVar7 + fVar6;
          UVar10 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (transform,fVar6 * 0.5 + UVar10.fields.y,(MethodInfo *)0x0);
        }
        pUVar3 = (__this->fields).super.super._content;
        if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          fVar6 = (__this->fields).super.JADIONKCDCB;
          if (fVar7 <= fVar6) {
            fVar7 = fVar6;
          }
          UVar9.fields.y = fVar7;
          UVar9.fields.x = UVar8.fields.m_Width;
          UnityEngine_RectTransform__set_sizeDelta(pUVar4,UVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0327b828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

