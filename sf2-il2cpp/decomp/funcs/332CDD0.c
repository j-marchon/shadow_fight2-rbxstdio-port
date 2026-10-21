// Nekki.SF2.GUI.Fight.ComboModel$$Init @ RVA 0x332CDD0

void Nekki_SF2_GUI_Fight_ComboModel__Init
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t GCIBBBDPBNK,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *in_x3;
  float fVar2;
  
  (__this->fields).NKKPNCHMEHC = GCIBBBDPBNK;
  iVar1 = Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG(__this,3,0,in_x3);
  (__this->fields).OJGEPLNIIDP = iVar1;
  if ((__this->fields).NKKPNCHMEHC == 0) {
    (__this->fields).PJINFMLCNGI = -(__this->fields).PJINFMLCNGI;
    fVar2 = 0.0;
  }
  else {
                    /* try { // try from 0342cdf4 to 0352cedf has its CatchHandler @ 0342cdf4
                       catch() { ... } // from try @ 0342cdf4 with catch @ 0342cdf4
                       catch() { ... } // from try @ 0342cf1c with catch @ 0342cdf4
                       catch() { ... } // from try @ 0342cf4c with catch @ 0342cdf4
                       catch() { ... } // from try @ 0342cf7c with catch @ 0342cdf4
                       catch() { ... } // from try @ 0342cfbc with catch @ 0342cdf4 */
    fVar2 = 1.0;
  }
  (__this->fields).FHMKAKCKNAF.fields.x = fVar2;
  (__this->fields).FHMKAKCKNAF.fields.y = 0.5;
  (__this->fields).CKILNMCNMKA.fields.x = fVar2;
  (__this->fields).CKILNMCNMKA.fields.y = 0.5;
  return;
}

