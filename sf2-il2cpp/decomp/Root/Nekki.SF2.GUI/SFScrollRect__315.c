// TypeDefIndex 315
// Namespace: Nekki.SF2.GUI
// [AddComponentMenu("UI/Scroll Rect", 37)]
// public class SFScrollRect : UIBehaviour, IInitializePotentialDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler, IDragHandler, IScrollHandler, ICanvasElement, ILayoutElement, ILayoutGroup, ILayoutController
// Fields:
//   private RectTransform m_Content; // 0x20
//   private bool m_Horizontal; // 0x28
//   private bool m_Vertical; // 0x29
//   private SFScrollRect.BGPPKIKIJHL m_MovementType; // 0x2C
//   private float m_Elasticity; // 0x30
//   private bool m_Inertia; // 0x34
//   private float m_DecelerationRate; // 0x38
//   private float m_ScrollSensitivity; // 0x3C
//   private RectTransform m_Viewport; // 0x40
//   private Scrollbar m_HorizontalScrollbar; // 0x48
//   private Scrollbar m_VerticalScrollbar; // 0x50
//   private SFScrollRect.ONOJEEKMADI m_HorizontalScrollbarVisibility; // 0x58
//   private SFScrollRect.ONOJEEKMADI m_VerticalScrollbarVisibility; // 0x5C
//   private float m_HorizontalScrollbarSpacing; // 0x60
//   private float m_VerticalScrollbarSpacing; // 0x64
//   private SFScrollRect.ScrollRectEvent m_OnValueChanged; // 0x68
//   private Vector2 HCOHGDCJGIM; // 0x70
//   private Vector2 MLDBMFNGFNM; // 0x78
//   private RectTransform PKDDBJOOOAD; // 0x80
//   private Bounds GOOOAGHGBPJ; // 0x88
//   private Bounds JOKCKGCCNNP; // 0xA0
//   private Vector2 CDHNBOKGCCN; // 0xB8
//   private bool EKGCFOHOBKN; // 0xC0
//   private Vector2 EADEAEOKIOJ; // 0xC4
//   private Bounds EKELFALKAAL; // 0xCC
//   private Bounds NMKFBEKICHJ; // 0xE4
//   private bool OPLFKCHEAIN; // 0xFC
//   private bool GOOCCKKJBFB; // 0xFD
//   private bool PMDEJANIMEK; // 0xFE
//   private float MHGOJLNIEMG; // 0x100
//   private float BIBHNNGNADC; // 0x104
//   private RectTransform JCHDAHFOCOL; // 0x108
//   private RectTransform FACJHIKMMBA; // 0x110
//   private RectTransform DKGPICMDALB; // 0x118
//   private DrivenRectTransformTracker PCKKBHIINFC; // 0x120
//   private bool DBKFPHHNDNP; // 0x121
//   private float m_ScrollFactor; // 0x124
//   private float <PHKBHFCILKG>k__BackingField; // 0x128
//   private readonly Vector3[] CBJHKCGHPMI; // 0x130

// ===== public void set_elasticity(float CJNHFNHJHPE)  [RVA 0x323BD94]
// Nekki.SF2.GUI.SFScrollRect$$set_elasticity @ RVA 0x323BD94

void Nekki_SF2_GUI_SFScrollRect__set_elasticity
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 0333bd94 to 0343bdbb has its CatchHandler @ 0333c5f8 */
  (__this->fields).m_Elasticity = CJNHFNHJHPE;
  return;
}


// ===== public virtual void SetLayoutVertical()  [RVA 0x323BD9C]
// Nekki.SF2.GUI.SFScrollRect$$SetLayoutVertical @ RVA 0x323BD9C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__SetLayoutVertical
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Bounds_o local_58;
  
  Nekki_SF2_GUI_SFScrollRect__BOBEODDENPC(__this,method);
  pUVar2 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    pUVar2 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_01);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0333bdf0 to 0343be1b has its CatchHandler @ 0333c5f4 */
      UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
           UVar3.fields.m_XMin + UVar3.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
           UVar3.fields.m_YMin + UVar3.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar4.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar4.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
      Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_58,__this,method_02);
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      (pUVar1->fields).m_Extents.fields.y = local_58.fields.m_Extents.fields.y;
      (pUVar1->fields).m_Extents.fields.z = local_58.fields.m_Extents.fields.z;
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_58.fields._8_8_;
      (pUVar1->fields).m_Center.fields.x = local_58.fields.m_Center.fields.x;
      (pUVar1->fields).m_Center.fields.y = local_58.fields.m_Center.fields.y;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Scrollbar get_verticalScrollbar()  [RVA 0x323C3FC]
// Nekki.SF2.GUI.SFScrollRect$$get_verticalScrollbar @ RVA 0x323C3FC

UnityEngine_UI_Scrollbar_o *
Nekki_SF2_GUI_SFScrollRect__get_verticalScrollbar
          (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_VerticalScrollbar;
}


// ===== public virtual float get_flexibleHeight()  [RVA 0x323C404]
// Nekki.SF2.GUI.SFScrollRect$$get_flexibleHeight @ RVA 0x323C404

float Nekki_SF2_GUI_SFScrollRect__get_flexibleHeight
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return -1.0;
}


// ===== public void set_scrollFactor(float CJNHFNHJHPE)  [RVA 0x323C40C]
// Nekki.SF2.GUI.SFScrollRect$$set_scrollFactor @ RVA 0x323C40C

void Nekki_SF2_GUI_SFScrollRect__set_scrollFactor
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_ScrollFactor = CJNHFNHJHPE;
  return;
}


// ===== public virtual void Rebuild(CanvasUpdate GDFIIDAHJIL)  [RVA 0x323C414]
// Nekki.SF2.GUI.SFScrollRect$$Rebuild @ RVA 0x323C414

void Nekki_SF2_GUI_SFScrollRect__Rebuild
               (Nekki_SF2_GUI_SFScrollRect_o *__this,int32_t GDFIIDAHJIL,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (GDFIIDAHJIL == 2) {
    Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,(MethodInfo *)0x2);
    method_00 = extraout_x1;
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
      method_00 = extraout_x1_00;
    }
                    /* try { // try from 0333c474 to 0343c4c7 has its CatchHandler @ 0333c6c0 */
    Nekki_SF2_GUI_SFScrollRect__HIFNCLLMJOJ
              (__this,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,method_00);
    Nekki_SF2_GUI_SFScrollRect__FEIGMHLBIOI(__this,method_01);
    (__this->fields).OPLFKCHEAIN = true;
  }
  else if (GDFIIDAHJIL == 0) {
    Nekki_SF2_GUI_SFScrollRect__EPGCLBFHHGE(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void LCIOHKDCJPH(float CJNHFNHJHPE)  [RVA 0x323CC30]
// Nekki.SF2.GUI.SFScrollRect$$LCIOHKDCJPH @ RVA 0x323CC30

void Nekki_SF2_GUI_SFScrollRect__LCIOHKDCJPH
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_SFScrollRect__HGJHFCMDKKP(__this,CJNHFNHJHPE,1,in_x2);
  return;
}


// ===== private void JIKDDHFNLDE(float CJNHFNHJHPE)  [RVA 0x323CEBC]
// Nekki.SF2.GUI.SFScrollRect$$JIKDDHFNLDE @ RVA 0x323CEBC

void Nekki_SF2_GUI_SFScrollRect__JIKDDHFNLDE
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_SFScrollRect__HGJHFCMDKKP(__this,CJNHFNHJHPE,0,in_x2);
  return;
}


// ===== private Bounds PDAJIKLPGAN()  [RVA 0x323C1B8]
// Nekki.SF2.GUI.SFScrollRect$$PDAJIKLPGAN @ RVA 0x323C1B8

void Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN
               (UnityEngine_Bounds_o *__return_storage_ptr__,Nekki_SF2_GUI_SFScrollRect_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Vector3_array *pUVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  UnityEngine_RectTransform_o *pUVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Matrix4x4_Fields local_e0;
  UnityEngine_Matrix4x4_Fields local_a0;
  
                    /* try { // try from 0333c1c0 to 0343c1c7 has its CatchHandler @ 0333c5a0 */
                    /* try { // try from 0333c1d0 to 0343c1d7 has its CatchHandler @ 0333c5a4 */
                    /* try { // try from 0333c1d8 to 0343c1e7 has its CatchHandler @ 0333c58c */
  if ((DAT_04567063 & 1) == 0) {
                    /* try { // try from 0333c1f8 to 0343c203 has its CatchHandler @ 0333c598 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567063 = 1;
    method = extraout_x1;
  }
  local_a0.m22 = 0.0;
  local_a0.m32 = 0.0;
  local_a0.m02 = 0.0;
  local_a0.m12 = 0.0;
  local_a0.m23 = 0.0;
  local_a0.m33 = 0.0;
  local_a0.m03 = 0.0;
  local_a0.m13 = 0.0;
  local_a0.m20 = 0.0;
  local_a0.m30 = 0.0;
  local_a0.m00 = 0.0;
  local_a0.m10 = 0.0;
  local_a0.m21 = 0.0;
  local_a0.m31 = 0.0;
  local_a0.m01 = 0.0;
  local_a0.m11 = 0.0;
  pUVar5 = (__this->fields).m_Content;
                    /* try { // try from 0333c21c to 0343c28b has its CatchHandler @ 0333c5d0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    (__return_storage_ptr__->fields).m_Center.fields.x = 0.0;
    (__return_storage_ptr__->fields).m_Center.fields.y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->fields).m_Center.fields.z = 0;
    (__return_storage_ptr__->fields).m_Extents.fields.y = 0.0;
    (__return_storage_ptr__->fields).m_Extents.fields.z = 0.0;
    return;
  }
  pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_Transform__get_worldToLocalMatrix
              ((UnityEngine_Matrix4x4_o *)&local_e0,(UnityEngine_Transform_o *)pUVar5,
               (MethodInfo *)0x0);
    local_a0.m20 = local_e0.m20;
    local_a0.m30 = local_e0.m30;
    local_a0.m00 = local_e0.m00;
    local_a0.m10 = local_e0.m10;
    local_a0.m21 = local_e0.m21;
    local_a0.m31 = local_e0.m31;
    local_a0.m01 = local_e0.m01;
    local_a0.m11 = local_e0.m11;
    local_a0.m22 = local_e0.m22;
    local_a0.m32 = local_e0.m32;
    local_a0.m02 = local_e0.m02;
    local_a0.m12 = local_e0.m12;
    local_a0.m23 = local_e0.m23;
    local_a0.m33 = local_e0.m33;
    local_a0.m03 = local_e0.m03;
    local_a0.m13 = local_e0.m13;
    pUVar5 = (__this->fields).m_Content;
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__GetWorldCorners
                (pUVar5,(__this->fields).CBJHKCGHPMI,(MethodInfo *)0x0);
      fVar13 = 3.4028235e+38;
      fVar4 = -3.4028235e+38;
      lVar6 = 0;
      uVar7 = 0;
      fVar9 = fVar13;
      fVar11 = fVar13;
      fVar14 = fVar4;
      fVar18 = fVar4;
                    /* try { // try from 0333c2a8 to 0343c2af has its CatchHandler @ 0333c57c */
      while (pUVar2 = (__this->fields).CBJHKCGHPMI, pUVar2 != (UnityEngine_Vector3_array *)0x0) {
        if ((uint)pUVar2->max_length <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
                    /* try { // try from 0333c2c4 to 0343c317 has its CatchHandler @ 0333c5e8 */
        UVar19 = UnityEngine_Matrix4x4__MultiplyPoint3x4
                           ((UnityEngine_Matrix4x4_o *)&local_a0,
                            *(UnityEngine_Vector3_Fields *)
                             ((long)&pUVar2->m_Items[0].fields.x + lVar6),(MethodInfo *)0x0);
        fVar16 = UVar19.fields.z;
        fVar8 = UVar19.fields.y;
        fVar17 = UVar19.fields.x;
        fVar15 = fVar17;
        if (fVar9 <= fVar17) {
          fVar15 = fVar9;
        }
        fVar9 = fVar15;
        fVar15 = fVar8;
        if (fVar11 <= fVar8) {
          fVar15 = fVar11;
        }
        fVar11 = fVar15;
        fVar15 = fVar16;
        if (fVar13 <= fVar16) {
          fVar15 = fVar13;
        }
        fVar13 = fVar15;
        if (fVar17 <= fVar14) {
          fVar17 = fVar14;
        }
        fVar14 = fVar17;
        uVar7 = uVar7 + 1;
        if (fVar8 <= fVar18) {
          fVar8 = fVar18;
        }
        fVar18 = fVar8;
        if (fVar16 <= fVar4) {
          fVar16 = fVar4;
        }
        fVar4 = fVar16;
        lVar6 = lVar6 + 0xc;
        if (uVar7 == 4) {
                    /* try { // try from 0333c31c to 0343c323 has its CatchHandler @ 0333c388 */
          if (DAT_0455fa77 == '\0') {
                    /* try { // try from 0333c328 to 0343c32b has its CatchHandler @ 0333c374 */
            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    /* try { // try from 0333c330 to 0343c333 has its CatchHandler @ 0333c370 */
            DAT_0455fa77 = '\x01';
          }
                    /* try { // try from 0333c338 to 0343c33b has its CatchHandler @ 0333c36c */
                    /* try { // try from 0333c340 to 0343c343 has its CatchHandler @ 0333c368 */
          pUVar3 = UnityEngine_Vector3_TypeInfo->static_fields;
                    /* try { // try from 0333c348 to 0343c34b has its CatchHandler @ 0333c35c */
                    /* try { // try from 0333c350 to 0343c353 has its CatchHandler @ 0333c358 */
          fVar8 = (pUVar3->zeroVector).fields.x * 0.5;
                    /* try { // try from 0333c354 to 0343c3a7 has its CatchHandler @ 0333bbac */
          fVar10 = (pUVar3->zeroVector).fields.y * 0.5;
                    /* catch() { ... } // from try @ 0333c350 with catch @ 0333c358 */
          fVar15 = fVar9 - fVar8;
                    /* catch() { ... } // from try @ 0333c348 with catch @ 0333c35c */
          fVar12 = (pUVar3->zeroVector).fields.z * 0.5;
                    /* catch() { ... } // from try @ 0333c11c with catch @ 0333c360 */
          fVar16 = fVar11 - fVar10;
                    /* catch() { ... } // from try @ 0333c13c with catch @ 0333c364 */
                    /* catch() { ... } // from try @ 0333c340 with catch @ 0333c368 */
          fVar17 = fVar13 - fVar12;
                    /* catch() { ... } // from try @ 0333c338 with catch @ 0333c36c */
          if (fVar14 <= fVar15) {
            fVar15 = fVar14;
          }
                    /* catch() { ... } // from try @ 0333c330 with catch @ 0333c370 */
                    /* catch() { ... } // from try @ 0333c328 with catch @ 0333c374 */
          fVar9 = fVar9 + fVar8;
                    /* catch() { ... } // from try @ 0333c114 with catch @ 0333c378 */
          if (fVar18 <= fVar16) {
            fVar16 = fVar18;
          }
                    /* catch() { ... } // from try @ 0333c0c0 with catch @ 0333c37c */
                    /* catch() { ... } // from try @ 0333c104 with catch @ 0333c380 */
          fVar11 = fVar11 + fVar10;
                    /* catch() { ... } // from try @ 0333c0d0 with catch @ 0333c384 */
          if (fVar4 <= fVar17) {
            fVar17 = fVar4;
          }
                    /* catch() { ... } // from try @ 0333c31c with catch @ 0333c388 */
                    /* catch() { ... } // from try @ 0333c034 with catch @ 0333c38c */
          fVar13 = fVar13 + fVar12;
                    /* catch() { ... } // from try @ 0333bfd8 with catch @ 0333c390 */
          if (fVar9 <= fVar14) {
            fVar9 = fVar14;
          }
                    /* catch() { ... } // from try @ 0333c0d8 with catch @ 0333c394 */
                    /* catch() { ... } // from try @ 0333c0a0 with catch @ 0333c398 */
          if (fVar11 <= fVar18) {
            fVar11 = fVar18;
          }
          if (fVar13 <= fVar4) {
            fVar13 = fVar4;
          }
                    /* try { // try from 0333c3a8 to 0343c3ab has its CatchHandler @ 0333c558 */
                    /* try { // try from 0333c3ac to 0343c473 has its CatchHandler @ 0333bbac */
          fVar9 = (fVar9 - fVar15) * 0.5;
          fVar11 = (fVar11 - fVar16) * 0.5;
          fVar14 = (fVar13 - fVar17) * 0.5;
          (__return_storage_ptr__->fields).m_Center.fields.x = fVar15 + fVar9;
          (__return_storage_ptr__->fields).m_Center.fields.y = fVar16 + fVar11;
          (__return_storage_ptr__->fields).m_Center.fields.z = fVar17 + fVar14;
          (__return_storage_ptr__->fields).m_Extents.fields.x = fVar9;
          (__return_storage_ptr__->fields).m_Extents.fields.y = fVar11;
          (__return_storage_ptr__->fields).m_Extents.fields.z = fVar14;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool IBJHGENBANK()  [RVA 0x323CEC4]
// Nekki.SF2.GUI.SFScrollRect$$IBJHGENBANK @ RVA 0x323CEC4

bool Nekki_SF2_GUI_SFScrollRect__IBJHGENBANK
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  float fVar3;
  
  if ((DAT_04567064 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_04567064 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar1) {
    fVar3 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
    fVar2 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
    bVar1 = fVar3 + fVar3 + 0.01 < fVar2 + fVar2;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== protected override void OnDisable()  [RVA 0x323CF4C]
// Nekki.SF2.GUI.SFScrollRect$$OnDisable @ RVA 0x323CF4C

void Nekki_SF2_GUI_SFScrollRect__OnDisable(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  UnityEngine_Events_UnityEvent_float__o *pUVar4;
  
  if ((DAT_04567065 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_CanvasUpdateRegistry_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_JIKDDHFNLDE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_LCIOHKDCJPH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    DAT_04567065 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_UI_CanvasUpdateRegistry_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_CanvasUpdateRegistry_TypeInfo,method);
  }
  UnityEngine_UI_CanvasUpdateRegistry__UnRegisterCanvasElementForRebuild
            ((UnityEngine_UI_ICanvasElement_o *)__this,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).m_HorizontalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).m_HorizontalScrollbar;
    if (pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333d174;
    pUVar4 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar3->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (pUVar4 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_0333d174;
    UnityEngine_Events_UnityEvent<float>__RemoveListener
              (pUVar4,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
  }
  pUVar3 = (__this->fields).m_VerticalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).m_VerticalScrollbar;
    if (pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      pUVar4 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar3->fields).m_OnValueChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
      UnityEngine_Events_UnityAction<float>___ctor();
      if (pUVar4 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__RemoveListener
                  (pUVar4,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
        goto LAB_0333d0e0;
      }
    }
LAB_0333d174:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0333d0e0:
  (__this->fields).OPLFKCHEAIN = false;
  UnityEngine_DrivenRectTransformTracker__Clear(&(__this->fields).DBKFPHHNDNP,0);
  method_00 = extraout_x1_00;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
    method_00 = extraout_x1_01;
  }
  (__this->fields).CDHNBOKGCCN.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  rect = Nekki_SF2_GUI_SFScrollRect__INLENKAOOPD(__this,method_00);
  if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
  }
  UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
  UnityEngine_EventSystems_UIBehaviour__OnDisable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void CAOCACEJCIP()  [RVA 0x323D218]
// Nekki.SF2.GUI.SFScrollRect$$CAOCACEJCIP @ RVA 0x323D218

void Nekki_SF2_GUI_SFScrollRect__CAOCACEJCIP
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  ulong uVar1;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  
  if ((DAT_04567066 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_CanvasUpdateRegistry_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04567066 = 1;
  }
  uVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                    (__this,(__this->klass->vtable)._9_IsActive.method);
  if ((uVar1 & 1) != 0) {
    if ((UnityEngine_UI_CanvasUpdateRegistry_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_UI_CanvasUpdateRegistry__RegisterCanvasElementForLayoutRebuild
              ((UnityEngine_UI_ICanvasElement_o *)__this,(MethodInfo *)0x0);
    rect = Nekki_SF2_GUI_SFScrollRect__INLENKAOOPD(__this,method_00);
    if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
    }
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void set_horizontalScrollbarSpacing(float CJNHFNHJHPE)  [RVA 0x323D2D0]
// Nekki.SF2.GUI.SFScrollRect$$set_horizontalScrollbarSpacing @ RVA 0x323D2D0

void Nekki_SF2_GUI_SFScrollRect__set_horizontalScrollbarSpacing
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_HorizontalScrollbarSpacing = CJNHFNHJHPE;
  Nekki_SF2_GUI_SFScrollRect__NBMGOJFGJFB(__this,method);
  return;
}


// ===== public void set_EnableDragging(bool CJNHFNHJHPE)  [RVA 0x323D360]
// Nekki.SF2.GUI.SFScrollRect$$set_EnableDragging @ RVA 0x323D360

void Nekki_SF2_GUI_SFScrollRect__set_EnableDragging
               (Nekki_SF2_GUI_SFScrollRect_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).field_0x111 = CJNHFNHJHPE;
  return;
}


// ===== public virtual void SetLayoutHorizontal()  [RVA 0x323D36C]
// Nekki.SF2.GUI.SFScrollRect$$SetLayoutHorizontal @ RVA 0x323D36C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__SetLayoutHorizontal
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  bool_conflict *pbVar2;
  bool_conflict bVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *extraout_x1;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  MethodInfo *method_19;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_20;
  MethodInfo *method_21;
  MethodInfo *method_22;
  MethodInfo *method_23;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Bounds_o local_78;
  
  if ((DAT_04567067 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04567067 = 1;
  }
  pbVar2 = &(__this->fields).DBKFPHHNDNP;
  UnityEngine_DrivenRectTransformTracker__Clear(pbVar2,0);
  if (((__this->fields).GOOCCKKJBFB != false) ||
     (method_14 = method_00, (__this->fields).PMDEJANIMEK != false)) {
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
    UnityEngine_DrivenRectTransformTracker__Add(pbVar2,__this,pUVar5,0x3f06,0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_01);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_02);
    if (DAT_0455fa7e == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa7e = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UnityEngine_RectTransform__set_anchorMax
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_03);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
                    /* try { // try from 0333d4c4 to 0343d8ab has its CatchHandler @ 0333d4c4
                       catch() { ... } // from try @ 0333d4c4 with catch @ 0333d4c4
                       catch() { ... } // from try @ 0333d8b8 with catch @ 0333d4c4
                       catch() { ... } // from try @ 0333e710 with catch @ 0333d4c4
                       catch() { ... } // from try @ 0333e7f4 with catch @ 0333d4c4 */
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_04);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pUVar5 = (__this->fields).m_Content;
    if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar5,(MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_05);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UVar9 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_06);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
         UVar9.fields.m_XMin + UVar9.fields.m_Width * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
         UVar9.fields.m_YMin + UVar9.fields.m_Height * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar10.fields.m_Width * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar10.fields.m_Height * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
    Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_78,__this,method_07);
    bVar3 = (__this->fields).PMDEJANIMEK;
    pUVar1 = &(__this->fields).GOOOAGHGBPJ;
    *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_78.fields._8_8_;
    (pUVar1->fields).m_Center.fields.x = local_78.fields.m_Center.fields.x;
    (pUVar1->fields).m_Center.fields.y = local_78.fields.m_Center.fields.y;
    pUVar1 = &(__this->fields).GOOOAGHGBPJ;
    (pUVar1->fields).m_Extents.fields.y = local_78.fields.m_Extents.fields.y;
    (pUVar1->fields).m_Extents.fields.z = local_78.fields.m_Extents.fields.z;
    method_14 = method_08;
    if ((bVar3 != false) &&
       (bVar4 = Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN(__this,method_08), method_14 = method_09,
       bVar4)) {
      pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_09);
      fVar7 = (__this->fields).BIBHNNGNADC;
      fVar8 = (__this->fields).m_VerticalScrollbarSpacing;
      pUVar6 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_10);
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
      UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
      UVar11.fields.x = -(fVar7 + fVar8);
      UnityEngine_RectTransform__set_sizeDelta(pUVar5,UVar11,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).m_Content;
      if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar5,(MethodInfo *)0x0);
      pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_11);
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
      UVar9 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
      pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_12);
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
           UVar9.fields.m_XMin + UVar9.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
           UVar9.fields.m_YMin + UVar9.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar10.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar10.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
      Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_78,__this,method_13);
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      (pUVar1->fields).m_Extents.fields.y = local_78.fields.m_Extents.fields.y;
      (pUVar1->fields).m_Extents.fields.z = local_78.fields.m_Extents.fields.z;
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_78.fields._8_8_;
      (pUVar1->fields).m_Center.fields.x = local_78.fields.m_Center.fields.x;
      (pUVar1->fields).m_Center.fields.y = local_78.fields.m_Center.fields.y;
      method_14 = extraout_x1;
    }
  }
  if (((__this->fields).GOOCCKKJBFB != false) &&
     (bVar4 = Nekki_SF2_GUI_SFScrollRect__IBJHGENBANK(__this,method_14), method_14 = method_15,
     bVar4)) {
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_15);
    pUVar6 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_16);
    if ((pUVar6 == (UnityEngine_RectTransform_o *)0x0) ||
       (UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0333d844;
    value.fields.y = -((__this->fields).MHGOJLNIEMG + (__this->fields).m_HorizontalScrollbarSpacing)
    ;
    value.fields.x = UVar11.fields.x;
    UnityEngine_RectTransform__set_sizeDelta(pUVar5,value,(MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_17);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UVar9 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_18);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
         UVar9.fields.m_XMin + UVar9.fields.m_Width * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
         UVar9.fields.m_YMin + UVar9.fields.m_Height * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar10.fields.m_Width * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar10.fields.m_Height * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
    Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_78,__this,method_19);
    pUVar1 = &(__this->fields).GOOOAGHGBPJ;
    (pUVar1->fields).m_Extents.fields.y = local_78.fields.m_Extents.fields.y;
    (pUVar1->fields).m_Extents.fields.z = local_78.fields.m_Extents.fields.z;
    pUVar1 = &(__this->fields).GOOOAGHGBPJ;
    *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_78.fields._8_8_;
    (pUVar1->fields).m_Center.fields.x = local_78.fields.m_Center.fields.x;
    (pUVar1->fields).m_Center.fields.y = local_78.fields.m_Center.fields.y;
    method_14 = extraout_x1_00;
  }
  if (((__this->fields).PMDEJANIMEK == false) ||
     (bVar4 = Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN(__this,method_14), !bVar4)) {
    return;
  }
  pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_20);
  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
    UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
    if (UVar11.fields.x != 0.0) {
      return;
    }
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_21);
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
      if (0.0 <= UVar11.fields.y) {
        return;
      }
      pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_22);
      fVar7 = (__this->fields).BIBHNNGNADC;
      fVar8 = (__this->fields).m_VerticalScrollbarSpacing;
      pUVar6 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_23);
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
        value_00.fields.y = UVar11.fields.y;
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          value_00.fields.x = -(fVar7 + fVar8);
          UnityEngine_RectTransform__set_sizeDelta(pUVar5,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0333d844:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void NBMGOJFGJFB()  [RVA 0x323D2D8]
// Nekki.SF2.GUI.SFScrollRect$$NBMGOJFGJFB @ RVA 0x323D2D8

void Nekki_SF2_GUI_SFScrollRect__NBMGOJFGJFB
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *rect;
  undefined1 auVar1 [16];
  
  if ((DAT_04567068 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04567068 = 1;
  }
  auVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                     (__this,(__this->klass->vtable)._9_IsActive.method);
  if ((auVar1._0_8_ & 1) != 0) {
    rect = Nekki_SF2_GUI_SFScrollRect__INLENKAOOPD(__this,auVar1._8_8_);
    if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
    }
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public virtual float get_preferredHeight()  [RVA 0x323D8D0]
// Nekki.SF2.GUI.SFScrollRect$$get_preferredHeight @ RVA 0x323D8D0

float Nekki_SF2_GUI_SFScrollRect__get_preferredHeight
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return -1.0;
}


// ===== public SFScrollRect.ScrollRectEvent get_onValueChanged()  [RVA 0x323D8D8]
// Nekki.SF2.GUI.SFScrollRect$$get_onValueChanged @ RVA 0x323D8D8

Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_o *
Nekki_SF2_GUI_SFScrollRect__get_onValueChanged
          (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_OnValueChanged;
}


// ===== public virtual void OnInitializePotentialDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x323D8E0]
// Nekki.SF2.GUI.SFScrollRect$$OnInitializePotentialDrag @ RVA 0x323D8E0

void Nekki_SF2_GUI_SFScrollRect__OnInitializePotentialDrag
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._button_k__BackingField == 0) {
      if (DAT_0455fa75 == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa75 = '\x01';
      }
      (__this->fields).CDHNBOKGCCN.fields =
           (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_EnableDragging()  [RVA 0x323D940]
// Nekki.SF2.GUI.SFScrollRect$$get_EnableDragging @ RVA 0x323D940

bool Nekki_SF2_GUI_SFScrollRect__get_EnableDragging
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (bool)(__this->fields).field_0x111;
}


// ===== private void FEIGMHLBIOI()  [RVA 0x323CB58]
// Nekki.SF2.GUI.SFScrollRect$$FEIGMHLBIOI @ RVA 0x323CB58

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__FEIGMHLBIOI
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar11;
  undefined8 uVar12;
  UnityEngine_Vector2_Fields UVar13;
  
  if ((DAT_04567069 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567069 = 1;
    method = extraout_x1;
  }
  pUVar11 = (__this->fields).m_Content;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if (bVar10) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    UVar13 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  }
  else {
    pUVar11 = (__this->fields).m_Content;
    if (pUVar11 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar13 = (UnityEngine_Vector2_Fields)
             UnityEngine_RectTransform__get_anchoredPosition(pUVar11,(MethodInfo *)0x0);
  }
  (__this->fields).EADEAEOKIOJ.fields = UVar13;
  pUVar1 = &(__this->fields).JOKCKGCCNNP;
  fVar2 = (pUVar1->fields).m_Center.fields.x;
  fVar3 = (pUVar1->fields).m_Center.fields.y;
  pUVar1 = &(__this->fields).JOKCKGCCNNP;
  fVar4 = (pUVar1->fields).m_Extents.fields.y;
  fVar5 = (pUVar1->fields).m_Extents.fields.z;
  pUVar1 = &(__this->fields).GOOOAGHGBPJ;
  uVar12 = *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z;
  fVar6 = (pUVar1->fields).m_Center.fields.x;
  fVar7 = (pUVar1->fields).m_Center.fields.y;
  pUVar1 = &(__this->fields).GOOOAGHGBPJ;
  fVar8 = (pUVar1->fields).m_Extents.fields.y;
  fVar9 = (pUVar1->fields).m_Extents.fields.z;
  pUVar1 = &(__this->fields).NMKFBEKICHJ;
  *(undefined8 *)&(__this->fields).NMKFBEKICHJ.fields.m_Center.fields.z =
       *(undefined8 *)&(__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z;
  (pUVar1->fields).m_Center.fields.x = fVar2;
  (pUVar1->fields).m_Center.fields.y = fVar3;
  pUVar1 = &(__this->fields).NMKFBEKICHJ;
  (pUVar1->fields).m_Extents.fields.y = fVar4;
  (pUVar1->fields).m_Extents.fields.z = fVar5;
  pUVar1 = &(__this->fields).EKELFALKAAL;
  *(undefined8 *)&(__this->fields).EKELFALKAAL.fields.m_Center.fields.z = uVar12;
  (pUVar1->fields).m_Center.fields.x = fVar6;
  (pUVar1->fields).m_Center.fields.y = fVar7;
  pUVar1 = &(__this->fields).EKELFALKAAL;
  (pUVar1->fields).m_Extents.fields.y = fVar8;
  (pUVar1->fields).m_Extents.fields.z = fVar9;
  return;
}


// ===== public virtual void StopMovement()  [RVA 0x323D948]
// Nekki.SF2.GUI.SFScrollRect$$StopMovement @ RVA 0x323D948

void Nekki_SF2_GUI_SFScrollRect__StopMovement
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).CDHNBOKGCCN.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  return;
}


