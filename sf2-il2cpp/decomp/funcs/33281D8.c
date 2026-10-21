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

