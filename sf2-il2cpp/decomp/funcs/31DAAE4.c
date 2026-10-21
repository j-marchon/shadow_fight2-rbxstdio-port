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

