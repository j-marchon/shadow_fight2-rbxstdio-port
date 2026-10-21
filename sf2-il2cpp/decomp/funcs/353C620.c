// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnToggleConsoleButton @ RVA 0x353C620

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnToggleConsoleButton
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_InputField_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  
  pUVar2 = (__this->fields)._cachedRectTransform;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar6 = UnityEngine_Transform__get_localPosition
                      ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
    bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method_00);
    if (bVar1) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__CCCADFPJGJI(__this,false,in_x2);
      pUVar2 = (__this->fields)._Window;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar4 = (__this->fields)._cachedRectTransform;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          value.fields.y = UVar6.fields.y + UVar5.fields.m_Height;
          value.fields.z = UVar6.fields.z + 0.0;
          value.fields.x = UVar6.fields.x + 0.0;
          UnityEngine_Transform__set_localPosition
                    ((UnityEngine_Transform_o *)pUVar4,value,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._Input;
          if (pUVar3 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__DeactivateInputField(pUVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__CCCADFPJGJI(__this,true,in_x2);
      pUVar2 = (__this->fields)._Window;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar4 = (__this->fields)._cachedRectTransform;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6.fields.y = UVar6.fields.y - UVar5.fields.m_Height;
          UnityEngine_Transform__set_localPosition
                    ((UnityEngine_Transform_o *)pUVar4,UVar6,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._Input;
          if (pUVar3 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(pUVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

