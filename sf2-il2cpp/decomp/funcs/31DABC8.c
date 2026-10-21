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

