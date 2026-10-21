// Nekki.SF2.GUI.Fight.PlayerLifeBar$$IKKHECKCEJC @ RVA 0x3520454

void Nekki_SF2_GUI_Fight_PlayerLifeBar__IKKHECKCEJC
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = Nekki_SF2_GUI_Fight_PlayerLifeBar__HOPDLCBPCNB(__this,method);
  fVar2 = fVar1 - (__this->fields).HDFOJFNFNGG;
  if (fVar2 != 0.0) {
    if (fVar2 <= 0.0) {
      (__this->fields).HDFOJFNFNGG = fVar1;
      fVar1 = 1.0;
      if (0.01 <= ABS(fVar2)) {
        fVar1 = 60.0;
      }
      (__this->fields).PCBAEDMJDCC = fVar1;
      (__this->fields).LLNOECKGCGG = 10;
    }
    else {
      (__this->fields).HDFOJFNFNGG = fVar1;
      (__this->fields).HFMAMOEIOOB = fVar1;
      (__this->fields).LLNOECKGCGG = 10;
      (__this->fields).NHDMJMILNKJ = 0x1e;
    }
  }
  return;
}

