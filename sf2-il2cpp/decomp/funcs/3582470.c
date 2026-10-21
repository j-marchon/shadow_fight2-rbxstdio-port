// EIILGPAPGMJ$$GGOLGLLAOEP @ RVA 0x3582470

UnityEngine_Vector2_o EIILGPAPGMJ__GGOLGLLAOEP(EIILGPAPGMJ_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if ((__this_00 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

