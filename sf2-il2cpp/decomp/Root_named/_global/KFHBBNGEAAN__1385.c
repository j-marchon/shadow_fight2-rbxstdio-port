// TypeDefIndex 1385
// Namespace: 
// public class KFHBBNGEAAN
// Fields:
//   private SimpleScroll PDHMLFAMNCO; // 0x10
//   private RectTransform NDPOMFMHCMB; // 0x18
//   private int FLDDAODOMLC; // 0x20
//   private int JLDNANEPIJI; // 0x24
//   private float KPGBDEPEHJD; // 0x28
//   private Vector2 ABCKKKLHKFE; // 0x2C

// ===== public void AOHMPMALGPL(int IPJBDMAEMBF, Vector2 EBBMEPHKODK, float GCDIOJKMKIN)  [RVA 0x3173210]
// KFHBBNGEAAN$$AOHMPMALGPL @ RVA 0x3173210

void KFHBBNGEAAN__AOHMPMALGPL
               (KFHBBNGEAAN_o *__this,int32_t IPJBDMAEMBF,UnityEngine_Vector2_o EBBMEPHKODK,
               float GCDIOJKMKIN,MethodInfo *method)

{
  (__this->fields).KPGBDEPEHJD = GCDIOJKMKIN;
  (__this->fields).ABCKKKLHKFE.fields.x = EBBMEPHKODK.fields.x;
  (__this->fields).ABCKKKLHKFE.fields.y = EBBMEPHKODK.fields.y;
  (__this->fields).JLDNANEPIJI = IPJBDMAEMBF;
  KFHBBNGEAAN__BJFFOMOPHEO(__this,(MethodInfo *)(ulong)(uint)IPJBDMAEMBF);
  return;
}


// ===== private void NCGAMIBJPMH()  [RVA 0x31733D8]
// KFHBBNGEAAN$$NCGAMIBJPMH @ RVA 0x31733D8

