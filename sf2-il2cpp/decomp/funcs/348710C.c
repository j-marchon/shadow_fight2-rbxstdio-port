// Nekki.SF2.GUI.Shop.ParametersPanel$$JODPCNMCILH @ RVA 0x348710C

void Nekki_SF2_GUI_Shop_ParametersPanel__JODPCNMCILH
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar2;
  System_Collections_Generic_List_ParameterScrollItem__o *pSVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_RectTransform_o *__this_00;
  float fVar5;
  undefined4 extraout_var;
  undefined4 uVar6;
  UnityEngine_Vector2_o UVar7;
  
                    /* try { // try from 0358711c to 0368711f has its CatchHandler @ 03587134 */
  if ((DAT_045683bb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_get_Count__);
                    /* catch() { ... } // from try @ 0358711c with catch @ 03587134 */
    DAT_045683bb = 1;
    method = extraout_x1;
  }
  pUVar4 = (__this->fields)._LayoutElement;
  fVar5 = Nekki_SF2_GUI_Shop_ParametersPanel__CJGJOJIHCGF(__this,method);
  pSVar3 = (__this->fields).HEHMAPDMHIG;
  if (((pSVar3 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) &&
      (pUVar2 = (__this->fields)._LayoutGroup, pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0
      )) && (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    iVar1 = (pSVar3->fields)._size;
                    /* try { // try from 03587174 to 0368719b has its CatchHandler @ 035871b0 */
    uVar6 = 0;
    (*(pUVar4->klass->vtable)._34_set_minHeight.methodPtr)
              ((ulong)(uint)(fVar5 * (float)iVar1 +
                            *(float *)&(pUVar2->fields).super.m_ChildScaleWidth *
                            (float)(iVar1 + -1)),pUVar4,
               (pUVar4->klass->vtable)._34_set_minHeight.method);
    __this_00 = (__this->fields)._ScrollContent;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0358719c to 036871a7 has its CatchHandler @ 0358659c */
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._LayoutElement;
                    /* try { // try from 035871a8 to 036871af has its CatchHandler @ 035871b0 */
      if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* catch() { ... } // from try @ 03587174 with catch @ 035871b0
                       catch() { ... } // from try @ 035871a8 with catch @ 035871b0 */
        fVar5 = (float)(*(pUVar4->klass->vtable)._33_get_minHeight.methodPtr)
                                 (CONCAT44(extraout_var,UVar7.fields.x),
                                  CONCAT44(uVar6,UVar7.fields.y),pUVar4,
                                  (pUVar4->klass->vtable)._33_get_minHeight.method);
        UVar7.fields.y = fVar5;
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

