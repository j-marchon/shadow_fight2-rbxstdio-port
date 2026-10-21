// Nekki.SF2.GUI.Fight.PlayerLifeBar$$KEEOAHOAOPC @ RVA 0x35204C0

void Nekki_SF2_GUI_Fight_PlayerLifeBar__KEEOAHOAOPC
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  int iVar1;
  float PCAIKIGGBMJ;
  float fVar2;
  
  fVar2 = (__this->fields).OEDKOODFCLP;
  PCAIKIGGBMJ = (__this->fields).HDFOJFNFNGG;
  if (fVar2 != PCAIKIGGBMJ) {
    iVar1 = (__this->fields).LLNOECKGCGG;
    if (0 < iVar1) {
      PCAIKIGGBMJ = fVar2 - (fVar2 - PCAIKIGGBMJ) / (float)iVar1;
    }
    Nekki_SF2_GUI_Fight_PlayerLifeBar__JCCAPMJPHOM(__this,PCAIKIGGBMJ,method);
    (__this->fields).LLNOECKGCGG = (__this->fields).LLNOECKGCGG + -1;
  }
  return;
}

