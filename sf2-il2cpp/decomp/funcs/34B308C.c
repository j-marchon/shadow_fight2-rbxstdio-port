// Nekki.SF2.GUI.Fight.ComboItem$$Init @ RVA 0x34B308C

void Nekki_SF2_GUI_Fight_ComboItem__Init
               (Nekki_SF2_GUI_Fight_ComboItem_o *__this,int32_t ACCIHBHMFPN,int32_t GCIBBBDPBNK,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  Il2CppObject *pIVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  UnityEngine_UI_Shadow_o *pUVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  UnityEngine_Rect_o UVar8;
  
  if ((DAT_0456856a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456856a = 1;
  }
  (__this->fields)._LMAILJNFCKH_k__BackingField = ACCIHBHMFPN;
  (__this->fields)._EJGDPDAIOKF_k__BackingField = GCIBBBDPBNK;
  pNVar5 = (__this->fields)._image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._image;
    CJNHFNHJHPE = Nekki_SF2_GUI_Fight_ComboItem__GNHDDILGIDD
                            ((Nekki_SF2_GUI_Fight_ComboItem_o *)0x1,ACCIHBHMFPN,pMVar4);
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_035b32b4;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._image;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_035b32b4;
    (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
    pNVar5 = (__this->fields)._image;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_035b32b4;
    pIVar2 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pNVar5,
                        Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    pNVar5 = (__this->fields)._image;
    if ((pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035b32b4;
    UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035b32b4;
    (*pIVar2->klass->vtable[0x20].methodPtr)
              (CONCAT44(in_register_00005044,UVar8.fields.m_Width),UVar8.fields.m_YMin,
               UVar8.fields.m_Width,UVar8.fields.m_Height,pIVar2,pIVar2->klass->vtable[0x20].method)
    ;
    pNVar5 = (__this->fields)._image;
    if ((pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035b32b4;
    UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    (*pIVar2->klass->vtable[0x22].methodPtr)
              (CONCAT44(in_register_00005064,UVar8.fields.m_Height),UVar8.fields.m_YMin,
               UVar8.fields.m_Width,pIVar2,pIVar2->klass->vtable[0x22].method);
  }
  pUVar6 = (__this->fields)._labelShadow;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar6 = (__this->fields)._labelShadow;
    if ((pUVar6 == (UnityEngine_UI_Shadow_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035b32b4;
    UnityEngine_GameObject__SetActive(__this_00,ACCIHBHMFPN == 4,(MethodInfo *)0x0);
  }
  pNVar7 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar4 = extraout_x1;
  if (bVar1) {
    if (ACCIHBHMFPN == 4) {
      pNVar7 = (__this->fields)._label;
      if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035b32b4;
      (*(pNVar7->klass->vtable)._23_set_color.methodPtr)
                ((ulong)(uint)(__this->fields)._labelColorHotground.fields.r,
                 (__this->fields)._labelColorHotground.fields.g,
                 (__this->fields)._labelColorHotground.fields.b,
                 (__this->fields)._labelColorHotground.fields.a,pNVar7,
                 (pNVar7->klass->vtable)._23_set_color.method);
      pNVar7 = (__this->fields)._label;
      if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035b32b4;
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                (pNVar7,(__this->fields)._labelFontSizeHotground,(MethodInfo *)0x0);
    }
    pNVar7 = (__this->fields)._label;
    if ((pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) {
LAB_035b32b4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (GCIBBBDPBNK == 0) {
      UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_01;
    }
    else {
      UnityEngine_Transform__SetAsFirstSibling(__this_01,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_00;
    }
  }
  Nekki_SF2_GUI_Fight_ComboItem__UpdateSize(__this,pMVar4);
  return;
}

