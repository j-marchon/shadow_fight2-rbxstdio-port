// TypeDefIndex 2359
// Namespace: UIFigures
// public class UIRoundRect : UIRoundRectBorder
// Fields:

// ===== protected override void OnPopulateMesh(VertexHelper BALEEENOIJA)  [RVA 0x3328134]
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


// ===== public void Draw(VertexHelper BALEEENOIJA, Vector2 ONPKLLJPABD, Vector2 DGNJLFEFJFD)  [RVA 0x33281D8]
// UIFigures.UIRoundRect$$Draw @ RVA 0x33281D8

void UIFigures_UIRoundRect__Draw
               (UIFigures_UIRoundRect_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               UnityEngine_Vector2_o ONPKLLJPABD,UnityEngine_Vector2_o DGNJLFEFJFD,
               MethodInfo *method)

{
  System_Collections_Generic_List_int__o *indices;
  long lVar1;
  System_Collections_Generic_List_UIVertex__o *verts;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o EEGKJKNENDE;
  UnityEngine_Vector3_o ONPKLLJPABD_00;
  UnityEngine_Vector3_o ONPKLLJPABD_01;
  UnityEngine_Vector3_o ONPKLLJPABD_02;
  UnityEngine_Vector3_o ONPKLLJPABD_03;
  UnityEngine_Vector3_o EEGKJKNENDE_00;
  
  fVar3 = DGNJLFEFJFD.fields.y;
  fVar2 = DGNJLFEFJFD.fields.x;
                    /* try { // try from 034281e0 to 035281e7 has its CatchHandler @ 034281e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034281cc with catch @ 034281e8
                       catch(type#2 @ 00000000) { ... } // from try @ 034281e0 with catch @ 034281e8
                        */
                    /* try { // try from 034281ec to 035282ab has its CatchHandler @ 034281ec
                       catch() { ... } // from try @ 034281ec with catch @ 034281ec
                       catch() { ... } // from try @ 03428320 with catch @ 034281ec
                       catch() { ... } // from try @ 03428368 with catch @ 034281ec
                       catch() { ... } // from try @ 034283a0 with catch @ 034281ec
                       catch() { ... } // from try @ 034283d8 with catch @ 034281ec */
  if ((DAT_045678a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_Clear__);
    DAT_045678a9 = 1;
  }
  if (BALEEENOIJA != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(BALEEENOIJA,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).super._RadiusBottomLeft;
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      EEGKJKNENDE.fields.z = 0.0;
      EEGKJKNENDE.fields._0_8_ = ONPKLLJPABD.fields;
      UIFigures_UIRoundRectBorder__HMPCFLIDFEA
                ((UIFigures_UIRoundRectBorder_o *)__this,EEGKJKNENDE,(MethodInfo *)0x0);
      fVar4 = (__this->fields).super.KEFJIOPNNFG;
      ONPKLLJPABD_00.fields.x = fVar2 - fVar4;
      ONPKLLJPABD_00.fields.y = fVar3 - fVar4;
      ONPKLLJPABD_00.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL
                ((UIFigures_UIRoundRectBorder_o *)__this,ONPKLLJPABD_00,fVar4,0.0,false,
                 (MethodInfo *)0x0);
      fVar4 = (__this->fields).super._ChangeAllRadius;
      ONPKLLJPABD_01.fields.x = fVar4 - fVar2;
      ONPKLLJPABD_01.fields.y = fVar3 - fVar4;
      ONPKLLJPABD_01.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL
                ((UIFigures_UIRoundRectBorder_o *)__this,ONPKLLJPABD_01,fVar4,1.5707964,false,
                 (MethodInfo *)0x0);
      fVar4 = (__this->fields).super._RadiusUpRight;
                    /* try { // try from 034282ac to 035282b3 has its CatchHandler @ 03428384 */
      ONPKLLJPABD_02.fields.x = fVar4 - fVar2;
      ONPKLLJPABD_02.fields.y = fVar4 - fVar3;
      ONPKLLJPABD_02.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL
                ((UIFigures_UIRoundRectBorder_o *)__this,ONPKLLJPABD_02,fVar4,3.1415927,false,
                 (MethodInfo *)0x0);
      fVar4 = (__this->fields).super._RadiusUpLeft;
                    /* try { // try from 034282d4 to 035282d7 has its CatchHandler @ 0342836c */
                    /* try { // try from 034282e0 to 035282fb has its CatchHandler @ 03428370 */
      ONPKLLJPABD_03.fields.x = fVar2 - fVar4;
      ONPKLLJPABD_03.fields.y = fVar4 - fVar3;
      ONPKLLJPABD_03.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL
                ((UIFigures_UIRoundRectBorder_o *)__this,ONPKLLJPABD_03,fVar4,4.712389,false,
                 (MethodInfo *)0x0);
      EEGKJKNENDE_00.fields.y = fVar3 - (__this->fields).super.KEFJIOPNNFG;
      EEGKJKNENDE_00.fields.x = fVar2;
      EEGKJKNENDE_00.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__HMPCFLIDFEA
                ((UIFigures_UIRoundRectBorder_o *)__this,EEGKJKNENDE_00,(MethodInfo *)0x0);
                    /* try { // try from 03428314 to 0352831f has its CatchHandler @ 03428374 */
      verts = *(System_Collections_Generic_List_UIVertex__o **)
               &(__this->fields).super._RadiusBottomLeft;
                    /* try { // try from 03428320 to 0352835b has its CatchHandler @ 034281ec */
      indices = LLCIFEBJPCL__NCOODIBHJJN
                          ((int)(__this->fields).super._RadiusBottomRight * 4 + 4,(MethodInfo *)0x0)
      ;
      UnityEngine_UI_VertexHelper__AddUIVertexStream(BALEEENOIJA,verts,indices,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3328354]
// UIFigures.UIRoundRect$$.ctor @ RVA 0x3328354

void UIFigures_UIRoundRect___ctor(UIFigures_UIRoundRect_o *__this,MethodInfo *method)

{
  UIFigures_UIRoundRectBorder___ctor((UIFigures_UIRoundRectBorder_o *)__this,(MethodInfo *)0x0);
  return;
}

