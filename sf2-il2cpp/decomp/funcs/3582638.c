// EIILGPAPGMJ$$ALNPMBFHOMO @ RVA 0x3582638

void EIILGPAPGMJ__ALNPMBFHOMO
               (EIILGPAPGMJ_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  
                    /* try { // try from 03682638 to 0378263f has its CatchHandler @ 03682814 */
  pUVar1 = (__this->fields).IAKCIALILLN;
  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    value.fields.x = CJNHFNHJHPE.fields.x;
    value.fields.y = (float)((ulong)CJNHFNHJHPE.fields >> 0x20);
    UnityEngine_RectTransform__set_pivot(pUVar2,value,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).IAKCIALILLN;
    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      value_00.fields.y = value.fields.y;
      value_00.fields.x = value.fields.x;
      UnityEngine_RectTransform__set_anchorMin(pUVar2,value_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).IAKCIALILLN;
      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        value_01.fields.y = value.fields.y;
        value_01.fields.x = value.fields.x;
        UnityEngine_RectTransform__set_anchorMax(pUVar2,value_01,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).IAKCIALILLN;
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
          if (DAT_0455fa77 == '\0') {
            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
            DAT_0455fa77 = '\x01';
          }
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_Transform__set_localPosition
                      ((UnityEngine_Transform_o *)pUVar2,
                       (UnityEngine_Vector3_o)
                       (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

