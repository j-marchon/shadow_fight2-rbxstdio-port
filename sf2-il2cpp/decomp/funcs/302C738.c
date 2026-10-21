// Nekki.SF2.GUI.SimpleScroll$$GHENENOBNFE @ RVA 0x302C738

void Nekki_SF2_GUI_SimpleScroll__GHENENOBNFE
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Vector2_o UVar7;
  ulong uVar2;
  
  UVar7 = Nekki_SF2_GUI_SimpleScroll__CIPFHAIEHPM(__this,method);
  uVar5 = (ulong)UVar7.fields >> 0x20;
  uVar2 = (ulong)UVar7.fields & 0xffffffff;
  uVar3 = uVar5;
  uVar4 = uVar2;
  if ((__this->fields).super.m_Vertical != false) {
    pUVar1 = (__this->fields).super.m_Viewport;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c6e8 with catch @ 0312c758
                        */
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312c7bc;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c6ec with catch @ 0312c75c
                        */
    UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    uVar2 = (ulong)(uint)UVar6.fields.m_XMin;
    uVar3 = (ulong)(uint)UVar6.fields.m_YMin;
    uVar4 = (ulong)(uint)UVar6.fields.m_Width;
  }
                    /* try { // try from 0312c774 to 0322c78b has its CatchHandler @ 0312c804 */
  if ((__this->fields).super.m_Horizontal != false) {
    pUVar1 = (__this->fields).super.m_Viewport;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312c7bc;
    UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    uVar3 = (ulong)(uint)UVar6.fields.m_YMin;
    uVar2 = (ulong)(uint)UVar6.fields.m_XMin;
    uVar5 = (ulong)(uint)UVar6.fields.m_Height;
  }
                    /* try { // try from 0312c78c to 0322c7f3 has its CatchHandler @ 0312c6a0 */
  pUVar1 = (__this->fields).super.m_Content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar7.fields.x = (float)uVar4;
    UVar7.fields.y = (float)uVar5;
    UnityEngine_RectTransform__set_sizeDelta(pUVar1,UVar7,(MethodInfo *)0x0);
    Nekki_SF2_GUI_SimpleScroll__RebuildLayout(__this,method_00);
    *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 0;
    return;
  }
LAB_0312c7bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,uVar3);
}

