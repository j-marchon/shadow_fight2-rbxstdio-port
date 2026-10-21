// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$CNAFCHHHKGD @ RVA 0x3258B28

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__CNAFCHHHKGD
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,
               UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Slider_o *pUVar2;
  float fVar3;
  float value;
  
  if ((DAT_0456717c & 1) == 0) {
    FUN_01bab630(CJNHFNHJHPE.fields.x,&UnityEngine_Object_TypeInfo);
    DAT_0456717c = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._slider;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 03358bb8 to 03458bcb has its CatchHandler @ 0335849c */
    return;
  }
  pUVar2 = (__this->fields)._slider;
  if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
    fVar3 = UnityEngine_UI_Slider__get_normalizedValue(pUVar2,(MethodInfo *)0x0);
    value = 1.0 - CJNHFNHJHPE.fields.y;
                    /* try { // try from 03358ba8 to 03458bb7 has its CatchHandler @ 03358bec */
    if (value == fVar3) {
      return;
    }
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* try { // try from 03358bcc to 03458bdb has its CatchHandler @ 03358bdc */
      UnityEngine_UI_Slider__set_normalizedValue(pUVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03358bcc with catch @ 03358bdc */
  FUN_01bab8c8();
}

