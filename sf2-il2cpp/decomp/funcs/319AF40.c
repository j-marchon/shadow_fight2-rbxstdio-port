// PKHLGDMJPMF$$MAINPDNFMCC @ RVA 0x319AF40

/* WARNING: Type propagation algorithm not settling */

bool PKHLGDMJPMF__MAINPDNFMCC
               (CNDPAJOLKFN_o *PGDICFIFJCL,CNDPAJOLKFN_o *JOOCHALEIJC,float DFAGFABMFGL,
               CNDPAJOLKFN_o *AJGHJAGBEKE,CNDPAJOLKFN_o *DGMNDDFICAK,float MHCCGPICFPH,
               CNDPAJOLKFN_o *MOEFIFNLCHF,CNDPAJOLKFN_o *OCLOPJMAGOM,FDHJDNACICH_o *FHOGKFAGCJO,
               FDHJDNACICH_o *EAJINBFNEIJ,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  CNDPAJOLKFN_o *pCVar2;
  bool bVar3;
  CNDPAJOLKFN_o *PHCOHKNFGLE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float CHOCOAGNFDD;
  float OHIILDIGEIF;
  float OHIILDIGEIF_00;
  
  CHOCOAGNFDD = DFAGFABMFGL + MHCCGPICFPH;
  method_00 = (MethodInfo *)AJGHJAGBEKE;
  method_01 = (MethodInfo *)OCLOPJMAGOM;
  bVar3 = Util__KEJBDHBDGNI(CHOCOAGNFDD,1e-10,(MethodInfo *)0x0);
  pCVar1 = OCLOPJMAGOM;
  pCVar2 = MOEFIFNLCHF;
  if (bVar3) {
    bVar3 = PKHLGDMJPMF__GKHCKDAOAOM
                      (AJGHJAGBEKE,DGMNDDFICAK,PGDICFIFJCL,JOOCHALEIJC,MOEFIFNLCHF,method_01);
    if (!bVar3) {
      return false;
    }
  }
  else {
    if ((((EAJINBFNEIJ == (FDHJDNACICH_o *)0x0) &&
         (EAJINBFNEIJ = PKHLGDMJPMF__PHJLLEGNFPK(AJGHJAGBEKE,DGMNDDFICAK,method_00),
         EAJINBFNEIJ == (FDHJDNACICH_o *)0x0)) || (PGDICFIFJCL == (CNDPAJOLKFN_o *)0x0)) ||
       (JOOCHALEIJC == (CNDPAJOLKFN_o *)0x0)) goto LAB_0329b240;
    fVar4 = (EAJINBFNEIJ->fields).FMPJLBLNHMC;
    fVar5 = (EAJINBFNEIJ->fields).IHEPHBIPLPM;
    fVar6 = (EAJINBFNEIJ->fields).CJDCMKEBBNK;
    OHIILDIGEIF = fVar6 + fVar4 * (JOOCHALEIJC->fields).super.OHHDBINAJCB +
                          fVar5 * (JOOCHALEIJC->fields).super.JOLEIODMLFL;
    fVar6 = fVar6 + fVar4 * (PGDICFIFJCL->fields).super.OHHDBINAJCB +
                    fVar5 * (PGDICFIFJCL->fields).super.JOLEIODMLFL;
    if (((CHOCOAGNFDD < ABS(OHIILDIGEIF)) && (CHOCOAGNFDD < ABS(fVar6))) &&
       (0.0 <= fVar6 * OHIILDIGEIF)) {
      return false;
    }
    if (((FHOGKFAGCJO == (FDHJDNACICH_o *)0x0) &&
        (FHOGKFAGCJO = PKHLGDMJPMF__PHJLLEGNFPK(PGDICFIFJCL,JOOCHALEIJC,method_00),
        FHOGKFAGCJO == (FDHJDNACICH_o *)0x0)) ||
       ((AJGHJAGBEKE == (CNDPAJOLKFN_o *)0x0 || (DGMNDDFICAK == (CNDPAJOLKFN_o *)0x0))))
    goto LAB_0329b240;
    fVar4 = (FHOGKFAGCJO->fields).FMPJLBLNHMC;
    fVar5 = (FHOGKFAGCJO->fields).IHEPHBIPLPM;
    fVar7 = (FHOGKFAGCJO->fields).CJDCMKEBBNK;
    OHIILDIGEIF_00 =
         fVar7 + fVar4 * (DGMNDDFICAK->fields).super.OHHDBINAJCB +
                 fVar5 * (DGMNDDFICAK->fields).super.JOLEIODMLFL;
    fVar7 = fVar7 + fVar4 * (AJGHJAGBEKE->fields).super.OHHDBINAJCB +
                    fVar5 * (AJGHJAGBEKE->fields).super.JOLEIODMLFL;
    if (((CHOCOAGNFDD < ABS(OHIILDIGEIF_00)) && (CHOCOAGNFDD < ABS(fVar7))) &&
       (0.0 <= fVar7 * OHIILDIGEIF_00)) {
      return false;
    }
    if ((0.0 <= fVar6 * OHIILDIGEIF) || (0.0 <= fVar7 * OHIILDIGEIF_00)) {
      bVar3 = PKHLGDMJPMF__JPEDFFKLLFC
                        (fVar6,CHOCOAGNFDD,EAJINBFNEIJ,PGDICFIFJCL,OCLOPJMAGOM,AJGHJAGBEKE,
                         DGMNDDFICAK,method_01);
      pCVar1 = MOEFIFNLCHF;
      pCVar2 = PGDICFIFJCL;
      if ((!bVar3) &&
         (bVar3 = PKHLGDMJPMF__JPEDFFKLLFC
                            (OHIILDIGEIF,CHOCOAGNFDD,EAJINBFNEIJ,JOOCHALEIJC,OCLOPJMAGOM,AJGHJAGBEKE
                             ,DGMNDDFICAK,method_01), pCVar1 = MOEFIFNLCHF, pCVar2 = JOOCHALEIJC,
         !bVar3)) {
        bVar3 = PKHLGDMJPMF__JPEDFFKLLFC
                          (fVar7,CHOCOAGNFDD,FHOGKFAGCJO,AJGHJAGBEKE,OCLOPJMAGOM,PGDICFIFJCL,
                           JOOCHALEIJC,method_01);
        if (bVar3) {
          if (MOEFIFNLCHF == (CNDPAJOLKFN_o *)0x0) goto LAB_0329b240;
          CNDPAJOLKFN__FOOHBJNHOKK(MOEFIFNLCHF,AJGHJAGBEKE,(MethodInfo *)0x0);
          pCVar1 = OCLOPJMAGOM;
          pCVar2 = AJGHJAGBEKE;
        }
        else {
          bVar3 = PKHLGDMJPMF__JPEDFFKLLFC
                            (OHIILDIGEIF_00,CHOCOAGNFDD,FHOGKFAGCJO,DGMNDDFICAK,OCLOPJMAGOM,
                             PGDICFIFJCL,JOOCHALEIJC,method_01);
          if (!bVar3) {
            return false;
          }
          if (MOEFIFNLCHF == (CNDPAJOLKFN_o *)0x0) goto LAB_0329b240;
          CNDPAJOLKFN__FOOHBJNHOKK(MOEFIFNLCHF,DGMNDDFICAK,(MethodInfo *)0x0);
          pCVar1 = OCLOPJMAGOM;
          pCVar2 = DGMNDDFICAK;
        }
      }
    }
    else {
      PHCOHKNFGLE = CNDPAJOLKFN__MPOCFELGHDK(DGMNDDFICAK,AJGHJAGBEKE,(MethodInfo *)0x0);
      if (MOEFIFNLCHF == (CNDPAJOLKFN_o *)0x0) goto LAB_0329b240;
      CNDPAJOLKFN__FOOHBJNHOKK(MOEFIFNLCHF,PHCOHKNFGLE,(MethodInfo *)0x0);
      CNDPAJOLKFN__PGLILPKGILI(MOEFIFNLCHF,fVar7 / (fVar7 - OHIILDIGEIF_00),(MethodInfo *)0x0);
      CNDPAJOLKFN__LFENGGKOJDO(MOEFIFNLCHF,AJGHJAGBEKE,(MethodInfo *)0x0);
    }
  }
  if (pCVar1 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__FOOHBJNHOKK(pCVar1,pCVar2,(MethodInfo *)0x0);
    return true;
  }
LAB_0329b240:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

