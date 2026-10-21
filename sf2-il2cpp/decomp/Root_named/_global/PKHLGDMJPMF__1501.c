// TypeDefIndex 1501
// Namespace: 
// public class PKHLGDMJPMF
// Fields:
//   protected float OHHDBINAJCB; // 0x10
//   protected float JOLEIODMLFL; // 0x14

// ===== public PKHLGDMJPMF LFENGGKOJDO(float IKADKIPIIMD, float OKMABLDHNLJ)  [RVA 0x319AF24]
// PKHLGDMJPMF$$LFENGGKOJDO @ RVA 0x319AF24

PKHLGDMJPMF_o *
PKHLGDMJPMF__LFENGGKOJDO
          (PKHLGDMJPMF_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  
  PVar1.JOLEIODMLFL = (__this->fields).JOLEIODMLFL + OKMABLDHNLJ;
  PVar1.OHHDBINAJCB = (__this->fields).OHHDBINAJCB + IKADKIPIIMD;
  __this->fields = PVar1;
  return __this;
}


// ===== public float CJCIMFBHOHB()  [RVA 0x319AF38]
// PKHLGDMJPMF$$CJCIMFBHOHB @ RVA 0x319AF38

float PKHLGDMJPMF__CJCIMFBHOHB(PKHLGDMJPMF_o *__this,MethodInfo *method)

{
  return (__this->fields).JOLEIODMLFL;
}


// ===== public static bool MAINPDNFMCC(Vector3f PGDICFIFJCL, Vector3f JOOCHALEIJC, float DFAGFABMFGL, Vector3f AJGHJAGBEKE, Vector3f DGMNDDFICAK, float MHCCGPICFPH, Vector3f MOEFIFNLCHF, Vector3f OCLOPJMAGOM, FDHJDNACICH FHOGKFAGCJO, FDHJDNACICH EAJINBFNEIJ)  [RVA 0x319AF40]
// PKHLGDMJPMF$$MAINPDNFMCC @ RVA 0x319AF40

/* WARNING: Type propagation algorithm not settling */

bool PKHLGDMJPMF__MAINPDNFMCC
               (Vector3f_o *PGDICFIFJCL,Vector3f_o *JOOCHALEIJC,float DFAGFABMFGL,
               Vector3f_o *AJGHJAGBEKE,Vector3f_o *DGMNDDFICAK,float MHCCGPICFPH,
               Vector3f_o *MOEFIFNLCHF,Vector3f_o *OCLOPJMAGOM,FDHJDNACICH_o *FHOGKFAGCJO,
               FDHJDNACICH_o *EAJINBFNEIJ,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  Vector3f_o *pCVar2;
  bool bVar3;
  Vector3f_o *PHCOHKNFGLE;
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
         EAJINBFNEIJ == (FDHJDNACICH_o *)0x0)) || (PGDICFIFJCL == (Vector3f_o *)0x0)) ||
       (JOOCHALEIJC == (Vector3f_o *)0x0)) goto LAB_0329b240;
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
       ((AJGHJAGBEKE == (Vector3f_o *)0x0 || (DGMNDDFICAK == (Vector3f_o *)0x0))))
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
          if (MOEFIFNLCHF == (Vector3f_o *)0x0) goto LAB_0329b240;
          Vector3f__FOOHBJNHOKK(MOEFIFNLCHF,AJGHJAGBEKE,(MethodInfo *)0x0);
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
          if (MOEFIFNLCHF == (Vector3f_o *)0x0) goto LAB_0329b240;
          Vector3f__FOOHBJNHOKK(MOEFIFNLCHF,DGMNDDFICAK,(MethodInfo *)0x0);
          pCVar1 = OCLOPJMAGOM;
          pCVar2 = DGMNDDFICAK;
        }
      }
    }
    else {
      PHCOHKNFGLE = Vector3f__MPOCFELGHDK(DGMNDDFICAK,AJGHJAGBEKE,(MethodInfo *)0x0);
      if (MOEFIFNLCHF == (Vector3f_o *)0x0) goto LAB_0329b240;
      Vector3f__FOOHBJNHOKK(MOEFIFNLCHF,PHCOHKNFGLE,(MethodInfo *)0x0);
      Vector3f__PGLILPKGILI(MOEFIFNLCHF,fVar7 / (fVar7 - OHIILDIGEIF_00),(MethodInfo *)0x0);
      Vector3f__LFENGGKOJDO(MOEFIFNLCHF,AJGHJAGBEKE,(MethodInfo *)0x0);
    }
  }
  if (pCVar1 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(pCVar1,pCVar2,(MethodInfo *)0x0);
    return true;
  }
LAB_0329b240:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float EBHMOCBHAFJ(PKHLGDMJPMF FMPJLBLNHMC, PKHLGDMJPMF IHEPHBIPLPM)  [RVA 0x319B648]
// PKHLGDMJPMF$$EBHMOCBHAFJ @ RVA 0x319B648

float PKHLGDMJPMF__EBHMOCBHAFJ
                (PKHLGDMJPMF_o *FMPJLBLNHMC,PKHLGDMJPMF_o *IHEPHBIPLPM,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = PKHLGDMJPMF__GJIBIJANHPO(FMPJLBLNHMC,IHEPHBIPLPM,method);
  return fVar1 * 57.29578;
}


// ===== public PKHLGDMJPMF LOPALOLIHBH(PKHLGDMJPMF FKAIGPBIAHN)  [RVA 0x319B6BC]
// PKHLGDMJPMF$$LOPALOLIHBH @ RVA 0x319B6BC

