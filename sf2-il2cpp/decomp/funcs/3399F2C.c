// MMDPNDAECII$$IIHMOINCCLH @ RVA 0x3399F2C

void MMDPNDAECII__IIHMOINCCLH(MMDPNDAECII_o *__this,IEFEBEDLHNN_o *AHDGNOJPPIB,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((AHDGNOJPPIB != (IEFEBEDLHNN_o *)0x0) &&
     (pCVar1 = (AHDGNOJPPIB->fields).CNMHHKAMGPI, pCVar1 != (CNDPAJOLKFN_o *)0x0)) {
    if (0.0 <= (pCVar1->fields).super.JOLEIODMLFL) {
      MMDPNDAECII__KAGPEIPPDHB(__this,AHDGNOJPPIB,method);
    }
    fVar3 = (__this->fields).EGLKIPHJCDL;
    fVar2 = (__this->fields).HFAFMEICFLA;
    if (fVar3 != fVar2) {
      fVar4 = (pCVar1->fields).super.OHHDBINAJCB;
      if (fVar3 <= fVar4) {
        if (fVar2 < fVar4) {
          (pCVar1->fields).super.OHHDBINAJCB = fVar2;
        }
      }
      else {
        (pCVar1->fields).super.OHHDBINAJCB = fVar3;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