// ===== public void set_horizontalNormalizedPosition(float CJNHFNHJHPE)  [RVA 0x323D998]
// Nekki.SF2.GUI.SFScrollRect$$set_horizontalNormalizedPosition @ RVA 0x323D998

void Nekki_SF2_GUI_SFScrollRect__set_horizontalNormalizedPosition
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_SFScrollRect__HGJHFCMDKKP(__this,CJNHFNHJHPE,0,in_x2);
  return;
}


// ===== protected override void OnRectTransformDimensionsChange()  [RVA 0x323D9A0]
// Nekki.SF2.GUI.SFScrollRect$$OnRectTransformDimensionsChange @ RVA 0x323D9A0

void Nekki_SF2_GUI_SFScrollRect__OnRectTransformDimensionsChange
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *rect;
  undefined1 auVar1 [16];
  
  if ((DAT_04567068 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04567068 = 1;
  }
  auVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                     (__this,(__this->klass->vtable)._9_IsActive.method);
  if ((auVar1._0_8_ & 1) != 0) {
    rect = Nekki_SF2_GUI_SFScrollRect__INLENKAOOPD(__this,auVar1._8_8_);
    if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
    }
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void set_verticalScrollbarVisibility(SFScrollRect.ONOJEEKMADI CJNHFNHJHPE)  [RVA 0x323D9A4]
// Nekki.SF2.GUI.SFScrollRect$$set_verticalScrollbarVisibility @ RVA 0x323D9A4

void Nekki_SF2_GUI_SFScrollRect__set_verticalScrollbarVisibility
               (Nekki_SF2_GUI_SFScrollRect_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_VerticalScrollbarVisibility = CJNHFNHJHPE;
  Nekki_SF2_GUI_SFScrollRect__CAOCACEJCIP(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public float get_scrollFactor()  [RVA 0x323D9AC]
// Nekki.SF2.GUI.SFScrollRect$$get_scrollFactor @ RVA 0x323D9AC

float Nekki_SF2_GUI_SFScrollRect__get_scrollFactor
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ScrollFactor;
}


// ===== public bool get_vertical()  [RVA 0x323D9B4]
// Nekki.SF2.GUI.SFScrollRect$$get_vertical @ RVA 0x323D9B4

bool Nekki_SF2_GUI_SFScrollRect__get_vertical
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Vertical;
}


// ===== public virtual void OnScroll(PointerEventData IMMNELPBGIF)  [RVA 0x323D9BC]
// Nekki.SF2.GUI.SFScrollRect$$OnScroll @ RVA 0x323D9BC

void Nekki_SF2_GUI_SFScrollRect__OnScroll
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *IMMNELPBGIF,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o GBLKICMLIHH;
  
  auVar6 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                     (__this,(__this->klass->vtable)._9_IsActive.method);
  if ((auVar6._0_8_ & 1) == 0) {
    return;
  }
  Nekki_SF2_GUI_SFScrollRect__BPCAFFKDJJI(__this,auVar6._8_8_);
  Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_00);
  if (IMMNELPBGIF == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto LAB_0333daf4;
  fVar4 = (IMMNELPBGIF->fields)._scrollDelta_k__BackingField.fields.x;
  bVar1 = (__this->fields).m_Horizontal;
  fVar3 = -(IMMNELPBGIF->fields)._scrollDelta_k__BackingField.fields.y;
  fVar5 = fVar4;
  if ((__this->fields).m_Vertical == false) {
    if (bVar1 == false) goto LAB_0333da5c;
    if (ABS(fVar4) < ABS(fVar3)) {
      fVar5 = fVar3;
    }
    fVar4 = 0.0;
  }
  else if ((bVar1 != false) || (fVar5 = 0.0, ABS(fVar4) <= ABS(fVar3))) {
LAB_0333da5c:
    fVar4 = fVar3;
  }
  pUVar2 = (__this->fields).m_Content;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
    fVar3 = (__this->fields).m_ScrollSensitivity;
    fVar5 = UVar7.fields.x + fVar5 * fVar3;
    fVar4 = UVar7.fields.y + fVar4 * fVar3;
    if ((__this->fields).m_MovementType == 2) {
      pUVar2 = (__this->fields).m_Content;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333daf4;
      UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      GBLKICMLIHH.fields.x = fVar5 - UVar7.fields.x;
      GBLKICMLIHH.fields.y = fVar4 - UVar7.fields.y;
      UVar7 = Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE(__this,GBLKICMLIHH,method_01);
      fVar5 = fVar5 + UVar7.fields.x;
      fVar4 = fVar4 + UVar7.fields.y;
    }
    (*(__this->klass->vtable)._48_DJJKCEKMACC.methodPtr)
              ((ulong)(uint)fVar5,(ulong)(uint)fVar4,__this,
               (__this->klass->vtable)._48_DJJKCEKMACC.method);
    Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_02);
    return;
  }
