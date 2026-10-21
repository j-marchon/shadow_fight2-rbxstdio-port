// Nekki.SF2.GUI.SFScrollRect$$Rebuild @ RVA 0x323C414

void Nekki_SF2_GUI_SFScrollRect__Rebuild
               (Nekki_SF2_GUI_SFScrollRect_o *__this,int32_t GDFIIDAHJIL,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (GDFIIDAHJIL == 2) {
    Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,(MethodInfo *)0x2);
    method_00 = extraout_x1;
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
      method_00 = extraout_x1_00;
    }
                    /* try { // try from 0333c474 to 0343c4c7 has its CatchHandler @ 0333c6c0 */
    Nekki_SF2_GUI_SFScrollRect__HIFNCLLMJOJ
              (__this,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,method_00);
    Nekki_SF2_GUI_SFScrollRect__FEIGMHLBIOI(__this,method_01);
    (__this->fields).OPLFKCHEAIN = true;
  }
  else if (GDFIIDAHJIL == 0) {
    Nekki_SF2_GUI_SFScrollRect__EPGCLBFHHGE(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}

