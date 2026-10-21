// MMDPNDAECII$$KAGPEIPPDHB @ RVA 0x3399E84

void MMDPNDAECII__KAGPEIPPDHB(MMDPNDAECII_o *__this,IEFEBEDLHNN_o *AHDGNOJPPIB,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  CNDPAJOLKFN_o *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (AHDGNOJPPIB != (IEFEBEDLHNN_o *)0x0) {
    if (((AHDGNOJPPIB->fields).EMNCOJMFLLK != false) &&
       ((__this->fields).EGLKIPHJCDL != (__this->fields).HFAFMEICFLA)) {
      __this_00 = (AHDGNOJPPIB->fields).CNMHHKAMGPI;
      if ((__this_00 == (CNDPAJOLKFN_o *)0x0) ||
         (pCVar1 = (AHDGNOJPPIB->fields).BJKKHONDAKP, pCVar1 == (CNDPAJOLKFN_o *)0x0))
      goto LAB_03499f28;
      fVar5 = (pCVar1->fields).super.OHHDBINAJCB;
      fVar4 = (__this_00->fields).super.JOLEIODMLFL;
      fVar3 = (__this_00->fields).PPOPAMHBMGG;
      fVar6 = (pCVar1->fields).PPOPAMHBMGG;
      fVar2 = (__this_00->fields).super.OHHDBINAJCB;
      fVar7 = (__this->fields).PLLMHJOMBIE;
      (__this_00->fields).super.OHHDBINAJCB = fVar5;
      fVar3 = fVar3 - fVar6;
      fVar2 = fVar2 - fVar5;
      fVar4 = fVar4 * fVar7;
      fVar5 = fVar2 * fVar2 + fVar3 * fVar3;
      (__this_00->fields).super.JOLEIODMLFL = 0.0;
      (__this_00->fields).PPOPAMHBMGG = fVar6;
      if (fVar4 * fVar4 < fVar5) {
        fVar4 = 1.0 - fVar4 / SQRT(fVar5);
        CNDPAJOLKFN__LFENGGKOJDO(__this_00,fVar2 * fVar4,0.0,fVar3 * fVar4,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_03499f28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

