// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$Update @ RVA 0x31283B8

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__Update
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_ScrollRect_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_Slider_o *pUVar4;
  UnityEngine_RectTransform_o *__this_03;
  LabelButton_o *pLVar5;
  float fVar6;
  float fVar7;
  undefined4 extraout_var;
  undefined8 in_d1;
  undefined4 uVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Rect_o UVar10;
  
  uVar8 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_04566670 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566670 = 1;
  }
  __this_03 = (__this->fields)._contentScroll;
  if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
    UVar9 = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._viewportScroll;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar10 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).super._label;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        fVar6 = (float)(*(pNVar3->klass->vtable)._82_get_preferredHeight.methodPtr)
                                 (CONCAT44(extraout_var,UVar10.fields.m_XMin),
                                  CONCAT44(uVar8,UVar10.fields.m_YMin),UVar10.fields.m_Width,pNVar3,
                                  (pNVar3->klass->vtable)._82_get_preferredHeight.method);
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar6 = System_Math__Max(UVar10.fields.m_Height,fVar6,(MethodInfo *)0x0);
        UVar9.fields.y = fVar6;
        UnityEngine_RectTransform__set_sizeDelta(__this_03,UVar9,(MethodInfo *)0x0);
        bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll(__this,method_00);
        pUVar4 = (__this->fields)._slider;
        if ((pUVar4 != (UnityEngine_UI_Slider_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,bVar1,(MethodInfo *)0x0);
          __this_02 = (__this->fields)._scroll;
          if (__this_02 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)__this_02,bVar1,(MethodInfo *)0x0);
            fVar6 = 0.0;
            if (bVar1) {
              fVar6 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__HEEKCIGGGFA(__this,method_01);
              pUVar4 = (__this->fields)._slider;
              if (pUVar4 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_032285e4;
              fVar7 = UnityEngine_UI_Slider__get_normalizedValue(pUVar4,(MethodInfo *)0x0);
              fVar6 = fVar6 * fVar7;
            }
            UnityEngine_TransformExtensions__SetLocalPositionY
                      ((UnityEngine_Transform_o *)(__this->fields)._contentScroll,fVar6,
                       (MethodInfo *)0x0);
            if ((__this->fields).DisablePassWhileNotRead != false) {
              bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableButtons(__this,method_02);
              pLVar5 = (__this->fields).super.super._btnOK;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
              }
              bVar2 = UnityEngine_Object__op_Implicit
                                ((UnityEngine_Object_o *)pLVar5,(MethodInfo *)0x0);
              if (bVar2) {
                pLVar5 = (__this->fields).super.super._btnOK;
                if (pLVar5 == (LabelButton_o *)0x0) goto LAB_032285e4;
                UnityEngine_UI_Selectable__set_interactable
                          ((UnityEngine_UI_Selectable_o *)pLVar5,bVar1,(MethodInfo *)0x0);
              }
              pLVar5 = (__this->fields).super.super._btnOK;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar2 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar2) {
                pLVar5 = (__this->fields).super.super._btnCancel;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar2 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar2) {
                  pLVar5 = (__this->fields).super.super._btnCancel;
                  if (pLVar5 != (LabelButton_o *)0x0) {
                    UnityEngine_UI_Selectable__set_interactable
                              ((UnityEngine_UI_Selectable_o *)pLVar5,bVar1,(MethodInfo *)0x0);
                    return;
                  }
                  goto LAB_032285e4;
                }
              }
            }
            return;
          }
        }
      }
    }
  }
LAB_032285e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

