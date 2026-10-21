// Nekki.SF2.GUI.Dialogs.SimpleDialog$$DGNHKEIFFMP @ RVA 0x301E340

void Nekki_SF2_GUI_Dialogs_SimpleDialog__DGNHKEIFFMP
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  float fVar2;
  float fVar3;
  undefined4 extraout_var;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04565c2f & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565c2f = 1;
    method = extraout_x1;
  }
  fVar2 = Nekki_SF2_GUI_Dialogs_SimpleDialog__IJEDDPJEHCH(__this,method);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar2 = System_Math__Max(fVar2,1100.0,(MethodInfo *)0x0);
  fVar2 = System_Math__Min(fVar2,1680.0,(MethodInfo *)0x0);
  (__this->fields).FJBAGGCNDLF = fVar2;
  Nekki_SF2_GUI_Dialogs_SimpleDialog__LPOJJPJFMOI(__this,method_00);
  __this_00 = (__this->fields).super._content;
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_01 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      __this_01 != (UnityEngine_RectTransform_o *)0x0)) &&
     (__this_01->klass == UnityEngine_RectTransform_TypeInfo)) {
    fVar2 = (__this->fields).AdditionalTextSize.fields.x;
    fVar4 = (__this->fields).AdditionalTextSize.fields.y;
    UVar5 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._label;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      fVar3 = (float)(*(pNVar1->klass->vtable)._82_get_preferredHeight.methodPtr)
                               (CONCAT44(extraout_var,UVar5.fields.m_XMin),UVar5.fields.m_YMin,
                                UVar5.fields.m_Width,UVar5.fields.m_Height,pNVar1,
                                (pNVar1->klass->vtable)._82_get_preferredHeight.method);
      value.fields.y = fVar4 + fVar3;
      value.fields.x = fVar2 + UVar5.fields.m_Width;
      UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

