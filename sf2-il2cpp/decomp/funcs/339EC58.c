// Nekki.SF2.GUI.HintBox$$Init @ RVA 0x339EC58

void Nekki_SF2_GUI_HintBox__Init
               (Nekki_SF2_GUI_HintBox_o *__this,float PCBIKNDPPAD,float LGOOBGHPHGI,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  ulong uVar4;
  ulong uVar5;
  UnityEngine_Vector2_o UVar6;
  
  uVar5 = (ulong)(uint)LGOOBGHPHGI;
  uVar4 = (ulong)(uint)PCBIKNDPPAD;
  if ((DAT_04567c99 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c99 = 1;
  }
  if (PCBIKNDPPAD <= 0.0) {
    pUVar2 = (__this->fields)._RectTransform;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0349ed7c;
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    uVar4 = (ulong)UVar6.fields & 0xffffffff;
  }
  if (LGOOBGHPHGI <= 0.0) {
    pUVar2 = (__this->fields)._RectTransform;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0349ed7c;
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    uVar5 = (ulong)UVar6.fields >> 0x20;
  }
  pUVar2 = (__this->fields)._RectTransform;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar6.fields.x = (float)uVar4;
    UVar6.fields.y = (float)uVar5;
    UnityEngine_RectTransform__set_sizeDelta(pUVar2,UVar6,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._Description;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar2 = (__this->fields)._BGTransform;
      (__this->fields).OKEPCKPFMKG = (float)(pNVar3->fields)._labelFontSize;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (__this->fields)._BGTransform;
        if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar2,(MethodInfo *)0x0);
      }
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0349ed7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

