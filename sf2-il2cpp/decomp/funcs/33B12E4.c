// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$DHJKPCFLJHA @ RVA 0x33B12E4

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__DHJKPCFLJHA
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,int32_t AAJGEHHPMGH,
               float GKNIEGGEIFD,MethodInfo *method)

{
  UnityEngine_Vector2_o *pUVar1;
  
  if ((uint)AAJGEHHPMGH < 6) {
                    /* try { // try from 034b12ec to 035b1317 has its CatchHandler @ 034b1c40 */
    if ((1 << (ulong)(AAJGEHHPMGH & 0x1f) & 0x15U) == 0) {
      pUVar1 = (UnityEngine_Vector2_o *)&(__this->fields).MHEMJOAINGI.fields.y;
    }
    else {
      pUVar1 = &(__this->fields).MHEMJOAINGI;
    }
    (pUVar1->fields).x = GKNIEGGEIFD;
  }
  return;
}

