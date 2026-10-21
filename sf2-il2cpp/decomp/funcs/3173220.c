// KFHBBNGEAAN$$BJFFOMOPHEO @ RVA 0x3173220

void KFHBBNGEAAN__BJFFOMOPHEO(KFHBBNGEAAN_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar5;
  long lVar6;
  UnityEngine_RectTransform_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar12;
  
  if ((DAT_0456693f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456693f = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields).PDHMLFAMNCO;
  if ((pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (lVar6 = *(long *)&(pNVar5->fields)._snapEase, lVar6 != 0)) {
    (__this->fields).FLDDAODOMLC = *(int32_t *)(lVar6 + 0x18);
    KFHBBNGEAAN__NCGAMIBJPMH(__this,method);
    pUVar7 = (__this->fields).NDPOMFMHCMB;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar3) {
      return;
    }
    pNVar5 = (__this->fields).PDHMLFAMNCO;
    if (pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      fVar9 = 0.0;
      fVar10 = 0.0;
      if ((pNVar5->fields).super.m_Horizontal != false) {
        fVar10 = (__this->fields).ABCKKKLHKFE.fields.x;
      }
      if ((pNVar5->fields).super.m_Vertical != false) {
        fVar9 = (__this->fields).ABCKKKLHKFE.fields.y;
      }
      pUVar7 = (pNVar5->fields).super.m_Viewport;
      if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
        iVar1 = (__this->fields).FLDDAODOMLC;
        iVar2 = (__this->fields).JLDNANEPIJI;
        fVar11 = (__this->fields).KPGBDEPEHJD;
        UVar12 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
        pNVar5 = (__this->fields).PDHMLFAMNCO;
        if ((pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
           (pUVar7 = (__this->fields).NDPOMFMHCMB, pUVar7 != (UnityEngine_RectTransform_o *)0x0)) {
          iVar2 = iVar2 - iVar1;
          fVar8 = (float)iVar2;
          fVar10 = fVar11 * (float)(iVar2 + -1) + fVar10 * fVar8 + fVar9 * fVar8;
          fVar9 = UVar12.fields.m_Height;
          if ((pNVar5->fields).super.m_Vertical != false) {
            fVar9 = fVar10;
          }
          fVar11 = UVar12.fields.m_Width;
          if ((pNVar5->fields).super.m_Horizontal != false) {
            fVar11 = fVar10;
          }
          value.fields.y = fVar9;
          value.fields.x = fVar11;
          UnityEngine_RectTransform__set_sizeDelta(pUVar7,value,(MethodInfo *)0x0);
          pNVar5 = (__this->fields).PDHMLFAMNCO;
          if (pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* try { // try from 03273364 to 033733c3 has its CatchHandler @ 03273364
                       catch() { ... } // from try @ 03273364 with catch @ 03273364
                       catch() { ... } // from try @ 03273590 with catch @ 03273364
                       catch() { ... } // from try @ 032735e4 with catch @ 03273364 */
            bVar3 = Nekki_SF2_GUI_SimpleScroll__HasDumpers(pNVar5,(MethodInfo *)0x0);
            if (bVar3) {
              pNVar5 = (__this->fields).PDHMLFAMNCO;
              if ((pNVar5 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
                 (__this_00 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                 __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_032733d4;
              iVar4 = UnityEngine_Transform__get_childCount(__this_00,(MethodInfo *)0x0);
              pUVar7 = (__this->fields).NDPOMFMHCMB;
              if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032733d4;
              UnityEngine_Transform__SetSiblingIndex
                        ((UnityEngine_Transform_o *)pUVar7,iVar4 + -2,(MethodInfo *)0x0);
            }
            else {
              pUVar7 = (__this->fields).NDPOMFMHCMB;
              if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032733d4;
              UnityEngine_Transform__SetAsLastSibling
                        ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
            }
            pNVar5 = (__this->fields).PDHMLFAMNCO;
            if (pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* try { // try from 032733c4 to 033733db has its CatchHandler @ 032735c4 */
              Nekki_SF2_GUI_SimpleScroll__RebuildLayout(pNVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_032733d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

