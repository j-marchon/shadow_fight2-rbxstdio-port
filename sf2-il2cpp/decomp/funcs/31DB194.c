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

