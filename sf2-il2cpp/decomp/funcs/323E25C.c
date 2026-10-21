// Nekki.SF2.GUI.SFScrollRect$$CGLEBDINJNF @ RVA 0x323E25C

float Nekki_SF2_GUI_SFScrollRect__CGLEBDINJNF
                (float FKHFFLPDBDJ,float ADEHAOIPCHD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 - 1.0 / ((ABS(FKHFFLPDBDJ) * 0.55) / ADEHAOIPCHD + 1.0);
  fVar1 = fVar2 * ADEHAOIPCHD;
  if (FKHFFLPDBDJ < 0.0) {
    fVar1 = -(fVar2 * ADEHAOIPCHD);
  }
  return fVar1;
}

