// NKDMOOEFPHJ.ACFDNGGGDIJ$$IFKEDFECIBH @ RVA 0x33AA190

void NKDMOOEFPHJ_ACFDNGGGDIJ__IFKEDFECIBH
               (NKDMOOEFPHJ_ACFDNGGGDIJ_o *__this,int32_t DDNILPCHOCN,float AIHACFDHGMA,
               MethodInfo *method)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = DDNILPCHOCN - (__this->fields).FAMAEGGIJCF;
  if (0 < iVar1) {
    fVar2 = exp2f(-(float)iVar1 / AIHACFDHGMA);
    uVar5 = (__this->fields).JCIDLNABHMN;
    uVar6 = (__this->fields).AGMCOJBKCAA;
    uVar3 = (__this->fields).KMENOPCKFLM;
    uVar4 = (__this->fields).AIKGGIJGOOP;
    (__this->fields).ILGLFEKDGND = fVar2 * (__this->fields).ILGLFEKDGND;
    (__this->fields).JCIDLNABHMN = (float)uVar5 * fVar2;
    (__this->fields).AGMCOJBKCAA = (float)uVar6 * fVar2;
    (__this->fields).KMENOPCKFLM = (float)uVar3 * fVar2;
    (__this->fields).AIKGGIJGOOP = (float)uVar4 * fVar2;
  }
  (__this->fields).FAMAEGGIJCF = DDNILPCHOCN;
  return;
}

