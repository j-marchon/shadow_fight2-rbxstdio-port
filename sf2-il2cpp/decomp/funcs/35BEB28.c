// Nekki.SF2.GUI.Fight.ViewerFight$$get_RoundTimeTotalFrames @ RVA 0x35BEB28

int32_t Nekki_SF2_GUI_Fight_ViewerFight__get_RoundTimeTotalFrames
                  (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  JIMKCICMMIL_o *pJVar1;
  
  pJVar1 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  if (pJVar1 != (JIMKCICMMIL_o *)0x0) {
    return (pJVar1->fields).OBOADGAKAHJ * 0x3c;
  }
  return 0;
}

