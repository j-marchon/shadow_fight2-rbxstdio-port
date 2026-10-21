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

