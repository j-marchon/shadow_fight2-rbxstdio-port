// Nekki.SF2.GUI.SimpleScroll$$MGGKMCMKAPB @ RVA 0x302D504

void Nekki_SF2_GUI_SimpleScroll__MGGKMCMKAPB
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o EMPKHNEPHPO,
               float PNEIGGOFIOA,int32_t GAJONDLDKLI,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o MJBMLNKAPGC;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    MJBMLNKAPGC.fields.y = EMPKHNEPHPO.fields.y - UVar1.fields.y;
    MJBMLNKAPGC.fields.x = EMPKHNEPHPO.fields.x - UVar1.fields.x;
    Nekki_SF2_GUI_SimpleScroll__IGENILJIHFN(__this,MJBMLNKAPGC,PNEIGGOFIOA,GAJONDLDKLI,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

