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