LAB_0333daf4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual float get_preferredWidth()  [RVA 0x323DC68]
// Nekki.SF2.GUI.SFScrollRect$$get_preferredWidth @ RVA 0x323DC68

float Nekki_SF2_GUI_SFScrollRect__get_preferredWidth
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return -1.0;
}


// ===== public void set_inertia(bool CJNHFNHJHPE)  [RVA 0x323DC70]
// Nekki.SF2.GUI.SFScrollRect$$set_inertia @ RVA 0x323DC70

void Nekki_SF2_GUI_SFScrollRect__set_inertia
               (Nekki_SF2_GUI_SFScrollRect_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_Inertia = CJNHFNHJHPE;
  return;
}


// ===== public SFScrollRect.ONOJEEKMADI get_horizontalScrollbarVisibility()  [RVA 0x323DC7C]
// Nekki.SF2.GUI.SFScrollRect$$get_horizontalScrollbarVisibility @ RVA 0x323DC7C

int32_t Nekki_SF2_GUI_SFScrollRect__get_horizontalScrollbarVisibility
                  (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_HorizontalScrollbarVisibility;
}


// ===== private void BOBEODDENPC()  [RVA 0x323BE54]
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


// ===== public RectTransform get_viewport()  [RVA 0x323DC84]
// Nekki.SF2.GUI.SFScrollRect$$get_viewport @ RVA 0x323DC84

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SFScrollRect__get_viewport(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Viewport;
}


// ===== public void set_scrollSensitivity(float CJNHFNHJHPE)  [RVA 0x323DC8C]
// Nekki.SF2.GUI.SFScrollRect$$set_scrollSensitivity @ RVA 0x323DC8C

void Nekki_SF2_GUI_SFScrollRect__set_scrollSensitivity
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_ScrollSensitivity = CJNHFNHJHPE;
  return;
}


// ===== public void set_movementType(SFScrollRect.BGPPKIKIJHL CJNHFNHJHPE)  [RVA 0x323DC94]
// Nekki.SF2.GUI.SFScrollRect$$set_movementType @ RVA 0x323DC94

void Nekki_SF2_GUI_SFScrollRect__set_movementType
               (Nekki_SF2_GUI_SFScrollRect_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_MovementType = CJNHFNHJHPE;
  return;
}


// ===== public void set_verticalScrollbar(Scrollbar CJNHFNHJHPE)  [RVA 0x323DC9C]
// Nekki.SF2.GUI.SFScrollRect$$set_verticalScrollbar @ RVA 0x323DC9C

void Nekki_SF2_GUI_SFScrollRect__set_verticalScrollbar
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_UI_Scrollbar_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_UI_Scrollbar_o **ppUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  UnityEngine_Events_UnityEvent_float__o *pUVar5;
  
  if ((DAT_0456706b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_LCIOHKDCJPH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    DAT_0456706b = 1;
  }
  ppUVar3 = &(__this->fields).m_VerticalScrollbar;
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333de28;
    pUVar5 = (UnityEngine_Events_UnityEvent_float__o *)((*ppUVar3)->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (pUVar5 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_0333de28;
    UnityEngine_Events_UnityEvent<float>__RemoveListener
              (pUVar5,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
  }
  *ppUVar3 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppUVar3,CJNHFNHJHPE);
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    if (*ppUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      pUVar5 = (UnityEngine_Events_UnityEvent_float__o *)((*ppUVar3)->fields).m_OnValueChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
      UnityEngine_Events_UnityAction<float>___ctor();
      if (pUVar5 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__AddListener
                  (pUVar5,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
        method_00 = extraout_x1_00;
        goto LAB_0333de10;
      }
    }
LAB_0333de28:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0333de10:
  Nekki_SF2_GUI_SFScrollRect__CAOCACEJCIP(__this,method_00);
  return;
}


// ===== public void set_vertical(bool CJNHFNHJHPE)  [RVA 0x323DE2C]
// Nekki.SF2.GUI.SFScrollRect$$set_vertical @ RVA 0x323DE2C

void Nekki_SF2_GUI_SFScrollRect__set_vertical
               (Nekki_SF2_GUI_SFScrollRect_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_Vertical = CJNHFNHJHPE;
  return;
}


// ===== public float get_elasticity()  [RVA 0x323DE38]
// Nekki.SF2.GUI.SFScrollRect$$get_elasticity @ RVA 0x323DE38

float Nekki_SF2_GUI_SFScrollRect__get_elasticity
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Elasticity;
}


// ===== public float get_horizontalNormalizedPosition()  [RVA 0x323DE40]
// Nekki.SF2.GUI.SFScrollRect$$get_horizontalNormalizedPosition @ RVA 0x323DE40

float Nekki_SF2_GUI_SFScrollRect__get_horizontalNormalizedPosition
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method);
  fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
  fVar1 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
  fVar2 = (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x - fVar1;
  fVar4 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.x - fVar3;
  if (fVar1 + fVar1 < fVar3 + fVar3) {
    return (fVar2 - fVar4) / ((fVar3 + fVar3) - (fVar1 + fVar1));
  }
  fVar1 = 1.0;
  if (fVar2 <= fVar4) {
    fVar1 = 0.0;
  }
  return fVar1;
}


// ===== public virtual void OnEndDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x323DEA0]
// Nekki.SF2.GUI.SFScrollRect$$OnEndDrag @ RVA 0x323DEA0

