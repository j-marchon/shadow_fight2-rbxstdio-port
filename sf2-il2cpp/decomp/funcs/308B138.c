// LabelButton$$get_rect @ RVA 0x308B138

UnityEngine_Rect_o LabelButton__get_rect(LabelButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_Fields UVar1;
  
  if ((DAT_04566052 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04566052 = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<RectTransform>__);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = (UnityEngine_Rect_Fields)
            UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Rect_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

