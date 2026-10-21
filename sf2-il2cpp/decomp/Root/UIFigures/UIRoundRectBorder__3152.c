// TypeDefIndex 3152
// Namespace: UIFigures
// public class UIRoundRectBorder : UIFigure
// Fields:
//   protected float _Width; // 0xF0
//   protected float _ChangeAllRadius; // 0xF4
//   private float KEFJIOPNNFG; // 0xF8
//   protected float _RadiusUpLeft; // 0xFC
//   protected float _RadiusUpRight; // 0x100
//   protected float _RadiusBottomRight; // 0x104
//   protected float _RadiusBottomLeft; // 0x108
//   protected int _Sectors; // 0x10C
//   protected List<UIVertex> MNGNDPJEHBD; // 0x110

// ===== protected void HMPCFLIDFEA(Vector3 EEGKJKNENDE)  [RVA 0x34D9708]
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


// ===== public void Draw(VertexHelper BALEEENOIJA, Vector2 ONPKLLJPABD, Vector2 DGNJLFEFJFD)  [RVA 0x34D9940]
// UIFigures.UIRoundRectBorder$$Draw @ RVA 0x34D9940

void UIFigures_UIRoundRectBorder__Draw
               (UIFigures_UIRoundRectBorder_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               UnityEngine_Vector2_o ONPKLLJPABD,UnityEngine_Vector2_o DGNJLFEFJFD,
               MethodInfo *method)

