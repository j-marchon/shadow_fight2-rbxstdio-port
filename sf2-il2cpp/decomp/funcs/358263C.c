// EIILGPAPGMJ$$ONDOJMALJDE @ RVA 0x358263C

void EIILGPAPGMJ__ONDOJMALJDE
               (EIILGPAPGMJ_o *__this,UnityEngine_Vector2_o POJKEOPHOAI,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  
                    /* try { // try from 03682640 to 0378264b has its CatchHandler @ 03682854 */
  pUVar1 = (__this->fields).IAKCIALILLN;
                    /* try { // try from 0368265c to 03782663 has its CatchHandler @ 03682860 */
  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    value.fields.x = POJKEOPHOAI.fields.x;
    value.fields.y = (float)((ulong)POJKEOPHOAI.fields >> 0x20);
                    /* try { // try from 0368266c to 03782673 has its CatchHandler @ 03682848 */
                    /* try { // try from 03682674 to 0378267f has its CatchHandler @ 03682824 */
    UnityEngine_RectTransform__set_pivot(pUVar2,value,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).IAKCIALILLN;
                    /* try { // try from 03682684 to 03782693 has its CatchHandler @ 03682840 */
    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      value_00.fields.y = value.fields.y;
      value_00.fields.x = value.fields.x;
      UnityEngine_RectTransform__set_anchorMin(pUVar2,value_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).IAKCIALILLN;
                    /* try { // try from 036826a0 to 037826a7 has its CatchHandler @ 03682850 */
      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        value_01.fields.y = value.fields.y;
        value_01.fields.x = value.fields.x;
                    /* try { // try from 036826b0 to 037826b7 has its CatchHandler @ 03682818 */
                    /* try { // try from 036826bc to 037826c3 has its CatchHandler @ 03682858 */
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
                    /* try { // try from 03682704 to 03782727 has its CatchHandler @ 0368281c */
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
                    /* try { // try from 03682728 to 037827c7 has its CatchHandler @ 03682230 */
  FUN_01bab8c8();
}

