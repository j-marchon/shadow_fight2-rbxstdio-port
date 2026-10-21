// MNLIBPAOCLG$$EPJCHCHDJCE @ RVA 0x31E7688

float MNLIBPAOCLG__EPJCHCHDJCE(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  KHEDNGODOIC_o *pKVar1;
  PKNBJJPHAKI_o *__this_00;
  float fVar2;
  float fVar3;
  
  pKVar1 = (__this->fields).ANDGPHHMNMC;
  if ((pKVar1 != (KHEDNGODOIC_o *)0x0) &&
     (__this_00 = (pKVar1->fields).BAFJNPPPBMK, __this_00 != (PKNBJJPHAKI_o *)0x0)) {
    fVar3 = (__this->fields).CPMMFFBNDHP;
    fVar2 = PKNBJJPHAKI__HJBLPDBMFKK(__this_00,(MethodInfo *)0x0);
    fVar2 = (float)NEON_fminnm(fVar3 / (fVar2 + 300.0),0x3f800000);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