{
  System_Collections_Generic_List_int__o *indices;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar1;
  System_Collections_Generic_List_UIVertex__o *verts;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o ONPKLLJPABD_00;
  UnityEngine_Vector3_o ONPKLLJPABD_01;
  UnityEngine_Vector3_o ONPKLLJPABD_02;
  UnityEngine_Vector3_o ONPKLLJPABD_03;
  UnityEngine_Vector3_o EEGKJKNENDE;
  UnityEngine_Vector3_o EEGKJKNENDE_00;
  
  fVar3 = DGNJLFEFJFD.fields.y;
  fVar2 = DGNJLFEFJFD.fields.x;
  if ((DAT_04568701 & 1) == 0) {
    FUN_01bab630((ulong)ONPKLLJPABD.fields & 0xffffffff,ONPKLLJPABD.fields.y,
                 &Method_System_Collections_Generic_List<UIVertex>_Clear__);
    DAT_04568701 = 1;
  }
  if (BALEEENOIJA != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(BALEEENOIJA,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields)._RadiusBottomLeft;
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      fVar4 = (__this->fields).KEFJIOPNNFG;
      ONPKLLJPABD_00.fields.x = fVar2 - fVar4;
      ONPKLLJPABD_00.fields.y = fVar3 - fVar4;
      ONPKLLJPABD_00.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL(__this,ONPKLLJPABD_00,fVar4,0.0,true,method);
      fVar4 = (__this->fields)._ChangeAllRadius;
      ONPKLLJPABD_01.fields.x = fVar4 - fVar2;
      ONPKLLJPABD_01.fields.y = fVar3 - fVar4;
      ONPKLLJPABD_01.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL(__this,ONPKLLJPABD_01,fVar4,1.5707964,true,method);
      fVar4 = (__this->fields)._RadiusUpRight;
      ONPKLLJPABD_02.fields.x = fVar4 - fVar2;
      ONPKLLJPABD_02.fields.y = fVar4 - fVar3;
      ONPKLLJPABD_02.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL(__this,ONPKLLJPABD_02,fVar4,3.1415927,true,method);
      fVar4 = (__this->fields)._RadiusUpLeft;
      ONPKLLJPABD_03.fields.x = fVar2 - fVar4;
      ONPKLLJPABD_03.fields.y = fVar4 - fVar3;
      ONPKLLJPABD_03.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL(__this,ONPKLLJPABD_03,fVar4,4.712389,true,method);
      EEGKJKNENDE.fields.y = fVar3 - (__this->fields).KEFJIOPNNFG;
      EEGKJKNENDE.fields.x = fVar2;
      EEGKJKNENDE.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__HMPCFLIDFEA(__this,EEGKJKNENDE,method_00);
      EEGKJKNENDE_00.fields.x = fVar2 - (__this->fields).super.INCPCFENLPJ.fields.x;
      EEGKJKNENDE_00.fields.y = fVar3 - (__this->fields).KEFJIOPNNFG;
      EEGKJKNENDE_00.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__HMPCFLIDFEA(__this,EEGKJKNENDE_00,method_01);
      verts = *(System_Collections_Generic_List_UIVertex__o **)&(__this->fields)._RadiusBottomLeft;
      indices = LLCIFEBJPCL__HPJCLJPIDEO
                          ((int)(__this->fields)._RadiusBottomRight * 8 + 8,(MethodInfo *)0x0);
      UnityEngine_UI_VertexHelper__AddUIVertexStream(BALEEENOIJA,verts,indices,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void Update()  [RVA 0x34D9B3C]
// UIFigures.UIRoundRectBorder$$Update @ RVA 0x34D9B3C

void UIFigures_UIRoundRectBorder__Update(UIFigures_UIRoundRectBorder_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  
  if ((DAT_04568702 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568702 = 1;
    method = extraout_x1;
  }
  fVar2 = (__this->fields).super.INCPCFENLPJ.fields.y;
  fVar1 = (__this->fields)._Width;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  if (0.01 < ABS(fVar1 - fVar2)) {
    fVar1 = (__this->fields).super.INCPCFENLPJ.fields.y;
    (__this->fields)._RadiusUpRight = fVar1;
    (__this->fields).KEFJIOPNNFG = fVar1;
    (__this->fields)._RadiusUpLeft = fVar1;
    (__this->fields)._Width = fVar1;
    (__this->fields)._ChangeAllRadius = fVar1;
  }
  return;
}


// ===== protected void JKGANJEHLEL(Vector3 ONPKLLJPABD, float KGAENKKEEPK, float CIBIKDNNBAM, bool JGINHMEOGFE = True)  [RVA 0x34D9A9C]
// UIFigures.UIRoundRectBorder$$JKGANJEHLEL @ RVA 0x34D9A9C

void UIFigures_UIRoundRectBorder__JKGANJEHLEL
               (UIFigures_UIRoundRectBorder_o *__this,UnityEngine_Vector3_o ONPKLLJPABD,
               float KGAENKKEEPK,float CIBIKDNNBAM,bool JGINHMEOGFE,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (__this->fields)._RadiusBottomRight;
  if (0 < (int)fVar1 + 1) {
    iVar2 = 0;
    do {
      UIFigures_UIRoundRectBorder__DHOGAAIOAIC
                (__this,(UnityEngine_Vector2_o)ONPKLLJPABD.fields._0_8_,KGAENKKEEPK,
                 (1.5707964 / (float)(int)fVar1) * (float)iVar2 + CIBIKDNNBAM,JGINHMEOGFE,method);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(__this->fields)._RadiusBottomRight + 1);
  }
  return;
}


// ===== protected override void OnPopulateMesh(VertexHelper BALEEENOIJA)  [RVA 0x34D9C74]
// UIFigures.UIRoundRectBorder$$OnPopulateMesh @ RVA 0x34D9C74

void UIFigures_UIRoundRectBorder__OnPopulateMesh
               (UIFigures_UIRoundRectBorder_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_o ONPKLLJPABD;
  UnityEngine_Rect_o UVar2;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Vector2_o DGNJLFEFJFD;
  
  method_00 = (MethodInfo *)0x0;
  UIFigures_UIFigure__OnPopulateMesh((UIFigures_UIFigure_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      ONPKLLJPABD.fields.y = UVar3.fields.m_YMin;
      DGNJLFEFJFD.fields.x = UVar2.fields.m_Width * 0.5;
      DGNJLFEFJFD.fields.y = UVar3.fields.m_Height * 0.5;
      ONPKLLJPABD.fields.x = 0.5;
      UIFigures_UIRoundRectBorder__Draw(__this,BALEEENOIJA,ONPKLLJPABD,DGNJLFEFJFD,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34D9CEC]
// UIFigures.UIRoundRectBorder$$.ctor @ RVA 0x34D9CEC

void UIFigures_UIRoundRectBorder___ctor(UIFigures_UIRoundRectBorder_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  if ((DAT_04568703 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_04568703 = 1;
    method = extraout_x1;
  }
  auVar1 = NEON_fmov(0x41200000,4);
  uVar2 = NEON_fmov(0x41200000,4);
  (__this->fields)._Width = (float)(int)auVar1._8_8_;
  (__this->fields)._ChangeAllRadius = (float)(int)((ulong)auVar1._8_8_ >> 0x20);
  (__this->fields).super.INCPCFENLPJ.fields = auVar1._0_8_;
  (__this->fields).KEFJIOPNNFG = (float)(int)uVar2;
  (__this->fields)._RadiusUpLeft = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._RadiusUpRight = 10.0;
  (__this->fields)._RadiusBottomRight = 1.4013e-44;
  __this_00 = (System_Collections_Generic_List_UIVertex__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo,method);
  System_Collections_Generic_List<UIVertex>___ctor
            (__this_00,Method_System_Collections_Generic_List<UIVertex>__ctor__);
  *(System_Collections_Generic_List_UIVertex__o **)&(__this->fields)._RadiusBottomLeft = __this_00;
  thunk_FUN_01c20e04(&(__this->fields)._RadiusBottomLeft,__this_00);
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void DHOGAAIOAIC(Vector2 ONPKLLJPABD, float KGAENKKEEPK, float GMOPOJHAMBE, bool JGINHMEOGFE = True)  [RVA 0x34D9BBC]
// UIFigures.UIRoundRectBorder$$DHOGAAIOAIC @ RVA 0x34D9BBC

void UIFigures_UIRoundRectBorder__DHOGAAIOAIC
               (UIFigures_UIRoundRectBorder_o *__this,UnityEngine_Vector2_o ONPKLLJPABD,
               float KGAENKKEEPK,float GMOPOJHAMBE,bool JGINHMEOGFE,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar1;
  UnityEngine_Vector3_o EEGKJKNENDE;
  UnityEngine_Vector3_o EEGKJKNENDE_00;
  float local_48;
  float fStack_44;
  
  sincosf(GMOPOJHAMBE,&fStack_44,&local_48);
  EEGKJKNENDE.fields.x = ONPKLLJPABD.fields.x + local_48 * KGAENKKEEPK;
  EEGKJKNENDE.fields.y = ONPKLLJPABD.fields.y + fStack_44 * KGAENKKEEPK;
  EEGKJKNENDE.fields.z = 0.0;
  UIFigures_UIRoundRectBorder__HMPCFLIDFEA(__this,EEGKJKNENDE,method_00);
  if (JGINHMEOGFE) {
    fVar1 = KGAENKKEEPK - (__this->fields).super.INCPCFENLPJ.fields.x;
    EEGKJKNENDE_00.fields.x = ONPKLLJPABD.fields.x + local_48 * fVar1;
    EEGKJKNENDE_00.fields.y = ONPKLLJPABD.fields.y + fStack_44 * fVar1;
    EEGKJKNENDE_00.fields.z = 0.0;
    UIFigures_UIRoundRectBorder__HMPCFLIDFEA(__this,EEGKJKNENDE_00,method_01);
    return;
  }
  return;
}


// ===== protected override void Awake()  [RVA 0x34D9D90]
// UIFigures.UIRoundRectBorder$$Awake @ RVA 0x34D9D90

void UIFigures_UIRoundRectBorder__Awake(UIFigures_UIRoundRectBorder_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.INCPCFENLPJ.fields.y = (__this->fields)._Width;
  return;
}