void KFHBBNGEAAN__NCGAMIBJPMH(KFHBBNGEAAN_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  UnityEngine_Object_o *obj;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  UnityEngine_RectTransform_o **ppUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  
  if ((DAT_0456693e & 1) == 0) {
                    /* try { // try from 03273400 to 03373403 has its CatchHandler @ 03273598 */
                    /* try { // try from 03273408 to 03373437 has its CatchHandler @ 032735c8 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12239/*"Spacer"*/);
    DAT_0456693e = 1;
    method = extraout_x1;
  }
  ppUVar5 = &(__this->fields).NDPOMFMHCMB;
  pUVar6 = *ppUVar5;
                    /* try { // try from 03273444 to 0337344b has its CatchHandler @ 032735ac */
  iVar1 = (__this->fields).FLDDAODOMLC;
  iVar2 = (__this->fields).JLDNANEPIJI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  if (iVar1 < iVar2) {
                    /* try { // try from 03273464 to 0337346b has its CatchHandler @ 032735bc */
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar3) {
                    /* catch() { ... } // from try @ 0327358c with catch @ 03273590
                       try { // try from 03273590 to 033735df has its CatchHandler @ 03273364 */
                    /* catch() { ... } // from try @ 03273488 with catch @ 03273594 */
                    /* catch() { ... } // from try @ 03273400 with catch @ 03273598 */
                    /* catch() { ... } // from try @ 03273534 with catch @ 0327359c */
                    /* catch() { ... } // from try @ 032734b4 with catch @ 032735a0 */
      return;
    }
    pUVar4 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 03273488 to 0337348b has its CatchHandler @ 03273594 */
                    /* try { // try from 03273490 to 03373497 has its CatchHandler @ 032735b0 */
    UnityEngine_GameObject___ctor(pUVar4,StringLiteral_12239/*"Spacer"*/,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      __this_01 = (__this->fields).PDHMLFAMNCO;
                    /* try { // try from 032734b4 to 033734b7 has its CatchHandler @ 032735a0 */
                    /* try { // try from 032734bc to 033734c3 has its CatchHandler @ 032735b8 */
      if ((__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
         (p = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
                    /* try { // try from 032734d4 to 033734db has its CatchHandler @ 032735a4 */
        pUVar6 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__AddComponent<object>
                           (pUVar4,Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
        *ppUVar5 = pUVar6;
LAB_0327357c:
                    /* try { // try from 0327357c to 0337357f has its CatchHandler @ 032735c0 */
                    /* try { // try from 03273580 to 03373583 has its CatchHandler @ 032735c8 */
                    /* try { // try from 03273584 to 03373587 has its CatchHandler @ 032735b4 */
                    /* try { // try from 03273588 to 0337358b has its CatchHandler @ 032735a8 */
                    /* try { // try from 0327358c to 0337358f has its CatchHandler @ 03273590 */
        thunk_FUN_01c20e04(ppUVar5,pUVar6);
        return;
      }
    }
  }
  else {
                    /* try { // try from 032734fc to 03373513 has its CatchHandler @ 032735cc */
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar3) {
      return;
    }
    if ((*ppUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppUVar5,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      if (*ppUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 03273534 to 0337354f has its CatchHandler @ 0327359c */
        UnityEngine_Transform__SetParent
                  ((UnityEngine_Transform_o *)*ppUVar5,(UnityEngine_Transform_o *)0x0,
                   (MethodInfo *)0x0);
        if (*ppUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          obj = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)*ppUVar5,(MethodInfo *)0x0);
                    /* try { // try from 03273554 to 03373567 has its CatchHandler @ 032735cc */
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
          pUVar6 = (UnityEngine_RectTransform_o *)0x0;
          *ppUVar5 = (UnityEngine_RectTransform_o *)0x0;
          goto LAB_0327357c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032734d4 with catch @ 032735a4 */
  FUN_01bab8c8();
}


// ===== public void .ctor(SimpleScroll MGFBPKIBNJI)  [RVA 0x31735A8]
// KFHBBNGEAAN$$.ctor @ RVA 0x31735A8

void KFHBBNGEAAN___ctor(KFHBBNGEAAN_o *__this,Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
                       MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03273588 with catch @ 032735a8 */
                    /* catch() { ... } // from try @ 03273444 with catch @ 032735ac */
                    /* catch() { ... } // from try @ 03273490 with catch @ 032735b0 */
                    /* catch() { ... } // from try @ 03273584 with catch @ 032735b4 */
                    /* catch() { ... } // from try @ 032734bc with catch @ 032735b8 */
                    /* catch() { ... } // from try @ 03273464 with catch @ 032735bc */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0327357c with catch @ 032735c0 */
                    /* catch() { ... } // from try @ 032733c4 with catch @ 032735c4 */
  (__this->fields).PDHMLFAMNCO = MGFBPKIBNJI;
                    /* catch() { ... } // from try @ 03273408 with catch @ 032735c8
                       catch() { ... } // from try @ 03273580 with catch @ 032735c8 */
                    /* catch() { ... } // from try @ 032734fc with catch @ 032735cc
                       catch() { ... } // from try @ 03273554 with catch @ 032735cc */
  thunk_FUN_01c20e04(&__this->fields,MGFBPKIBNJI);
  (__this->fields).FLDDAODOMLC = 0;
  (__this->fields).JLDNANEPIJI = 0;
  (__this->fields).KPGBDEPEHJD = 0.0;
                    /* try { // try from 032735e0 to 033735e3 has its CatchHandler @ 032735fc */
                    /* try { // try from 032735e4 to 0337361b has its CatchHandler @ 03273364 */
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
                    /* catch() { ... } // from try @ 032735e0 with catch @ 032735fc */
  (__this->fields).ABCKKKLHKFE.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
                    /* try { // try from 0327361c to 03373627 has its CatchHandler @ 03273628 */
  return;
}


// ===== public void BJFFOMOPHEO()  [RVA 0x3173220]
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