void Nekki_SF2_GUI_SFScrollRect__OnEndDrag
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._button_k__BackingField == 0) {
      (__this->fields).EKGCFOHOBKN = false;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool CMDGHBNNBGN()  [RVA 0x323D848]
// Nekki.SF2.GUI.SFScrollRect$$CMDGHBNNBGN @ RVA 0x323D848

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  float fVar3;
  
  if ((DAT_0456706c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_0456706c = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar1) {
    fVar3 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
    fVar2 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
                    /* try { // try from 0333d8ac to 0343d8b7 has its CatchHandler @ 0333e6e0 */
                    /* try { // try from 0333d8b8 to 0343e6f7 has its CatchHandler @ 0333d4c4 */
    bVar1 = fVar3 + fVar3 + 0.01 < fVar2 + fVar2;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== public void set_horizontalScrollbarVisibility(SFScrollRect.ONOJEEKMADI CJNHFNHJHPE)  [RVA 0x323DEC0]
// Nekki.SF2.GUI.SFScrollRect$$set_horizontalScrollbarVisibility @ RVA 0x323DEC0

void Nekki_SF2_GUI_SFScrollRect__set_horizontalScrollbarVisibility
               (Nekki_SF2_GUI_SFScrollRect_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_HorizontalScrollbarVisibility = CJNHFNHJHPE;
  Nekki_SF2_GUI_SFScrollRect__CAOCACEJCIP(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== protected virtual void DJJKCEKMACC(Vector2 BLEOKMIDGIK)  [RVA 0x323DEC8]
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


// ===== private void JMLCAJLBDEK()  [RVA 0x323DF7C]
// Nekki.SF2.GUI.SFScrollRect$$JMLCAJLBDEK @ RVA 0x323DF7C

void Nekki_SF2_GUI_SFScrollRect__JMLCAJLBDEK
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  
  if ((DAT_0456706d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456706d = 1;
    method = extraout_x1;
  }
  pUVar4 = (__this->fields).m_VerticalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).m_VerticalScrollbarVisibility != 0)) {
    pUVar4 = (__this->fields).m_VerticalScrollbar;
    if ((pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0333e0e4;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    bVar2 = Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN(__this,method_00);
    if (bVar1 != bVar2) {
      pUVar4 = (__this->fields).m_VerticalScrollbar;
      if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333e0e4;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN(__this,method_01);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0333e0e4;
      UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
    }
  }
  pUVar4 = (__this->fields).m_HorizontalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((!bVar1) || ((__this->fields).m_HorizontalScrollbarVisibility == 0)) {
    return;
  }
  pUVar4 = (__this->fields).m_HorizontalScrollbar;
  if ((pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    bVar2 = Nekki_SF2_GUI_SFScrollRect__IBJHGENBANK(__this,method_02);
    if (bVar1 == bVar2) {
      return;
    }
    pUVar4 = (__this->fields).m_HorizontalScrollbar;
    if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_SFScrollRect__IBJHGENBANK(__this,method_03);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0333e0e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BPCAFFKDJJI()  [RVA 0x323DAF8]
// Nekki.SF2.GUI.SFScrollRect$$BPCAFFKDJJI @ RVA 0x323DAF8

void Nekki_SF2_GUI_SFScrollRect__BPCAFFKDJJI
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456706e & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_CanvasUpdateRegistry_TypeInfo);
    DAT_0456706e = 1;
    method = extraout_x1;
  }
  if ((__this->fields).OPLFKCHEAIN == false) {
    if ((UnityEngine_UI_CanvasUpdateRegistry_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_UI_CanvasUpdateRegistry_TypeInfo,method);
    }
    bVar1 = UnityEngine_UI_CanvasUpdateRegistry__IsRebuildingLayout((MethodInfo *)0x0);
    if (!bVar1) {
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public SFScrollRect.ONOJEEKMADI get_verticalScrollbarVisibility()  [RVA 0x323E0E8]
// Nekki.SF2.GUI.SFScrollRect$$get_verticalScrollbarVisibility @ RVA 0x323E0E8

int32_t Nekki_SF2_GUI_SFScrollRect__get_verticalScrollbarVisibility
                  (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_VerticalScrollbarVisibility;
}


// ===== public float get_horizontalScrollbarSpacing()  [RVA 0x323E0F0]
// Nekki.SF2.GUI.SFScrollRect$$get_horizontalScrollbarSpacing @ RVA 0x323E0F0

float Nekki_SF2_GUI_SFScrollRect__get_horizontalScrollbarSpacing
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_HorizontalScrollbarSpacing;
}


// ===== public virtual float get_flexibleWidth()  [RVA 0x323E0F8]
// Nekki.SF2.GUI.SFScrollRect$$get_flexibleWidth @ RVA 0x323E0F8

float Nekki_SF2_GUI_SFScrollRect__get_flexibleWidth
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields)._PHKBHFCILKG_k__BackingField;
}


// ===== public virtual void CalculateLayoutInputVertical()  [RVA 0x323E100]
// Nekki.SF2.GUI.SFScrollRect$$CalculateLayoutInputVertical @ RVA 0x323E100

void Nekki_SF2_GUI_SFScrollRect__CalculateLayoutInputVertical
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected RectTransform DEICOOLNJLP()  [RVA 0x323C0A8]
// Nekki.SF2.GUI.SFScrollRect$$DEICOOLNJLP @ RVA 0x323C0A8

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_c *pUVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
                    /* try { // try from 0333c0c0 to 0343c0c7 has its CatchHandler @ 0333c37c */
  if ((DAT_0456706f & 1) == 0) {
                    /* try { // try from 0333c0d0 to 0343c0d7 has its CatchHandler @ 0333c384 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0333c0d8 to 0343c0f7 has its CatchHandler @ 0333c394 */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_0456706f = 1;
    method = extraout_x1;
  }
  ppUVar3 = &(__this->fields).PKDDBJOOOAD;
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 0333c104 to 0343c10b has its CatchHandler @ 0333c380 */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0333c114 to 0343c11b has its CatchHandler @ 0333c378 */
  if (bVar2) {
                    /* try { // try from 0333c11c to 0343c127 has its CatchHandler @ 0333c360 */
    (__this->fields).PKDDBJOOOAD = (__this->fields).m_Viewport;
    thunk_FUN_01c20e04(ppUVar3);
  }
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0333c13c to 0343c143 has its CatchHandler @ 0333c364 */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 0333c154 to 0343c15f has its CatchHandler @ 0333c574 */
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_RectTransform_TypeInfo;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0333c194 to 0343c1af has its CatchHandler @ 0333c5e0 */
      *ppUVar3 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
                    /* try { // try from 0333c174 to 0343c17b has its CatchHandler @ 0333c5bc */
      if ((pUVar4->klass != UnityEngine_RectTransform_TypeInfo) ||
         (*ppUVar3 = pUVar4, pUVar4->klass != pUVar1)) {
                    /* try { // try from 0333c18c to 0343c193 has its CatchHandler @ 0333c5b8 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pUVar4);
      }
    }
    thunk_FUN_01c20e04(ppUVar3,pUVar4);
  }
  return *ppUVar3;
}


// ===== public virtual void GraphicUpdateComplete()  [RVA 0x323E104]
// Nekki.SF2.GUI.SFScrollRect$$GraphicUpdateComplete @ RVA 0x323E104

void Nekki_SF2_GUI_SFScrollRect__GraphicUpdateComplete
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return;
}


// ===== public float get_scrollSensitivity()  [RVA 0x323E108]
// Nekki.SF2.GUI.SFScrollRect$$get_scrollSensitivity @ RVA 0x323E108

float Nekki_SF2_GUI_SFScrollRect__get_scrollSensitivity
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ScrollSensitivity;
}


// ===== public override bool IsActive()  [RVA 0x323E110]
// Nekki.SF2.GUI.SFScrollRect$$IsActive @ RVA 0x323E110

bool Nekki_SF2_GUI_SFScrollRect__IsActive(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *x;
  
  if ((DAT_04567070 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567070 = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsActive
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    x = (__this->fields).m_Content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public bool get_horizontal()  [RVA 0x323E190]
// Nekki.SF2.GUI.SFScrollRect$$get_horizontal @ RVA 0x323E190

bool Nekki_SF2_GUI_SFScrollRect__get_horizontal
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Horizontal;
}


// ===== private void HGJHFCMDKKP(float CJNHFNHJHPE, int DENMNGGNCLF)  [RVA 0x323CC38]
// Nekki.SF2.GUI.SFScrollRect$$HGJHFCMDKKP @ RVA 0x323CC38

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__HGJHFCMDKKP
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,int32_t DENMNGGNCLF,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *pSVar2;
  undefined *puVar3;
  undefined8 uVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Bounds_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector2_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  float fVar11;
  
  Nekki_SF2_GUI_SFScrollRect__BPCAFFKDJJI(__this,(MethodInfo *)(ulong)(uint)DENMNGGNCLF);
  Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_00);
  if (DENMNGGNCLF == 2) {
    fVar8 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.z;
    fVar14 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z;
    pUVar5 = (UnityEngine_Bounds_o *)&(__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z;
LAB_0333cca8:
    pUVar1 = (__this->fields).m_Content;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333ce34;
    fVar15 = (pUVar5->fields).m_Center.fields.x;
    UVar18 = UnityEngine_Transform__get_localPosition
                       ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
    fVar11 = UVar18.fields.z;
    if (DENMNGGNCLF == 2) {
      pUVar6 = (UnityEngine_Vector3_o *)&(__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.z;
      pUVar5 = (UnityEngine_Bounds_o *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z;
    }
    else if (DENMNGGNCLF == 1) {
      pUVar6 = (UnityEngine_Vector3_o *)&(__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
      pUVar5 = (UnityEngine_Bounds_o *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y;
      fVar11 = UVar18.fields.y;
    }
    else {
      if (DENMNGGNCLF != 0) goto LAB_0333ce38;
      pUVar6 = &(__this->fields).GOOOAGHGBPJ.fields.m_Extents;
      pUVar5 = &(__this->fields).GOOOAGHGBPJ;
      fVar11 = UVar18.fields.x;
    }
    pUVar1 = (__this->fields).m_Content;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
LAB_0333ce34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar16 = (pUVar5->fields).m_Center.fields.x;
    fVar17 = (pUVar6->fields).x;
    UVar18 = UnityEngine_Transform__get_localPosition
                       ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
    fVar12 = UVar18.fields.z;
    fVar10 = UVar18.fields.y;
    fVar9 = UVar18.fields.x;
    fVar13 = fVar9;
    if (((DENMNGGNCLF == 0) || (fVar13 = fVar12, DENMNGGNCLF == 2)) ||
       (fVar13 = fVar10, DENMNGGNCLF == 1)) {
      fVar8 = (((fVar15 - fVar14) - ((fVar8 + fVar8) - (fVar14 + fVar14)) * CJNHFNHJHPE) + fVar11) -
              (fVar16 - fVar17);
      if (ABS(fVar13 - fVar8) <= 0.01) {
        return;
      }
      fVar14 = fVar8;
      fVar11 = fVar12;
      if (((DENMNGGNCLF == 0) || (fVar14 = fVar9, fVar11 = fVar8, DENMNGGNCLF == 2)) ||
         (fVar10 = fVar8, fVar11 = fVar12, DENMNGGNCLF == 1)) {
        pUVar1 = (__this->fields).m_Content;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar18.fields.y = fVar10;
          UVar18.fields.x = fVar14;
          UVar18.fields.z = fVar11;
          UnityEngine_Transform__set_localPosition
                    ((UnityEngine_Transform_o *)pUVar1,UVar18,(MethodInfo *)0x0);
          if (DENMNGGNCLF == 1) {
            pUVar7 = (UnityEngine_Vector2_o *)&(__this->fields).CDHNBOKGCCN.fields.y;
          }
          else {
            if (DENMNGGNCLF != 0) {
              thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
              __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
              pSVar2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706/*"Invalid Vector2 index!"*/);
              System_IndexOutOfRangeException___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
              puVar3 = &Method_UnityEngine_Vector2_set_Item__;
              goto LAB_0333ce70;
            }
            pUVar7 = &(__this->fields).CDHNBOKGCCN;
          }
          (pUVar7->fields).x = 0.0;
          Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_01);
          return;
        }
        goto LAB_0333ce34;
      }
      thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
      __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
      pSVar2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707/*"Invalid Vector3 index!"*/);
      System_IndexOutOfRangeException___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
      puVar3 = &Method_UnityEngine_Vector3_set_Item__;
      goto LAB_0333ce70;
    }
  }
  else {
    if (DENMNGGNCLF == 1) {
      fVar8 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
      fVar14 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
      pUVar5 = (UnityEngine_Bounds_o *)&(__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y;
      goto LAB_0333cca8;
    }
    if (DENMNGGNCLF == 0) {
      fVar8 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
      fVar14 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
      pUVar5 = &(__this->fields).JOKCKGCCNNP;
      goto LAB_0333cca8;
    }
  }
LAB_0333ce38:
  thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
  __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
  pSVar2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707/*"Invalid Vector3 index!"*/);
  System_IndexOutOfRangeException___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
  puVar3 = &Method_UnityEngine_Vector3_get_Item__;
LAB_0333ce70:
  uVar4 = thunk_FUN_01bb9178(puVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar4);
}


// ===== public SFScrollRect.BGPPKIKIJHL get_movementType()  [RVA 0x323E198]
// Nekki.SF2.GUI.SFScrollRect$$get_movementType @ RVA 0x323E198

int32_t Nekki_SF2_GUI_SFScrollRect__get_movementType
                  (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_MovementType;
}


// ===== public virtual float get_minHeight()  [RVA 0x323E1A0]
// Nekki.SF2.GUI.SFScrollRect$$get_minHeight @ RVA 0x323E1A0

float Nekki_SF2_GUI_SFScrollRect__get_minHeight
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return -1.0;
}


// ===== public virtual float get_minWidth()  [RVA 0x323E1A8]
// Nekki.SF2.GUI.SFScrollRect$$get_minWidth @ RVA 0x323E1A8

float Nekki_SF2_GUI_SFScrollRect__get_minWidth
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return -1.0;
}


// ===== public bool get_inertia()  [RVA 0x323E1B0]
// Nekki.SF2.GUI.SFScrollRect$$get_inertia @ RVA 0x323E1B0

bool Nekki_SF2_GUI_SFScrollRect__get_inertia
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Inertia;
}


// ===== public void set_content(RectTransform CJNHFNHJHPE)  [RVA 0x323E1B8]
// Nekki.SF2.GUI.SFScrollRect$$set_content @ RVA 0x323E1B8

void Nekki_SF2_GUI_SFScrollRect__set_content
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_RectTransform_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).m_Content = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public Scrollbar get_horizontalScrollbar()  [RVA 0x323E1C0]
// Nekki.SF2.GUI.SFScrollRect$$get_horizontalScrollbar @ RVA 0x323E1C0

UnityEngine_UI_Scrollbar_o *
Nekki_SF2_GUI_SFScrollRect__get_horizontalScrollbar
          (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_HorizontalScrollbar;
}


// ===== public virtual void LayoutComplete()  [RVA 0x323E1C8]
// Nekki.SF2.GUI.SFScrollRect$$LayoutComplete @ RVA 0x323E1C8

void Nekki_SF2_GUI_SFScrollRect__LayoutComplete
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return;
}


// ===== public Vector2 get_normalizedPosition()  [RVA 0x323E1CC]
// Nekki.SF2.GUI.SFScrollRect$$get_normalizedPosition @ RVA 0x323E1CC

UnityEngine_Vector2_o
Nekki_SF2_GUI_SFScrollRect__get_normalizedPosition
          (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  
  UVar2.fields.x = Nekki_SF2_GUI_SFScrollRect__get_horizontalNormalizedPosition(__this,method);
  fVar1 = Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition(__this,method_00);
  UVar2.fields.y = fVar1;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// ===== private static float CGLEBDINJNF(float FKHFFLPDBDJ, float ADEHAOIPCHD)  [RVA 0x323E25C]
// Nekki.SF2.GUI.SFScrollRect$$CGLEBDINJNF @ RVA 0x323E25C

float Nekki_SF2_GUI_SFScrollRect__CGLEBDINJNF
                (float FKHFFLPDBDJ,float ADEHAOIPCHD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 - 1.0 / ((ABS(FKHFFLPDBDJ) * 0.55) / ADEHAOIPCHD + 1.0);
  fVar1 = fVar2 * ADEHAOIPCHD;
  if (FKHFFLPDBDJ < 0.0) {
    fVar1 = -(fVar2 * ADEHAOIPCHD);
  }
  return fVar1;
}


// ===== public virtual void OnBeginDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x323E294]
// Nekki.SF2.GUI.SFScrollRect$$OnBeginDrag @ RVA 0x323E294

void Nekki_SF2_GUI_SFScrollRect__OnBeginDrag
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Vector2_Fields screenPoint;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Camera_o *cam;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_Vector2_o *localPoint;
  undefined1 auVar2 [16];
  UnityEngine_Vector2_o UVar3;
  
  if ((DAT_04567071 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04567071 = 1;
  }
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._button_k__BackingField == 0) {
      auVar2 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                         (__this,(__this->klass->vtable)._9_IsActive.method);
      if (((auVar2._0_8_ & 1) != 0) && ((__this->fields).field_0x111 != '\0')) {
        Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,auVar2._8_8_);
        method_00 = extraout_x1;
        if (DAT_0455fa75 == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa75 = '\x01';
          method_00 = extraout_x1_00;
        }
        localPoint = &(__this->fields).HCOHGDCJGIM;
        localPoint->fields = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
        pUVar1 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
        screenPoint = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
        cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                        (OHNNFPGGEFK,(MethodInfo *)0x0);
        if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
        }
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (pUVar1,(UnityEngine_Vector2_o)screenPoint,cam,localPoint,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).m_Content;
        if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333e3c4;
        UVar3 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
        (__this->fields).MLDBMFNGFNM.fields.x = UVar3.fields.x;
        (__this->fields).MLDBMFNGFNM.fields.y = UVar3.fields.y;
        (__this->fields).EKGCFOHOBKN = true;
      }
    }
    return;
  }
