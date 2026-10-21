// Nekki.SF2.GUI.SFScrollRect$$EPGCLBFHHGE @ RVA 0x323C49C

void Nekki_SF2_GUI_SFScrollRect__EPGCLBFHHGE
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UnityEngine_Transform_o *y;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  MethodInfo *method_00;
  UnityEngine_UI_Scrollbar_o *pUVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  
  if ((DAT_04567078 & 1) == 0) {
                    /* try { // try from 0333c4cc to 0343c4d3 has its CatchHandler @ 0333c5fc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0333c4d4 to 0343c4d7 has its CatchHandler @ 0333c5ec */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567078 = 1;
  }
                    /* try { // try from 0333c4e8 to 0343c50f has its CatchHandler @ 0333c6c0 */
  y = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = (__this->fields).m_HorizontalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
                    /* try { // try from 0333c510 to 0343c513 has its CatchHandler @ 0333c5c8 */
                    /* try { // try from 0333c514 to 0343c517 has its CatchHandler @ 0333c5c4 */
                    /* try { // try from 0333c518 to 0343c51b has its CatchHandler @ 0333c5ac */
                    /* try { // try from 0333c51c to 0343c51f has its CatchHandler @ 0333c5a8 */
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0333c520 to 0343c523 has its CatchHandler @ 0333c59c */
  pUVar7 = (UnityEngine_RectTransform_o *)0x0;
                    /* try { // try from 0333c524 to 0343c527 has its CatchHandler @ 0333c590 */
  if (!bVar3) {
                    /* try { // try from 0333c528 to 0343c52f has its CatchHandler @ 0333c5d4 */
    pUVar8 = (__this->fields).m_HorizontalScrollbar;
    if (pUVar8 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333c810;
                    /* try { // try from 0333c530 to 0343c533 has its CatchHandler @ 0333c578 */
                    /* try { // try from 0333c534 to 0343c53b has its CatchHandler @ 0333c570 */
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
                    /* catch() { ... } // from try @ 0333c3a8 with catch @ 0333c558 */
      pUVar7 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
                    /* try { // try from 0333c53c to 0343c547 has its CatchHandler @ 0333c5d4 */
                    /* try { // try from 0333c548 to 0343c54b has its CatchHandler @ 0333bbac */
                    /* try { // try from 0333c54c to 0343c54f has its CatchHandler @ 0333c564 */
                    /* try { // try from 0333c550 to 0343c617 has its CatchHandler @ 0333bbac */
      if (pUVar7->klass != UnityEngine_RectTransform_TypeInfo) {
        pUVar7 = (UnityEngine_RectTransform_o *)0x0;
      }
    }
  }
  ppUVar1 = &(__this->fields).FACJHIKMMBA;
                    /* catch() { ... } // from try @ 0333c54c with catch @ 0333c564 */
  (__this->fields).FACJHIKMMBA = pUVar7;
                    /* catch() { ... } // from try @ 0333bf9c with catch @ 0333c568 */
  thunk_FUN_01c20e04(ppUVar1);
                    /* catch() { ... } // from try @ 0333bf88 with catch @ 0333c56c */
                    /* catch() { ... } // from try @ 0333c534 with catch @ 0333c570 */
  pUVar8 = (__this->fields).m_VerticalScrollbar;
                    /* catch() { ... } // from try @ 0333c154 with catch @ 0333c574 */
                    /* catch() { ... } // from try @ 0333c530 with catch @ 0333c578 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0333c2a8 with catch @ 0333c57c */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 0333bec0 with catch @ 0333c580 */
                    /* catch() { ... } // from try @ 0333bf44 with catch @ 0333c584 */
                    /* catch() { ... } // from try @ 0333bf2c with catch @ 0333c588 */
                    /* catch() { ... } // from try @ 0333c1d8 with catch @ 0333c58c */
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0333c524 with catch @ 0333c590 */
  pUVar7 = (UnityEngine_RectTransform_o *)0x0;
                    /* catch() { ... } // from try @ 0333bee0 with catch @ 0333c594 */
  if (!bVar3) {
                    /* catch() { ... } // from try @ 0333c1f8 with catch @ 0333c598 */
    pUVar8 = (__this->fields).m_VerticalScrollbar;
                    /* catch() { ... } // from try @ 0333c520 with catch @ 0333c59c */
    if (pUVar8 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333c810;
                    /* catch() { ... } // from try @ 0333c1c0 with catch @ 0333c5a0 */
                    /* catch() { ... } // from try @ 0333c1d0 with catch @ 0333c5a4 */
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0333c51c with catch @ 0333c5a8 */
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
                    /* catch() { ... } // from try @ 0333c510 with catch @ 0333c5c8 */
      pUVar7 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 0333c518 with catch @ 0333c5ac */
                    /* catch() { ... } // from try @ 0333bf00 with catch @ 0333c5b0 */
                    /* catch() { ... } // from try @ 0333bed8 with catch @ 0333c5b4 */
                    /* catch() { ... } // from try @ 0333c18c with catch @ 0333c5b8 */
                    /* catch() { ... } // from try @ 0333c174 with catch @ 0333c5bc */
                    /* catch() { ... } // from try @ 0333bf18 with catch @ 0333c5c0 */
      if (pUVar7->klass != UnityEngine_RectTransform_TypeInfo) {
        pUVar7 = (UnityEngine_RectTransform_o *)0x0;
      }
    }
  }
                    /* catch() { ... } // from try @ 0333bf6c with catch @ 0333c5cc */
  ppUVar2 = &(__this->fields).DKGPICMDALB;
                    /* catch() { ... } // from try @ 0333c21c with catch @ 0333c5d0 */
                    /* catch() { ... } // from try @ 0333c528 with catch @ 0333c5d4
                       catch() { ... } // from try @ 0333c53c with catch @ 0333c5d4 */
  (__this->fields).DKGPICMDALB = pUVar7;
                    /* catch() { ... } // from try @ 0333be8c with catch @ 0333c5d8 */
  thunk_FUN_01c20e04(ppUVar2);
                    /* catch() { ... } // from try @ 0333bea4 with catch @ 0333c5dc */
                    /* catch() { ... } // from try @ 0333c194 with catch @ 0333c5e0 */
  pUVar7 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
                    /* catch() { ... } // from try @ 0333be74 with catch @ 0333c5e4 */
  if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                    /* catch() { ... } // from try @ 0333c2c4 with catch @ 0333c5e8 */
                    /* catch() { ... } // from try @ 0333c4d4 with catch @ 0333c5ec */
    pUVar6 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0333be5c with catch @ 0333c5f0 */
                    /* catch() { ... } // from try @ 0333bdf0 with catch @ 0333c5f4 */
                    /* catch() { ... } // from try @ 0333bd94 with catch @ 0333c5f8 */
                    /* catch() { ... } // from try @ 0333c4cc with catch @ 0333c5fc */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
                    /* try { // try from 0333c618 to 0343c61b has its CatchHandler @ 0333c62c */
    bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)*ppUVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0333c618 with catch @ 0333c62c */
    if (bVar4) {
      if (*ppUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c810;
                    /* try { // try from 0333c63c to 0343c6ab has its CatchHandler @ 0333c6c0 */
      pUVar6 = UnityEngine_Transform__get_parent
                         ((UnityEngine_Transform_o *)*ppUVar1,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)y,(MethodInfo *)0x0)
      ;
    }
    else {
      bVar4 = true;
    }
    pUVar7 = *ppUVar2;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
    if (bVar5) {
      if (*ppUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c810;
      pUVar6 = UnityEngine_Transform__get_parent
                         ((UnityEngine_Transform_o *)*ppUVar2,(MethodInfo *)0x0);
                    /* try { // try from 0333c6ac to 0343c6b7 has its CatchHandler @ 0333bbac */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0333c6b8 to 0343c6bf has its CatchHandler @ 0333c6c0 */
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
                    /* catch() { ... } // from try @ 0333c474 with catch @ 0333c6c0
                       catch() { ... } // from try @ 0333c4e8 with catch @ 0333c6c0
                       catch() { ... } // from try @ 0333c63c with catch @ 0333c6c0
                       catch() { ... } // from try @ 0333c6b8 with catch @ 0333c6c0 */
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)y,(MethodInfo *)0x0)
      ;
    }
    else {
      bVar5 = true;
    }
    if ((bVar4 & bVar3 & bVar5) == 0) {
      if (__this == (Nekki_SF2_GUI_SFScrollRect_o *)0x0) goto LAB_0333c810;
      bVar3 = false;
      (__this->fields).GOOCCKKJBFB = false;
    }
    else {
      pUVar7 = *ppUVar1;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      if (bVar3) {
        bVar3 = (__this->fields).m_HorizontalScrollbarVisibility == 2;
      }
      else {
        bVar3 = false;
      }
      (__this->fields).GOOCCKKJBFB = bVar3;
      pUVar7 = *ppUVar2;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      if (bVar3) {
        bVar3 = (__this->fields).m_VerticalScrollbarVisibility == 2;
      }
      else {
        bVar3 = false;
      }
    }
    (__this->fields).PMDEJANIMEK = bVar3;
    pUVar7 = (__this->fields).FACJHIKMMBA;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    fVar9 = 0.0;
    if (!bVar3) {
      if (*ppUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c810;
      UVar10 = UnityEngine_RectTransform__get_rect(*ppUVar1,(MethodInfo *)0x0);
      fVar9 = UVar10.fields.m_Height;
    }
    (__this->fields).MHGOJLNIEMG = fVar9;
    pUVar7 = (__this->fields).DKGPICMDALB;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    fVar9 = 0.0;
    if (!bVar3) {
      if (*ppUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c810;
      UVar10 = UnityEngine_RectTransform__get_rect(*ppUVar2,(MethodInfo *)0x0);
      fVar9 = UVar10.fields.m_Width;
    }
    (__this->fields).BIBHNNGNADC = fVar9;
    return;
  }
LAB_0333c810:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

