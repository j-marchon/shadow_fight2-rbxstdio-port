// UnityEngine.TransformExtensions$$SetAnchoredPositionZ @ RVA 0x31DAEBC

void UnityEngine_TransformExtensions__SetAnchoredPositionZ
               (UnityEngine_RectTransform_o *rt,float value,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value_00;
  
  if (rt != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition3D(rt,(MethodInfo *)0x0);
    value_00.fields.x = UVar1.fields.x;
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition3D(rt,(MethodInfo *)0x0);
    value_00.fields.y = UVar1.fields.y;
    value_00.fields.z = value;
    UnityEngine_RectTransform__set_anchoredPosition3D(rt,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

