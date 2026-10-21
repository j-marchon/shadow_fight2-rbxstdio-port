// UIFigures.UIRoundRectBorder$$Draw @ RVA 0x34D9940

void UIFigures_UIRoundRectBorder__Draw
               (UIFigures_UIRoundRectBorder_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               UnityEngine_Vector2_o ONPKLLJPABD,UnityEngine_Vector2_o DGNJLFEFJFD,
               MethodInfo *method)

{
  System_Collections_Generic_List_int__o *indices;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar1;
  System_Collections_Generic_List_UIVertex__o *verts;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o ONPKLLJPABD_00;
  UnityEngine_Vector3_o ONPKLLJPABD_01;
  UnityEngine_Vector3_o ONPKLLJPABD_02;
  UnityEngine_Vector3_o ONPKLLJPABD_03;
  UnityEngine_Vector3_o EEGKJKNENDE;
  UnityEngine_Vector3_o EEGKJKNENDE_00;
  
  fVar3 = DGNJLFEFJFD.fields.y;
  fVar2 = DGNJLFEFJFD.fields.x;
  if ((DAT_04568701 & 1) == 0) {
    FUN_01bab630((ulong)ONPKLLJPABD.fields & 0xffffffff,ONPKLLJPABD.fields.y,
                 &Method_System_Collections_Generic_List<UIVertex>_Clear__);
    DAT_04568701 = 1;
  }
  if (BALEEENOIJA != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(BALEEENOIJA,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields)._RadiusBottomLeft;
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      fVar4 = (__this->fields).KEFJIOPNNFG;
      ONPKLLJPABD_00.fields.x = fVar2 - fVar4;
      ONPKLLJPABD_00.fields.y = fVar3 - fVar4;
      ONPKLLJPABD_00.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL(__this,ONPKLLJPABD_00,fVar4,0.0,true,method);
      fVar4 = (__this->fields)._ChangeAllRadius;
      ONPKLLJPABD_01.fields.x = fVar4 - fVar2;
      ONPKLLJPABD_01.fields.y = fVar3 - fVar4;
      ONPKLLJPABD_01.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL(__this,ONPKLLJPABD_01,fVar4,1.5707964,true,method);
      fVar4 = (__this->fields)._RadiusUpRight;
      ONPKLLJPABD_02.fields.x = fVar4 - fVar2;
      ONPKLLJPABD_02.fields.y = fVar4 - fVar3;
      ONPKLLJPABD_02.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL(__this,ONPKLLJPABD_02,fVar4,3.1415927,true,method);
      fVar4 = (__this->fields)._RadiusUpLeft;
      ONPKLLJPABD_03.fields.x = fVar2 - fVar4;
      ONPKLLJPABD_03.fields.y = fVar4 - fVar3;
      ONPKLLJPABD_03.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__JKGANJEHLEL(__this,ONPKLLJPABD_03,fVar4,4.712389,true,method);
      EEGKJKNENDE.fields.y = fVar3 - (__this->fields).KEFJIOPNNFG;
      EEGKJKNENDE.fields.x = fVar2;
      EEGKJKNENDE.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__HMPCFLIDFEA(__this,EEGKJKNENDE,method_00);
      EEGKJKNENDE_00.fields.x = fVar2 - (__this->fields).super.INCPCFENLPJ.fields.x;
      EEGKJKNENDE_00.fields.y = fVar3 - (__this->fields).KEFJIOPNNFG;
      EEGKJKNENDE_00.fields.z = 0.0;
      UIFigures_UIRoundRectBorder__HMPCFLIDFEA(__this,EEGKJKNENDE_00,method_01);
      verts = *(System_Collections_Generic_List_UIVertex__o **)&(__this->fields)._RadiusBottomLeft;
      indices = LLCIFEBJPCL__HPJCLJPIDEO
                          ((int)(__this->fields)._RadiusBottomRight * 8 + 8,(MethodInfo *)0x0);
      UnityEngine_UI_VertexHelper__AddUIVertexStream(BALEEENOIJA,verts,indices,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

