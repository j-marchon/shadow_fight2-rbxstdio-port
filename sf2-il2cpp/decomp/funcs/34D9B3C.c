// UIFigures.UIRoundRectBorder$$Update @ RVA 0x34D9B3C

void UIFigures_UIRoundRectBorder__Update(UIFigures_UIRoundRectBorder_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  
  if ((DAT_04568702 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568702 = 1;
    method = extraout_x1;
  }
  fVar2 = (__this->fields).super.INCPCFENLPJ.fields.y;
  fVar1 = (__this->fields)._Width;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  if (0.01 < ABS(fVar1 - fVar2)) {
    fVar1 = (__this->fields).super.INCPCFENLPJ.fields.y;
    (__this->fields)._RadiusUpRight = fVar1;
    (__this->fields).KEFJIOPNNFG = fVar1;
    (__this->fields)._RadiusUpLeft = fVar1;
    (__this->fields)._Width = fVar1;
    (__this->fields)._ChangeAllRadius = fVar1;
  }
  return;
}