LAB_0333e3c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_horizontalScrollbar(Scrollbar CJNHFNHJHPE)  [RVA 0x323E3C8]
// Nekki.SF2.GUI.SFScrollRect$$set_horizontalScrollbar @ RVA 0x323E3C8

void Nekki_SF2_GUI_SFScrollRect__set_horizontalScrollbar
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_UI_Scrollbar_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_UI_Scrollbar_o **ppUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  UnityEngine_Events_UnityEvent_float__o *pUVar5;
  
  if ((DAT_04567072 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_JIKDDHFNLDE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    DAT_04567072 = 1;
  }
  ppUVar3 = &(__this->fields).m_HorizontalScrollbar;
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333e554;
    pUVar5 = (UnityEngine_Events_UnityEvent_float__o *)((*ppUVar3)->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (pUVar5 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_0333e554;
    UnityEngine_Events_UnityEvent<float>__RemoveListener
              (pUVar5,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
  }
  *ppUVar3 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppUVar3,CJNHFNHJHPE);
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    if (*ppUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      pUVar5 = (UnityEngine_Events_UnityEvent_float__o *)((*ppUVar3)->fields).m_OnValueChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
      UnityEngine_Events_UnityAction<float>___ctor();
      if (pUVar5 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__AddListener
                  (pUVar5,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
        method_00 = extraout_x1_00;
        goto LAB_0333e53c;
      }
    }
LAB_0333e554:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0333e53c:
  Nekki_SF2_GUI_SFScrollRect__CAOCACEJCIP(__this,method_00);
  return;
}


// ===== public void set_verticalNormalizedPosition(float CJNHFNHJHPE)  [RVA 0x323E558]
// Nekki.SF2.GUI.SFScrollRect$$set_verticalNormalizedPosition @ RVA 0x323E558

void Nekki_SF2_GUI_SFScrollRect__set_verticalNormalizedPosition
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_SFScrollRect__HGJHFCMDKKP(__this,CJNHFNHJHPE,1,in_x2);
  return;
}


// ===== public virtual void CalculateLayoutInputHorizontal()  [RVA 0x323E560]
// Nekki.SF2.GUI.SFScrollRect$$CalculateLayoutInputHorizontal @ RVA 0x323E560

void Nekki_SF2_GUI_SFScrollRect__CalculateLayoutInputHorizontal
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return;
}


// ===== public float get_verticalNormalizedPosition()  [RVA 0x323E1FC]
// Nekki.SF2.GUI.SFScrollRect$$get_verticalNormalizedPosition @ RVA 0x323E1FC

/* WARNING: Type propagation algorithm not settling */

float Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method);
  fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
  fVar1 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
  fVar2 = (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y - fVar1;
  fVar4 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y - fVar3;
  if (fVar1 + fVar1 < fVar3 + fVar3) {
    return (fVar2 - fVar4) / ((fVar3 + fVar3) - (fVar1 + fVar1));
  }
  fVar1 = 1.0;
  if (fVar2 <= fVar4) {
    fVar1 = 0.0;
  }
  return fVar1;
}


// ===== protected void .ctor()  [RVA 0x323E564]
// Nekki.SF2.GUI.SFScrollRect$$.ctor @ RVA 0x323E564

void Nekki_SF2_GUI_SFScrollRect___ctor(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_c *pUVar1;
  Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_o *__this_00;
  Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_o **ppNVar2;
  UnityEngine_Vector3_array *pUVar3;
  MethodInfo *extraout_x1;
  UnityEngine_Vector2_Fields UVar4;
  
  if ((DAT_04567073 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04567073 = 1;
    method = extraout_x1;
  }
  (__this->fields).m_Horizontal = true;
  (__this->fields).m_Vertical = true;
  (__this->fields).m_MovementType = 1;
  (__this->fields).m_Elasticity = 0.1;
  (__this->fields).m_Inertia = true;
  (__this->fields).m_DecelerationRate = 0.135;
  (__this->fields).m_ScrollSensitivity = 1.0;
  __this_00 = (Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_TypeInfo,method);
  Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent___ctor(__this_00,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).m_OnValueChanged;
  *ppNVar2 = __this_00;
  thunk_FUN_01c20e04(ppNVar2,__this_00);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  pUVar1 = UnityEngine_Vector2_TypeInfo;
  (__this->fields).HCOHGDCJGIM.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).MLDBMFNGFNM.fields = (pUVar1->static_fields->zeroVector).fields;
  UVar4 = (pUVar1->static_fields->zeroVector).fields;
  (__this->fields).field_0x111 = 1;
  (__this->fields).m_ScrollFactor = 1.0;
  (__this->fields).EADEAEOKIOJ.fields = UVar4;
  pUVar3 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  (__this->fields).CBJHKCGHPMI = pUVar3;
  thunk_FUN_01c20e04(&(__this->fields).CBJHKCGHPMI);
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._PHKBHFCILKG_k__BackingField = -1.0;
  return;
}


// ===== public void set_viewport(RectTransform CJNHFNHJHPE)  [RVA 0x323E698]
// Nekki.SF2.GUI.SFScrollRect$$set_viewport @ RVA 0x323E698

void Nekki_SF2_GUI_SFScrollRect__set_viewport
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_RectTransform_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).m_Viewport = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_SFScrollRect__CAOCACEJCIP(__this,method_00);
  return;
}


// ===== public Vector2 get_velocity()  [RVA 0x323E6B4]
// Nekki.SF2.GUI.SFScrollRect$$get_velocity @ RVA 0x323E6B4

UnityEngine_Vector2_o
Nekki_SF2_GUI_SFScrollRect__get_velocity(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields).CDHNBOKGCCN.fields;
}


