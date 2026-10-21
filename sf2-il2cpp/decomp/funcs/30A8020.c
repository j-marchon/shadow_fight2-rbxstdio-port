// Nekki.SF2.GUI.Fight.ScreenFight$$Update @ RVA 0x30A8020

void Nekki_SF2_GUI_Fight_ScreenFight__Update
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  if (((__this->fields).FNHHIEKCLPI == false) && ((__this->fields).NIPJJFHOICB != false)) {
    fVar2 = (__this->fields).KILAOGMHCEO;
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar1;
    (__this->fields).KILAOGMHCEO = fVar2;
    if (fVar2 <= 0.0) {
      Nekki_SF2_GUI_Fight_ScreenFight__IOEHKDBENCJ(__this,method_00);
      return;
    }
  }
  return;
}

