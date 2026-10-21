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

