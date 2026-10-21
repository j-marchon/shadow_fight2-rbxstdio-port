// Nekki.SF2.GUI.SimpleScroll$$PPBANLLIGDK @ RVA 0x302D564

void Nekki_SF2_GUI_SimpleScroll__PPBANLLIGDK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  char cVar2;
  bool bVar3;
  UnityEngine_UI_LayoutGroup_o *pUVar4;
  Il2CppObject *message;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  MethodInfo *extraout_x1_09;
  MethodInfo *extraout_x1_10;
  MethodInfo *pMVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  UnityEngine_Vector2_o value_03;
  
  if ((DAT_04565ccb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_12141);
    FUN_01bab630(&StringLiteral_12143);
    FUN_01bab630(&StringLiteral_12142);
    FUN_01bab630(&StringLiteral_12144);
    DAT_04565ccb = 1;
    method = extraout_x1;
  }
  bVar1 = (__this->fields).super.m_Vertical;
  cVar2 = (__this->fields).super.m_Horizontal;
  if ((bVar1 != false) == ((bool_conflict)cVar2 != false)) {
    message = StringLiteral_12142;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      message = StringLiteral_12142;
    }
LAB_0312d8a0:
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
    return;
  }
  if (bVar1 != false) {
    Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method);
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_00);
    pMVar5 = extraout_x1_00;
    if (bVar3) {
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMax(pUVar6,(MethodInfo *)0x0);
      UVar7.fields.y = 1.0;
      UnityEngine_RectTransform__set_anchorMax(pUVar6,UVar7,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMin(pUVar6,(MethodInfo *)0x0);
      value.fields.x = UVar7.fields.x;
      value.fields.y = 1.0;
      UnityEngine_RectTransform__set_anchorMin(pUVar6,value,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UnityEngine_RectTransform__set_pivot
                (pUVar6,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
      pUVar4 = *(UnityEngine_UI_LayoutGroup_o **)&(__this->fields).ANKHPKGAHCA;
      if (pUVar4 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto LAB_0312d8b0;
      pMVar5 = extraout_x1_01;
      if (2 < (uint)(pUVar4->fields).m_ChildAlignment) {
        UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar4,1,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogWarning(StringLiteral_12141,(MethodInfo *)0x0);
        pMVar5 = extraout_x1_02;
      }
    }
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,pMVar5);
    pMVar5 = extraout_x1_03;
    if (bVar3) {
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMax(pUVar6,(MethodInfo *)0x0);
      value_00.fields.x = UVar7.fields.x;
      value_00.fields.y = 0.5;
      UnityEngine_RectTransform__set_anchorMax(pUVar6,value_00,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMin(pUVar6,(MethodInfo *)0x0);
      value_01.fields.x = UVar7.fields.x;
      value_01.fields.y = 0.5;
      UnityEngine_RectTransform__set_anchorMin(pUVar6,value_01,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UnityEngine_RectTransform__set_pivot
                (pUVar6,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      pUVar4 = *(UnityEngine_UI_LayoutGroup_o **)&(__this->fields).ANKHPKGAHCA;
      if (pUVar4 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto LAB_0312d8b0;
      pMVar5 = extraout_x1_04;
      if (2 < (pUVar4->fields).m_ChildAlignment - 3U) {
        UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar4,4,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogWarning(StringLiteral_12141,(MethodInfo *)0x0);
        pMVar5 = extraout_x1_05;
      }
    }
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,pMVar5);
    method = method_01;
    if ((!bVar3) &&
       (bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,method_01), method = extraout_x1_06
       , !bVar3)) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_12144,(MethodInfo *)0x0);
      method = extraout_x1_07;
    }
    cVar2 = (__this->fields).super.m_Horizontal;
  }
  if (cVar2 != '\0') {
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,method);
    pMVar5 = extraout_x1_08;
    if (bVar3) {
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
LAB_0312d8b0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UVar7 = UnityEngine_RectTransform__get_anchorMax(pUVar6,(MethodInfo *)0x0);
      value_02.fields.y = UVar7.fields.y;
      value_02.fields.x = 0.5;
      UnityEngine_RectTransform__set_anchorMax(pUVar6,value_02,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMin(pUVar6,(MethodInfo *)0x0);
      value_03.fields.y = UVar7.fields.y;
      value_03.fields.x = 0.5;
      UnityEngine_RectTransform__set_anchorMin(pUVar6,value_03,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UnityEngine_RectTransform__set_pivot
                (pUVar6,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      pUVar4 = *(UnityEngine_UI_LayoutGroup_o **)&(__this->fields).ANKHPKGAHCA;
      if (pUVar4 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto LAB_0312d8b0;
      pMVar5 = extraout_x1_09;
      if ((pUVar4->fields).m_ChildAlignment != 4) {
        UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar4,4,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogWarning(StringLiteral_12141,(MethodInfo *)0x0);
        pMVar5 = extraout_x1_10;
      }
    }
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,pMVar5);
    if (!bVar3) {
      message = StringLiteral_12143;
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        message = StringLiteral_12143;
      }
      goto LAB_0312d8a0;
    }
  }
  return;
}

