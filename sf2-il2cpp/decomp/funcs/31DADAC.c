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

