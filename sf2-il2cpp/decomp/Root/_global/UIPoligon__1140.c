// TypeDefIndex 1140
// Namespace: 
// public class UIPoligon : UIFigure
// Fields:
//   private List<Vector2> _Points; // 0xF0
//   private bool _UseTriangleFan; // 0xF8
//   private bool _ResizeInBounds; // 0xF9

// ===== private UIVertex HMPCFLIDFEA(Vector3 EEGKJKNENDE)  [RVA 0x30F96BC]
// UIPoligon$$HMPCFLIDFEA @ RVA 0x30F96BC

void UIPoligon__HMPCFLIDFEA
               (UnityEngine_UIVertex_o *__return_storage_ptr__,UIPoligon_o *__this,
               UnityEngine_Vector3_o EEGKJKNENDE,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int32_t iVar9;
  MethodInfo *extraout_x1;
  UnityEngine_UIVertex_StaticFields *pUVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 local_54;
  undefined4 uStack_50;
  
  if ((DAT_0456648b & 1) == 0) {
    FUN_01bab630(EEGKJKNENDE.fields.x,EEGKJKNENDE.fields.y,EEGKJKNENDE.fields.z,
                 &UnityEngine_UIVertex_TypeInfo);
    DAT_0456648b = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_UIVertex_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UIVertex_TypeInfo,method);
  }
  pUVar10 = UnityEngine_UIVertex_TypeInfo->static_fields;
  fVar1 = (pUVar10->simpleVert).fields.tangent.fields.y;
  fVar2 = (pUVar10->simpleVert).fields.tangent.fields.z;
  uVar15._0_4_ = (pUVar10->simpleVert).fields.normal.fields.y;
  uVar15._4_4_ = (pUVar10->simpleVert).fields.normal.fields.z;
  uVar14 = *(undefined8 *)&(pUVar10->simpleVert).fields.position.fields.z;
  uStack_50 = (undefined4)
              ((ulong)*(undefined8 *)&(pUVar10->simpleVert).fields.normal.fields.z >> 0x20);
  fVar7 = (pUVar10->simpleVert).fields.uv2.fields.x;
  fVar8 = (pUVar10->simpleVert).fields.uv2.fields.y;
  uVar12 = *(undefined8 *)&(pUVar10->simpleVert).fields.uv1.fields.z;
  fVar5 = (pUVar10->simpleVert).fields.uv3.fields.x;
  fVar6 = (pUVar10->simpleVert).fields.uv3.fields.y;
  uVar11 = *(undefined8 *)&(pUVar10->simpleVert).fields.uv2.fields.z;
  fVar3 = (pUVar10->simpleVert).fields.uv1.fields.x;
  fVar4 = (pUVar10->simpleVert).fields.uv1.fields.y;
  uVar13 = *(undefined8 *)&(pUVar10->simpleVert).fields.uv0.fields.z;
  (*(__this->klass->vtable)._22_get_color.methodPtr)
            (__this,(__this->klass->vtable)._22_get_color.method);
  iVar9 = FUN_01ca4568(0);
  (__return_storage_ptr__->fields).position.fields.x = EEGKJKNENDE.fields.x;
  (__return_storage_ptr__->fields).position.fields.y = EEGKJKNENDE.fields.y;
  (__return_storage_ptr__->fields).position.fields.z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).normal.fields.z = uVar15;
  (__return_storage_ptr__->fields).normal.fields.x = (float)(int)uVar14;
  (__return_storage_ptr__->fields).normal.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
  (__return_storage_ptr__->fields).tangent.fields.z = fVar1;
  (__return_storage_ptr__->fields).tangent.fields.w = fVar2;
  (__return_storage_ptr__->fields).tangent.fields.x = (float)uVar15._4_4_;
  (__return_storage_ptr__->fields).tangent.fields.y = (float)uStack_50;
  (__return_storage_ptr__->fields).color.fields.rgba = iVar9;
  (__return_storage_ptr__->fields).uv0.fields.y = 0.0;
  (__return_storage_ptr__->fields).uv0.fields.z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).color.fields.r = 0;
  (__return_storage_ptr__->fields).uv1.fields.y = fVar3;
  (__return_storage_ptr__->fields).uv1.fields.z = fVar4;
  *(undefined8 *)&(__return_storage_ptr__->fields).uv0.fields.w = uVar13;
  (__return_storage_ptr__->fields).uv3.fields.y = fVar5;
  (__return_storage_ptr__->fields).uv3.fields.z = fVar6;
  *(undefined8 *)&(__return_storage_ptr__->fields).uv2.fields.w = uVar11;
  (__return_storage_ptr__->fields).uv2.fields.y = fVar7;
  (__return_storage_ptr__->fields).uv2.fields.z = fVar8;
  *(undefined8 *)&(__return_storage_ptr__->fields).uv1.fields.w = uVar12;
  return;
}


