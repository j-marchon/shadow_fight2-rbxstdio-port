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

