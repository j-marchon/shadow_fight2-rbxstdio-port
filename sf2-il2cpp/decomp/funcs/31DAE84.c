// UnityEngine.TransformExtensions$$SetAnchoredPositionY @ RVA 0x31DAE84

void UnityEngine_TransformExtensions__SetAnchoredPositionY
               (UnityEngine_RectTransform_o *rt,float value,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if (rt != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(rt,(MethodInfo *)0x0);
    UVar1.fields.y = value;
    UnityEngine_RectTransform__set_anchoredPosition(rt,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