// ===== private Vector2 DCGOIAMJDEE(Vector2 GBLKICMLIHH)  [RVA 0x323DB6C]
// Nekki.SF2.GUI.SFScrollRect$$DCGOIAMJDEE @ RVA 0x323DB6C

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Vector2_o
Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE
          (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_Vector2_o GBLKICMLIHH,MethodInfo *method
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_o UVar9;
  
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  fVar1 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  fVar2 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  if ((__this->fields).m_MovementType != 0) {
    if ((__this->fields).m_Horizontal != false) {
      fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.x;
      fVar4 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
      fVar5 = (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x;
      fVar6 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
      fVar7 = GBLKICMLIHH.fields.x + (fVar3 - fVar4);
      fVar8 = fVar5 - fVar6;
      if (fVar7 <= fVar8) {
        fVar3 = GBLKICMLIHH.fields.x + fVar3 + fVar4;
        fVar5 = fVar5 + fVar6;
        if (fVar3 < fVar5) {
          fVar1 = fVar5 - fVar3;
        }
      }
      else {
        fVar1 = fVar8 - fVar7;
      }
    }
    if ((__this->fields).m_Vertical != false) {
      fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y;
      fVar4 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
      fVar5 = (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y;
      fVar6 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
      fVar7 = GBLKICMLIHH.fields.y + fVar3 + fVar4;
      fVar8 = fVar5 + fVar6;
      if (fVar8 <= fVar7) {
        fVar3 = GBLKICMLIHH.fields.y + (fVar3 - fVar4);
        fVar5 = fVar5 - fVar6;
        if (fVar5 < fVar3) {
          fVar2 = fVar5 - fVar3;
        }
      }
      else {
        fVar2 = fVar8 - fVar7;
      }
    }
  }
  UVar9.fields.y = fVar2;
  UVar9.fields.x = fVar1;
  return (UnityEngine_Vector2_o)UVar9.fields;
}


// ===== protected override void OnEnable()  [RVA 0x323E6BC]
// Nekki.SF2.GUI.SFScrollRect$$OnEnable @ RVA 0x323E6BC

void Nekki_SF2_GUI_SFScrollRect__OnEnable(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  UnityEngine_Events_UnityEvent_float__o *pUVar4;
  
  if ((DAT_04567074 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333d8ac with catch @ 0333e6e0
                        */
    FUN_01bab630(&UnityEngine_UI_CanvasUpdateRegistry_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0333e6f8 to 0343e70f has its CatchHandler @ 0333e7ec */
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_JIKDDHFNLDE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_LCIOHKDCJPH__);
                    /* try { // try from 0333e710 to 0343e7db has its CatchHandler @ 0333d4c4 */
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    DAT_04567074 = 1;
  }
  UnityEngine_EventSystems_UIBehaviour__OnEnable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).m_HorizontalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).m_HorizontalScrollbar;
    if (pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333e85c;
    pUVar4 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar3->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (pUVar4 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_0333e85c;
    UnityEngine_Events_UnityEvent<float>__AddListener
              (pUVar4,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
  }
  pUVar3 = (__this->fields).m_VerticalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).m_VerticalScrollbar;
                    /* try { // try from 0333e7dc to 0343e7eb has its CatchHandler @ 0333e7ec */
    if (pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      pUVar4 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar3->fields).m_OnValueChanged;
                    /* catch() { ... } // from try @ 0333e6f8 with catch @ 0333e7ec
                       catch() { ... } // from try @ 0333e7dc with catch @ 0333e7ec */
                    /* try { // try from 0333e7f0 to 0343e7f3 has its CatchHandler @ 0333e7fc */
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
                    /* try { // try from 0333e7f4 to 0343e7ff has its CatchHandler @ 0333d4c4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0333e7f0 with catch @ 0333e7fc
                        */
      UnityEngine_Events_UnityAction<float>___ctor();
      if (pUVar4 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__AddListener
                  (pUVar4,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
        goto LAB_0333e82c;
      }
    }
LAB_0333e85c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0333e82c:
  if ((UnityEngine_UI_CanvasUpdateRegistry_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_UI_CanvasUpdateRegistry__RegisterCanvasElementForLayoutRebuild
            ((UnityEngine_UI_ICanvasElement_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public RectTransform get_content()  [RVA 0x323E860]
// Nekki.SF2.GUI.SFScrollRect$$get_content @ RVA 0x323E860

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SFScrollRect__get_content(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Content;
}


// ===== public float get_decelerationRate()  [RVA 0x323E868]
// Nekki.SF2.GUI.SFScrollRect$$get_decelerationRate @ RVA 0x323E868

float Nekki_SF2_GUI_SFScrollRect__get_decelerationRate
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_DecelerationRate;
}


// ===== private Transform UnityEngine.UI.ICanvasElement.get_transform()  [RVA 0x323E870]
// Nekki.SF2.GUI.SFScrollRect$$UnityEngine.UI.ICanvasElement.get_transform @ RVA 0x323E870

UnityEngine_Transform_o *
Nekki_SF2_GUI_SFScrollRect__UnityEngine_UI_ICanvasElement_get_transform
          (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  return pUVar1;
}


// ===== public virtual void OnDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x323E878]
// Nekki.SF2.GUI.SFScrollRect$$OnDrag @ RVA 0x323E878

void Nekki_SF2_GUI_SFScrollRect__OnDrag
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Camera_o *cam;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  float fVar5;
  ulong uVar4;
  UnityEngine_Vector2_Fields UVar7;
  ulong uVar8;
  float fVar9;
  UnityEngine_Vector2_Fields UVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  UnityEngine_Vector2_o UVar15;
  UnityEngine_Vector2_o GBLKICMLIHH;
  UnityEngine_Vector2_Fields local_38;
  float fVar6;
  
  if ((DAT_04567075 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04567075 = 1;
  }
  local_38.x = 0.0;
  local_38.y = 0.0;
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._button_k__BackingField == 0) {
      auVar14 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                          (__this,(__this->klass->vtable)._9_IsActive.method);
      if (((auVar14._0_8_ & 1) != 0) && ((__this->fields).field_0x111 != '\0')) {
        pUVar2 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,auVar14._8_8_);
        UVar7 = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
        cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                        (OHNNFPGGEFK,(MethodInfo *)0x0);
        if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
        }
        bVar1 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                          (pUVar2,(UnityEngine_Vector2_o)UVar7,cam,
                           (UnityEngine_Vector2_o *)&local_38,(MethodInfo *)0x0);
        if (bVar1) {
          Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_00);
          pUVar2 = (__this->fields).m_Content;
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333ea64;
          UVar7 = (__this->fields).HCOHGDCJGIM.fields;
          UVar10 = (__this->fields).MLDBMFNGFNM.fields;
          fVar9 = (__this->fields).m_ScrollFactor;
          fVar3 = UVar10.x + (local_38.x - UVar7.x) * fVar9;
          fVar5 = UVar10.y + (local_38.y - UVar7.y) * fVar9;
          UVar15 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
          GBLKICMLIHH.fields.x = fVar3 - UVar15.fields.x;
          GBLKICMLIHH.fields.y = fVar5 - UVar15.fields.y;
          UVar15 = Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE(__this,GBLKICMLIHH,method_01);
          fVar6 = UVar15.fields.y;
          fVar9 = UVar15.fields.x;
          fVar3 = fVar3 + fVar9;
          uVar4 = (ulong)(uint)fVar3;
          fVar5 = fVar5 + fVar6;
          uVar8 = (ulong)(uint)fVar5;
          if ((__this->fields).m_MovementType == 1) {
            if (fVar9 != 0.0) {
              fVar13 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
              fVar13 = fVar13 + fVar13;
              fVar11 = 1.0 - 1.0 / ((ABS(fVar9) * 0.55) / fVar13 + 1.0);
              fVar12 = fVar13 * fVar11;
              if (fVar9 < 0.0) {
                fVar12 = -(fVar13 * fVar11);
              }
              uVar4 = (ulong)(uint)(fVar3 - fVar12);
            }
            if (fVar6 != 0.0) {
              fVar12 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
              fVar12 = fVar12 + fVar12;
              fVar3 = 1.0 - 1.0 / ((ABS(fVar6) * 0.55) / fVar12 + 1.0);
              fVar9 = fVar12 * fVar3;
              if (fVar6 < 0.0) {
                fVar9 = -(fVar12 * fVar3);
              }
              uVar8 = (ulong)(uint)(fVar5 - fVar9);
            }
          }
          (*(__this->klass->vtable)._48_DJJKCEKMACC.methodPtr)
                    (uVar4,uVar8,__this,(__this->klass->vtable)._48_DJJKCEKMACC.method);
        }
      }
    }
    return;
  }
LAB_0333ea64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HIFNCLLMJOJ(Vector2 MJBMLNKAPGC)  [RVA 0x323C9D0]
// Nekki.SF2.GUI.SFScrollRect$$HIFNCLLMJOJ @ RVA 0x323C9D0

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__HIFNCLLMJOJ
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_UI_Scrollbar_o *pUVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04567076 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567076 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).m_HorizontalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if (bVar1) {
    fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
    pUVar2 = (__this->fields).m_HorizontalScrollbar;
    fVar3 = fVar3 + fVar3;
    if (fVar3 <= 0.0) {
      fVar4 = 1.0;
      if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
    }
    else {
      if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
      fVar4 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
      fVar3 = ((fVar4 + fVar4) - ABS(MJBMLNKAPGC.fields.x)) / fVar3;
      fVar4 = fVar3;
      if (1.0 < fVar3) {
        fVar4 = 1.0;
      }
      if (fVar3 < 0.0) {
        fVar4 = 0.0;
      }
    }
    UnityEngine_UI_Scrollbar__set_size(pUVar2,fVar4,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).m_HorizontalScrollbar;
    fVar3 = Nekki_SF2_GUI_SFScrollRect__get_horizontalNormalizedPosition(__this,method_00);
    if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
    UnityEngine_UI_Scrollbar__set_value(pUVar2,fVar3,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).m_VerticalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
  pUVar2 = (__this->fields).m_VerticalScrollbar;
  fVar3 = fVar3 + fVar3;
  if (fVar3 <= 0.0) {
    fVar4 = 1.0;
    if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
  }
  else {
    if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
    fVar4 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
    fVar3 = ((fVar4 + fVar4) - ABS(MJBMLNKAPGC.fields.y)) / fVar3;
    fVar4 = fVar3;
    if (1.0 < fVar3) {
      fVar4 = 1.0;
    }
    if (fVar3 < 0.0) {
      fVar4 = 0.0;
    }
  }
  UnityEngine_UI_Scrollbar__set_size(pUVar2,fVar4,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).m_VerticalScrollbar;
  fVar3 = Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition(__this,method_01);
  if (pUVar2 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    UnityEngine_UI_Scrollbar__set_value(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
LAB_0333cb54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_normalizedPosition(Vector2 CJNHFNHJHPE)  [RVA 0x323EA68]
// Nekki.SF2.GUI.SFScrollRect$$set_normalizedPosition @ RVA 0x323EA68

void Nekki_SF2_GUI_SFScrollRect__set_normalizedPosition
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_SFScrollRect__HGJHFCMDKKP(__this,CJNHFNHJHPE.fields.x,0,in_x2);
  Nekki_SF2_GUI_SFScrollRect__HGJHFCMDKKP(__this,CJNHFNHJHPE.fields.y,1,in_x2);
  return;
}


// ===== public void set_verticalScrollbarSpacing(float CJNHFNHJHPE)  [RVA 0x323EA98]
// Nekki.SF2.GUI.SFScrollRect$$set_verticalScrollbarSpacing @ RVA 0x323EA98

void Nekki_SF2_GUI_SFScrollRect__set_verticalScrollbarSpacing
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_VerticalScrollbarSpacing = CJNHFNHJHPE;
  Nekki_SF2_GUI_SFScrollRect__NBMGOJFGJFB(__this,method);
  return;
}


// ===== public void set_horizontal(bool CJNHFNHJHPE)  [RVA 0x323EAA0]
// Nekki.SF2.GUI.SFScrollRect$$set_horizontal @ RVA 0x323EAA0

void Nekki_SF2_GUI_SFScrollRect__set_horizontal
               (Nekki_SF2_GUI_SFScrollRect_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_Horizontal = CJNHFNHJHPE;
  return;
}


// ===== public void set_decelerationRate(float CJNHFNHJHPE)  [RVA 0x323EAAC]
// Nekki.SF2.GUI.SFScrollRect$$set_decelerationRate @ RVA 0x323EAAC

void Nekki_SF2_GUI_SFScrollRect__set_decelerationRate
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_DecelerationRate = CJNHFNHJHPE;
  return;
}


// ===== public float get_verticalScrollbarSpacing()  [RVA 0x323EAB4]
// Nekki.SF2.GUI.SFScrollRect$$get_verticalScrollbarSpacing @ RVA 0x323EAB4

float Nekki_SF2_GUI_SFScrollRect__get_verticalScrollbarSpacing
                (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return (__this->fields).m_VerticalScrollbarSpacing;
}


// ===== private void DONOACADGLG(float CJNHFNHJHPE)  [RVA 0x323EABC]
// Nekki.SF2.GUI.SFScrollRect$$DONOACADGLG @ RVA 0x323EABC

void Nekki_SF2_GUI_SFScrollRect__DONOACADGLG
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PHKBHFCILKG_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void PGMHINIGNID()  [RVA 0x323C814]
// Nekki.SF2.GUI.SFScrollRect$$PGMHINIGNID @ RVA 0x323C814

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Vector2_o UVar14;
  UnityEngine_Bounds_o local_78;
  
  if ((DAT_04567077 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567077 = 1;
    method = extraout_x1;
  }
  pUVar3 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method);
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    UVar12 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    pUVar3 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar13 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
           UVar12.fields.m_XMin + UVar12.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
           UVar12.fields.m_YMin + UVar12.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar13.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar13.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
      Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_78,__this,method_01);
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      (pUVar1->fields).m_Extents.fields.y = local_78.fields.m_Extents.fields.y;
      (pUVar1->fields).m_Extents.fields.z = local_78.fields.m_Extents.fields.z;
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_78.fields._8_8_;
      (pUVar1->fields).m_Center.fields.x = local_78.fields.m_Center.fields.x;
      (pUVar1->fields).m_Center.fields.y = local_78.fields.m_Center.fields.y;
      pUVar3 = (__this->fields).m_Content;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        fVar6 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z;
        fVar4 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
        fVar5 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
        fVar11 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
        fVar10 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
        fVar9 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.z;
        fVar8 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.x;
        fVar7 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y;
        fVar4 = fVar4 + fVar4;
        fVar5 = (fVar5 + fVar5) - fVar4;
        if (0.0 < fVar5) {
          pUVar3 = (__this->fields).m_Content;
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c9cc;
          UVar14 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
          fVar4 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
          fVar8 = fVar8 - fVar5 * (UVar14.fields.x + -0.5);
          fVar4 = fVar4 + fVar4;
        }
        fVar10 = fVar10 + fVar10;
        fVar5 = (fVar11 + fVar11) - fVar10;
        if (0.0 < fVar5) {
          pUVar3 = (__this->fields).m_Content;
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c9cc;
          UVar14 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
          fVar10 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
          fVar7 = fVar7 - fVar5 * (UVar14.fields.y + -0.5);
          fVar10 = fVar10 + fVar10;
        }
        (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.x = fVar8;
        (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y = fVar7;
        (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y = fVar10 * 0.5;
        (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.z = (fVar9 + fVar9) * 0.5;
        (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = fVar6;
        (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x = fVar4 * 0.5;
      }
      return;
    }
  }
LAB_0333c9cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual int get_layoutPriority()  [RVA 0x323EAC4]
// Nekki.SF2.GUI.SFScrollRect$$get_layoutPriority @ RVA 0x323EAC4

int32_t Nekki_SF2_GUI_SFScrollRect__get_layoutPriority
                  (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  return -1;
}


// ===== public void set_onValueChanged(SFScrollRect.ScrollRectEvent CJNHFNHJHPE)  [RVA 0x323EACC]
// Nekki.SF2.GUI.SFScrollRect$$set_onValueChanged @ RVA 0x323EACC

void Nekki_SF2_GUI_SFScrollRect__set_onValueChanged
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).m_OnValueChanged = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void set_velocity(Vector2 CJNHFNHJHPE)  [RVA 0x323EAD4]
// Nekki.SF2.GUI.SFScrollRect$$set_velocity @ RVA 0x323EAD4

void Nekki_SF2_GUI_SFScrollRect__set_velocity
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).CDHNBOKGCCN.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields).CDHNBOKGCCN.fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== private void EPGCLBFHHGE()  [RVA 0x323C49C]
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


// ===== protected virtual void LateUpdate()  [RVA 0x323EADC]
// Nekki.SF2.GUI.SFScrollRect$$LateUpdate @ RVA 0x323EADC

/* WARNING: Removing unreachable block (ram,0x0333ee68) */