// ===== public List<Vector2> get_Points()  [RVA 0x30F97A8]
// UIPoligon$$get_Points @ RVA 0x30F97A8

System_Collections_Generic_List_Vector2__o *
UIPoligon__get_Points(UIPoligon_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_List_Vector2__o *)(__this->fields).super.INCPCFENLPJ.fields;
}


// ===== public void .ctor()  [RVA 0x30F97B0]
// UIPoligon$$.ctor @ RVA 0x30F97B0

void UIPoligon___ctor(UIPoligon_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields __this_00;
  UnityEngine_Vector2_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456648c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Vector2>_TypeInfo);
    DAT_0456648c = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Vector2_Fields)
              thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo,method);
  System_Collections_Generic_List<Vector2>___ctor
            ((System_Collections_Generic_List_Vector2__o *)__this_00,
             Method_System_Collections_Generic_List<Vector2>__ctor__);
  pUVar1 = &(__this->fields).super.INCPCFENLPJ;
  pUVar1->fields = __this_00;
  thunk_FUN_01c20e04(pUVar1,__this_00);
  *(undefined1 *)&(__this->fields)._Points = 1;
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnPopulateMesh(VertexHelper BALEEENOIJA)  [RVA 0x30F9840]
// UIPoligon$$OnPopulateMesh @ RVA 0x30F9840

void UIPoligon__OnPopulateMesh
               (UIPoligon_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,MethodInfo *method)

