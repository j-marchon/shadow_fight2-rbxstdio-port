// WideScreenController$$MOFOODOFDIO @ RVA 0x31E9E8C

float WideScreenController__MOFOODOFDIO(UnityEngine_RectTransform_o *LCMJHHCNGBL,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (LCMJHHCNGBL != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_sizeDelta(LCMJHHCNGBL,(MethodInfo *)0x0);
    fVar1 = UVar3.fields.x + -2730.6667;
    fVar2 = (float)(int)(fVar1 * 0.5) + 1.0;
    if (fVar1 <= 0.0) {
      fVar2 = 0.0;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

