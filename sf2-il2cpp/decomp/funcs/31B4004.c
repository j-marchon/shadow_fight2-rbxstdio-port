// Nekki.SF2.GUI.Map.RaidKey$$Update @ RVA 0x31B4004

void Nekki_SF2_GUI_Map_RaidKey__Update(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  int iVar4;
  System_Action_o *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar11;
  
  if ((DAT_04566b9a & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566b9a = 1;
  }
  if ((((__this->fields).AIBKGCEBLND < 1) &&
      (iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0), 0 < iVar2)) ||
     (bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0), bVar1)) {
    __this_00 = (__this->fields)._hint;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_032b41b0;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    iVar4 = 0;
    method_00 = extraout_x1_00;
  }
  else {
    iVar4 = (__this->fields).AIBKGCEBLND + -1;
    method_00 = extraout_x1;
  }
  (__this->fields).AIBKGCEBLND = iVar4;
  UVar10 = Nekki_SF2_GUI_Map_RaidKey__GetBoundingSize(__this,method_00);
  __this_01 = (__this->fields)._button;
  if ((__this_01 != (UnityEngine_UI_Button_o *)0x0) &&
     (pUVar3 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
    if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pUVar3);
    }
    fVar8 = UVar10.fields.x;
    fVar9 = UVar10.fields.y + 10.0;
    UVar11 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    fVar6 = UVar11.fields.m_Width - (fVar8 + -10.0);
    fVar7 = UVar11.fields.m_Height - fVar9;
    fVar6 = fVar6 * fVar6 + fVar7 * fVar7;
    if (0.01 < fVar6) {
      UVar10.fields.y = fVar9;
      UVar10.fields.x = fVar8 + -10.0;
      UnityEngine_RectTransform__set_sizeDelta(pUVar3,UVar10,(MethodInfo *)0x0);
    }
    pUVar3 = (__this->fields).EKOHNMNPCHK;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      if (ABS(UVar11.fields.m_Width - fVar8) <= 0.01) {
        if (fVar6 <= 0.01) {
          return;
        }
      }
      else {
        pUVar3 = (__this->fields).EKOHNMNPCHK;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032b41b0;
        UVar10 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
        value.fields.y = (float)((ulong)UVar10.fields >> 0x20);
        value.fields.x = fVar8;
        UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields).AAPEFIAMJAE;
      if (pSVar5 == (System_Action_o *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x032b4194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar5->fields).super.super.invoke_impl)
                ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
      return;
    }
  }
LAB_032b41b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

