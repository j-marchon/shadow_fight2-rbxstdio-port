// Nekki.SF2.GUI.Dialogs.SimpleDialog$$GIBFNEDCKNE @ RVA 0x301EC18

void Nekki_SF2_GUI_Dialogs_SimpleDialog__GIBFNEDCKNE
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_Toggle_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  LabelButton_o *pLVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  
  if ((DAT_04565c33 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c33 = 1;
  }
  pUVar2 = (__this->fields).super._content;
  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar2,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
     __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar9 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._checkBox;
    if ((__this_01 != (UnityEngine_UI_Toggle_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).super._topStripe;
      fVar7 = -20.0;
      if (!bVar1) {
        fVar7 = 0.0;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar8 = UVar9.fields.m_Height * 0.5 + 160.0;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar4 = (__this->fields).super._bottomStripe;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pNVar4 = (__this->fields).super._topStripe;
          if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0311ee6c;
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,fVar8 + 80.0,(MethodInfo *)0x0);
          pNVar4 = (__this->fields).super._bottomStripe;
          if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0311ee6c;
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar3,(-120.0 - fVar8) + fVar7,(MethodInfo *)0x0);
        }
      }
      pNVar5 = (__this->fields).super._header;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar5 = (__this->fields).super._header;
        if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0311ee6c;
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,fVar8 + -20.0,(MethodInfo *)0x0);
      }
      pLVar6 = (__this->fields).super._btnOK;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pLVar6 = (__this->fields).super._btnOK;
        if (pLVar6 == (LabelButton_o *)0x0) goto LAB_0311ee6c;
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY
                  (pUVar3,(-20.0 - fVar8) + fVar7,(MethodInfo *)0x0);
      }
      pLVar6 = (__this->fields).super._btnCancel;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pLVar6 = (__this->fields).super._btnCancel;
      if (pLVar6 != (LabelButton_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY
                  (pUVar3,(-20.0 - fVar8) + fVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0311ee6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