PKHLGDMJPMF_o *
PKHLGDMJPMF__LOPALOLIHBH(PKHLGDMJPMF_o *__this,PKHLGDMJPMF_o *FKAIGPBIAHN,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  
  if (FKAIGPBIAHN != (PKHLGDMJPMF_o *)0x0) {
    PVar1.OHHDBINAJCB = (__this->fields).OHHDBINAJCB - (FKAIGPBIAHN->fields).OHHDBINAJCB;
    PVar1.JOLEIODMLFL = (__this->fields).JOLEIODMLFL - (FKAIGPBIAHN->fields).JOLEIODMLFL;
    __this->fields = PVar1;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void PHJLLEGNFPK(Vector3f FCPALKBOIFD, Vector3f KMCNNACKBFO, FDHJDNACICH NFNEMDPDIDP)  [RVA 0x319B6E0]
// PKHLGDMJPMF$$PHJLLEGNFPK @ RVA 0x319B6E0

void PKHLGDMJPMF__PHJLLEGNFPK
               (Vector3f_o *FCPALKBOIFD,Vector3f_o *KMCNNACKBFO,FDHJDNACICH_o *NFNEMDPDIDP,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = PKHLGDMJPMF__PAMPGOGMIJN
                    (FCPALKBOIFD,(PKHLGDMJPMF_o *)KMCNNACKBFO,(MethodInfo *)NFNEMDPDIDP);
  if (((FCPALKBOIFD != (Vector3f_o *)0x0) && (KMCNNACKBFO != (Vector3f_o *)0x0)) &&
     (NFNEMDPDIDP != (FDHJDNACICH_o *)0x0)) {
    fVar2 = (FCPALKBOIFD->fields).super.JOLEIODMLFL;
    fVar3 = (fVar2 - (KMCNNACKBFO->fields).super.JOLEIODMLFL) / fVar1;
    (NFNEMDPDIDP->fields).FMPJLBLNHMC = fVar3;
    fVar4 = (FCPALKBOIFD->fields).super.OHHDBINAJCB;
    fVar1 = ((KMCNNACKBFO->fields).super.OHHDBINAJCB - fVar4) / fVar1;
    (NFNEMDPDIDP->fields).IHEPHBIPLPM = fVar1;
    (NFNEMDPDIDP->fields).CJDCMKEBBNK = -(fVar3 * fVar4 + fVar2 * fVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float PAMPGOGMIJN(Vector3f CIBIKDNNBAM, Vector3f IGCGOHHCMHD)  [RVA 0x319B74C]
// PKHLGDMJPMF$$PAMPGOGMIJN @ RVA 0x319B74C

float PKHLGDMJPMF__PAMPGOGMIJN
                (Vector3f_o *CIBIKDNNBAM,Vector3f_o *IGCGOHHCMHD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((CIBIKDNNBAM != (Vector3f_o *)0x0) && (IGCGOHHCMHD != (Vector3f_o *)0x0)) {
    fVar1 = Util__CHHIJKJEKPN((CIBIKDNNBAM->fields).super.OHHDBINAJCB -
                              (IGCGOHHCMHD->fields).super.OHHDBINAJCB,(MethodInfo *)0x0);
    fVar2 = Util__CHHIJKJEKPN((CIBIKDNNBAM->fields).super.JOLEIODMLFL -
                              (IGCGOHHCMHD->fields).super.JOLEIODMLFL,(MethodInfo *)0x0);
    return SQRT(fVar1 + fVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(Vector2 PHCOHKNFGLE)  [RVA 0x319B7B4]
// PKHLGDMJPMF$$.ctor @ RVA 0x319B7B4

void PKHLGDMJPMF___ctor(PKHLGDMJPMF_o *__this,UnityEngine_Vector2_o PHCOHKNFGLE,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).OHHDBINAJCB = PHCOHKNFGLE.fields.x;
  (__this->fields).JOLEIODMLFL = PHCOHKNFGLE.fields.y;
  return;
}


// ===== public void BLOELEJPPDM(float CJNHFNHJHPE)  [RVA 0x319B7E0]
// PKHLGDMJPMF$$BLOELEJPPDM @ RVA 0x319B7E0

void PKHLGDMJPMF__BLOELEJPPDM(PKHLGDMJPMF_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OHHDBINAJCB = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor(Vector3f LGEBGFABKEA)  [RVA 0x319B7E8]
// PKHLGDMJPMF$$.ctor @ RVA 0x319B7E8

void PKHLGDMJPMF___ctor(PKHLGDMJPMF_o *__this,Vector3f_o *LGEBGFABKEA,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (LGEBGFABKEA != (Vector3f_o *)0x0) {
    __this->fields = (LGEBGFABKEA->fields).super;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float GJIBIJANHPO(PKHLGDMJPMF FMPJLBLNHMC, PKHLGDMJPMF IHEPHBIPLPM)  [RVA 0x319B664]
// PKHLGDMJPMF$$GJIBIJANHPO @ RVA 0x319B664

float PKHLGDMJPMF__GJIBIJANHPO
                (PKHLGDMJPMF_o *FMPJLBLNHMC,PKHLGDMJPMF_o *IHEPHBIPLPM,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((FMPJLBLNHMC != (PKHLGDMJPMF_o *)0x0) && (IHEPHBIPLPM != (PKHLGDMJPMF_o *)0x0)) {
    fVar1 = (FMPJLBLNHMC->fields).OHHDBINAJCB;
    fVar5 = (FMPJLBLNHMC->fields).JOLEIODMLFL;
    fVar3 = (IHEPHBIPLPM->fields).OHHDBINAJCB;
    fVar2 = (IHEPHBIPLPM->fields).JOLEIODMLFL;
    fVar4 = fVar1 * fVar2 - fVar5 * fVar3;
    fVar1 = fVar2 * fVar5 + fVar1 * fVar3;
    fVar2 = 1.0 / SQRT(fVar4 * fVar4 + fVar1 * fVar1);
    fVar1 = atan2f(fVar4 * fVar2,fVar1 * fVar2);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FOOHBJNHOKK(PKHLGDMJPMF FKAIGPBIAHN)  [RVA 0x319B81C]
// PKHLGDMJPMF$$FOOHBJNHOKK @ RVA 0x319B81C

void PKHLGDMJPMF__FOOHBJNHOKK(PKHLGDMJPMF_o *__this,PKHLGDMJPMF_o *FKAIGPBIAHN,MethodInfo *method)

{
  if (FKAIGPBIAHN != (PKHLGDMJPMF_o *)0x0) {
    __this->fields = FKAIGPBIAHN->fields;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PKHLGDMJPMF PGLILPKGILI(float OOGPLJBADCD)  [RVA 0x319B838]
// PKHLGDMJPMF$$PGLILPKGILI @ RVA 0x319B838

PKHLGDMJPMF_o * PKHLGDMJPMF__PGLILPKGILI(PKHLGDMJPMF_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  
  PVar1.JOLEIODMLFL = (__this->fields).JOLEIODMLFL * OOGPLJBADCD;
  PVar1.OHHDBINAJCB = (__this->fields).OHHDBINAJCB * OOGPLJBADCD;
  __this->fields = PVar1;
  return __this;
}


// ===== public PKHLGDMJPMF LFENGGKOJDO(PKHLGDMJPMF FKAIGPBIAHN)  [RVA 0x319B848]
// PKHLGDMJPMF$$LFENGGKOJDO @ RVA 0x319B848

PKHLGDMJPMF_o *
PKHLGDMJPMF__LFENGGKOJDO(PKHLGDMJPMF_o *__this,PKHLGDMJPMF_o *FKAIGPBIAHN,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  
  if (FKAIGPBIAHN != (PKHLGDMJPMF_o *)0x0) {
    PVar1.OHHDBINAJCB = (__this->fields).OHHDBINAJCB + (FKAIGPBIAHN->fields).OHHDBINAJCB;
    PVar1.JOLEIODMLFL = (__this->fields).JOLEIODMLFL + (FKAIGPBIAHN->fields).JOLEIODMLFL;
    __this->fields = PVar1;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool LJOKBIDEOMJ(PKHLGDMJPMF COKCFOBBGLI, PKHLGDMJPMF JEEAGFAHKJF)  [RVA 0x319B86C]
// PKHLGDMJPMF$$LJOKBIDEOMJ @ RVA 0x319B86C

bool PKHLGDMJPMF__LJOKBIDEOMJ
               (PKHLGDMJPMF_o *COKCFOBBGLI,PKHLGDMJPMF_o *JEEAGFAHKJF,MethodInfo *method)

{
  bool bVar1;
  
  if (COKCFOBBGLI != JEEAGFAHKJF) {
    bVar1 = true;
    if ((COKCFOBBGLI != (PKHLGDMJPMF_o *)0x0) && (JEEAGFAHKJF != (PKHLGDMJPMF_o *)0x0)) {
      bVar1 = 1e-10 <= ABS((COKCFOBBGLI->fields).OHHDBINAJCB - (JEEAGFAHKJF->fields).OHHDBINAJCB) +
                       ABS((COKCFOBBGLI->fields).JOLEIODMLFL - (JEEAGFAHKJF->fields).JOLEIODMLFL);
    }
    return bVar1;
  }
  return false;
}


// ===== public static PKHLGDMJPMF MPOCFELGHDK(PKHLGDMJPMF COKCFOBBGLI, PKHLGDMJPMF JEEAGFAHKJF)  [RVA 0x319B8F4]
// PKHLGDMJPMF$$MPOCFELGHDK @ RVA 0x319B8F4

PKHLGDMJPMF_o *
PKHLGDMJPMF__MPOCFELGHDK(PKHLGDMJPMF_o *COKCFOBBGLI,PKHLGDMJPMF_o *JEEAGFAHKJF,MethodInfo *method)

{
  PKHLGDMJPMF_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  if ((DAT_04566aac & 1) == 0) {
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_04566aac = 1;
  }
  if ((COKCFOBBGLI != (PKHLGDMJPMF_o *)0x0) && (JEEAGFAHKJF != (PKHLGDMJPMF_o *)0x0)) {
    PVar1 = COKCFOBBGLI->fields;
    PVar2 = JEEAGFAHKJF->fields;
    __this = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).OHHDBINAJCB = PVar1.OHHDBINAJCB - PVar2.OHHDBINAJCB;
    (__this->fields).JOLEIODMLFL = PVar1.JOLEIODMLFL - PVar2.JOLEIODMLFL;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float OCGODEHEOBI(PKHLGDMJPMF FMPJLBLNHMC, PKHLGDMJPMF IHEPHBIPLPM)  [RVA 0x319B9A0]
// PKHLGDMJPMF$$OCGODEHEOBI @ RVA 0x319B9A0

float PKHLGDMJPMF__OCGODEHEOBI
                (PKHLGDMJPMF_o *FMPJLBLNHMC,PKHLGDMJPMF_o *IHEPHBIPLPM,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((IHEPHBIPLPM != (PKHLGDMJPMF_o *)0x0) && (FMPJLBLNHMC != (PKHLGDMJPMF_o *)0x0)) {
    fVar1 = Util__CHHIJKJEKPN((IHEPHBIPLPM->fields).OHHDBINAJCB - (FMPJLBLNHMC->fields).OHHDBINAJCB,
                              (MethodInfo *)0x0);
    fVar2 = Util__CHHIJKJEKPN((IHEPHBIPLPM->fields).JOLEIODMLFL - (FMPJLBLNHMC->fields).JOLEIODMLFL,
                              (MethodInfo *)0x0);
    return fVar1 + fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AHIPAMALCCN(int GJAMCENHFKO)  [RVA 0x319BA00]
// PKHLGDMJPMF$$AHIPAMALCCN @ RVA 0x319BA00

void PKHLGDMJPMF__AHIPAMALCCN(PKHLGDMJPMF_o *__this,int32_t GJAMCENHFKO,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  
  fVar2 = (float)GJAMCENHFKO;
  PVar1.OHHDBINAJCB = (float)(int)((__this->fields).OHHDBINAJCB * fVar2 + 0.5) / fVar2;
  PVar1.JOLEIODMLFL = (float)(int)((__this->fields).JOLEIODMLFL * fVar2 + 0.5) / fVar2;
  __this->fields = PVar1;
  return;
}


// ===== public static float PAMPGOGMIJN(PKHLGDMJPMF CIBIKDNNBAM, PKHLGDMJPMF IGCGOHHCMHD)  [RVA 0x319BA40]
// PKHLGDMJPMF$$PAMPGOGMIJN @ RVA 0x319BA40

float PKHLGDMJPMF__PAMPGOGMIJN
                (PKHLGDMJPMF_o *CIBIKDNNBAM,PKHLGDMJPMF_o *IGCGOHHCMHD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((CIBIKDNNBAM != (PKHLGDMJPMF_o *)0x0) && (IGCGOHHCMHD != (PKHLGDMJPMF_o *)0x0)) {
    fVar1 = Util__CHHIJKJEKPN((CIBIKDNNBAM->fields).OHHDBINAJCB - (IGCGOHHCMHD->fields).OHHDBINAJCB,
                              (MethodInfo *)0x0);
    fVar2 = Util__CHHIJKJEKPN((CIBIKDNNBAM->fields).JOLEIODMLFL - (IGCGOHHCMHD->fields).JOLEIODMLFL,
                              (MethodInfo *)0x0);
    return SQRT(fVar1 + fVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector3 ALBJPLAPOBO(PKHLGDMJPMF PHCOHKNFGLE)  [RVA 0x319BAA4]
// PKHLGDMJPMF$$ALBJPLAPOBO @ RVA 0x319BAA4

UnityEngine_Vector3_o PKHLGDMJPMF__ALBJPLAPOBO(PKHLGDMJPMF_o *PHCOHKNFGLE,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (PHCOHKNFGLE != (PKHLGDMJPMF_o *)0x0) {
    UVar1.fields.z = 0.0;
    UVar1.fields.x = (PHCOHKNFGLE->fields).OHHDBINAJCB;
    UVar1.fields.y = (PHCOHKNFGLE->fields).JOLEIODMLFL;
    return (UnityEngine_Vector3_o)UVar1.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float AHIPAMALCCN(float JAICMIMBIOA, float GFMNKEJDJFD)  [RVA 0x319BA28]
// PKHLGDMJPMF$$AHIPAMALCCN @ RVA 0x319BA28

float PKHLGDMJPMF__AHIPAMALCCN(float JAICMIMBIOA,float GFMNKEJDJFD,MethodInfo *method)

{
  return (float)(int)(JAICMIMBIOA * GFMNKEJDJFD + 0.5) / GFMNKEJDJFD;
}


// ===== public static bool GKHCKDAOAOM(Vector3f COKIMPJEFMI, Vector3f IALLNODEFEG, Vector3f JBAEAMDNPFF, Vector3f OKDIHBHNFMA, Vector3f HPACPFLKHPK)  [RVA 0x319B244]
// PKHLGDMJPMF$$GKHCKDAOAOM @ RVA 0x319B244

/* WARNING: Type propagation algorithm not settling */

bool PKHLGDMJPMF__GKHCKDAOAOM
               (Vector3f_o *COKIMPJEFMI,Vector3f_o *IALLNODEFEG,Vector3f_o *JBAEAMDNPFF,
               Vector3f_o *OKDIHBHNFMA,Vector3f_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  PKHLGDMJPMF_Fields PVar3;
  float fVar4;
  PKHLGDMJPMF_Fields PVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((COKIMPJEFMI != (Vector3f_o *)0x0) && (IALLNODEFEG != (Vector3f_o *)0x0)) {
    bVar1 = Util__JFJCDAJGFKD((COKIMPJEFMI->fields).super.OHHDBINAJCB,
                              (IALLNODEFEG->fields).super.OHHDBINAJCB,1e-10,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = Util__JFJCDAJGFKD((COKIMPJEFMI->fields).super.JOLEIODMLFL,
                                  (IALLNODEFEG->fields).super.JOLEIODMLFL,1e-10,(MethodInfo *)0x0),
       bVar1)) {
      return false;
    }
    if ((JBAEAMDNPFF != (Vector3f_o *)0x0) && (OKDIHBHNFMA != (Vector3f_o *)0x0)) {
      bVar1 = Util__JFJCDAJGFKD((JBAEAMDNPFF->fields).super.OHHDBINAJCB,
                                (OKDIHBHNFMA->fields).super.OHHDBINAJCB,1e-10,(MethodInfo *)0x0);
      if ((bVar1) &&
         (bVar1 = Util__JFJCDAJGFKD((JBAEAMDNPFF->fields).super.JOLEIODMLFL,
                                    (OKDIHBHNFMA->fields).super.JOLEIODMLFL,1e-10,(MethodInfo *)0x0)
         , bVar1)) {
        return false;
      }
      fVar6 = (COKIMPJEFMI->fields).super.OHHDBINAJCB;
      fVar7 = (COKIMPJEFMI->fields).super.JOLEIODMLFL;
      fVar10 = (JBAEAMDNPFF->fields).super.OHHDBINAJCB;
      fVar11 = (JBAEAMDNPFF->fields).super.JOLEIODMLFL;
      fVar2 = (IALLNODEFEG->fields).super.OHHDBINAJCB - fVar6;
      fVar4 = (IALLNODEFEG->fields).super.JOLEIODMLFL - fVar7;
      fVar8 = (OKDIHBHNFMA->fields).super.OHHDBINAJCB - fVar10;
      fVar9 = (OKDIHBHNFMA->fields).super.JOLEIODMLFL - fVar11;
      fVar6 = fVar6 - fVar10;
      fVar7 = fVar7 - fVar11;
      fVar10 = fVar2 * fVar9 - fVar4 * fVar8;
      fVar4 = fVar2 * fVar7 - fVar4 * fVar6;
      fVar2 = fVar8 * fVar7 - fVar6 * fVar9;
      bVar1 = Util__KEJBDHBDGNI(fVar10,1e-10,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = Util__KEJBDHBDGNI(fVar2,1e-10,(MethodInfo *)0x0);
        if ((!bVar1) && (bVar1 = Util__KEJBDHBDGNI(fVar4,1e-10,(MethodInfo *)0x0), !bVar1)) {
          return false;
        }
        fVar9 = (COKIMPJEFMI->fields).super.OHHDBINAJCB;
        fVar8 = (IALLNODEFEG->fields).super.OHHDBINAJCB;
        fVar7 = (JBAEAMDNPFF->fields).super.OHHDBINAJCB;
        fVar10 = (OKDIHBHNFMA->fields).super.OHHDBINAJCB;
        fVar6 = fVar9;
        if (fVar8 <= fVar9) {
          fVar6 = fVar8;
        }
        fVar11 = fVar10;
        if (fVar10 <= fVar7) {
          fVar11 = fVar7;
        }
        if (fVar11 < fVar6) {
          return false;
        }
        if (fVar10 <= fVar7) {
          fVar7 = fVar10;
        }
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        if (fVar8 < fVar7) {
          return false;
        }
        fVar9 = (COKIMPJEFMI->fields).super.JOLEIODMLFL;
        fVar8 = (IALLNODEFEG->fields).super.JOLEIODMLFL;
        fVar7 = (JBAEAMDNPFF->fields).super.JOLEIODMLFL;
        fVar10 = (OKDIHBHNFMA->fields).super.JOLEIODMLFL;
        fVar6 = fVar9;
        if (fVar8 <= fVar9) {
          fVar6 = fVar8;
        }
        fVar11 = fVar10;
        if (fVar10 <= fVar7) {
          fVar11 = fVar7;
        }
        if (fVar11 < fVar6) {
          return false;
        }
        if (fVar10 <= fVar7) {
          fVar7 = fVar10;
        }
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        fVar10 = 1.0;
        if (fVar8 < fVar7) {
          return false;
        }
      }
      fVar2 = fVar2 / fVar10;
      bVar1 = Util__INDMHFLELNN(fVar2,0.0,1.0,(MethodInfo *)0x0);
      if ((!bVar1) || (bVar1 = Util__INDMHFLELNN(fVar4 / fVar10,0.0,1.0,(MethodInfo *)0x0), !bVar1))
      {
        return false;
      }
      if (HPACPFLKHPK != (Vector3f_o *)0x0) {
        fVar4 = (COKIMPJEFMI->fields).super.OHHDBINAJCB;
        PVar5 = (IALLNODEFEG->fields).super;
        fVar6 = (COKIMPJEFMI->fields).super.JOLEIODMLFL;
        PVar3.OHHDBINAJCB = fVar4 + (PVar5.OHHDBINAJCB - fVar4) * fVar2;
        PVar3.JOLEIODMLFL = fVar6 + (PVar5.JOLEIODMLFL - fVar6) * fVar2;
        (HPACPFLKHPK->fields).super = PVar3;
        return true;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool NOLECIOODNG(Vector3f COKIMPJEFMI, Vector3f IALLNODEFEG, Vector3f JBAEAMDNPFF, Vector3f OKDIHBHNFMA, Vector3f HPACPFLKHPK)  [RVA 0x319BAC0]
// PKHLGDMJPMF$$NOLECIOODNG @ RVA 0x319BAC0

/* WARNING: Type propagation algorithm not settling */

bool PKHLGDMJPMF__NOLECIOODNG
               (Vector3f_o *COKIMPJEFMI,Vector3f_o *IALLNODEFEG,Vector3f_o *JBAEAMDNPFF,
               Vector3f_o *OKDIHBHNFMA,Vector3f_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  PKHLGDMJPMF_Fields PVar3;
  float fVar4;
  PKHLGDMJPMF_Fields PVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((COKIMPJEFMI != (Vector3f_o *)0x0) && (IALLNODEFEG != (Vector3f_o *)0x0)) {
    bVar1 = Util__JFJCDAJGFKD((COKIMPJEFMI->fields).super.OHHDBINAJCB,
                              (IALLNODEFEG->fields).super.OHHDBINAJCB,1e-10,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = Util__JFJCDAJGFKD((COKIMPJEFMI->fields).super.JOLEIODMLFL,
                                  (IALLNODEFEG->fields).super.JOLEIODMLFL,1e-10,(MethodInfo *)0x0),
       bVar1)) {
      return false;
    }
    if ((JBAEAMDNPFF != (Vector3f_o *)0x0) && (OKDIHBHNFMA != (Vector3f_o *)0x0)) {
      bVar1 = Util__JFJCDAJGFKD((JBAEAMDNPFF->fields).super.OHHDBINAJCB,
                                (OKDIHBHNFMA->fields).super.OHHDBINAJCB,1e-10,(MethodInfo *)0x0);
      if ((bVar1) &&
         (bVar1 = Util__JFJCDAJGFKD((JBAEAMDNPFF->fields).super.JOLEIODMLFL,
                                    (OKDIHBHNFMA->fields).super.JOLEIODMLFL,1e-10,(MethodInfo *)0x0)
         , bVar1)) {
        return false;
      }
      fVar6 = (COKIMPJEFMI->fields).super.OHHDBINAJCB;
      fVar7 = (COKIMPJEFMI->fields).super.JOLEIODMLFL;
      fVar10 = (JBAEAMDNPFF->fields).super.OHHDBINAJCB;
      fVar11 = (JBAEAMDNPFF->fields).super.JOLEIODMLFL;
      fVar2 = (IALLNODEFEG->fields).super.OHHDBINAJCB - fVar6;
      fVar4 = (IALLNODEFEG->fields).super.JOLEIODMLFL - fVar7;
      fVar8 = (OKDIHBHNFMA->fields).super.OHHDBINAJCB - fVar10;
      fVar9 = (OKDIHBHNFMA->fields).super.JOLEIODMLFL - fVar11;
      fVar6 = fVar6 - fVar10;
      fVar7 = fVar7 - fVar11;
      fVar10 = fVar2 * fVar9 - fVar4 * fVar8;
      fVar4 = fVar2 * fVar7 - fVar4 * fVar6;
      fVar2 = fVar8 * fVar7 - fVar6 * fVar9;
      bVar1 = Util__KEJBDHBDGNI(fVar10,1e-10,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = Util__KEJBDHBDGNI(fVar2,1e-10,(MethodInfo *)0x0);
        if ((!bVar1) && (bVar1 = Util__KEJBDHBDGNI(fVar4,1e-10,(MethodInfo *)0x0), !bVar1)) {
          return false;
        }
        fVar9 = (COKIMPJEFMI->fields).super.OHHDBINAJCB;
        fVar8 = (IALLNODEFEG->fields).super.OHHDBINAJCB;
        fVar7 = (JBAEAMDNPFF->fields).super.OHHDBINAJCB;
        fVar10 = (OKDIHBHNFMA->fields).super.OHHDBINAJCB;
        fVar6 = fVar9;
        if (fVar8 <= fVar9) {
          fVar6 = fVar8;
        }
        fVar11 = fVar10;
        if (fVar10 <= fVar7) {
          fVar11 = fVar7;
        }
        if (fVar11 < fVar6) {
          return false;
        }
        if (fVar10 <= fVar7) {
          fVar7 = fVar10;
        }
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        if (fVar8 < fVar7) {
          return false;
        }
                    /* try { // try from 0329bc2c to 0339bccf has its CatchHandler @ 0329bc2c
                       catch() { ... } // from try @ 0329bc2c with catch @ 0329bc2c
                       catch() { ... } // from try @ 0329bd40 with catch @ 0329bc2c
                       catch() { ... } // from try @ 0329bd78 with catch @ 0329bc2c
                       catch() { ... } // from try @ 0329bda4 with catch @ 0329bc2c
                       catch() { ... } // from try @ 0329bdd4 with catch @ 0329bc2c */
        fVar9 = (COKIMPJEFMI->fields).super.JOLEIODMLFL;
        fVar8 = (IALLNODEFEG->fields).super.JOLEIODMLFL;
        fVar7 = (JBAEAMDNPFF->fields).super.JOLEIODMLFL;
        fVar10 = (OKDIHBHNFMA->fields).super.JOLEIODMLFL;
        fVar6 = fVar9;
        if (fVar8 <= fVar9) {
          fVar6 = fVar8;
        }
        fVar11 = fVar10;
        if (fVar10 <= fVar7) {
          fVar11 = fVar7;
        }
        if (fVar11 < fVar6) {
          return false;
        }
        if (fVar10 <= fVar7) {
          fVar7 = fVar10;
        }
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        fVar10 = 1.0;
        if (fVar8 < fVar7) {
          return false;
        }
      }
      fVar2 = fVar2 / fVar10;
      bVar1 = Util__INDMHFLELNN(fVar2,0.0,1.0,(MethodInfo *)0x0);
      if ((!bVar1) || (bVar1 = Util__INDMHFLELNN(fVar4 / fVar10,0.0,1.0,(MethodInfo *)0x0), !bVar1))
      {
        return false;
      }
      if (HPACPFLKHPK != (Vector3f_o *)0x0) {
        fVar4 = (COKIMPJEFMI->fields).super.OHHDBINAJCB;
        PVar5 = (IALLNODEFEG->fields).super;
        fVar6 = (COKIMPJEFMI->fields).super.JOLEIODMLFL;
        PVar3.OHHDBINAJCB = fVar4 + (PVar5.OHHDBINAJCB - fVar4) * fVar2;
        PVar3.JOLEIODMLFL = fVar6 + (PVar5.JOLEIODMLFL - fVar6) * fVar2;
        (HPACPFLKHPK->fields).super = PVar3;
        return true;
                    /* try { // try from 0329bcd0 to 0339bcd7 has its CatchHandler @ 0329bd80 */
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x319BCF8]
// PKHLGDMJPMF$$ToString @ RVA 0x319BCF8

System_String_o * PKHLGDMJPMF__ToString(PKHLGDMJPMF_o *__this,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  float local_28;
  float local_24;
  
                    /* try { // try from 0329bd14 to 0339bd3f has its CatchHandler @ 0329bd84 */
  if ((DAT_04566aad & 1) == 0) {
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_15562/*"[Point: X={0}, Y={1}]"*/);
                    /* try { // try from 0329bd40 to 0339bd6f has its CatchHandler @ 0329bc2c */
    DAT_04566aad = 1;
  }
  local_24 = (__this->fields).OHHDBINAJCB;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
  local_28 = (__this->fields).JOLEIODMLFL;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_28);
                    /* try { // try from 0329bd70 to 0339bd77 has its CatchHandler @ 0329bd7c */
                    /* try { // try from 0329bd78 to 0339bd9f has its CatchHandler @ 0329bc2c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0329bd70 with catch @ 0329bd7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0329bcd0 with catch @ 0329bd80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0329bd14 with catch @ 0329bd84
                        */
  pSVar1 = System_String__Format(StringLiteral_15562/*"[Point: X={0}, Y={1}]"*/,arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string MDHKFFGDOMI()  [RVA 0x319BD98]
// PKHLGDMJPMF$$MDHKFFGDOMI @ RVA 0x319BD98

System_String_o * PKHLGDMJPMF__MDHKFFGDOMI(PKHLGDMJPMF_o *__this,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  float local_28;
  float local_24;
  
                    /* try { // try from 0329bda0 to 0339bda3 has its CatchHandler @ 0329bdc4 */
                    /* try { // try from 0329bda4 to 0339bdcb has its CatchHandler @ 0329bc2c */
  if ((DAT_04566aae & 1) == 0) {
                    /* catch() { ... } // from try @ 0329bda0 with catch @ 0329bdc4 */
                    /* try { // try from 0329bdcc to 0339bdd3 has its CatchHandler @ 0329bde8 */
    FUN_01bab630(&float_TypeInfo);
                    /* try { // try from 0329bdd4 to 0339bddf has its CatchHandler @ 0329bc2c */
    FUN_01bab630(&StringLiteral_15634/*"[{0} {1}]"*/);
                    /* try { // try from 0329bde0 to 0339bde7 has its CatchHandler @ 0329bde8 */
    DAT_04566aae = 1;
  }
  local_24 = (__this->fields).OHHDBINAJCB;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0329bdcc with catch @ 0329bde8
                       catch(type#2 @ 00000000) { ... } // from try @ 0329bde0 with catch @ 0329bde8
                        */
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
  local_28 = (__this->fields).JOLEIODMLFL;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_28);
  pSVar1 = System_String__Format(StringLiteral_15634/*"[{0} {1}]"*/,arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void BMEDMBPNHLC(float CJNHFNHJHPE)  [RVA 0x319BE38]
// PKHLGDMJPMF$$BMEDMBPNHLC @ RVA 0x319BE38

void PKHLGDMJPMF__BMEDMBPNHLC(PKHLGDMJPMF_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JOLEIODMLFL = CJNHFNHJHPE;
  return;
}


// ===== public static bool LCAEEPKOHMN(PKHLGDMJPMF INOIMHOFGBG, PKHLGDMJPMF ACNOGKFFDEG)  [RVA 0x319B8B0]
// PKHLGDMJPMF$$LCAEEPKOHMN @ RVA 0x319B8B0

bool PKHLGDMJPMF__LCAEEPKOHMN
               (PKHLGDMJPMF_o *INOIMHOFGBG,PKHLGDMJPMF_o *ACNOGKFFDEG,MethodInfo *method)

{
  bool bVar1;
  
  if (INOIMHOFGBG != ACNOGKFFDEG) {
    bVar1 = false;
    if ((INOIMHOFGBG != (PKHLGDMJPMF_o *)0x0) && (ACNOGKFFDEG != (PKHLGDMJPMF_o *)0x0)) {
      bVar1 = ABS((INOIMHOFGBG->fields).OHHDBINAJCB - (ACNOGKFFDEG->fields).OHHDBINAJCB) +
              ABS((INOIMHOFGBG->fields).JOLEIODMLFL - (ACNOGKFFDEG->fields).JOLEIODMLFL) < 1e-10;
    }
    return bVar1;
  }
  return true;
}


// ===== public static bool JPEDFFKLLFC(float OHIILDIGEIF, float DAHHDNFLMJO, FDHJDNACICH NFNEMDPDIDP, Vector3f EKEMKOCPHPO, Vector3f DHDPEBOFPPN, Vector3f CKCOLJLFJDB, Vector3f DEDNHOELFOD)  [RVA 0x319B4F0]
// PKHLGDMJPMF$$JPEDFFKLLFC @ RVA 0x319B4F0

bool PKHLGDMJPMF__JPEDFFKLLFC
               (float OHIILDIGEIF,float DAHHDNFLMJO,FDHJDNACICH_o *NFNEMDPDIDP,
               Vector3f_o *EKEMKOCPHPO,Vector3f_o *DHDPEBOFPPN,Vector3f_o *CKCOLJLFJDB,
               Vector3f_o *DEDNHOELFOD,MethodInfo *method)

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
  if (((EKEMKOCPHPO != (Vector3f_o *)0x0) && (NFNEMDPDIDP != (FDHJDNACICH_o *)0x0)) &&
     (DHDPEBOFPPN != (Vector3f_o *)0x0)) {
    uVar5 = (NFNEMDPDIDP->fields).FMPJLBLNHMC;
    uVar6 = (NFNEMDPDIDP->fields).IHEPHBIPLPM;
    fVar3 = (EKEMKOCPHPO->fields).super.OHHDBINAJCB - (float)uVar5 * OHIILDIGEIF;
    PVar1.JOLEIODMLFL = (EKEMKOCPHPO->fields).super.JOLEIODMLFL - (float)uVar6 * OHIILDIGEIF;
    PVar1.OHHDBINAJCB = fVar3;
    (DHDPEBOFPPN->fields).super = PVar1;
    if ((DEDNHOELFOD != (Vector3f_o *)0x0) && (CKCOLJLFJDB != (Vector3f_o *)0x0)) {
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


// ===== public float DAKDBGMHIAL()  [RVA 0x319BE64]
// PKHLGDMJPMF$$DAKDBGMHIAL @ RVA 0x319BE64

float PKHLGDMJPMF__DAKDBGMHIAL(PKHLGDMJPMF_o *__this,MethodInfo *method)

{
  return (__this->fields).OHHDBINAJCB;
}


// ===== public void MKJJBMJALFE()  [RVA 0x319BE6C]
// PKHLGDMJPMF$$MKJJBMJALFE @ RVA 0x319BE6C

void PKHLGDMJPMF__MKJJBMJALFE(PKHLGDMJPMF_o *__this,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  
  PVar1.OHHDBINAJCB = (float)(int)((__this->fields).OHHDBINAJCB + 0.5);
  PVar1.JOLEIODMLFL = (float)(int)((__this->fields).JOLEIODMLFL + 0.5);
  __this->fields = PVar1;
  return;
}


// ===== public static float PAMPGOGMIJN(Vector3f CIBIKDNNBAM, PKHLGDMJPMF IGCGOHHCMHD)  [RVA 0x319B750]
// PKHLGDMJPMF$$PAMPGOGMIJN @ RVA 0x319B750

float PKHLGDMJPMF__PAMPGOGMIJN
                (Vector3f_o *CIBIKDNNBAM,PKHLGDMJPMF_o *IGCGOHHCMHD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((CIBIKDNNBAM != (Vector3f_o *)0x0) && (IGCGOHHCMHD != (PKHLGDMJPMF_o *)0x0)) {
    fVar1 = Util__CHHIJKJEKPN((CIBIKDNNBAM->fields).super.OHHDBINAJCB -
                              (IGCGOHHCMHD->fields).OHHDBINAJCB,(MethodInfo *)0x0);
    fVar2 = Util__CHHIJKJEKPN((CIBIKDNNBAM->fields).super.JOLEIODMLFL -
                              (IGCGOHHCMHD->fields).JOLEIODMLFL,(MethodInfo *)0x0);
    return SQRT(fVar1 + fVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(Vector3 PHCOHKNFGLE)  [RVA 0x319BE84]
// PKHLGDMJPMF$$.ctor @ RVA 0x319BE84

void PKHLGDMJPMF___ctor(PKHLGDMJPMF_o *__this,UnityEngine_Vector3_o PHCOHKNFGLE,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).OHHDBINAJCB = PHCOHKNFGLE.fields.x;
  (__this->fields).JOLEIODMLFL = PHCOHKNFGLE.fields.y;
  return;
}


// ===== public bool EPBENPDCBFE(float HCHEFLKIIIK, float KCBGMCHANPM)  [RVA 0x319BE40]
// PKHLGDMJPMF$$EPBENPDCBFE @ RVA 0x319BE40

bool PKHLGDMJPMF__EPBENPDCBFE
               (PKHLGDMJPMF_o *__this,float HCHEFLKIIIK,float KCBGMCHANPM,MethodInfo *method)

{
  return ABS((__this->fields).OHHDBINAJCB - HCHEFLKIIIK) +
         ABS((__this->fields).JOLEIODMLFL - KCBGMCHANPM) < 1e-10;
}


// ===== public void .ctor(PKHLGDMJPMF FKAIGPBIAHN)  [RVA 0x319BEB0]
// PKHLGDMJPMF$$.ctor @ RVA 0x319BEB0

void PKHLGDMJPMF___ctor(PKHLGDMJPMF_o *__this,PKHLGDMJPMF_o *FKAIGPBIAHN,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (FKAIGPBIAHN != (PKHLGDMJPMF_o *)0x0) {
    __this->fields = FKAIGPBIAHN->fields;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static FDHJDNACICH PHJLLEGNFPK(Vector3f FCPALKBOIFD, Vector3f KMCNNACKBFO)  [RVA 0x319B47C]
// PKHLGDMJPMF$$PHJLLEGNFPK @ RVA 0x319B47C

FDHJDNACICH_o *
PKHLGDMJPMF__PHJLLEGNFPK(Vector3f_o *FCPALKBOIFD,Vector3f_o *KMCNNACKBFO,MethodInfo *method)

{
  FDHJDNACICH_o *__this;
  MethodInfo *in_x3;
  
  if ((DAT_04566aaf & 1) == 0) {
    FUN_01bab630(&FDHJDNACICH_TypeInfo);
    DAT_04566aaf = 1;
  }
  __this = (FDHJDNACICH_o *)thunk_FUN_01bda818(FDHJDNACICH_TypeInfo);
  FDHJDNACICH___ctor(__this,(MethodInfo *)0x0);
  PKHLGDMJPMF__PHJLLEGNFPK(FCPALKBOIFD,KMCNNACKBFO,__this,in_x3);
  return __this;
}


// ===== public float JHODAJPGBLA(PKHLGDMJPMF KMDADMGFKEK)  [RVA 0x319BEE4]
// PKHLGDMJPMF$$JHODAJPGBLA @ RVA 0x319BEE4

float PKHLGDMJPMF__JHODAJPGBLA(PKHLGDMJPMF_o *__this,PKHLGDMJPMF_o *KMDADMGFKEK,MethodInfo *method)

{
  if (KMDADMGFKEK != (PKHLGDMJPMF_o *)0x0) {
    return (__this->fields).OHHDBINAJCB * (KMDADMGFKEK->fields).OHHDBINAJCB +
           (__this->fields).JOLEIODMLFL * (KMDADMGFKEK->fields).JOLEIODMLFL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static PKHLGDMJPMF DJOFPNGJPFM(PKHLGDMJPMF COKCFOBBGLI, PKHLGDMJPMF JEEAGFAHKJF)  [RVA 0x319BF08]
// PKHLGDMJPMF$$DJOFPNGJPFM @ RVA 0x319BF08

PKHLGDMJPMF_o *
PKHLGDMJPMF__DJOFPNGJPFM(PKHLGDMJPMF_o *COKCFOBBGLI,PKHLGDMJPMF_o *JEEAGFAHKJF,MethodInfo *method)

{
  PKHLGDMJPMF_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  if ((DAT_04566ab0 & 1) == 0) {
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_04566ab0 = 1;
  }
  if ((COKCFOBBGLI != (PKHLGDMJPMF_o *)0x0) && (JEEAGFAHKJF != (PKHLGDMJPMF_o *)0x0)) {
    PVar1 = COKCFOBBGLI->fields;
    PVar2 = JEEAGFAHKJF->fields;
    __this = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).OHHDBINAJCB = PVar1.OHHDBINAJCB + PVar2.OHHDBINAJCB;
    (__this->fields).JOLEIODMLFL = PVar1.JOLEIODMLFL + PVar2.JOLEIODMLFL;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static PKHLGDMJPMF DAHMNJMDKIN()  [RVA 0x319BF88]
// PKHLGDMJPMF$$DAHMNJMDKIN @ RVA 0x319BF88

PKHLGDMJPMF_o * PKHLGDMJPMF__DAHMNJMDKIN(MethodInfo *method)

{
  PKHLGDMJPMF_o *__this;
  
  if ((DAT_04566ab1 & 1) == 0) {
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_04566ab1 = 1;
  }
  __this = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).OHHDBINAJCB = 0.0;
  (__this->fields).JOLEIODMLFL = 0.0;
  return __this;
}


// ===== public void .ctor(float IKADKIPIIMD = 0, float OKMABLDHNLJ = 0)  [RVA 0x319B974]
// PKHLGDMJPMF$$.ctor @ RVA 0x319B974

void PKHLGDMJPMF___ctor(PKHLGDMJPMF_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,MethodInfo *method
                       )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).OHHDBINAJCB = IKADKIPIIMD;
  (__this->fields).JOLEIODMLFL = OKMABLDHNLJ;
  return;
}

