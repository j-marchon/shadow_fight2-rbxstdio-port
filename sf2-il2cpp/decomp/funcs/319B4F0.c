// PKHLGDMJPMF$$JPEDFFKLLFC @ RVA 0x319B4F0

bool PKHLGDMJPMF__JPEDFFKLLFC
               (float OHIILDIGEIF,float DAHHDNFLMJO,FDHJDNACICH_o *NFNEMDPDIDP,
               CNDPAJOLKFN_o *EKEMKOCPHPO,CNDPAJOLKFN_o *DHDPEBOFPPN,CNDPAJOLKFN_o *CKCOLJLFJDB,
               CNDPAJOLKFN_o *DEDNHOELFOD,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (DAHHDNFLMJO < ABS(OHIILDIGEIF)) {
    return false;
  }
  if (((EKEMKOCPHPO != (CNDPAJOLKFN_o *)0x0) && (NFNEMDPDIDP != (FDHJDNACICH_o *)0x0)) &&
     (DHDPEBOFPPN != (CNDPAJOLKFN_o *)0x0)) {
    uVar5 = (NFNEMDPDIDP->fields).FMPJLBLNHMC;
    uVar6 = (NFNEMDPDIDP->fields).IHEPHBIPLPM;
    fVar3 = (EKEMKOCPHPO->fields).super.OHHDBINAJCB - (float)uVar5 * OHIILDIGEIF;
    PVar1.JOLEIODMLFL = (EKEMKOCPHPO->fields).super.JOLEIODMLFL - (float)uVar6 * OHIILDIGEIF;
    PVar1.OHHDBINAJCB = fVar3;
    (DHDPEBOFPPN->fields).super = PVar1;
    if ((DEDNHOELFOD != (CNDPAJOLKFN_o *)0x0) && (CKCOLJLFJDB != (CNDPAJOLKFN_o *)0x0)) {
      bVar2 = Util__INDMHFLELNN(fVar3,(DEDNHOELFOD->fields).super.OHHDBINAJCB,
                                (CKCOLJLFJDB->fields).super.OHHDBINAJCB,(MethodInfo *)0x0);
      if (((!bVar2) &&
          (bVar2 = Util__INDMHFLELNN((DHDPEBOFPPN->fields).super.OHHDBINAJCB,
                                     (CKCOLJLFJDB->fields).super.OHHDBINAJCB,
                                     (DEDNHOELFOD->fields).super.OHHDBINAJCB,(MethodInfo *)0x0),
          !bVar2)) ||
         ((bVar2 = Util__INDMHFLELNN((DHDPEBOFPPN->fields).super.JOLEIODMLFL,
                                     (DEDNHOELFOD->fields).super.JOLEIODMLFL,
                                     (CKCOLJLFJDB->fields).super.JOLEIODMLFL,(MethodInfo *)0x0),
          !bVar2 && (bVar2 = Util__INDMHFLELNN((DHDPEBOFPPN->fields).super.JOLEIODMLFL,
                                               (CKCOLJLFJDB->fields).super.JOLEIODMLFL,
                                               (DEDNHOELFOD->fields).super.JOLEIODMLFL,
                                               (MethodInfo *)0x0), !bVar2)))) {
        fVar3 = Util__CHHIJKJEKPN((EKEMKOCPHPO->fields).super.OHHDBINAJCB -
                                  (CKCOLJLFJDB->fields).super.OHHDBINAJCB,(MethodInfo *)0x0);
        fVar4 = Util__CHHIJKJEKPN((EKEMKOCPHPO->fields).super.JOLEIODMLFL -
                                  (CKCOLJLFJDB->fields).super.JOLEIODMLFL,(MethodInfo *)0x0);
        if (DAHHDNFLMJO * DAHHDNFLMJO < fVar3 + fVar4) {
          fVar3 = Util__CHHIJKJEKPN((EKEMKOCPHPO->fields).super.OHHDBINAJCB -
                                    (DEDNHOELFOD->fields).super.OHHDBINAJCB,(MethodInfo *)0x0);
          fVar4 = Util__CHHIJKJEKPN((EKEMKOCPHPO->fields).super.JOLEIODMLFL -
                                    (DEDNHOELFOD->fields).super.JOLEIODMLFL,(MethodInfo *)0x0);
          return fVar3 + fVar4 <= DAHHDNFLMJO * DAHHDNFLMJO;
        }
      }
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

