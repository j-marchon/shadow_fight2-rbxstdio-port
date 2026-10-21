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

