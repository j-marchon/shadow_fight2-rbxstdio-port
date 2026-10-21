// UnityEngine.TransformExtensions$$SetSizeDeltaY @ RVA 0x31DB50C

void UnityEngine_TransformExtensions__SetSizeDeltaY
               (UnityEngine_RectTransform_o *t,float y,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if (t != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(t,(MethodInfo *)0x0);
    UVar1.fields.y = y;
    UnityEngine_RectTransform__set_sizeDelta(t,UVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

