// Nekki.SF2.GUI.SimpleScroll$$Init @ RVA 0x302E82C

void Nekki_SF2_GUI_SimpleScroll__Init(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o **ppUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Object_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar6;
  UnityEngine_Vector2_Fields UVar7;
  
  if ((DAT_04565cd5 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<HorizontalOrVerticalLayoutGroup>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Mask>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectMask2D>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12145);
    DAT_04565cd5 = 1;
  }
  if (__this != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    pUVar3 = (__this->fields).super.m_Content;
    *(ushort *)&(__this->fields).POPINJOHFLF = (__this->fields).super.m_Horizontal ^ 1;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      pIVar4 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar3,
                          Method_UnityEngine_Component_GetComponent<HorizontalOrVerticalLayoutGroup>__
                         );
      *(Il2CppObject **)&(__this->fields).ANKHPKGAHCA = pIVar4;
      thunk_FUN_01c20e04(&(__this->fields).ANKHPKGAHCA);
      pUVar6 = (__this->fields).MOKFCILEKDG;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        pUVar3 = (__this->fields).super.m_Content;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ea3c;
        pUVar5 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar3,
                            Method_UnityEngine_Component_GetComponent<RectMask2D>__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pUVar3 = (__this->fields).super.m_Content;
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ea3c;
          pUVar5 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar3,
                              Method_UnityEngine_Component_GetComponent<Mask>__);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar2 = UnityEngine_Object__op_Equality
                            (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_12145,(MethodInfo *)0x0);
          }
        }
      }
      ppUVar1 = &(__this->fields).MOKFCILEKDG;
      pUVar6 = *ppUVar1;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        (__this->fields).MOKFCILEKDG =
             (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).super.m_Viewport;
        thunk_FUN_01c20e04(ppUVar1);
      }
      pUVar3 = (__this->fields).super.m_Content;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7 = (UnityEngine_Vector2_Fields)
                UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
        (__this->fields).IFDBJFNPOEK.fields = UVar7;
        Nekki_SF2_GUI_SimpleScroll__ODFDNFGEDDK(__this,method_00);
        *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
        Nekki_SF2_GUI_SimpleScroll__GHENENOBNFE(__this,method_01);
        Nekki_SF2_GUI_SimpleScroll__PPBANLLIGDK(__this,method_02);
        Nekki_SF2_GUI_SimpleScroll__ClearData(__this,method_03);
        Nekki_SF2_GUI_SimpleScroll__LILEFCCDGNB(__this,method_04);
        return;
      }
    }
  }
LAB_0312ea3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

