// TypeDefIndex 1735
// Namespace: UnityEngine
// [Extension]
// public static class TransformExtensions
// Fields:

// ===== public static void AddLocalRotationX(Transform transform, float x)  [RVA 0x31DA980]
// UnityEngine.TransformExtensions$$AddLocalRotationX @ RVA 0x31DA980

void UnityEngine_TransformExtensions__AddLocalRotationX
               (UnityEngine_Transform_o *transform,float x,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localEulerAngles(transform,(MethodInfo *)0x0);
    UVar1.fields.x = UVar1.fields.x + x;
    UnityEngine_Transform__set_localEulerAngles(transform,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AddLocalRotationY(Transform transform, float y)  [RVA 0x31DA9B8]
// UnityEngine.TransformExtensions$$AddLocalRotationY @ RVA 0x31DA9B8

void UnityEngine_TransformExtensions__AddLocalRotationY
               (UnityEngine_Transform_o *transform,float y,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localEulerAngles(transform,(MethodInfo *)0x0);
    UVar1.fields.y = UVar1.fields.y + y;
    UnityEngine_Transform__set_localEulerAngles(transform,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AddLocalRotationZ(Transform transform, float z)  [RVA 0x31DA9F0]
// UnityEngine.TransformExtensions$$AddLocalRotationZ @ RVA 0x31DA9F0

void UnityEngine_TransformExtensions__AddLocalRotationZ
               (UnityEngine_Transform_o *transform,float z,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localEulerAngles(transform,(MethodInfo *)0x0);
    value.fields.z = UVar1.fields.z + z;
    value.fields.x = (float)(int)UVar1.fields._0_8_;
    value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    UnityEngine_Transform__set_localEulerAngles(transform,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetLocalRotationX(Transform transform, float x)  [RVA 0x31DAA28]
// UnityEngine.TransformExtensions$$SetLocalRotationX @ RVA 0x31DAA28

void UnityEngine_TransformExtensions__SetLocalRotationX
               (UnityEngine_Transform_o *transform,float x,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localEulerAngles(transform,(MethodInfo *)0x0);
    UVar1.fields.x = x;
    UnityEngine_Transform__set_localEulerAngles(transform,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetLocalRotationY(Transform transform, float y)  [RVA 0x31DAA60]
// UnityEngine.TransformExtensions$$SetLocalRotationY @ RVA 0x31DAA60

void UnityEngine_TransformExtensions__SetLocalRotationY
               (UnityEngine_Transform_o *transform,float y,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localEulerAngles(transform,(MethodInfo *)0x0);
    UVar1.fields.y = y;
    UnityEngine_Transform__set_localEulerAngles(transform,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetLocalRotationZ(Transform transform, float z)  [RVA 0x31DAA98]
// UnityEngine.TransformExtensions$$SetLocalRotationZ @ RVA 0x31DAA98

void UnityEngine_TransformExtensions__SetLocalRotationZ
               (UnityEngine_Transform_o *transform,float z,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localEulerAngles(transform,(MethodInfo *)0x0);
    value.fields.z = z;
    value.fields.x = (float)(int)UVar1.fields._0_8_;
    value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    UnityEngine_Transform__set_localEulerAngles(transform,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetLocalPosition(Transform transform, float x, float y, float z)  [RVA 0x31DAAD0]
// UnityEngine.TransformExtensions$$SetLocalPosition @ RVA 0x31DAAD0

void UnityEngine_TransformExtensions__SetLocalPosition
               (UnityEngine_Transform_o *transform,float x,float y,float z,MethodInfo *method)

{
  UnityEngine_Vector3_o value;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    value.fields.y = y;
    value.fields.x = x;
    value.fields.z = z;
    UnityEngine_Transform__set_localPosition(transform,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetPositionX(Transform transform, float value)  [RVA 0x31DAAE4]
// UnityEngine.TransformExtensions$$SetPositionX @ RVA 0x31DAAE4

void UnityEngine_TransformExtensions__SetPositionX
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value_00;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    value_00.fields.y = UVar1.fields.y;
    UVar1 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    value_00.fields.z = UVar1.fields.z;
    value_00.fields.x = value;
    UnityEngine_Transform__set_position(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetPositionY(Transform transform, float value)  [RVA 0x31DAB30]
// UnityEngine.TransformExtensions$$SetPositionY @ RVA 0x31DAB30

void UnityEngine_TransformExtensions__SetPositionY
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value_00;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    value_00.fields.x = UVar1.fields.x;
    UVar1 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    value_00.fields.z = UVar1.fields.z;
    value_00.fields.y = value;
    UnityEngine_Transform__set_position(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetPositionZ(Transform transform, float value)  [RVA 0x31DAB7C]
// UnityEngine.TransformExtensions$$SetPositionZ @ RVA 0x31DAB7C

void UnityEngine_TransformExtensions__SetPositionZ
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value_00;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    value_00.fields.x = UVar1.fields.x;
    UVar1 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    value_00.fields.y = UVar1.fields.y;
    value_00.fields.z = value;
    UnityEngine_Transform__set_position(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetGlobalOffset(Transform transform, Vector3 p_offset)  [RVA 0x31DABC8]
// UnityEngine.TransformExtensions$$SetGlobalOffset @ RVA 0x31DABC8

void UnityEngine_TransformExtensions__SetGlobalOffset
               (UnityEngine_Transform_o *transform,UnityEngine_Vector3_o p_offset,MethodInfo *method
               )

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o UVar4;
  
  UVar1 = UnityEngine_TransformExtensions__GetLossyScale(transform,method);
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar2 = UnityEngine_Transform__get_localScale(transform,(MethodInfo *)0x0);
    UVar3 = UnityEngine_Transform__get_localScale(transform,(MethodInfo *)0x0);
    UVar4 = UnityEngine_Transform__get_localScale(transform,(MethodInfo *)0x0);
    UVar2.fields.x = (p_offset.fields.x / UVar1.fields.x) * UVar2.fields.x;
    UVar2.fields.y = (p_offset.fields.y / UVar1.fields.y) * UVar3.fields.y;
    UVar2.fields.z = (p_offset.fields.z / UVar1.fields.z) * UVar4.fields.z;
    UnityEngine_Transform__set_localPosition(transform,UVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetGlobalScale(Transform transform, Vector3 p_scale)  [RVA 0x31DADAC]
// UnityEngine.TransformExtensions$$SetGlobalScale @ RVA 0x31DADAC

void UnityEngine_TransformExtensions__SetGlobalScale
               (UnityEngine_Transform_o *transform,UnityEngine_Vector3_o p_scale,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o UVar4;
  
  UVar1 = UnityEngine_TransformExtensions__GetLossyScale(transform,method);
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar2 = UnityEngine_Transform__get_localScale(transform,(MethodInfo *)0x0);
    UVar3 = UnityEngine_Transform__get_localScale(transform,(MethodInfo *)0x0);
    UVar4 = UnityEngine_Transform__get_localScale(transform,(MethodInfo *)0x0);
    UVar2.fields.x = (p_scale.fields.x / UVar1.fields.x) * UVar2.fields.x;
    UVar2.fields.y = (p_scale.fields.y / UVar1.fields.y) * UVar3.fields.y;
    UVar2.fields.z = (p_scale.fields.z / UVar1.fields.z) * UVar4.fields.z;
    UnityEngine_Transform__set_localScale(transform,UVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector3 GetLossyScale(Transform transform)  [RVA 0x31DAC68]
// UnityEngine.TransformExtensions$$GetLossyScale @ RVA 0x31DAC68

UnityEngine_Vector3_o
UnityEngine_TransformExtensions__GetLossyScale
          (UnityEngine_Transform_o *transform,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  
  if ((DAT_04566d11 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInParent<Canvas>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d11 = 1;
  }
  if (transform != (UnityEngine_Transform_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponentInParent<object>
                  ((UnityEngine_Component_o *)transform,
                   Method_UnityEngine_Component_GetComponentInParent<Canvas>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    UVar6 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
    fVar4 = UVar6.fields.z;
    fVar3 = UVar6.fields.y;
    fVar5 = UVar6.fields.x;
    if (!bVar1) {
LAB_032dad8c:
      UVar6.fields.y = fVar3;
      UVar6.fields.x = fVar5;
      UVar6.fields.z = fVar4;
      return (UnityEngine_Vector3_o)UVar6.fields;
    }
    if ((x != (UnityEngine_Object_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar6 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
      UVar7 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
        UVar9 = UnityEngine_Transform__get_lossyScale(transform,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UVar10 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
          fVar5 = fVar5 / UVar6.fields.x;
          fVar3 = UVar7.fields.y / UVar8.fields.y;
          fVar4 = UVar9.fields.z / UVar10.fields.z;
          goto LAB_032dad8c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetAnchoredPositionX(RectTransform rt, float value)  [RVA 0x31DAE4C]
// UnityEngine.TransformExtensions$$SetAnchoredPositionX @ RVA 0x31DAE4C

void UnityEngine_TransformExtensions__SetAnchoredPositionX
               (UnityEngine_RectTransform_o *rt,float value,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if (rt != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(rt,(MethodInfo *)0x0);
    UVar1.fields.x = value;
    UnityEngine_RectTransform__set_anchoredPosition(rt,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetAnchoredPositionY(RectTransform rt, float value)  [RVA 0x31DAE84]
// UnityEngine.TransformExtensions$$SetAnchoredPositionY @ RVA 0x31DAE84

void UnityEngine_TransformExtensions__SetAnchoredPositionY
               (UnityEngine_RectTransform_o *rt,float value,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if (rt != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(rt,(MethodInfo *)0x0);
    UVar1.fields.y = value;
    UnityEngine_RectTransform__set_anchoredPosition(rt,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetAnchoredPositionZ(RectTransform rt, float value)  [RVA 0x31DAEBC]
// UnityEngine.TransformExtensions$$SetAnchoredPositionZ @ RVA 0x31DAEBC

void UnityEngine_TransformExtensions__SetAnchoredPositionZ
               (UnityEngine_RectTransform_o *rt,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value_00;
  
  if (rt != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition3D(rt,(MethodInfo *)0x0);
    value_00.fields.x = UVar1.fields.x;
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition3D(rt,(MethodInfo *)0x0);
    value_00.fields.y = UVar1.fields.y;
    value_00.fields.z = value;
    UnityEngine_RectTransform__set_anchoredPosition3D(rt,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetLocalPositionX(Transform transform, float value)  [RVA 0x31DAF08]
// UnityEngine.TransformExtensions$$SetLocalPositionX @ RVA 0x31DAF08

void UnityEngine_TransformExtensions__SetLocalPositionX
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value_00;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.y = UVar1.fields.y;
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.z = UVar1.fields.z;
    value_00.fields.x = value;
    UnityEngine_Transform__set_localPosition(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetLocalPositionY(Transform transform, float value)  [RVA 0x31DAF54]
// UnityEngine.TransformExtensions$$SetLocalPositionY @ RVA 0x31DAF54

void UnityEngine_TransformExtensions__SetLocalPositionY
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value_00;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.x = UVar1.fields.x;
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.z = UVar1.fields.z;
    value_00.fields.y = value;
    UnityEngine_Transform__set_localPosition(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetLocalPositionZ(Transform transform, float value)  [RVA 0x31DAFA0]
// UnityEngine.TransformExtensions$$SetLocalPositionZ @ RVA 0x31DAFA0

void UnityEngine_TransformExtensions__SetLocalPositionZ
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value_00;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.x = UVar1.fields.x;
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.y = UVar1.fields.y;
    value_00.fields.z = value;
    UnityEngine_Transform__set_localPosition(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AddLocalPositionX(Transform transform, float value)  [RVA 0x31DAFEC]
// UnityEngine.TransformExtensions$$AddLocalPositionX @ RVA 0x31DAFEC

void UnityEngine_TransformExtensions__AddLocalPositionX
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o value_00;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    UVar2 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.y = UVar2.fields.y;
    UVar2 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.z = UVar2.fields.z;
    value_00.fields.x = UVar1.fields.x + value;
    UnityEngine_Transform__set_localPosition(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AddLocalPositionY(Transform transform, float value)  [RVA 0x31DB050]
// UnityEngine.TransformExtensions$$AddLocalPositionY @ RVA 0x31DB050

void UnityEngine_TransformExtensions__AddLocalPositionY
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o value_00;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.x = UVar1.fields.x;
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    UVar2 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.z = UVar2.fields.z;
    value_00.fields.y = UVar1.fields.y + value;
    UnityEngine_Transform__set_localPosition(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AddLocalPositionZ(Transform transform, float value)  [RVA 0x31DB0B4]
// UnityEngine.TransformExtensions$$AddLocalPositionZ @ RVA 0x31DB0B4

void UnityEngine_TransformExtensions__AddLocalPositionZ
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value_00;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.x = UVar1.fields.x;
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.y = UVar1.fields.y;
    UVar1 = UnityEngine_Transform__get_localPosition(transform,(MethodInfo *)0x0);
    value_00.fields.z = UVar1.fields.z + value;
    UnityEngine_Transform__set_localPosition(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetLocalScale(Transform transform, float value)  [RVA 0x31DB11C]
// UnityEngine.TransformExtensions$$SetLocalScale @ RVA 0x31DB11C

void UnityEngine_TransformExtensions__SetLocalScale
               (UnityEngine_Transform_o *transform,float value,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  undefined1 auVar2 [16];
  UnityEngine_Vector3_o value_00;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = transform;
  if (DAT_0455fa7f == '\0') {
    auVar2 = FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
    DAT_0455fa7f = '\x01';
  }
  if (transform != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Vector3_TypeInfo->static_fields;
    value_00.fields.z = (pUVar1->oneVector).fields.z * value;
    value_00.fields.y = (pUVar1->oneVector).fields.y * value;
    value_00.fields.x = (pUVar1->oneVector).fields.x * value;
    UnityEngine_Transform__set_localScale(transform,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public static float GetLocalScaleX(Transform transform)  [RVA 0x31DB194]
// UnityEngine.TransformExtensions$$GetLocalScaleX @ RVA 0x31DB194

float UnityEngine_TransformExtensions__GetLocalScaleX
                (UnityEngine_Transform_o *transform,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (transform != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localScale(transform,(MethodInfo *)0x0);
    return UVar1.fields.x;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DeleteAllChildrenObjects(Transform root)  [RVA 0x31DB1A8]
// UnityEngine.TransformExtensions$$DeleteAllChildrenObjects @ RVA 0x31DB1A8

void UnityEngine_TransformExtensions__DeleteAllChildrenObjects
               (UnityEngine_Transform_o *root,MethodInfo *method)

{
  int index;
  UnityEngine_Transform_o *__this;
  UnityEngine_Object_o *obj;
  
  if ((DAT_04566d12 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d12 = 1;
  }
  if (root != (UnityEngine_Transform_o *)0x0) {
    index = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
    while( true ) {
      index = index + -1;
      if (index < 0) {
        UnityEngine_Transform__DetachChildren(root,(MethodInfo *)0x0);
        return;
      }
      __this = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
      if (__this == (UnityEngine_Transform_o *)0x0) break;
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool IsIntersects(RectTransform t1, Vector3 worldPos, Vector3[] verts4)  [RVA 0x31DB25C]
// UnityEngine.TransformExtensions$$IsIntersects @ RVA 0x31DB25C

bool UnityEngine_TransformExtensions__IsIntersects
               (UnityEngine_RectTransform_o *t1,UnityEngine_Vector3_o worldPos,
               UnityEngine_Vector3_array *verts4,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Rect_o UVar2;
  
  UVar2 = UnityEngine_TransformExtensions__GetWorldRect(t1,verts4,method);
  bVar1 = false;
  if (((UVar2.fields.m_YMin <= worldPos.fields.y) && (UVar2.fields.m_XMin <= worldPos.fields.x)) &&
     (worldPos.fields.x < UVar2.fields.m_XMin + UVar2.fields.m_Width)) {
    bVar1 = worldPos.fields.y < UVar2.fields.m_YMin + UVar2.fields.m_Height;
  }
  return bVar1;
}


// ===== public static bool IsIntersects(RectTransform t1, RectTransform t2, Vector3[] verts4)  [RVA 0x31DB358]
// UnityEngine.TransformExtensions$$IsIntersects @ RVA 0x31DB358

bool UnityEngine_TransformExtensions__IsIntersects
               (UnityEngine_RectTransform_o *t1,UnityEngine_RectTransform_o *t2,
               UnityEngine_Vector3_array *verts4,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_array *method_00;
  UnityEngine_Rect_o UVar2;
  UnityEngine_Rect_o UVar3;
  
  method_00 = verts4;
  UVar2 = UnityEngine_TransformExtensions__GetWorldRect(t1,verts4,(MethodInfo *)verts4);
  UVar3 = UnityEngine_TransformExtensions__GetWorldRect(t2,verts4,(MethodInfo *)method_00);
  bVar1 = false;
  if (((UVar2.fields.m_YMin < UVar3.fields.m_Height + UVar3.fields.m_YMin) &&
      (UVar3.fields.m_XMin < UVar2.fields.m_XMin + UVar2.fields.m_Width)) &&
     (UVar2.fields.m_XMin < UVar3.fields.m_Width + UVar3.fields.m_XMin)) {
    bVar1 = UVar3.fields.m_YMin < UVar2.fields.m_YMin + UVar2.fields.m_Height;
  }
  return bVar1;
}


// ===== public static bool IsIntersects(RectTransform t1, Rect r2, Vector3[] verts4)  [RVA 0x31DB3DC]
// UnityEngine.TransformExtensions$$IsIntersects @ RVA 0x31DB3DC

bool UnityEngine_TransformExtensions__IsIntersects
               (UnityEngine_RectTransform_o *t1,UnityEngine_Rect_o r2,
               UnityEngine_Vector3_array *verts4,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Rect_o UVar2;
  
  UVar2 = UnityEngine_TransformExtensions__GetWorldRect(t1,verts4,method);
  bVar1 = false;
  if (((UVar2.fields.m_YMin < r2.fields.m_Height + r2.fields.m_YMin) &&
      (UVar2.fields.m_XMin < r2.fields.m_Width + r2.fields.m_XMin)) &&
     (r2.fields.m_XMin < UVar2.fields.m_XMin + UVar2.fields.m_Width)) {
    bVar1 = r2.fields.m_YMin < UVar2.fields.m_YMin + UVar2.fields.m_Height;
  }
  return bVar1;
}


// ===== public static Rect GetWorldRect(RectTransform t1, Vector3[] verts4)  [RVA 0x31DB2A8]
// UnityEngine.TransformExtensions$$GetWorldRect @ RVA 0x31DB2A8

UnityEngine_Rect_o
UnityEngine_TransformExtensions__GetWorldRect
          (UnityEngine_RectTransform_o *t1,UnityEngine_Vector3_array *verts4,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((DAT_04566d13 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04566d13 = 1;
  }
  if ((verts4 == (UnityEngine_Vector3_array *)0x0) || ((int)verts4->max_length < 4)) {
    verts4 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  }
  if ((t1 != (UnityEngine_RectTransform_o *)0x0) &&
     (UnityEngine_RectTransform__GetWorldCorners(t1,verts4,(MethodInfo *)0x0),
     verts4 != (UnityEngine_Vector3_array *)0x0)) {
    uVar1 = (uint)verts4->max_length;
    if (((uVar1 != 0) && (uVar1 != 1)) && (2 < uVar1)) {
      uVar2 = verts4->m_Items[0].fields.x;
      uVar3 = verts4->m_Items[0].fields.y;
      UVar4.fields.m_YMin = (float)uVar3;
      UVar4.fields.m_XMin = (float)uVar2;
      UVar4.fields.m_Width = ABS(verts4->m_Items[1].fields.x - verts4->m_Items[2].fields.x);
      UVar4.fields.m_Height = ABS(verts4->m_Items[0].fields.y - verts4->m_Items[1].fields.y);
      return (UnityEngine_Rect_o)UVar4.fields;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void ImposeOn(RectTransform thiz, RectTransform that)  [RVA 0x31DB440]
// UnityEngine.TransformExtensions$$ImposeOn @ RVA 0x31DB440

void UnityEngine_TransformExtensions__ImposeOn
               (UnityEngine_RectTransform_o *thiz,UnityEngine_RectTransform_o *that,
               MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((that != (UnityEngine_RectTransform_o *)0x0) &&
     (UVar4 = UnityEngine_RectTransform__get_rect(that,(MethodInfo *)0x0),
     thiz != (UnityEngine_RectTransform_o *)0x0)) {
    UnityEngine_RectTransform__set_sizeDelta
              (thiz,(UnityEngine_Vector2_o)UVar4.fields._8_8_,(MethodInfo *)0x0);
    UVar1 = UnityEngine_RectTransform__get_pivot(that,(MethodInfo *)0x0);
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(thiz,(MethodInfo *)0x0);
    UVar3 = UnityEngine_RectTransform__get_sizeDelta(thiz,(MethodInfo *)0x0);
    UVar3.fields.y = (UVar1.fields.y + -0.5) * UVar3.fields.y;
    UVar3.fields.x = (UVar1.fields.x + -0.5) * UVar2.fields.x;
    UnityEngine_RectTransform__set_anchoredPosition(thiz,UVar3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetSizeDeltaX(RectTransform t, float x)  [RVA 0x31DB4D4]
// UnityEngine.TransformExtensions$$SetSizeDeltaX @ RVA 0x31DB4D4

void UnityEngine_TransformExtensions__SetSizeDeltaX
               (UnityEngine_RectTransform_o *t,float x,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if (t != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(t,(MethodInfo *)0x0);
    UVar1.fields.x = x;
    UnityEngine_RectTransform__set_sizeDelta(t,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SetSizeDeltaY(RectTransform t, float y)  [RVA 0x31DB50C]
// UnityEngine.TransformExtensions$$SetSizeDeltaY @ RVA 0x31DB50C

void UnityEngine_TransformExtensions__SetSizeDeltaY
               (UnityEngine_RectTransform_o *t,float y,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if (t != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(t,(MethodInfo *)0x0);
    UVar1.fields.y = y;
    UnityEngine_RectTransform__set_sizeDelta(t,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

