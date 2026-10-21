// Nekki.SF2.GUI.ItemsScroll$$LNMEGJPCAGF @ RVA 0x30D0E50

bool Nekki_SF2_GUI_ItemsScroll__LNMEGJPCAGF(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields).super.CDHNBOKGCCN.fields.x;
  fVar1 = (__this->fields).super.CDHNBOKGCCN.fields.y;
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  return (__this->fields)._MinScrollVelocity < SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}

