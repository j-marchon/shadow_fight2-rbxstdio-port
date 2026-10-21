// BEPJMNAHCAD$$JIIGHMEMOLL @ RVA 0x3189AFC

void BEPJMNAHCAD__JIIGHMEMOLL(BEPJMNAHCAD_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  MGNPHCAAEIO_FNHCJBGGHLH_o *pMVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((__this->fields).DLEANEAEAFF != false) {
    pMVar3 = (__this->fields).FGINMCCJOLH;
    if (pMVar3 == (MGNPHCAAEIO_FNHCJBGGHLH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pMVar3->fields).EOOHODKJDHH;
    iVar2 = (pMVar3->fields).ELDLAOMMHEJ;
    fVar6 = (pMVar3->fields).GHIDOLCAFAE;
    fVar4 = (pMVar3->fields).NMBDLKFCIPG;
    fVar5 = (pMVar3->fields).INNAIENKFPP;
    fVar7 = (float)iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    fVar7 = ABS(fVar4 - fVar5) / (fVar7 * 0.5);
    if (iVar1 >> 1 < iVar2) {
      fVar6 = fVar6 + fVar7;
      (pMVar3->fields).GHIDOLCAFAE = fVar6;
      if (fVar5 < fVar6) {
        (pMVar3->fields).GHIDOLCAFAE = fVar5;
      }
    }
    else {
      fVar6 = fVar6 - fVar7;
      (pMVar3->fields).GHIDOLCAFAE = fVar6;
      if (fVar6 < fVar4) {
        (pMVar3->fields).GHIDOLCAFAE = fVar4;
      }
    }
    (pMVar3->fields).ELDLAOMMHEJ = iVar2 + 1;
  }
  return;
}

