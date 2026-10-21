// UIFigures.UIRoundRectBorder$$JKGANJEHLEL @ RVA 0x34D9A9C

void UIFigures_UIRoundRectBorder__JKGANJEHLEL
               (UIFigures_UIRoundRectBorder_o *__this,UnityEngine_Vector3_o ONPKLLJPABD,
               float KGAENKKEEPK,float CIBIKDNNBAM,bool JGINHMEOGFE,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (__this->fields)._RadiusBottomRight;
  if (0 < (int)fVar1 + 1) {
    iVar2 = 0;
    do {
      UIFigures_UIRoundRectBorder__DHOGAAIOAIC
                (__this,(UnityEngine_Vector2_o)ONPKLLJPABD.fields._0_8_,KGAENKKEEPK,
                 (1.5707964 / (float)(int)fVar1) * (float)iVar2 + CIBIKDNNBAM,JGINHMEOGFE,method);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(__this->fields)._RadiusBottomRight + 1);
  }
  return;
}

