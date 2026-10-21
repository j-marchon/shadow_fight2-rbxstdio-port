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

