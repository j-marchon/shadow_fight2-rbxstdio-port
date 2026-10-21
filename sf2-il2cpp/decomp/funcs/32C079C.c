// Nekki.SF2.GUI.Dialogs.StoryDialog$$PMLICAPHBJD @ RVA 0x32C079C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_StoryDialog__PMLICAPHBJD
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  System_Nullable_Vector2__o *pSVar1;
  bool bVar2;
  bool bVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *extraout_x1;
  MethodInfo_27FC874 *method_00;
  LabelButton_o *pLVar6;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  undefined8 in_d1;
  undefined4 uVar7;
  float value;
  int iVar8;
  float value_00;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_Fields UVar10;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_Nullable_Vector2__o __this_03;
  System_Nullable_Vector2__o __this_04;
  System_Nullable_Vector2__o __this_05;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o UVar13;
  undefined8 local_60;
  float local_58;
  
  uVar7 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_045674c8 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674c8 = 1;
    method = extraout_x1;
  }
  pLVar6 = (__this->fields).super._btnOK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_RectTransform_o *)0x0;
  if (!bVar2) {
    pLVar6 = (__this->fields).super._btnOK;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_033c0bbc;
    __this_01 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pLVar6,
                           Method_UnityEngine_Component_GetComponent<RectTransform>__);
  }
  pLVar6 = (__this->fields).super._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_02 = (UnityEngine_RectTransform_o *)0x0;
  if (!bVar2) {
    pLVar6 = (__this->fields).super._btnCancel;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_033c0bbc;
    __this_02 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pLVar6,
                           Method_UnityEngine_Component_GetComponent<RectTransform>__);
  }
  __this_00 = (__this->fields).super._bottomStripe;
  if ((__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
     (pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_033c0bbc;
  UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
  iVar8 = (__this->fields).LPEFIPGJDJH;
  pLVar6 = (__this->fields).super._btnOK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UVar11.fields.x,CONCAT44(uVar7,UVar11.fields.y),UVar11.fields.z);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pLVar6 = (__this->fields).super._btnOK;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0bbc;
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  }
  else {
    bVar2 = false;
  }
  pLVar6 = (__this->fields).super._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo_27FC874 *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pLVar6 = (__this->fields).super._btnCancel;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0bbc;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  }
  else {
    bVar3 = false;
  }
  value = UVar11.fields.y + (float)iVar8;
  if (bVar2 == false) {
    if (bVar3 == false) {
      return;
    }
  }
  else {
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_033c0bbc;
    UVar12 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    pLVar6 = (__this->fields).super._btnOK;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_033c0bbc;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionX
              (pUVar4,UVar12.fields.m_Width * -0.5 + 740.0,(MethodInfo *)0x0);
    pLVar6 = (__this->fields).super._btnOK;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_033c0bbc;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,value,(MethodInfo *)0x0);
    if ((__this->fields).PONEGBOFDBK.fields.hasValue != false) {
      __this_03.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
      __this_03.fields._0_8_ = &(__this->fields).PONEGBOFDBK;
      UVar9 = System_Nullable<Vector2>__get_Value(__this_03,(MethodInfo_27FC88C *)method_00);
      UVar9.fields.y = (float)((ulong)UVar9.fields >> 0x20);
      UnityEngine_RectTransform__set_sizeDelta(__this_01,UVar9,(MethodInfo *)0x0);
    }
    if (bVar3 == false) {
      pSVar1 = &(__this->fields).PONEGBOFDBK;
      if ((__this->fields).PONEGBOFDBK.fields.hasValue == false) {
        UVar10 = (UnityEngine_Vector2_Fields)
                 UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
      }
      else {
        __this_04.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
        __this_04.fields._0_8_ = pSVar1;
        UVar10 = (UnityEngine_Vector2_Fields)
                 System_Nullable<Vector2>__get_Value(__this_04,(MethodInfo_27FC88C *)method_00);
      }
      local_58 = 0.0;
      local_60 = 0;
      value_01.fields.x = UVar10.x;
      value_01.fields.y = (float)((ulong)UVar10 >> 0x20);
      __this_05.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
      __this_05.fields._0_8_ = &local_60;
      System_Nullable<Vector2>___ctor(__this_05,value_01,method_00);
      (__this->fields).PONEGBOFDBK.fields.value.fields.y = local_58;
      (pSVar1->fields).hasValue = (bool_conflict)(undefined1)local_60;
      *(undefined3 *)&(pSVar1->fields).field_0x1 = local_60._1_3_;
      (pSVar1->fields).value.fields.x = (float)local_60._4_4_;
      UnityEngine_TransformExtensions__AddLocalPositionX
                ((UnityEngine_Transform_o *)__this_01,-50.0,(MethodInfo *)0x0);
      value_02.fields.x = value_01.fields.x + 100.0;
      value_02.fields.y = value_01.fields.y;
      UnityEngine_RectTransform__set_sizeDelta(__this_01,value_02,(MethodInfo *)0x0);
      return;
    }
  }
  pLVar6 = (__this->fields).super._btnOK;
  if ((pLVar6 == (LabelButton_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0bbc;
  bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  if (bVar2) {
    pLVar6 = (__this->fields).super._btnOK;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_033c0bbc;
    UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_033c0bbc;
    UVar12 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto LAB_033c0bbc;
    UVar13 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    value_00 = UVar11.fields.x + -60.0 + (UVar12.fields.m_Width + UVar13.fields.m_Width) * -0.5;
  }
  else {
    if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto LAB_033c0bbc;
    UVar12 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    value_00 = (1680.0 - UVar12.fields.m_Width) * 0.5 + -740.0;
  }
  pLVar6 = (__this->fields).super._btnCancel;
  if (pLVar6 != (LabelButton_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,value_00,(MethodInfo *)0x0);
    pLVar6 = (__this->fields).super._btnCancel;
    if (pLVar6 != (LabelButton_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033c0bbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

