// MCIBPLJEFLJ$$JPEDFFKLLFC @ RVA 0x305004C

bool MCIBPLJEFLJ__JPEDFFKLLFC
               (float OHIILDIGEIF,float DAHHDNFLMJO,FDHJDNACICH_o *NFNEMDPDIDP,
               CNDPAJOLKFN_o *EKEMKOCPHPO,CNDPAJOLKFN_o *DHDPEBOFPPN,CNDPAJOLKFN_o *CKCOLJLFJDB,
               CNDPAJOLKFN_o *DEDNHOELFOD,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (DAHHDNFLMJO <= OHIILDIGEIF) {
LAB_03150140:
    bVar1 = false;
  }
  else {
    if (((EKEMKOCPHPO == (CNDPAJOLKFN_o *)0x0) || (NFNEMDPDIDP == (FDHJDNACICH_o *)0x0)) ||
       (DHDPEBOFPPN == (CNDPAJOLKFN_o *)0x0)) {
LAB_03150154:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar6 = (EKEMKOCPHPO->fields).super.OHHDBINAJCB -
            (NFNEMDPDIDP->fields).FMPJLBLNHMC * OHIILDIGEIF;
    (DHDPEBOFPPN->fields).super.OHHDBINAJCB = fVar6;
    fVar4 = (EKEMKOCPHPO->fields).super.JOLEIODMLFL -
            (NFNEMDPDIDP->fields).IHEPHBIPLPM * OHIILDIGEIF;
    (DHDPEBOFPPN->fields).super.JOLEIODMLFL = fVar4;
    if (CKCOLJLFJDB == (CNDPAJOLKFN_o *)0x0) goto LAB_03150154;
    fVar2 = (CKCOLJLFJDB->fields).super.OHHDBINAJCB;
    if (fVar6 <= fVar2) {
      if (DEDNHOELFOD == (CNDPAJOLKFN_o *)0x0) goto LAB_03150154;
      fVar3 = (DEDNHOELFOD->fields).super.OHHDBINAJCB;
      if (fVar6 < fVar3) goto LAB_031500b4;
LAB_031500c8:
      fVar6 = (CKCOLJLFJDB->fields).super.JOLEIODMLFL;
      if (((fVar6 < fVar4) || (fVar4 < (DEDNHOELFOD->fields).super.JOLEIODMLFL)) &&
         ((fVar4 < fVar6 || ((DEDNHOELFOD->fields).super.JOLEIODMLFL < fVar4)))) goto LAB_031500fc;
    }
    else {
      if (DEDNHOELFOD == (CNDPAJOLKFN_o *)0x0) goto LAB_03150154;
LAB_031500b4:
      fVar3 = (DEDNHOELFOD->fields).super.OHHDBINAJCB;
      if ((fVar2 <= fVar6) && (fVar6 <= fVar3)) goto LAB_031500c8;
      fVar6 = (CKCOLJLFJDB->fields).super.JOLEIODMLFL;
LAB_031500fc:
      fVar5 = (EKEMKOCPHPO->fields).super.OHHDBINAJCB;
      fVar4 = (EKEMKOCPHPO->fields).super.JOLEIODMLFL;
      fVar2 = fVar5 - fVar2;
      fVar6 = fVar4 - fVar6;
      if ((DAHHDNFLMJO * DAHHDNFLMJO < fVar2 * fVar2 + fVar6 * fVar6) &&
         (fVar5 = fVar5 - fVar3, fVar4 = fVar4 - (DEDNHOELFOD->fields).super.JOLEIODMLFL,
         DAHHDNFLMJO * DAHHDNFLMJO < fVar5 * fVar5 + fVar4 * fVar4)) goto LAB_03150140;
    }
    bVar1 = true;
  }
  return bVar1;
}

