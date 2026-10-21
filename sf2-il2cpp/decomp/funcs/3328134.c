// UIFigures.UIRoundRect$$OnPopulateMesh @ RVA 0x3328134

void UIFigures_UIRoundRect__OnPopulateMesh
               (UIFigures_UIRoundRect_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_o ONPKLLJPABD;
  UnityEngine_Sprite_o *pUVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o DGNJLFEFJFD;
  
  method_00 = (MethodInfo *)0x0;
  UIFigures_UIRoundRectBorder__OnPopulateMesh
            ((UIFigures_UIRoundRectBorder_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).super.super._Sprite;
  UVar3 = (__this->fields).super.super.CKIBKNMJGAJ.fields;
                    /* try { // try from 03428160 to 03528163 has its CatchHandler @ 03428184 */
                    /* try { // try from 03428164 to 03528167 has its CatchHandler @ 03427ff4 */
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03428168 to 0352816b has its CatchHandler @ 0342817c */
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0342816c to 0352816f has its CatchHandler @ 03428178 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034280e0 with catch @ 03428170
                       try { // try from 03428170 to 0352819f has its CatchHandler @ 03427ff4 */
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034280ec with catch @ 03428174
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342816c with catch @ 03428178
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03428168 with catch @ 0342817c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03428120 with catch @ 03428180
                        */
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03428160 with catch @ 03428184
                        */
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034280b8 with catch @ 03428188
                        */
      ONPKLLJPABD.fields.x = (SUB84(pUVar2,0) + UVar3.x) * 0.5;
      ONPKLLJPABD.fields.y = ((float)((ulong)pUVar2 >> 0x20) + UVar3.y) * 0.5;
      UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 034281a0 to 035281a3 has its CatchHandler @ 034281c4 */
                    /* try { // try from 034281a4 to 035281cb has its CatchHandler @ 03427ff4 */
      DGNJLFEFJFD.fields.x = UVar4.fields.m_Width * 0.5;
      DGNJLFEFJFD.fields.y = UVar5.fields.m_Height * 0.5;
                    /* catch() { ... } // from try @ 034281a0 with catch @ 034281c4 */
                    /* try { // try from 034281cc to 035281d3 has its CatchHandler @ 034281e8 */
      UIFigures_UIRoundRect__Draw(__this,BALEEENOIJA,ONPKLLJPABD,DGNJLFEFJFD,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034281d4 to 035281df has its CatchHandler @ 03427ff4 */
  FUN_01bab8c8();
}

