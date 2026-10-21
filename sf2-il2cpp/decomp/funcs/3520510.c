// Nekki.SF2.GUI.Fight.PlayerLifeBar$$BNBAFNOBOGM @ RVA 0x3520510

void Nekki_SF2_GUI_Fight_PlayerLifeBar__BNBAFNOBOGM
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  int iVar1;
  float PCAIKIGGBMJ;
  float fVar2;
  
  fVar2 = (__this->fields).DANCJAPPNKJ;
  PCAIKIGGBMJ = (__this->fields).HFMAMOEIOOB;
  if (fVar2 != PCAIKIGGBMJ) {
    iVar1 = (__this->fields).NHDMJMILNKJ;
    if (0 < iVar1) {
      PCAIKIGGBMJ = fVar2 + (PCAIKIGGBMJ - fVar2) / (float)iVar1;
    }
    Nekki_SF2_GUI_Fight_PlayerLifeBar__ONHOMNIFFEN(__this,PCAIKIGGBMJ,method);
    (__this->fields).NHDMJMILNKJ = (__this->fields).NHDMJMILNKJ + -1;
  }
  return;
}

