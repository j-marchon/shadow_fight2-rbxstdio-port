// UIFigures.UIRoundRectBorder$$DHOGAAIOAIC @ RVA 0x34D9BBC

void UIFigures_UIRoundRectBorder__DHOGAAIOAIC
               (UIFigures_UIRoundRectBorder_o *__this,UnityEngine_Vector2_o ONPKLLJPABD,
               float KGAENKKEEPK,float GMOPOJHAMBE,bool JGINHMEOGFE,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar1;
  UnityEngine_Vector3_o EEGKJKNENDE;
  UnityEngine_Vector3_o EEGKJKNENDE_00;
  float local_48;
  float fStack_44;
  
  sincosf(GMOPOJHAMBE,&fStack_44,&local_48);
  EEGKJKNENDE.fields.x = ONPKLLJPABD.fields.x + local_48 * KGAENKKEEPK;
  EEGKJKNENDE.fields.y = ONPKLLJPABD.fields.y + fStack_44 * KGAENKKEEPK;
  EEGKJKNENDE.fields.z = 0.0;
  UIFigures_UIRoundRectBorder__HMPCFLIDFEA(__this,EEGKJKNENDE,method_00);
  if (JGINHMEOGFE) {
    fVar1 = KGAENKKEEPK - (__this->fields).super.INCPCFENLPJ.fields.x;
    EEGKJKNENDE_00.fields.x = ONPKLLJPABD.fields.x + local_48 * fVar1;
    EEGKJKNENDE_00.fields.y = ONPKLLJPABD.fields.y + fStack_44 * fVar1;
    EEGKJKNENDE_00.fields.z = 0.0;
    UIFigures_UIRoundRectBorder__HMPCFLIDFEA(__this,EEGKJKNENDE_00,method_01);
    return;
  }
  return;
}

