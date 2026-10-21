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

