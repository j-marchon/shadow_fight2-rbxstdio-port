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