void Nekki_SF2_GUI_SFScrollRect__LateUpdate(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  long lVar1;
  int iVar2;
  UnityEngine_Bounds_o *pUVar3;
  bool bVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x1_08;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_09;
  MethodInfo *extraout_x1_10;
  MethodInfo *extraout_x1_11;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *extraout_x1_12;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar13;
  undefined4 extraout_var_00;
  UnityEngine_Vector2_Fields UVar14;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulong uVar15;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  UnityEngine_Vector2_Fields UVar36;
  UnityEngine_Vector2_o UVar37;
  UnityEngine_Vector2_o UVar38;
  UnityEngine_Vector2_o arg0;
  float local_84;
  ulong uVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_01;
  ulong uVar22;
  
  if ((DAT_04567079 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    DAT_04567079 = 1;
    method = extraout_x1;
  }
  local_84 = 0.0;
  pUVar6 = (__this->fields).m_Content;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  Nekki_SF2_GUI_SFScrollRect__BPCAFFKDJJI(__this,method_00);
  Nekki_SF2_GUI_SFScrollRect__JMLCAJLBDEK(__this,method_01);
  Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_02);
  fVar7 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  pMVar5 = extraout_x1_00;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
    pMVar5 = extraout_x1_01;
  }
  UVar37 = Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE
                     (__this,(UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,pMVar5
                     );
  fVar16 = UVar37.fields.y;
  uVar22 = (ulong)(uint)fVar16;
  fVar9 = UVar37.fields.x;
  uVar12 = (ulong)UVar37.fields & 0xffffffff;
  pMVar5 = extraout_x1_02;
  if ((__this->fields).EKGCFOHOBKN == false) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
      pMVar5 = extraout_x1_03;
    }
    fVar8 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
    fVar19 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
    fVar26 = fVar9 - fVar8;
    fVar27 = fVar16 - fVar19;
    if (((9.9999994e-11 <= fVar26 * fVar26 + fVar27 * fVar27) ||
        (fVar8 = (__this->fields).CDHNBOKGCCN.fields.x - fVar8,
        fVar19 = (__this->fields).CDHNBOKGCCN.fields.y - fVar19,
        9.9999994e-11 <= fVar8 * fVar8 + fVar19 * fVar19)) &&
       (uVar23 = 0, (__this->fields).m_MovementType != 3)) {
      pUVar6 = (__this->fields).m_Content;
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        UVar37 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
        uVar15 = CONCAT44(uVar23,UVar37.fields.y);
        uVar13 = CONCAT44(extraout_var,UVar37.fields.x);
        bVar4 = true;
        pMVar5 = extraout_x1_04;
LAB_0333ec78:
        do {
          iVar2 = (__this->fields).m_MovementType;
          while( true ) {
            fVar8 = fVar9;
            if (!bVar4) {
              fVar8 = fVar16;
            }
            fVar19 = (float)uVar13;
            if ((iVar2 == 1) && (fVar8 != 0.0)) {
              lVar1 = 0xb8;
              if (!bVar4) {
                lVar1 = 0xbc;
              }
              local_84 = *(float *)((long)&__this->klass + lVar1);
              pUVar6 = (__this->fields).m_Content;
              if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333f064;
              UVar38 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
              pUVar6 = (__this->fields).m_Content;
              fVar8 = UVar38.fields.x;
              if (!bVar4) {
                fVar8 = UVar38.fields.y;
              }
              if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333f064;
              UVar38 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
              if (bVar4) {
                fVar8 = UnityEngine_Mathf__SmoothDamp
                                  (fVar8,fVar9 + UVar38.fields.x,&local_84,
                                   (__this->fields).m_Elasticity,INFINITY,fVar7,(MethodInfo *)0x0);
                uVar13 = CONCAT44(extraout_var_00,fVar8);
                bVar4 = false;
                (__this->fields).CDHNBOKGCCN.fields.x = local_84;
                pMVar5 = extraout_x1_05;
                goto LAB_0333ec78;
              }
              fVar9 = UnityEngine_Mathf__SmoothDamp
                                (fVar8,fVar16 + UVar38.fields.y,&local_84,
                                 (__this->fields).m_Elasticity,INFINITY,fVar7,(MethodInfo *)0x0);
              uVar15 = CONCAT44(extraout_var_01,fVar9);
              (__this->fields).CDHNBOKGCCN.fields.y = local_84;
              pMVar5 = extraout_x1_12;
              goto LAB_0333ed90;
            }
            if ((__this->fields).m_Inertia != false) break;
            if (!bVar4) {
              (__this->fields).CDHNBOKGCCN.fields.y = 0.0;
              goto LAB_0333ed90;
            }
            bVar4 = false;
            (__this->fields).CDHNBOKGCCN.fields.x = 0.0;
          }
          if (bVar4) {
            fVar26 = (__this->fields).CDHNBOKGCCN.fields.x;
            fVar8 = powf((__this->fields).m_DecelerationRate,fVar7);
            fVar26 = fVar26 * fVar8;
            (__this->fields).CDHNBOKGCCN.fields.x = fVar26;
            pMVar5 = extraout_x1_06;
          }
          else {
            fVar26 = (__this->fields).CDHNBOKGCCN.fields.y;
            fVar8 = powf((__this->fields).m_DecelerationRate,fVar7);
            fVar26 = fVar26 * fVar8;
            (__this->fields).CDHNBOKGCCN.fields.y = fVar26;
            pMVar5 = extraout_x1_07;
          }
          if (ABS(fVar26) < 1.0) {
            if (bVar4) {
              (__this->fields).CDHNBOKGCCN.fields.x = 0.0;
              fVar8 = 0.0;
              goto LAB_0333ed78;
            }
            fVar9 = 0.0;
            (__this->fields).CDHNBOKGCCN.fields.y = 0.0;
LAB_0333f054:
            uVar15 = (ulong)(uint)(UVar37.fields.y + fVar7 * fVar9);
LAB_0333ed90:
            UVar36 = (__this->fields).CDHNBOKGCCN.fields;
            if (DAT_0455fa75 == '\0') {
              FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
              DAT_0455fa75 = '\x01';
              pMVar5 = extraout_x1_08;
            }
            UVar14 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
            fVar9 = UVar36.x - UVar14.x;
            fVar16 = UVar36.y - UVar14.y;
            if (9.9999994e-11 <= fVar9 * fVar9 + fVar16 * fVar16) {
              if ((__this->fields).m_MovementType == 2) {
                pUVar6 = (__this->fields).m_Content;
                if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) break;
                UVar37 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
                UVar38.fields.x = fVar19 - UVar37.fields.x;
                UVar38.fields.y = (float)uVar15 - UVar37.fields.y;
                UVar37 = Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE(__this,UVar38,method_03);
                uVar22 = (ulong)UVar37.fields >> 0x20;
                uVar12 = (ulong)UVar37.fields & 0xffffffff;
                uVar13 = (ulong)(uint)(fVar19 + UVar37.fields.x);
                uVar15 = (ulong)(uint)((float)uVar15 + UVar37.fields.y);
              }
              (*(__this->klass->vtable)._48_DJJKCEKMACC.methodPtr)
                        (uVar13,uVar15,__this,(__this->klass->vtable)._48_DJJKCEKMACC.method);
              pMVar5 = extraout_x1_09;
            }
            goto LAB_0333ee28;
          }
          if (!bVar4) {
            fVar9 = (__this->fields).CDHNBOKGCCN.fields.y;
            goto LAB_0333f054;
          }
          fVar8 = (__this->fields).CDHNBOKGCCN.fields.x;
LAB_0333ed78:
          bVar4 = false;
          uVar13 = (ulong)(uint)(fVar19 + fVar7 * fVar8);
        } while( true );
      }
      goto LAB_0333f064;
    }
LAB_0333ee28:
    if ((__this->fields).EKGCFOHOBKN != false) goto LAB_0333ee30;
  }
  else {
LAB_0333ee30:
    if ((__this->fields).m_Inertia != false) {
      pUVar6 = (__this->fields).m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333f064;
      UVar37 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
      UVar36 = (__this->fields).EADEAEOKIOJ.fields;
      UVar14 = (__this->fields).CDHNBOKGCCN.fields;
      fVar9 = fVar7 * 10.0;
      if (fVar7 * 10.0 < 0.0) {
        fVar9 = 0.0;
      }
      fVar16 = UVar14.x;
      fVar8 = UVar14.y;
      UVar14.x = fVar16 + ((UVar37.fields.x - UVar36.x) / fVar7 - fVar16) * fVar9;
      UVar14.y = fVar8 + ((UVar37.fields.y - UVar36.y) / fVar7 - fVar8) * fVar9;
      (__this->fields).CDHNBOKGCCN.fields = UVar14;
      pMVar5 = extraout_x1_10;
    }
  }
  pUVar3 = &(__this->fields).JOKCKGCCNNP;
  uVar20 = (pUVar3->fields).m_Center.fields.y;
  uVar24 = (pUVar3->fields).m_Center.fields.z;
  pUVar3 = &(__this->fields).NMKFBEKICHJ;
  uVar28 = (pUVar3->fields).m_Center.fields.y;
  uVar32 = (pUVar3->fields).m_Center.fields.z;
  fVar7 = (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x -
          (__this->fields).NMKFBEKICHJ.fields.m_Center.fields.x;
  if (((((float)uVar24 - (float)uVar32) * ((float)uVar24 - (float)uVar32) +
        fVar7 * fVar7 + ((float)uVar20 - (float)uVar28) * ((float)uVar20 - (float)uVar28) <
        9.9999994e-11) &&
      (pUVar3 = &(__this->fields).NMKFBEKICHJ, uVar10 = (pUVar3->fields).m_Extents.fields.y,
      uVar17 = (pUVar3->fields).m_Extents.fields.z, pUVar3 = &(__this->fields).JOKCKGCCNNP,
      uVar29 = (pUVar3->fields).m_Extents.fields.y, uVar33 = (pUVar3->fields).m_Extents.fields.z,
      fVar7 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x -
              (__this->fields).NMKFBEKICHJ.fields.m_Extents.fields.x,
      ((float)uVar33 - (float)uVar17) * ((float)uVar33 - (float)uVar17) +
      ((float)uVar29 - (float)uVar10) * ((float)uVar29 - (float)uVar10) + fVar7 * fVar7 <
      9.9999994e-11)) &&
     ((pUVar3 = &(__this->fields).GOOOAGHGBPJ, uVar21 = (pUVar3->fields).m_Center.fields.y,
      uVar25 = (pUVar3->fields).m_Center.fields.z, pUVar3 = &(__this->fields).EKELFALKAAL,
      uVar30 = (pUVar3->fields).m_Center.fields.y, uVar34 = (pUVar3->fields).m_Center.fields.z,
      fVar7 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.x -
              (__this->fields).EKELFALKAAL.fields.m_Center.fields.x,
      ((float)uVar25 - (float)uVar34) * ((float)uVar25 - (float)uVar34) +
      fVar7 * fVar7 + ((float)uVar21 - (float)uVar30) * ((float)uVar21 - (float)uVar30) <
      9.9999994e-11 &&
      (pUVar3 = &(__this->fields).EKELFALKAAL, uVar11 = (pUVar3->fields).m_Extents.fields.y,
      uVar18 = (pUVar3->fields).m_Extents.fields.z, pUVar3 = &(__this->fields).GOOOAGHGBPJ,
      uVar31 = (pUVar3->fields).m_Extents.fields.y, uVar35 = (pUVar3->fields).m_Extents.fields.z,
      fVar7 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x -
              (__this->fields).EKELFALKAAL.fields.m_Extents.fields.x,
      ((float)uVar35 - (float)uVar18) * ((float)uVar35 - (float)uVar18) +
      ((float)uVar31 - (float)uVar11) * ((float)uVar31 - (float)uVar11) + fVar7 * fVar7 <
      9.9999994e-11)))) {
    pUVar6 = (__this->fields).m_Content;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333f064;
    UVar37 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
    fVar7 = UVar37.fields.x - (__this->fields).EADEAEOKIOJ.fields.x;
    fVar9 = UVar37.fields.y - (__this->fields).EADEAEOKIOJ.fields.y;
    pMVar5 = extraout_x1_11;
    if (fVar7 * fVar7 + fVar9 * fVar9 < 9.9999994e-11) {
      return;
    }
  }
  UVar37.fields.x = (float)uVar12;
  UVar37.fields.y = (float)uVar22;
  Nekki_SF2_GUI_SFScrollRect__HIFNCLLMJOJ(__this,UVar37,pMVar5);
  __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(__this->fields).m_OnValueChanged;
  arg0.fields.x = Nekki_SF2_GUI_SFScrollRect__get_horizontalNormalizedPosition(__this,method_04);
  fVar7 = Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition(__this,method_05);
  if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
    arg0.fields.y = fVar7;
    UnityEngine_Events_UnityEvent<Vector2>__Invoke
              (__this_00,arg0,Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    Nekki_SF2_GUI_SFScrollRect__FEIGMHLBIOI(__this,method_06);
    return;
  }
LAB_0333f064:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private RectTransform INLENKAOOPD()  [RVA 0x323D178]
// Nekki.SF2.GUI.SFScrollRect$$INLENKAOOPD @ RVA 0x323D178

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SFScrollRect__INLENKAOOPD(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_0456707a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456707a = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields).JCHDAHFOCOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppUVar1 = &(__this->fields).JCHDAHFOCOL;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    (__this->fields).JCHDAHFOCOL = pUVar3;
    thunk_FUN_01c20e04(ppUVar1,pUVar3);
  }
  return *ppUVar1;
}

