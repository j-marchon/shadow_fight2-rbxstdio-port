// WideScreenController$$NKLGCNHLBAF @ RVA 0x31E9ED4

void WideScreenController__NKLGCNHLBAF
               (UnityEngine_RectTransform_o *GDDNCGHPCEM,float BLENDMCELBE,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o value;
  
  if (GDDNCGHPCEM != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_offsetMax(GDDNCGHPCEM,(MethodInfo *)0x0);
    UVar1.fields.x = -BLENDMCELBE;
    UnityEngine_RectTransform__set_offsetMax(GDDNCGHPCEM,UVar1,(MethodInfo *)0x0);
    UVar1 = UnityEngine_RectTransform__get_offsetMin(GDDNCGHPCEM,(MethodInfo *)0x0);
    value.fields.y = UVar1.fields.y;
    value.fields.x = BLENDMCELBE;
    UnityEngine_RectTransform__set_offsetMin(GDDNCGHPCEM,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