{
  int32_t capacity;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_UIVertex__o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_Fields UVar4;
  System_Collections_Generic_List_int__o *indices;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_UIVertex_array *pUVar6;
  int iVar7;
  MethodInfo_274F1F4 *pMVar8;
  UnityEngine_Sprite_o *pUVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Vector3_o EEGKJKNENDE;
  UnityEngine_Vector3_o EEGKJKNENDE_00;
  UnityEngine_UIVertex_o UStack_1b0;
  undefined1 auStack_140 [112];
  UnityEngine_UIVertex_o UStack_d0;
  
  if ((DAT_0456648d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_0456648d = 1;
  }
  UIFigures_UIFigure__OnPopulateMesh((UIFigures_UIFigure_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  UVar5 = (__this->fields).super.INCPCFENLPJ.fields;
  if (UVar5 != (UnityEngine_Vector2_Fields)0x0) {
    capacity = *(int32_t *)((long)UVar5 + 0x18);
    __this_00 = (System_Collections_Generic_List_UIVertex__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo);
    System_Collections_Generic_List<UIVertex>___ctor
              (__this_00,capacity,Method_System_Collections_Generic_List<UIVertex>__ctor__);
    if (*(char *)((long)&(__this->fields)._Points + 1) == '\0') {
      UVar5 = (__this->fields).super.INCPCFENLPJ.fields;
      if (UVar5 != (UnityEngine_Vector2_Fields)0x0) {
        iVar7 = 0;
        do {
          if (*(int *)((long)UVar5 + 0x18) <= iVar7) goto LAB_031f9b3c;
          UVar10 = System_Collections_Generic_List<Vector2>__get_Item
                             (UVar5,iVar7,Method_System_Collections_Generic_List<Vector2>_get_Item__
                             );
          EEGKJKNENDE_00.fields.x = UVar10.fields.x;
          EEGKJKNENDE_00.fields.y = (undefined4)((ulong)UVar10.fields >> 0x20);
          EEGKJKNENDE_00.fields.z = 0.0;
          UIPoligon__HMPCFLIDFEA(&UStack_1b0,__this,EEGKJKNENDE_00,method_01);
          lVar2 = Method_System_Collections_Generic_List<UIVertex>_Add__;
          if (__this_00 == (System_Collections_Generic_List_UIVertex__o *)0x0) break;
          memcpy(auStack_140,&UStack_1b0,0x6c);
          pUVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pUVar6 == (UnityEngine_UIVertex_array *)0x0) break;
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pUVar6->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            memcpy(&pUVar6->m_Items[0].fields.position + (long)(int)uVar1 * 9,auStack_140,0x6c);
          }
          else {
            pMVar8 = *(MethodInfo_274F1F4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            memcpy(&UStack_d0,auStack_140,0x6c);
            System_Collections_Generic_List<UIVertex>__AddWithResize(__this_00,&UStack_d0,pMVar8);
          }
          UVar5 = (__this->fields).super.INCPCFENLPJ.fields;
          iVar7 = iVar7 + 1;
        } while (UVar5 != (UnityEngine_Vector2_Fields)0x0);
      }
    }
    else {
      pUVar9 = (__this->fields).super._Sprite;
      UVar5 = (__this->fields).super.CKIBKNMJGAJ.fields;
      pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar12 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UVar13 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
          UVar4 = (__this->fields).super.INCPCFENLPJ.fields;
          if (UVar4 != (UnityEngine_Vector2_Fields)0x0) {
            iVar7 = 0;
            do {
              if (*(int *)((long)UVar4 + 0x18) <= iVar7) goto LAB_031f9b3c;
              UVar10 = System_Collections_Generic_List<Vector2>__get_Item
                                 (UVar4,iVar7,
                                  Method_System_Collections_Generic_List<Vector2>_get_Item__);
              UVar4 = (__this->fields).super.INCPCFENLPJ.fields;
              if (UVar4 == (UnityEngine_Vector2_Fields)0x0) break;
              UVar11 = System_Collections_Generic_List<Vector2>__get_Item
                                 (UVar4,iVar7,
                                  Method_System_Collections_Generic_List<Vector2>_get_Item__);
              EEGKJKNENDE.fields.x =
                   UVar12.fields.m_Width * 0.5 *
                   (UVar10.fields.x - (SUB84(pUVar9,0) + UVar5.x) * 0.5);
              EEGKJKNENDE.fields.y =
                   UVar13.fields.m_Height * 0.5 *
                   (UVar11.fields.y - ((float)((ulong)pUVar9 >> 0x20) + UVar5.y) * 0.5);
              EEGKJKNENDE.fields.z = 0.0;
              UIPoligon__HMPCFLIDFEA(&UStack_1b0,__this,EEGKJKNENDE,method_00);
              lVar2 = Method_System_Collections_Generic_List<UIVertex>_Add__;
              if (__this_00 == (System_Collections_Generic_List_UIVertex__o *)0x0) break;
              memcpy(auStack_140,&UStack_1b0,0x6c);
              pUVar6 = (__this_00->fields)._items;
              (__this_00->fields)._version = (__this_00->fields)._version + 1;
              if (pUVar6 == (UnityEngine_UIVertex_array *)0x0) break;
              uVar1 = (__this_00->fields)._size;
              if (uVar1 < (uint)pUVar6->max_length) {
                (__this_00->fields)._size = uVar1 + 1;
                memcpy(&pUVar6->m_Items[0].fields.position + (long)(int)uVar1 * 9,auStack_140,0x6c);
              }
              else {
                pMVar8 = *(MethodInfo_274F1F4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                memcpy(&UStack_d0,auStack_140,0x6c);
                System_Collections_Generic_List<UIVertex>__AddWithResize
                          (__this_00,&UStack_d0,pMVar8);
              }
              UVar4 = (__this->fields).super.INCPCFENLPJ.fields;
              iVar7 = iVar7 + 1;
            } while (UVar4 != (UnityEngine_Vector2_Fields)0x0);
          }
        }
      }
    }
  }
LAB_031f9ba4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_031f9b3c:
  if ((BALEEENOIJA != (UnityEngine_UI_VertexHelper_o *)0x0) &&
     (UnityEngine_UI_VertexHelper__Clear(BALEEENOIJA,(MethodInfo *)0x0),
     __this_00 != (System_Collections_Generic_List_UIVertex__o *)0x0)) {
    iVar7 = (__this_00->fields)._size + -2;
    if (*(char *)&(__this->fields)._Points == '\0') {
      indices = LLCIFEBJPCL__HPJCLJPIDEO(iVar7,(MethodInfo *)0x0);
    }
    else {
      indices = LLCIFEBJPCL__NCOODIBHJJN(iVar7,(MethodInfo *)0x0);
    }
    UnityEngine_UI_VertexHelper__AddUIVertexStream(BALEEENOIJA,__this_00,indices,(MethodInfo *)0x0);
    return;
  }
  goto LAB_031f9ba4;
}

