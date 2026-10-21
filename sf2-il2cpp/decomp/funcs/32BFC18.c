// Nekki.SF2.GUI.Dialogs.StoryDialog$$GLJGIJNALCA @ RVA 0x32BFC18

void Nekki_SF2_GUI_Dialogs_StoryDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_String_o *a;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Object_o *x;
  float fVar6;
  float fVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Rect_o UVar9;
  
  if ((DAT_045674c0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045674c0 = 1;
  }
  pNVar3 = (__this->fields)._text;
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    a = (System_String_o *)
        (*(pNVar3->klass->vtable)._74_get_text.methodPtr)
                  (pNVar3,(pNVar3->klass->vtable)._74_get_text.method);
    bVar2 = System_String__op_Inequality(a,StringLiteral_1,(MethodInfo *)0x0);
    if (bVar2) {
      pNVar3 = (__this->fields)._text;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_033bfdf0;
      UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      fVar6 = UVar8.fields.y + 0.0;
    }
    else {
      x = (UnityEngine_Object_o *)(__this->fields)._textsSprite;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar6 = 0.0;
      if (bVar2) {
        pUVar5 = (__this->fields)._textsSprite;
        if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_033bfdf0;
        UVar9 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar6 = UVar9.fields.m_Height + 0.0;
      }
    }
    pUVar5 = (__this->fields)._footerTextsSprite;
    fVar7 = (__this->fields).OAMNJIMNBAC * 0.9 * 0.8;
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar5 = UnityEngine_GameObject__get_gameObject(pUVar5,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar5 = (__this->fields)._footerTextsSprite;
        if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_033bfdf0;
        UVar9 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar6 = fVar6 + UVar9.fields.m_Height + 32.5;
      }
      pUVar5 = (__this->fields).super._content;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
        pUVar5 = (__this->fields).super._content;
        if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_00 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent<object>
                                  (pUVar5,
                                   Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar9 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            fVar7 = (__this->fields).JADIONKCDCB;
            bVar2 = false;
            bVar1 = false;
            if (fVar6 <= fVar7) {
              bVar2 = false;
              bVar1 = true;
              if (!NAN(fVar7)) {
                bVar2 = fVar7 == 0.0;
                bVar1 = 0.0 <= fVar7;
              }
            }
            if (bVar1 && !bVar2) {
              fVar6 = fVar7;
            }
            UVar8.fields.y = fVar6;
            UVar8.fields.x = UVar9.fields.m_Width;
            UnityEngine_RectTransform__set_sizeDelta(pUVar4,UVar8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_033bfdf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

