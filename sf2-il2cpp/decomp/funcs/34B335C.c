// Nekki.SF2.GUI.Fight.ComboItem$$UpdateSize @ RVA 0x34B335C

void Nekki_SF2_GUI_Fight_ComboItem__UpdateSize
               (Nekki_SF2_GUI_Fight_ComboItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  System_String_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar5;
  float fVar6;
  undefined4 extraout_var;
  undefined8 in_d1;
  undefined4 uVar7;
  float fVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar9;
  
  uVar7 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_0456856d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456856d = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._label;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar5 = (__this->fields)._layout;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields)._image;
        if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          fVar8 = UVar9.fields.m_Width;
          pNVar3 = (__this->fields)._image;
          if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._label;
            if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              __this_00 = (System_String_o *)
                          (*(pNVar4->klass->vtable)._74_get_text.methodPtr)
                                    (CONCAT44(extraout_var,UVar9.fields.m_XMin),
                                     CONCAT44(uVar7,UVar9.fields.m_YMin),UVar9.fields.m_Width,pNVar4
                                     ,(pNVar4->klass->vtable)._74_get_text.method);
              if (__this_00 != (System_String_o *)0x0) {
                bVar1 = System_String__Equals
                                  (__this_00,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0
                                  );
                method_00 = extraout_x1_00;
                if (!bVar1) {
                  pNVar4 = (__this->fields)._label;
                  if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035b34f8;
                  fVar6 = (float)(*(pNVar4->klass->vtable)._79_get_preferredWidth.methodPtr)
                                           (pNVar4,(pNVar4->klass->vtable)._79_get_preferredWidth.
                                                   method);
                  pUVar5 = (__this->fields)._layout;
                  if (pUVar5 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto LAB_035b34f8;
                  fVar8 = fVar8 + fVar6 + *(float *)&(pUVar5->fields).super.m_ChildScaleWidth;
                  method_00 = extraout_x1_01;
                }
                pUVar2 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform(__this,method_00);
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  value.fields.y = UVar9.fields.m_Height;
                  value.fields.x = fVar8;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar2,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
LAB_035b34f8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}

