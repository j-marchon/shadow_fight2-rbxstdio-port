// Nekki.SF2.GUI.DebugModules.ConsoleUI$$Update @ RVA 0x353CC10

void Nekki_SF2_GUI_DebugModules_ConsoleUI__Update
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_UI_GridLayoutGroup_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_RectTransform_o *__this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  
  fVar8 = (__this->fields).OPAAJPDHLOM;
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045602fa = '\x01';
  }
  fVar5 = ABS(fVar8);
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  fVar6 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar7 = fVar5 * 1e-06;
  if (fVar5 * 1e-06 <= fVar6) {
    fVar7 = fVar6;
  }
  if (fVar7 <= ABS(-1.0 - fVar8)) {
    fVar8 = (__this->fields).NDMOOFMHHKL;
    iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if (DAT_045602fa == '\0') {
      FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
      DAT_045602fa = '\x01';
    }
    fVar5 = ABS(fVar8);
    fVar7 = ABS((float)iVar2 / (float)iVar3);
    if (fVar5 <= fVar7) {
      fVar5 = fVar7;
    }
    fVar6 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
    fVar7 = fVar5 * 1e-06;
    if (fVar5 * 1e-06 <= fVar6) {
      fVar7 = fVar6;
    }
    if (fVar7 <= ABS((float)iVar2 / (float)iVar3 - fVar8)) {
      iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      __this_00 = (__this->fields)._tabButtonsRect;
      (__this->fields).NDMOOFMHHKL = (float)iVar2 / (float)iVar3;
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        fVar5 = (__this->fields).LOFKFMGMPJJ;
        fVar8 = ((float)iVar2 / (float)iVar3) / 1.7777778;
        UVar9 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        UVar9.fields.x = fVar8 * fVar5;
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar9,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._buttonsGroup;
        if (pUVar4 != (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
          value.fields.y = (pUVar4->fields).m_Spacing.fields.y;
          value.fields.x = fVar8 * (__this->fields).OPAAJPDHLOM;
          UnityEngine_UI_GridLayoutGroup__set_cellSize(pUVar4,value,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._buttonsGroup;
          if (pUVar4 != (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
            value_00.fields.y = (float)(pUVar4->fields).m_ConstraintCount;
            value_00.fields.x = fVar8 * (__this->fields).GEPICMKIDJP;
            UnityEngine_UI_GridLayoutGroup__set_spacing(pUVar4,value_00,(MethodInfo *)0x0);
            goto LAB_0363cda4;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_0363cda4:
  bVar1 = UnityEngine_Input__GetKeyDown(0x60,(MethodInfo *)0x0);
  method_01 = method_00;
  if (bVar1) {
    Nekki_SF2_GUI_DebugModules_ConsoleUI__OnToggleConsoleButton(__this,method_00);
    method_01 = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method_01);
  if (bVar1) {
    bVar1 = UnityEngine_Input__GetKeyDown(9,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__OnToggleConsoleMode(__this,method_02);
    }
    bVar1 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__SelectPrevCommand(__this,method_03);
    }
    bVar1 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__SelectNextCommand(__this,method_04);
      return;
    }
  }
  return;
}

