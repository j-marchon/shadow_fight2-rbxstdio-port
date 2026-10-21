// UnityEngine.TransformExtensions$$ImposeOn @ RVA 0x31DB440

void UnityEngine_TransformExtensions__ImposeOn
               (UnityEngine_RectTransform_o *thiz,UnityEngine_RectTransform_o *that,
               MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((that != (UnityEngine_RectTransform_o *)0x0) &&
     (UVar4 = UnityEngine_RectTransform__get_rect(that,(MethodInfo *)0x0),
     thiz != (UnityEngine_RectTransform_o *)0x0)) {
    UnityEngine_RectTransform__set_sizeDelta
              (thiz,(UnityEngine_Vector2_o)UVar4.fields._8_8_,(MethodInfo *)0x0);
    UVar1 = UnityEngine_RectTransform__get_pivot(that,(MethodInfo *)0x0);
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(thiz,(MethodInfo *)0x0);
    UVar3 = UnityEngine_RectTransform__get_sizeDelta(thiz,(MethodInfo *)0x0);
    UVar3.fields.y = (UVar1.fields.y + -0.5) * UVar3.fields.y;
    UVar3.fields.x = (UVar1.fields.x + -0.5) * UVar2.fields.x;
    UnityEngine_RectTransform__set_anchoredPosition(thiz,UVar3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

