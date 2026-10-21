// Nekki.SF2.GUI.SFScrollRect$$BOBEODDENPC @ RVA 0x323BE54

void Nekki_SF2_GUI_SFScrollRect__BOBEODDENPC
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_UI_Scrollbar_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  
                    /* try { // try from 0333be5c to 0343be63 has its CatchHandler @ 0333c5f0 */
  if ((DAT_0456706a & 1) == 0) {
                    /* try { // try from 0333be74 to 0343be7b has its CatchHandler @ 0333c5e4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456706a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0333be8c to 0343be93 has its CatchHandler @ 0333c5d8 */
  if ((__this->fields).PMDEJANIMEK != false) {
    pUVar2 = (__this->fields).m_HorizontalScrollbar;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0333bea4 to 0343beb3 has its CatchHandler @ 0333c5dc */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 0333bec0 to 0343bec7 has its CatchHandler @ 0333c580 */
      UnityEngine_DrivenRectTransformTracker__Add
                (&(__this->fields).DBKFPHHNDNP,__this,(__this->fields).FACJHIKMMBA,0x1502,0);
      pUVar3 = (__this->fields).FACJHIKMMBA;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c0a4;
                    /* try { // try from 0333bed8 to 0343bedf has its CatchHandler @ 0333c5b4 */
                    /* try { // try from 0333bee0 to 0343beeb has its CatchHandler @ 0333c594 */
      UVar7 = UnityEngine_RectTransform__get_anchorMin(pUVar3,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMin
                (pUVar3,(UnityEngine_Vector2_o)(UVar7.fields & 0xffffffff00000000),(MethodInfo *)0x0
                );
      pUVar3 = (__this->fields).FACJHIKMMBA;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c0a4;
                    /* try { // try from 0333bf00 to 0343bf07 has its CatchHandler @ 0333c5b0 */
      UVar7 = UnityEngine_RectTransform__get_anchorMax(pUVar3,(MethodInfo *)0x0);
      UVar7.fields.x = 1.0;
      UnityEngine_RectTransform__set_anchorMax(pUVar3,UVar7,(MethodInfo *)0x0);
                    /* try { // try from 0333bf18 to 0343bf1f has its CatchHandler @ 0333c5c0 */
      pUVar3 = (__this->fields).FACJHIKMMBA;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c0a4;
      UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 0333bf2c to 0343bf33 has its CatchHandler @ 0333c588 */
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar3,(UnityEngine_Vector2_o)(UVar7.fields & 0xffffffff00000000),(MethodInfo *)0x0
                );
      bVar1 = Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN(__this,method_00);
                    /* try { // try from 0333bf44 to 0343bf4b has its CatchHandler @ 0333c584 */
      pUVar3 = (__this->fields).FACJHIKMMBA;
      if (bVar1) {
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c0a4;
        fVar5 = (__this->fields).m_VerticalScrollbarSpacing;
        fVar6 = (__this->fields).BIBHNNGNADC;
        UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
        fVar4 = UVar7.fields.y;
        fVar5 = -(fVar5 + fVar6);
                    /* try { // try from 0333bf6c to 0343bf77 has its CatchHandler @ 0333c5cc */
      }
      else {
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c0a4;
        UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
        fVar4 = UVar7.fields.y;
        fVar5 = 0.0;
      }
      value.fields.y = fVar4;
      value.fields.x = fVar5;
                    /* try { // try from 0333bf88 to 0343bf8f has its CatchHandler @ 0333c56c */
      UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
    }
  }
  if ((__this->fields).GOOCCKKJBFB != false) {
                    /* try { // try from 0333bf9c to 0343bf9f has its CatchHandler @ 0333c568 */
    pUVar2 = (__this->fields).m_VerticalScrollbar;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
      UnityEngine_DrivenRectTransformTracker__Add
                (&(__this->fields).DBKFPHHNDNP,__this,(__this->fields).DKGPICMDALB,0x2a04,0);
      pUVar3 = (__this->fields).DKGPICMDALB;
                    /* try { // try from 0333bfd8 to 0343bfff has its CatchHandler @ 0333c390 */
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7 = UnityEngine_RectTransform__get_anchorMin(pUVar3,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchorMin
                  (pUVar3,(UnityEngine_Vector2_o)(UVar7.fields & 0xffffffff),(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DKGPICMDALB;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UVar7 = UnityEngine_RectTransform__get_anchorMax(pUVar3,(MethodInfo *)0x0);
          value_00.fields.x = UVar7.fields.x;
          value_00.fields.y = 1.0;
          UnityEngine_RectTransform__set_anchorMax(pUVar3,value_00,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).DKGPICMDALB;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 0333c034 to 0343c05f has its CatchHandler @ 0333c38c */
            UnityEngine_RectTransform__set_anchoredPosition
                      (pUVar3,(UnityEngine_Vector2_o)(UVar7.fields & 0xffffffff),(MethodInfo *)0x0);
            bVar1 = Nekki_SF2_GUI_SFScrollRect__IBJHGENBANK(__this,method_01);
            pUVar3 = (__this->fields).DKGPICMDALB;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
              value_01.fields.x = UVar7.fields.x;
              if (bVar1) {
                fVar5 = -((__this->fields).MHGOJLNIEMG +
                         (__this->fields).m_HorizontalScrollbarSpacing);
              }
              else {
                fVar5 = 0.0;
              }
              value_01.fields.y = fVar5;
                    /* try { // try from 0333c0a0 to 0343c0af has its CatchHandler @ 0333c398 */
              UnityEngine_RectTransform__set_sizeDelta(pUVar3,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
LAB_0333c0a4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

