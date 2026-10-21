// UIFigures.UIRoundRectBorder$$HMPCFLIDFEA @ RVA 0x34D9708

void UIFigures_UIRoundRectBorder__HMPCFLIDFEA
               (UIFigures_UIRoundRectBorder_o *__this,UnityEngine_Vector3_o EEGKJKNENDE,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector3_o *pUVar2;
  long lVar3;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *extraout_x1;
  UnityEngine_UIVertex_StaticFields *pUVar5;
  System_Collections_Generic_List_UIVertex__o *__this_00;
  UnityEngine_UIVertex_array *pUVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  UnityEngine_Rect_o UVar22;
  UnityEngine_Rect_o UVar23;
  float fStack_178;
  float local_124;
  float fStack_120;
  undefined1 local_c0 [48];
  float local_90;
  float local_8c;
  float local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  float fVar14;
  float fVar18;
  
  fVar11 = EEGKJKNENDE.fields.y;
  fVar7 = EEGKJKNENDE.fields.x;
  if ((DAT_04568700 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_Add__);
    FUN_01bab630(&UnityEngine_UIVertex_TypeInfo);
    DAT_04568700 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_UIVertex_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UIVertex_TypeInfo,method);
  }
  pUVar5 = UnityEngine_UIVertex_TypeInfo->static_fields;
  uVar9._0_4_ = (pUVar5->simpleVert).fields.tangent.fields.y;
  uVar9._4_4_ = (pUVar5->simpleVert).fields.tangent.fields.z;
  uVar21._0_4_ = (pUVar5->simpleVert).fields.normal.fields.y;
  uVar21._4_4_ = (pUVar5->simpleVert).fields.normal.fields.z;
  uVar20 = *(undefined8 *)&(pUVar5->simpleVert).fields.position.fields.z;
  fStack_120 = (float)((ulong)*(undefined8 *)&(pUVar5->simpleVert).fields.normal.fields.z >> 0x20);
  uVar15._0_4_ = (pUVar5->simpleVert).fields.uv2.fields.x;
  uVar15._4_4_ = (pUVar5->simpleVert).fields.uv2.fields.y;
  uVar12._0_4_ = (pUVar5->simpleVert).fields.uv1.fields.z;
  uVar12._4_4_ = (pUVar5->simpleVert).fields.uv1.fields.w;
  uVar10._0_4_ = (pUVar5->simpleVert).fields.uv3.fields.x;
  uVar10._4_4_ = (pUVar5->simpleVert).fields.uv3.fields.y;
  uVar8._0_4_ = (pUVar5->simpleVert).fields.uv2.fields.z;
  uVar8._4_4_ = (pUVar5->simpleVert).fields.uv2.fields.w;
  uVar19._0_4_ = (pUVar5->simpleVert).fields.uv1.fields.x;
  uVar19._4_4_ = (pUVar5->simpleVert).fields.uv1.fields.y;
  uVar16._0_4_ = (pUVar5->simpleVert).fields.uv0.fields.z;
  uVar16._4_4_ = (pUVar5->simpleVert).fields.uv0.fields.w;
  uVar13 = uVar12;
  uVar17 = uVar16;
  pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  fVar18 = SUB84(uVar17,4);
  fVar14 = SUB84(uVar13,4);
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    UVar22 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar23 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_get_color.methodPtr)
                (CONCAT44(extraout_var,UVar23.fields.m_XMin),CONCAT44(fVar14,UVar23.fields.m_YMin),
                 CONCAT44(fVar18,UVar23.fields.m_Width),__this,
                 (__this->klass->vtable)._22_get_color.method);
      local_c0._40_4_ = FUN_01ca4568(0);
      lVar3 = Method_System_Collections_Generic_List<UIVertex>_Add__;
      __this_00 = *(System_Collections_Generic_List_UIVertex__o **)
                   &(__this->fields)._RadiusBottomLeft;
      if (__this_00 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
        pUVar6 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pUVar6 != (UnityEngine_UIVertex_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          local_c0._44_4_ = fVar7 / UVar22.fields.m_Width + 0.5;
          local_90 = fVar11 / UVar23.fields.m_Height + 0.5;
          if (uVar1 < (uint)pUVar6->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            (&pUVar6->m_Items[0].fields.position)[(long)(int)uVar1 * 9].fields.x = fVar7;
            (&pUVar6->m_Items[0].fields.position)[(long)(int)uVar1 * 9].fields.y = fVar11;
            (&pUVar6->m_Items[0].fields.position)[(long)(int)uVar1 * 9].fields.z =
                 EEGKJKNENDE.fields.z;
            *(undefined4 *)((long)&pUVar6->m_Items[0].fields.color + (long)(int)uVar1 * 0x6c) =
                 local_c0._40_4_;
            *(undefined4 *)((long)&pUVar6->m_Items[0].fields.color + (long)(int)uVar1 * 0x6c + 4) =
                 local_c0._44_4_;
            *(float *)((long)&pUVar6->m_Items[0].fields.uv0 + (long)(int)uVar1 * 0x6c) = local_90;
            *(undefined4 *)((long)&pUVar6->m_Items[0].fields.uv0 + (long)(int)uVar1 * 0x6c + 4) = 0;
            *(undefined4 *)((long)&pUVar6->m_Items[0].fields.uv0 + (long)(int)uVar1 * 0x6c + 8) = 0;
            *(undefined8 *)((long)&pUVar6->m_Items[0].fields.tangent + (long)(int)uVar1 * 0x6c + 8)
                 = uVar9;
            *(ulong *)((long)&pUVar6->m_Items[0].fields.tangent + (long)(int)uVar1 * 0x6c) =
                 CONCAT44(fStack_120,uVar21._4_4_);
            pUVar2 = &pUVar6->m_Items[0].fields.normal + (long)(int)uVar1 * 9;
            *(undefined8 *)&(&pUVar6->m_Items[0].fields.normal)[(long)(int)uVar1 * 9].fields.z =
                 uVar21;
            (pUVar2->fields).x = (float)uVar20;
            (pUVar2->fields).y = SUB84(uVar20,4);
            *(undefined8 *)((long)&pUVar6->m_Items[0].fields.uv3 + (long)(int)uVar1 * 0x6c + 4) =
                 uVar10;
            *(undefined8 *)((long)&pUVar6->m_Items[0].fields.uv2 + (long)(int)uVar1 * 0x6c + 0xc) =
                 uVar8;
            *(undefined8 *)((long)&pUVar6->m_Items[0].fields.uv2 + (long)(int)uVar1 * 0x6c + 4) =
                 uVar15;
            *(undefined8 *)((long)&pUVar6->m_Items[0].fields.uv1 + (long)(int)uVar1 * 0x6c + 0xc) =
                 uVar12;
            *(undefined8 *)((long)&pUVar6->m_Items[0].fields.uv1 + (long)(int)uVar1 * 0x6c + 4) =
                 uVar19;
            *(undefined8 *)((long)&pUVar6->m_Items[0].fields.uv0 + (long)(int)uVar1 * 0x6c + 0xc) =
                 uVar16;
          }
          else {
            local_c0._20_4_ = (undefined4)uVar21;
            local_c0._24_4_ = uVar21._4_4_;
            local_c0._28_4_ = fStack_120;
            local_88 = 0.0;
            local_8c = 0.0;
            local_c0._0_4_ = fVar7;
            local_c0._4_4_ = fVar11;
            local_c0._8_4_ = EEGKJKNENDE.fields.z;
            local_c0._12_8_ = uVar20;
            local_c0._32_8_ = uVar9;
            local_84 = uVar16;
            uStack_7c = uVar19;
            local_74 = uVar12;
            uStack_6c = uVar15;
            local_64 = uVar8;
            uStack_5c = uVar10;
            System_Collections_Generic_List<UIVertex>__AddWithResize
                      (__this_00,(UnityEngine_UIVertex_o *)local_c0,
                       *(MethodInfo_274F1F4 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

