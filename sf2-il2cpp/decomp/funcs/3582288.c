// EIILGPAPGMJ$$AHEDIEFFBMC @ RVA 0x3582288

void EIILGPAPGMJ__AHEDIEFFBMC
               (EIILGPAPGMJ_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_o value;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if ((__this_00 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    value.fields.x = CJNHFNHJHPE.fields.x;
    value.fields.y = (float)((ulong)CJNHFNHJHPE.fields >> 0x20);
    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

