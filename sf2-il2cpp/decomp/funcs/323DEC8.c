// Nekki.SF2.GUI.SFScrollRect$$DJJKCEKMACC @ RVA 0x323DEC8

void Nekki_SF2_GUI_SFScrollRect__DJJKCEKMACC
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_Vector2_o BLEOKMIDGIK,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  UnityEngine_Vector2_o UVar8;
  
  uVar7 = (ulong)BLEOKMIDGIK.fields >> 0x20;
  fVar5 = BLEOKMIDGIK.fields.y;
  uVar3 = (ulong)BLEOKMIDGIK.fields & 0xffffffff;
  if ((__this->fields).m_Horizontal == false) {
    pUVar1 = (__this->fields).m_Content;
    uVar4 = uVar3;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333df78;
    UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    uVar7 = (ulong)UVar8.fields >> 0x20;
    uVar3 = (ulong)UVar8.fields & 0xffffffff;
  }
  uVar4 = uVar3;
  if ((__this->fields).m_Vertical == false) {
    pUVar1 = (__this->fields).m_Content;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333df78;
    UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    uVar7 = (ulong)UVar8.fields >> 0x20;
    fVar5 = UVar8.fields.y;
    uVar4 = (ulong)UVar8.fields & 0xffffffff;
  }
  pUVar1 = (__this->fields).m_Content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    fVar2 = (float)uVar3 - UVar8.fields.x;
    fVar6 = fVar5 - UVar8.fields.y;
    fVar6 = fVar6 * fVar6;
    uVar7 = (ulong)(uint)fVar6;
    fVar6 = fVar2 * fVar2 + fVar6;
    uVar4 = (ulong)(uint)fVar6;
    if (fVar6 < 9.9999994e-11) {
      return;
    }
    pUVar1 = (__this->fields).m_Content;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar8.fields.y = fVar5;
      UVar8.fields.x = (float)uVar3;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar1,UVar8,(MethodInfo *)0x0);
      Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_00);
      return;
    }
  }
LAB_0333df78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar4,uVar7);
}

