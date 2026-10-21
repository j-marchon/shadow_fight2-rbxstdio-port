// TypeDefIndex 827
// Namespace: 
// public class CNDPAJOLKFN : PKHLGDMJPMF
// Fields:
//   private float PPOPAMHBMGG; // 0x18

// ===== public static bool LCAEEPKOHMN(CNDPAJOLKFN INOIMHOFGBG, CNDPAJOLKFN ACNOGKFFDEG)  [RVA 0x3073960]
// CNDPAJOLKFN$$LCAEEPKOHMN @ RVA 0x3073960

bool CNDPAJOLKFN__LCAEEPKOHMN
               (CNDPAJOLKFN_o *INOIMHOFGBG,CNDPAJOLKFN_o *ACNOGKFFDEG,MethodInfo *method)

{
  bool bVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (INOIMHOFGBG != ACNOGKFFDEG) {
    bVar1 = false;
    if ((INOIMHOFGBG != (CNDPAJOLKFN_o *)0x0) && (ACNOGKFFDEG != (CNDPAJOLKFN_o *)0x0)) {
      PVar2 = (ACNOGKFFDEG->fields).super;
      PVar3 = (INOIMHOFGBG->fields).super;
      bVar1 = ABS(PVar3.OHHDBINAJCB - PVar2.OHHDBINAJCB) +
              ABS(PVar3.JOLEIODMLFL - PVar2.JOLEIODMLFL) +
              ABS((INOIMHOFGBG->fields).PPOPAMHBMGG - (ACNOGKFFDEG->fields).PPOPAMHBMGG) <= 1e-10;
    }
    return bVar1;
  }
  return true;
}


// ===== public CNDPAJOLKFN FOOHBJNHOKK(float IKADKIPIIMD = 0, float OKMABLDHNLJ = 0, float PIBBGDEBBJC = 0)  [RVA 0x307B690]
// CNDPAJOLKFN$$FOOHBJNHOKK @ RVA 0x307B690

CNDPAJOLKFN_o *
CNDPAJOLKFN__FOOHBJNHOKK
          (CNDPAJOLKFN_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
          MethodInfo *method)

{
  (__this->fields).super.OHHDBINAJCB = IKADKIPIIMD;
  (__this->fields).super.JOLEIODMLFL = OKMABLDHNLJ;
  (__this->fields).PPOPAMHBMGG = PIBBGDEBBJC;
  return __this;
}


// ===== public static CNDPAJOLKFN DJOFPNGJPFM(CNDPAJOLKFN PHCOHKNFGLE, float OOGPLJBADCD)  [RVA 0x307B69C]
// CNDPAJOLKFN$$DJOFPNGJPFM @ RVA 0x307B69C

CNDPAJOLKFN_o *
CNDPAJOLKFN__DJOFPNGJPFM(CNDPAJOLKFN_o *PHCOHKNFGLE,float OOGPLJBADCD,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PHCOHKNFGLE;
  if ((DAT_04565fd2 & 1) == 0) {
    auVar4 = FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd2 = 1;
  }
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    fVar3 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB + OOGPLJBADCD;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL + OOGPLJBADCD;
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = fVar3 + OOGPLJBADCD;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}


// ===== public static void NALMKBHIHHJ(CNDPAJOLKFN COKCFOBBGLI, CNDPAJOLKFN JEEAGFAHKJF, CNDPAJOLKFN LKFALEIFDIO)  [RVA 0x307B77C]
// CNDPAJOLKFN$$NALMKBHIHHJ @ RVA 0x307B77C

void CNDPAJOLKFN__NALMKBHIHHJ
               (CNDPAJOLKFN_o *COKCFOBBGLI,CNDPAJOLKFN_o *JEEAGFAHKJF,CNDPAJOLKFN_o *LKFALEIFDIO,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  float fVar3;
  PKHLGDMJPMF_Fields PVar4;
  
  if (((COKCFOBBGLI != (CNDPAJOLKFN_o *)0x0) && (JEEAGFAHKJF != (CNDPAJOLKFN_o *)0x0)) &&
     (LKFALEIFDIO != (CNDPAJOLKFN_o *)0x0)) {
    fVar2 = (COKCFOBBGLI->fields).super.OHHDBINAJCB;
    PVar4 = (JEEAGFAHKJF->fields).super;
    fVar3 = (COKCFOBBGLI->fields).super.JOLEIODMLFL;
    PVar1.JOLEIODMLFL = fVar3 + (PVar4.JOLEIODMLFL - fVar3) * 0.5;
    PVar1.OHHDBINAJCB = fVar2 + (PVar4.OHHDBINAJCB - fVar2) * 0.5;
    (LKFALEIFDIO->fields).super = PVar1;
    fVar2 = (COKCFOBBGLI->fields).PPOPAMHBMGG;
    (LKFALEIFDIO->fields).PPOPAMHBMGG = fVar2 + ((JEEAGFAHKJF->fields).PPOPAMHBMGG - fVar2) * 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DGLJCGNHLIG()  [RVA 0x307B7D8]
// CNDPAJOLKFN$$DGLJCGNHLIG @ RVA 0x307B7D8

void CNDPAJOLKFN__DGLJCGNHLIG(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  (__this->fields).PPOPAMHBMGG = 0.0;
  return;
}


// ===== public CNDPAJOLKFN LFENGGKOJDO(PKHLGDMJPMF FKAIGPBIAHN)  [RVA 0x307B7E4]
// CNDPAJOLKFN$$LFENGGKOJDO @ RVA 0x307B7E4

CNDPAJOLKFN_o *
CNDPAJOLKFN__LFENGGKOJDO(CNDPAJOLKFN_o *__this,PKHLGDMJPMF_o *FKAIGPBIAHN,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  if (FKAIGPBIAHN != (PKHLGDMJPMF_o *)0x0) {
    PVar1 = (__this->fields).super;
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB + (FKAIGPBIAHN->fields).OHHDBINAJCB;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL + (FKAIGPBIAHN->fields).JOLEIODMLFL;
    (__this->fields).super = PVar2;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x307B808]
// CNDPAJOLKFN$$ToString @ RVA 0x307B808

System_String_o * CNDPAJOLKFN__ToString(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  float fVar2;
  
  if ((DAT_04565fd3 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_6144/*"F4"*/);
    FUN_01bab630(&StringLiteral_328/*" Z="*/);
    FUN_01bab630(&StringLiteral_15051/*"X="*/);
    FUN_01bab630(&StringLiteral_327/*" Y="*/);
    DAT_04565fd3 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_15051/*"X="*/;
      fVar2 = (float)thunk_FUN_01c20e04(values->m_Items);
      pSVar1 = System_Single__ToString(fVar2,(System_String_o *)&__this->fields,StringLiteral_6144/*"F4"*/);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_327/*" Y="*/;
          fVar2 = (float)thunk_FUN_01c20e04(values->m_Items + 2);
          pSVar1 = System_Single__ToString
                             (fVar2,(System_String_o *)&(__this->fields).super.JOLEIODMLFL,
                              StringLiteral_6144/*"F4"*/);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_328/*" Z="*/;
              fVar2 = (float)thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar1 = System_Single__ToString
                                 (fVar2,(System_String_o *)&(__this->fields).PPOPAMHBMGG,
                                  StringLiteral_6144/*"F4"*/);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04();
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                return pSVar1;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GDMDNJKMLBK()  [RVA 0x307B9AC]
// CNDPAJOLKFN$$GDMDNJKMLBK @ RVA 0x307B9AC

float CNDPAJOLKFN__GDMDNJKMLBK(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  return (__this->fields).PPOPAMHBMGG;
}


// ===== public void HIALHOGCAEE(CNDPAJOLKFN PHCOHKNFGLE, float KBJAJGBMEPM)  [RVA 0x307B9B4]
// CNDPAJOLKFN$$HIALHOGCAEE @ RVA 0x307B9B4

void CNDPAJOLKFN__HIALHOGCAEE
               (CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,float KBJAJGBMEPM,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar2 = (PHCOHKNFGLE->fields).super;
    PVar3 = (__this->fields).super;
    PVar1.JOLEIODMLFL = PVar3.JOLEIODMLFL + PVar2.JOLEIODMLFL * KBJAJGBMEPM;
    PVar1.OHHDBINAJCB = PVar3.OHHDBINAJCB + PVar2.OHHDBINAJCB * KBJAJGBMEPM;
    (__this->fields).super = PVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static CNDPAJOLKFN LKGNCCDJAMN(CNDPAJOLKFN FKAIGPBIAHN, CNDPAJOLKFN BELFKPIOJBI, CNDPAJOLKFN NKGLOPDGMBG)  [RVA 0x307B9DC]
// CNDPAJOLKFN$$LKGNCCDJAMN @ RVA 0x307B9DC

CNDPAJOLKFN_o *
CNDPAJOLKFN__LKGNCCDJAMN
          (CNDPAJOLKFN_o *FKAIGPBIAHN,CNDPAJOLKFN_o *BELFKPIOJBI,CNDPAJOLKFN_o *NKGLOPDGMBG,
          MethodInfo *method)

{
  bool bVar1;
  CNDPAJOLKFN_o *pCVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  float CHOCOAGNFDD;
  float OOGPLJBADCD;
  
  method_01 = (MethodInfo *)NKGLOPDGMBG;
  pCVar2 = CNDPAJOLKFN__MPOCFELGHDK(FKAIGPBIAHN,BELFKPIOJBI,(MethodInfo *)NKGLOPDGMBG);
  fVar3 = CNDPAJOLKFN__JHADMABLOMI(pCVar2,NKGLOPDGMBG,method_01);
  CHOCOAGNFDD = CNDPAJOLKFN__JHADMABLOMI(NKGLOPDGMBG,NKGLOPDGMBG,method_01);
  bVar1 = Util__KEJBDHBDGNI(CHOCOAGNFDD,1e-10,(MethodInfo *)0x0);
  OOGPLJBADCD = 0.0;
  if (!bVar1) {
    OOGPLJBADCD = fVar3 / CHOCOAGNFDD;
  }
  pCVar2 = CNDPAJOLKFN__JHADMABLOMI(NKGLOPDGMBG,OOGPLJBADCD,method_00);
  pCVar2 = CNDPAJOLKFN__DJOFPNGJPFM(BELFKPIOJBI,pCVar2,method_01);
  return pCVar2;
}


// ===== public static float JHLJELAKADM(CNDPAJOLKFN DEGCNPFIIPL, CNDPAJOLKFN GDIHOLFJJGL, CNDPAJOLKFN CMKGDNKJNNC)  [RVA 0x307BC64]
// CNDPAJOLKFN$$JHLJELAKADM @ RVA 0x307BC64

float CNDPAJOLKFN__JHLJELAKADM
                (CNDPAJOLKFN_o *DEGCNPFIIPL,CNDPAJOLKFN_o *GDIHOLFJJGL,CNDPAJOLKFN_o *CMKGDNKJNNC,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (((GDIHOLFJJGL != (CNDPAJOLKFN_o *)0x0) &&
      ((GDIHOLFJJGL->fields).PPOPAMHBMGG = 0.0, DEGCNPFIIPL != (CNDPAJOLKFN_o *)0x0)) &&
     ((DEGCNPFIIPL->fields).PPOPAMHBMGG = 0.0, CMKGDNKJNNC != (CNDPAJOLKFN_o *)0x0)) {
    (CMKGDNKJNNC->fields).PPOPAMHBMGG = 0.0;
    fVar1 = CNDPAJOLKFN__NAHOANMJIEB(GDIHOLFJJGL,CMKGDNKJNNC,(MethodInfo *)CMKGDNKJNNC);
    fVar2 = CNDPAJOLKFN__NAHOANMJIEB(GDIHOLFJJGL,DEGCNPFIIPL,(MethodInfo *)CMKGDNKJNNC);
    return SQRT(fVar1) / SQRT(fVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CNDPAJOLKFN LFENGGKOJDO(float OOGPLJBADCD)  [RVA 0x307BCDC]
// CNDPAJOLKFN$$LFENGGKOJDO @ RVA 0x307BCDC

CNDPAJOLKFN_o * CNDPAJOLKFN__LFENGGKOJDO(CNDPAJOLKFN_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  PVar1 = (__this->fields).super;
  PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB + OOGPLJBADCD;
  PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL + OOGPLJBADCD;
  (__this->fields).super = PVar2;
  (__this->fields).PPOPAMHBMGG = (__this->fields).PPOPAMHBMGG + OOGPLJBADCD;
  return __this;
}


// ===== public static CNDPAJOLKFN DMEHJADLELC(CNDPAJOLKFN BJCLOGCDNEG, CNDPAJOLKFN JDFOLIMEDCJ)  [RVA 0x307BCFC]
// CNDPAJOLKFN$$DMEHJADLELC @ RVA 0x307BCFC

CNDPAJOLKFN_o *
CNDPAJOLKFN__DMEHJADLELC(CNDPAJOLKFN_o *BJCLOGCDNEG,CNDPAJOLKFN_o *JDFOLIMEDCJ,MethodInfo *method)

{
  MethodInfo *method_00;
  CNDPAJOLKFN_o *pCVar1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)CNDPAJOLKFN__MPOCFELGHDK(BJCLOGCDNEG,JDFOLIMEDCJ,method);
  pCVar1 = CNDPAJOLKFN__FDDIKIMOHIH(method_00);
  if ((method_00 != (MethodInfo *)0x0) &&
     (pCVar1 = CNDPAJOLKFN__GPDMMIIPDAB((CNDPAJOLKFN_o *)method_00,pCVar1,method),
     pCVar1 != (CNDPAJOLKFN_o *)0x0)) {
    pCVar1 = CNDPAJOLKFN__IMINLGEKHIH(pCVar1,method_01);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static CNDPAJOLKFN AHIPAMALCCN(CNDPAJOLKFN PHCOHKNFGLE, float GJAMCENHFKO)  [RVA 0x307BEDC]
// CNDPAJOLKFN$$AHIPAMALCCN @ RVA 0x307BEDC

CNDPAJOLKFN_o *
CNDPAJOLKFN__AHIPAMALCCN(CNDPAJOLKFN_o *PHCOHKNFGLE,float GJAMCENHFKO,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    PVar2.OHHDBINAJCB = (float)(int)(PVar1.OHHDBINAJCB * GJAMCENHFKO + 0.5) / GJAMCENHFKO;
    PVar2.JOLEIODMLFL = (float)(int)(PVar1.JOLEIODMLFL * GJAMCENHFKO + 0.5) / GJAMCENHFKO;
    (PHCOHKNFGLE->fields).super = PVar2;
    (PHCOHKNFGLE->fields).PPOPAMHBMGG =
         (float)(int)((PHCOHKNFGLE->fields).PPOPAMHBMGG * GJAMCENHFKO + 0.5) / GJAMCENHFKO;
    return PHCOHKNFGLE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static CNDPAJOLKFN MPOCFELGHDK(CNDPAJOLKFN PHCOHKNFGLE, float OOGPLJBADCD)  [RVA 0x307BF44]
// CNDPAJOLKFN$$MPOCFELGHDK @ RVA 0x307BF44

CNDPAJOLKFN_o *
CNDPAJOLKFN__MPOCFELGHDK(CNDPAJOLKFN_o *PHCOHKNFGLE,float OOGPLJBADCD,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PHCOHKNFGLE;
  if ((DAT_04565fd4 & 1) == 0) {
    auVar4 = FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd4 = 1;
  }
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    fVar3 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB - OOGPLJBADCD;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL - OOGPLJBADCD;
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = fVar3 - OOGPLJBADCD;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}


// ===== public bool EPBENPDCBFE(float HCHEFLKIIIK, float KCBGMCHANPM, float BIEIPFCNOHA)  [RVA 0x307B660]
// CNDPAJOLKFN$$EPBENPDCBFE @ RVA 0x307B660

bool CNDPAJOLKFN__EPBENPDCBFE
               (CNDPAJOLKFN_o *__this,float HCHEFLKIIIK,float KCBGMCHANPM,float BIEIPFCNOHA,
               MethodInfo *method)

{
  return ABS((__this->fields).super.OHHDBINAJCB - HCHEFLKIIIK) +
         ABS((__this->fields).super.JOLEIODMLFL - KCBGMCHANPM) +
         ABS((__this->fields).PPOPAMHBMGG - BIEIPFCNOHA) <= 1e-10;
}


// ===== public void .ctor(Vector3 PHCOHKNFGLE)  [RVA 0x307BFE0]
// CNDPAJOLKFN$$.ctor @ RVA 0x307BFE0

void CNDPAJOLKFN___ctor(CNDPAJOLKFN_o *__this,UnityEngine_Vector3_o PHCOHKNFGLE,MethodInfo *method)

{
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = PHCOHKNFGLE.fields.x;
  (__this->fields).super.JOLEIODMLFL = PHCOHKNFGLE.fields.y;
  (__this->fields).PPOPAMHBMGG = PHCOHKNFGLE.fields.z;
  return;
}


// ===== public void DPAFBGIJBDL(float CJNHFNHJHPE)  [RVA 0x307C024]
// CNDPAJOLKFN$$DPAFBGIJBDL @ RVA 0x307C024

void CNDPAJOLKFN__DPAFBGIJBDL(CNDPAJOLKFN_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PPOPAMHBMGG = CJNHFNHJHPE;
  return;
}


// ===== public static CNDPAJOLKFN JHADMABLOMI(CNDPAJOLKFN PHCOHKNFGLE, float OOGPLJBADCD)  [RVA 0x307BB2C]
// CNDPAJOLKFN$$JHADMABLOMI @ RVA 0x307BB2C

CNDPAJOLKFN_o *
CNDPAJOLKFN__JHADMABLOMI(CNDPAJOLKFN_o *PHCOHKNFGLE,float OOGPLJBADCD,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PHCOHKNFGLE;
  if ((DAT_04565fd5 & 1) == 0) {
    auVar4 = FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd5 = 1;
  }
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    fVar3 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB * OOGPLJBADCD;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL * OOGPLJBADCD;
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = fVar3 * OOGPLJBADCD;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}


// ===== public static CNDPAJOLKFN DJOFPNGJPFM(CNDPAJOLKFN BJCLOGCDNEG, CNDPAJOLKFN JDFOLIMEDCJ)  [RVA 0x307BBC4]
// CNDPAJOLKFN$$DJOFPNGJPFM @ RVA 0x307BBC4

CNDPAJOLKFN_o *
CNDPAJOLKFN__DJOFPNGJPFM(CNDPAJOLKFN_o *BJCLOGCDNEG,CNDPAJOLKFN_o *JDFOLIMEDCJ,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_04565fd6 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd6 = 1;
  }
  if ((BJCLOGCDNEG != (CNDPAJOLKFN_o *)0x0) && (JDFOLIMEDCJ != (CNDPAJOLKFN_o *)0x0)) {
    PVar1 = (BJCLOGCDNEG->fields).super;
    PVar3 = (JDFOLIMEDCJ->fields).super;
    fVar4 = (BJCLOGCDNEG->fields).PPOPAMHBMGG;
    fVar5 = (JDFOLIMEDCJ->fields).PPOPAMHBMGG;
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB + PVar3.OHHDBINAJCB;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL + PVar3.JOLEIODMLFL;
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = fVar4 + fVar5;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CNDPAJOLKFN FOOHBJNHOKK(Vector3 PHCOHKNFGLE)  [RVA 0x307C02C]
// CNDPAJOLKFN$$FOOHBJNHOKK @ RVA 0x307C02C

CNDPAJOLKFN_o *
CNDPAJOLKFN__FOOHBJNHOKK(CNDPAJOLKFN_o *__this,UnityEngine_Vector3_o PHCOHKNFGLE,MethodInfo *method)

{
  (__this->fields).super.OHHDBINAJCB = PHCOHKNFGLE.fields.x;
  (__this->fields).super.JOLEIODMLFL = PHCOHKNFGLE.fields.y;
  (__this->fields).PPOPAMHBMGG = PHCOHKNFGLE.fields.z;
  return __this;
}


// ===== public static CNDPAJOLKFN DAHMNJMDKIN()  [RVA 0x307C038]
// CNDPAJOLKFN$$DAHMNJMDKIN @ RVA 0x307C038

CNDPAJOLKFN_o * CNDPAJOLKFN__DAHMNJMDKIN(MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  
  if ((DAT_04565fd7 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd7 = 1;
  }
  __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  (__this->fields).PPOPAMHBMGG = 0.0;
  return __this;
}


// ===== public static CNDPAJOLKFN OKOPFKDFIIP()  [RVA 0x307C09C]
// CNDPAJOLKFN$$OKOPFKDFIIP @ RVA 0x307C09C

CNDPAJOLKFN_o * CNDPAJOLKFN__OKOPFKDFIIP(MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  
  if ((DAT_04565fd8 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd8 = 1;
  }
  __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).PPOPAMHBMGG = 0.0;
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 1.0;
  return __this;
}


// ===== public void LFENGGKOJDO(CNDPAJOLKFN PHCOHKNFGLE, float KBJAJGBMEPM)  [RVA 0x307C108]
// CNDPAJOLKFN$$LFENGGKOJDO @ RVA 0x307C108

void CNDPAJOLKFN__LFENGGKOJDO
               (CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,float KBJAJGBMEPM,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    PVar3 = (__this->fields).super;
    PVar2.OHHDBINAJCB = PVar3.OHHDBINAJCB + PVar1.OHHDBINAJCB * KBJAJGBMEPM;
    PVar2.JOLEIODMLFL = PVar3.JOLEIODMLFL + PVar1.JOLEIODMLFL * KBJAJGBMEPM;
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG =
         (__this->fields).PPOPAMHBMGG + (PHCOHKNFGLE->fields).PPOPAMHBMGG * KBJAJGBMEPM;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CNDPAJOLKFN AHIPAMALCCN(float GJAMCENHFKO)  [RVA 0x307C144]
// CNDPAJOLKFN$$AHIPAMALCCN @ RVA 0x307C144

CNDPAJOLKFN_o * CNDPAJOLKFN__AHIPAMALCCN(CNDPAJOLKFN_o *__this,float GJAMCENHFKO,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  PVar1 = (__this->fields).super;
  PVar2.OHHDBINAJCB = (float)(int)(PVar1.OHHDBINAJCB * GJAMCENHFKO + 0.5) / GJAMCENHFKO;
  PVar2.JOLEIODMLFL = (float)(int)(PVar1.JOLEIODMLFL * GJAMCENHFKO + 0.5) / GJAMCENHFKO;
  (__this->fields).super = PVar2;
  (__this->fields).PPOPAMHBMGG =
       (float)(int)((__this->fields).PPOPAMHBMGG * GJAMCENHFKO + 0.5) / GJAMCENHFKO;
  return __this;
}


// ===== public static CNDPAJOLKFN DPLKDGIBBEL(CNDPAJOLKFN FMPJLBLNHMC, CNDPAJOLKFN IHEPHBIPLPM, float OEBANKNLEMN)  [RVA 0x307C184]
// CNDPAJOLKFN$$DPLKDGIBBEL @ RVA 0x307C184

CNDPAJOLKFN_o *
CNDPAJOLKFN__DPLKDGIBBEL
          (CNDPAJOLKFN_o *FMPJLBLNHMC,CNDPAJOLKFN_o *IHEPHBIPLPM,float OEBANKNLEMN,
          MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  float fVar1;
  float fVar2;
  PKHLGDMJPMF_Fields PVar3;
  PKHLGDMJPMF_Fields PVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04565fd9 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd9 = 1;
  }
  if ((FMPJLBLNHMC != (CNDPAJOLKFN_o *)0x0) && (IHEPHBIPLPM != (CNDPAJOLKFN_o *)0x0)) {
    PVar3 = (IHEPHBIPLPM->fields).super;
    PVar4 = (FMPJLBLNHMC->fields).super;
    fVar5 = (FMPJLBLNHMC->fields).PPOPAMHBMGG;
    fVar6 = (IHEPHBIPLPM->fields).PPOPAMHBMGG;
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    fVar1 = PVar4.OHHDBINAJCB;
    fVar2 = PVar4.JOLEIODMLFL;
    PVar4.OHHDBINAJCB = fVar1 + (PVar3.OHHDBINAJCB - fVar1) * OEBANKNLEMN;
    PVar4.JOLEIODMLFL = fVar2 + (PVar3.JOLEIODMLFL - fVar2) * OEBANKNLEMN;
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).super = PVar4;
    (__this->fields).PPOPAMHBMGG = fVar5 + (fVar6 - fVar5) * OEBANKNLEMN;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CNDPAJOLKFN LOPALOLIHBH(float IKADKIPIIMD, float OKMABLDHNLJ, float PIBBGDEBBJC)  [RVA 0x307C250]
// CNDPAJOLKFN$$LOPALOLIHBH @ RVA 0x307C250

CNDPAJOLKFN_o *
CNDPAJOLKFN__LOPALOLIHBH
          (CNDPAJOLKFN_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
          MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  PVar2 = (__this->fields).super;
  PVar1.JOLEIODMLFL = PVar2.JOLEIODMLFL - OKMABLDHNLJ;
  PVar1.OHHDBINAJCB = PVar2.OHHDBINAJCB - IKADKIPIIMD;
  (__this->fields).super = PVar1;
  (__this->fields).PPOPAMHBMGG = (__this->fields).PPOPAMHBMGG - PIBBGDEBBJC;
  return __this;
}


// ===== public void .ctor(float IKADKIPIIMD, float OKMABLDHNLJ = 0, float PIBBGDEBBJC = 0)  [RVA 0x307B738]
// CNDPAJOLKFN$$.ctor @ RVA 0x307B738

void CNDPAJOLKFN___ctor(CNDPAJOLKFN_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
                       MethodInfo *method)

{
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = IKADKIPIIMD;
  (__this->fields).super.JOLEIODMLFL = OKMABLDHNLJ;
  (__this->fields).PPOPAMHBMGG = PIBBGDEBBJC;
  return;
}


// ===== public CNDPAJOLKFN FAOBHLCDKJI()  [RVA 0x307C270]
// CNDPAJOLKFN$$FAOBHLCDKJI @ RVA 0x307C270

CNDPAJOLKFN_o * CNDPAJOLKFN__FAOBHLCDKJI(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  MethodInfo *extraout_x1;
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  
  if ((DAT_04565fda & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fda = 1;
    method = extraout_x1;
  }
  PVar1 = (__this->fields).super;
  fVar2 = (__this->fields).PPOPAMHBMGG;
  __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this_00,0.0,0.0,(MethodInfo *)0x0);
  (__this_00->fields).super = PVar1;
  (__this_00->fields).PPOPAMHBMGG = fVar2;
  return __this_00;
}


// ===== public CNDPAJOLKFN LOPALOLIHBH(CNDPAJOLKFN PHCOHKNFGLE)  [RVA 0x307C2E8]
// CNDPAJOLKFN$$LOPALOLIHBH @ RVA 0x307C2E8

CNDPAJOLKFN_o *
CNDPAJOLKFN__LOPALOLIHBH(CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (__this->fields).super;
    PVar3 = (PHCOHKNFGLE->fields).super;
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB - PVar3.OHHDBINAJCB;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL - PVar3.JOLEIODMLFL;
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = (__this->fields).PPOPAMHBMGG - (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector3 ALBJPLAPOBO(CNDPAJOLKFN PHCOHKNFGLE)  [RVA 0x307C31C]
// CNDPAJOLKFN$$ALBJPLAPOBO @ RVA 0x307C31C

UnityEngine_Vector3_o CNDPAJOLKFN__ALBJPLAPOBO(CNDPAJOLKFN_o *PHCOHKNFGLE,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  undefined8 uVar2;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    UVar1.fields.x = (PHCOHKNFGLE->fields).super.OHHDBINAJCB;
    uVar2._4_4_ = (PHCOHKNFGLE->fields).super.JOLEIODMLFL;
    UVar1.fields.z = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    return (UnityEngine_Vector3_o)UVar1.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CNDPAJOLKFN PGLILPKGILI(float IKADKIPIIMD, float OKMABLDHNLJ, float PIBBGDEBBJC)  [RVA 0x307C338]
// CNDPAJOLKFN$$PGLILPKGILI @ RVA 0x307C338

CNDPAJOLKFN_o *
CNDPAJOLKFN__PGLILPKGILI
          (CNDPAJOLKFN_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
          MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  PVar2 = (__this->fields).super;
  PVar1.JOLEIODMLFL = PVar2.JOLEIODMLFL * OKMABLDHNLJ;
  PVar1.OHHDBINAJCB = PVar2.OHHDBINAJCB * IKADKIPIIMD;
  (__this->fields).super = PVar1;
  (__this->fields).PPOPAMHBMGG = (__this->fields).PPOPAMHBMGG * PIBBGDEBBJC;
  return __this;
}


// ===== public CNDPAJOLKFN LOPALOLIHBH(float OOGPLJBADCD)  [RVA 0x307C358]
// CNDPAJOLKFN$$LOPALOLIHBH @ RVA 0x307C358

CNDPAJOLKFN_o * CNDPAJOLKFN__LOPALOLIHBH(CNDPAJOLKFN_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  PVar1 = (__this->fields).super;
  PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB - OOGPLJBADCD;
  PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL - OOGPLJBADCD;
  (__this->fields).super = PVar2;
  (__this->fields).PPOPAMHBMGG = (__this->fields).PPOPAMHBMGG - OOGPLJBADCD;
  return __this;
}


// ===== public static CNDPAJOLKFN EEOGHDMJKOO()  [RVA 0x307C378]
// CNDPAJOLKFN$$EEOGHDMJKOO @ RVA 0x307C378

CNDPAJOLKFN_o * CNDPAJOLKFN__EEOGHDMJKOO(MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  
  if ((DAT_04565fdb & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fdb = 1;
  }
  __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).PPOPAMHBMGG = 0.0;
  (__this->fields).super.OHHDBINAJCB = 1.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  return __this;
}


// ===== public CNDPAJOLKFN LFENGGKOJDO(CNDPAJOLKFN PHCOHKNFGLE)  [RVA 0x307C3E4]
// CNDPAJOLKFN$$LFENGGKOJDO @ RVA 0x307C3E4

CNDPAJOLKFN_o *
CNDPAJOLKFN__LFENGGKOJDO(CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (__this->fields).super;
    PVar3 = (PHCOHKNFGLE->fields).super;
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB + PVar3.OHHDBINAJCB;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL + PVar3.JOLEIODMLFL;
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = (__this->fields).PPOPAMHBMGG + (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(CNDPAJOLKFN PHCOHKNFGLE)  [RVA 0x307C418]
// CNDPAJOLKFN$$.ctor @ RVA 0x307C418

void CNDPAJOLKFN___ctor(CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,MethodInfo *method)

{
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    (__this->fields).super = (PHCOHKNFGLE->fields).super;
    (__this->fields).PPOPAMHBMGG = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static CNDPAJOLKFN NALMKBHIHHJ(CNDPAJOLKFN COKCFOBBGLI, CNDPAJOLKFN JEEAGFAHKJF)  [RVA 0x307C45C]
// CNDPAJOLKFN$$NALMKBHIHHJ @ RVA 0x307C45C

CNDPAJOLKFN_o *
CNDPAJOLKFN__NALMKBHIHHJ(CNDPAJOLKFN_o *COKCFOBBGLI,CNDPAJOLKFN_o *JEEAGFAHKJF,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  MethodInfo *method_00;
  
  pCVar1 = CNDPAJOLKFN__MPOCFELGHDK(JEEAGFAHKJF,COKCFOBBGLI,method);
  pCVar1 = CNDPAJOLKFN__JHADMABLOMI(pCVar1,0.5,method_00);
  pCVar1 = CNDPAJOLKFN__DJOFPNGJPFM(COKCFOBBGLI,pCVar1,method);
  return pCVar1;
}


// ===== public CNDPAJOLKFN IMINLGEKHIH()  [RVA 0x307BE54]
// CNDPAJOLKFN$$IMINLGEKHIH @ RVA 0x307BE54

CNDPAJOLKFN_o * CNDPAJOLKFN__IMINLGEKHIH(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  PKHLGDMJPMF_Fields PVar3;
  PKHLGDMJPMF_Fields PVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (__this->fields).super.OHHDBINAJCB;
  fVar5 = (__this->fields).super.JOLEIODMLFL;
  fVar6 = (__this->fields).PPOPAMHBMGG;
  fVar2 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar6 * fVar6);
  bVar1 = Util__KEJBDHBDGNI(fVar2,1e-10,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).super.OHHDBINAJCB = 1.0;
    (__this->fields).super.JOLEIODMLFL = 0.0;
    fVar2 = 0.0;
  }
  else {
    PVar3 = (__this->fields).super;
    fVar2 = 1.0 / fVar2;
    PVar4.OHHDBINAJCB = PVar3.OHHDBINAJCB * fVar2;
    PVar4.JOLEIODMLFL = PVar3.JOLEIODMLFL * fVar2;
    (__this->fields).super = PVar4;
    fVar2 = fVar2 * (__this->fields).PPOPAMHBMGG;
  }
  (__this->fields).PPOPAMHBMGG = fVar2;
  return __this;
}


// ===== public static CNDPAJOLKFN LDOKNMFMPDM()  [RVA 0x307C4AC]
// CNDPAJOLKFN$$LDOKNMFMPDM @ RVA 0x307C4AC

CNDPAJOLKFN_o * CNDPAJOLKFN__LDOKNMFMPDM(MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  
  if ((DAT_04565fdc & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fdc = 1;
  }
  __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  PVar1 = (PKHLGDMJPMF_Fields)NEON_fmov(0x3f800000,4);
  (__this->fields).super = PVar1;
  (__this->fields).PPOPAMHBMGG = 1.0;
  return __this;
}


// ===== public static CNDPAJOLKFN GPDMMIIPDAB(CNDPAJOLKFN COKCFOBBGLI, CNDPAJOLKFN JEEAGFAHKJF, CNDPAJOLKFN JFIFAPEAPCF, CNDPAJOLKFN DHAMLEJHOPI)  [RVA 0x307C518]
// CNDPAJOLKFN$$GPDMMIIPDAB @ RVA 0x307C518

CNDPAJOLKFN_o *
CNDPAJOLKFN__GPDMMIIPDAB
          (CNDPAJOLKFN_o *COKCFOBBGLI,CNDPAJOLKFN_o *JEEAGFAHKJF,CNDPAJOLKFN_o *JFIFAPEAPCF,
          CNDPAJOLKFN_o *DHAMLEJHOPI,MethodInfo *method)

{
  bool bVar1;
  CNDPAJOLKFN_o *__this;
  float fVar2;
  float fVar3;
  float fVar4;
  PKHLGDMJPMF_Fields PVar5;
  PKHLGDMJPMF_Fields PVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_04565fdd & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fdd = 1;
  }
  if ((((JEEAGFAHKJF != (CNDPAJOLKFN_o *)0x0) && (COKCFOBBGLI != (CNDPAJOLKFN_o *)0x0)) &&
      (JFIFAPEAPCF != (CNDPAJOLKFN_o *)0x0)) && (DHAMLEJHOPI != (CNDPAJOLKFN_o *)0x0)) {
    fVar7 = (COKCFOBBGLI->fields).super.OHHDBINAJCB;
    fVar3 = (COKCFOBBGLI->fields).super.JOLEIODMLFL;
    fVar11 = (JFIFAPEAPCF->fields).super.OHHDBINAJCB;
    fVar12 = (JFIFAPEAPCF->fields).super.JOLEIODMLFL;
    fVar8 = (JEEAGFAHKJF->fields).super.JOLEIODMLFL - fVar3;
    fVar9 = fVar11 - (DHAMLEJHOPI->fields).super.OHHDBINAJCB;
    fVar10 = fVar12 - (DHAMLEJHOPI->fields).super.JOLEIODMLFL;
    fVar4 = (JEEAGFAHKJF->fields).super.OHHDBINAJCB - fVar7;
    fVar2 = fVar8 * fVar9 - fVar10 * fVar4;
    bVar1 = Util__KEJBDHBDGNI(fVar2,1e-10,(MethodInfo *)0x0);
    __this = (CNDPAJOLKFN_o *)0x0;
    if (!bVar1) {
      fVar11 = fVar11 - fVar7;
      fVar12 = fVar12 - fVar3;
      fVar3 = fVar8 * fVar11 - fVar12 * fVar4;
      fVar11 = fVar9 * fVar12 - fVar10 * fVar11;
      if (ABS(fVar11) + ABS(fVar2) + ABS(fVar3) < 1e-10) {
        __this = (CNDPAJOLKFN_o *)0x0;
      }
      else {
        bVar1 = Util__BKJNEKOBKED(fVar3 / fVar2,0.0,1.0,(MethodInfo *)0x0);
        __this = (CNDPAJOLKFN_o *)0x0;
        if (bVar1) {
          fVar11 = fVar11 / fVar2;
          bVar1 = Util__BKJNEKOBKED(fVar11,0.0,1.0,(MethodInfo *)0x0);
          __this = (CNDPAJOLKFN_o *)0x0;
          if (bVar1) {
            PVar5 = (COKCFOBBGLI->fields).super;
            PVar6 = (JEEAGFAHKJF->fields).super;
            __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
            fVar2 = PVar5.OHHDBINAJCB;
            fVar12 = PVar5.JOLEIODMLFL;
            PVar5.OHHDBINAJCB = fVar2 + (PVar6.OHHDBINAJCB - fVar2) * fVar11;
            PVar5.JOLEIODMLFL = fVar12 + (PVar6.JOLEIODMLFL - fVar12) * fVar11;
            PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
            (__this->fields).super = PVar5;
            (__this->fields).PPOPAMHBMGG = 0.0;
          }
        }
      }
    }
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float HKDIEEHOAMC()  [RVA 0x307C6C4]
// CNDPAJOLKFN$$HKDIEEHOAMC @ RVA 0x307C6C4

float CNDPAJOLKFN__HKDIEEHOAMC(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).super.OHHDBINAJCB;
  fVar2 = (__this->fields).super.JOLEIODMLFL;
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2);
}


// ===== public static float AHIPAMALCCN(float JAICMIMBIOA, float GFMNKEJDJFD)  [RVA 0x307BF2C]
// CNDPAJOLKFN$$AHIPAMALCCN @ RVA 0x307BF2C

float CNDPAJOLKFN__AHIPAMALCCN(float JAICMIMBIOA,float GFMNKEJDJFD,MethodInfo *method)

{
  return (float)(int)(JAICMIMBIOA * GFMNKEJDJFD + 0.5) / GFMNKEJDJFD;
}


// ===== public void .ctor()  [RVA 0x30739B4]
// CNDPAJOLKFN$$.ctor @ RVA 0x30739B4

void CNDPAJOLKFN___ctor(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).PPOPAMHBMGG = 0.0;
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  return;
}


// ===== public CNDPAJOLKFN PGLILPKGILI(float OOGPLJBADCD)  [RVA 0x307C6DC]
// CNDPAJOLKFN$$PGLILPKGILI @ RVA 0x307C6DC

CNDPAJOLKFN_o * CNDPAJOLKFN__PGLILPKGILI(CNDPAJOLKFN_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  PVar1 = (__this->fields).super;
  PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB * OOGPLJBADCD;
  PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL * OOGPLJBADCD;
  (__this->fields).super = PVar2;
  (__this->fields).PPOPAMHBMGG = (__this->fields).PPOPAMHBMGG * OOGPLJBADCD;
  return __this;
}


// ===== public static bool LJOKBIDEOMJ(CNDPAJOLKFN COKCFOBBGLI, CNDPAJOLKFN JEEAGFAHKJF)  [RVA 0x307C6F8]
// CNDPAJOLKFN$$LJOKBIDEOMJ @ RVA 0x307C6F8

bool CNDPAJOLKFN__LJOKBIDEOMJ
               (CNDPAJOLKFN_o *COKCFOBBGLI,CNDPAJOLKFN_o *JEEAGFAHKJF,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CNDPAJOLKFN__LCAEEPKOHMN(COKCFOBBGLI,JEEAGFAHKJF,method);
  return (bool)(~bVar1 & 1);
}


// ===== public static void DPLKDGIBBEL(CNDPAJOLKFN FMPJLBLNHMC, CNDPAJOLKFN IHEPHBIPLPM, float OEBANKNLEMN, CNDPAJOLKFN JGHPAFEFEFB)  [RVA 0x307C710]
// CNDPAJOLKFN$$DPLKDGIBBEL @ RVA 0x307C710

void CNDPAJOLKFN__DPLKDGIBBEL
               (CNDPAJOLKFN_o *FMPJLBLNHMC,CNDPAJOLKFN_o *IHEPHBIPLPM,float OEBANKNLEMN,
               CNDPAJOLKFN_o *JGHPAFEFEFB,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  PKHLGDMJPMF_Fields PVar6;
  
  if (((FMPJLBLNHMC != (CNDPAJOLKFN_o *)0x0) && (IHEPHBIPLPM != (CNDPAJOLKFN_o *)0x0)) &&
     (JGHPAFEFEFB != (CNDPAJOLKFN_o *)0x0)) {
    fVar2 = (FMPJLBLNHMC->fields).super.OHHDBINAJCB;
    fVar4 = (FMPJLBLNHMC->fields).PPOPAMHBMGG;
    fVar5 = (IHEPHBIPLPM->fields).PPOPAMHBMGG;
    PVar6 = (IHEPHBIPLPM->fields).super;
    fVar3 = (FMPJLBLNHMC->fields).super.JOLEIODMLFL;
    PVar1.JOLEIODMLFL = fVar3 + (PVar6.JOLEIODMLFL - fVar3) * OEBANKNLEMN;
    PVar1.OHHDBINAJCB = fVar2 + (PVar6.OHHDBINAJCB - fVar2) * OEBANKNLEMN;
    (JGHPAFEFEFB->fields).super = PVar1;
    (JGHPAFEFEFB->fields).PPOPAMHBMGG = fVar4 + (fVar5 - fVar4) * OEBANKNLEMN;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static CNDPAJOLKFN FDDIKIMOHIH()  [RVA 0x307BD2C]
// CNDPAJOLKFN$$FDDIKIMOHIH @ RVA 0x307BD2C

CNDPAJOLKFN_o * CNDPAJOLKFN__FDDIKIMOHIH(MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  
  if ((DAT_04565fde & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fde = 1;
  }
  __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  (__this->fields).PPOPAMHBMGG = 1.0;
  return __this;
}


// ===== public float FCEAFPLBNGE(CNDPAJOLKFN PHCOHKNFGLE)  [RVA 0x307C764]
// CNDPAJOLKFN$$FCEAFPLBNGE @ RVA 0x307C764

float CNDPAJOLKFN__FCEAFPLBNGE(CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = CNDPAJOLKFN__NAHOANMJIEB(PHCOHKNFGLE,__this,method);
  return SQRT(fVar1);
}


// ===== public static float NAHOANMJIEB(CNDPAJOLKFN BJCLOGCDNEG, CNDPAJOLKFN JDFOLIMEDCJ)  [RVA 0x307C784]
// CNDPAJOLKFN$$NAHOANMJIEB @ RVA 0x307C784

float CNDPAJOLKFN__NAHOANMJIEB
                (CNDPAJOLKFN_o *BJCLOGCDNEG,CNDPAJOLKFN_o *JDFOLIMEDCJ,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((BJCLOGCDNEG != (CNDPAJOLKFN_o *)0x0) && (JDFOLIMEDCJ != (CNDPAJOLKFN_o *)0x0)) {
    fVar1 = Util__CHHIJKJEKPN((BJCLOGCDNEG->fields).super.OHHDBINAJCB -
                              (JDFOLIMEDCJ->fields).super.OHHDBINAJCB,(MethodInfo *)0x0);
    fVar2 = Util__CHHIJKJEKPN((BJCLOGCDNEG->fields).super.JOLEIODMLFL -
                              (JDFOLIMEDCJ->fields).super.JOLEIODMLFL,(MethodInfo *)0x0);
    fVar3 = Util__CHHIJKJEKPN((BJCLOGCDNEG->fields).PPOPAMHBMGG - (JDFOLIMEDCJ->fields).PPOPAMHBMGG,
                              (MethodInfo *)0x0);
    return fVar1 + fVar2 + fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static CNDPAJOLKFN ALBJPLAPOBO(Vector3 PHCOHKNFGLE)  [RVA 0x307C800]
// CNDPAJOLKFN$$ALBJPLAPOBO @ RVA 0x307C800

CNDPAJOLKFN_o * CNDPAJOLKFN__ALBJPLAPOBO(UnityEngine_Vector3_o PHCOHKNFGLE,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  
  if ((DAT_04565fdf & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fdf = 1;
  }
  __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = PHCOHKNFGLE.fields.x;
  (__this->fields).super.JOLEIODMLFL = PHCOHKNFGLE.fields.y;
  (__this->fields).PPOPAMHBMGG = PHCOHKNFGLE.fields.z;
  return __this;
}


// ===== public CNDPAJOLKFN GPDMMIIPDAB(CNDPAJOLKFN PHCOHKNFGLE)  [RVA 0x307BD94]
// CNDPAJOLKFN$$GPDMMIIPDAB @ RVA 0x307BD94

CNDPAJOLKFN_o *
CNDPAJOLKFN__GPDMMIIPDAB(CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04565fe0 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fe0 = 1;
  }
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    fVar3 = (PHCOHKNFGLE->fields).super.JOLEIODMLFL;
    fVar1 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    fVar5 = (__this->fields).super.JOLEIODMLFL;
    fVar2 = (__this->fields).PPOPAMHBMGG;
    fVar4 = (PHCOHKNFGLE->fields).super.OHHDBINAJCB;
    fVar6 = (__this->fields).super.OHHDBINAJCB;
    __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this_00,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).super.OHHDBINAJCB = fVar5 * fVar1 - fVar2 * fVar3;
    (__this_00->fields).super.JOLEIODMLFL = fVar2 * fVar4 - fVar1 * fVar6;
    (__this_00->fields).PPOPAMHBMGG = fVar3 * fVar6 - fVar5 * fVar4;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static CNDPAJOLKFN EOHMFJFFFIN(XmlNode JHMENEKPIBO)  [RVA 0x307C880]
// CNDPAJOLKFN$$EOHMFJFFFIN @ RVA 0x307C880

CNDPAJOLKFN_o * CNDPAJOLKFN__EOHMFJFFFIN(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  float fVar4;
  
  if ((DAT_04565fe1 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    DAT_04565fe1 = 1;
    method = extraout_x1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    __this = (CNDPAJOLKFN_o *)0x0;
  }
  else {
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).PPOPAMHBMGG = 0.0;
    (__this->fields).super.OHHDBINAJCB = 0.0;
    (__this->fields).super.JOLEIODMLFL = 0.0;
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
    if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (System_String_o *)
             (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar4 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar3,(MethodInfo *)0x0);
    (__this->fields).super.OHHDBINAJCB = fVar4;
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
    if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (System_String_o *)
             (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar4 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar3,(MethodInfo *)0x0);
    (__this->fields).super.JOLEIODMLFL = fVar4;
  }
  return __this;
}


// ===== public static float FCEAFPLBNGE(CNDPAJOLKFN BJCLOGCDNEG, CNDPAJOLKFN JDFOLIMEDCJ)  [RVA 0x307BCC8]
// CNDPAJOLKFN$$FCEAFPLBNGE @ RVA 0x307BCC8

float CNDPAJOLKFN__FCEAFPLBNGE
                (CNDPAJOLKFN_o *BJCLOGCDNEG,CNDPAJOLKFN_o *JDFOLIMEDCJ,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = CNDPAJOLKFN__NAHOANMJIEB(BJCLOGCDNEG,JDFOLIMEDCJ,method);
  return SQRT(fVar1);
}


// ===== public void CPKBJPIHPCL(CNDPAJOLKFN FMPJLBLNHMC, CNDPAJOLKFN IHEPHBIPLPM)  [RVA 0x3073B68]
// CNDPAJOLKFN$$CPKBJPIHPCL @ RVA 0x3073B68

void CNDPAJOLKFN__CPKBJPIHPCL
               (CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *FMPJLBLNHMC,CNDPAJOLKFN_o *IHEPHBIPLPM,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  float fVar3;
  PKHLGDMJPMF_Fields PVar4;
  
  if ((FMPJLBLNHMC != (CNDPAJOLKFN_o *)0x0) && (IHEPHBIPLPM != (CNDPAJOLKFN_o *)0x0)) {
    fVar2 = (FMPJLBLNHMC->fields).super.OHHDBINAJCB;
    PVar4 = (IHEPHBIPLPM->fields).super;
    fVar3 = (FMPJLBLNHMC->fields).super.JOLEIODMLFL;
    PVar1.JOLEIODMLFL = fVar3 + (PVar4.JOLEIODMLFL - fVar3) * 0.5;
    PVar1.OHHDBINAJCB = fVar2 + (PVar4.OHHDBINAJCB - fVar2) * 0.5;
    (__this->fields).super = PVar1;
    fVar2 = (FMPJLBLNHMC->fields).PPOPAMHBMGG;
    (__this->fields).PPOPAMHBMGG = fVar2 + ((IHEPHBIPLPM->fields).PPOPAMHBMGG - fVar2) * 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CNDPAJOLKFN FOOHBJNHOKK(CNDPAJOLKFN PHCOHKNFGLE)  [RVA 0x307CB4C]
// CNDPAJOLKFN$$FOOHBJNHOKK @ RVA 0x307CB4C

CNDPAJOLKFN_o *
CNDPAJOLKFN__FOOHBJNHOKK(CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,MethodInfo *method)

{
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    (__this->fields).super = (PHCOHKNFGLE->fields).super;
    (__this->fields).PPOPAMHBMGG = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GHHOKPBPCJI()  [RVA 0x307CB70]
// CNDPAJOLKFN$$GHHOKPBPCJI @ RVA 0x307CB70

void CNDPAJOLKFN__GHHOKPBPCJI(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  float fVar1;
  PKHLGDMJPMF_Fields PVar2;
  float fVar4;
  ulong uVar3;
  float fVar5;
  float fVar6;
  
  PVar2 = (__this->fields).super;
  fVar6 = (__this->fields).PPOPAMHBMGG;
  fVar1 = PVar2.OHHDBINAJCB;
  fVar4 = PVar2.JOLEIODMLFL;
  uVar3 = NEON_scvtf(CONCAT44((int)fVar4,(int)fVar1),4);
  fVar5 = -2.1474836e+09;
  if (fVar6 != INFINITY) {
    fVar5 = (float)(int)fVar6;
  }
  (__this->fields).super =
       (PKHLGDMJPMF_Fields)
       (uVar3 ^ (uVar3 ^ 0xcf000000cf000000) &
                CONCAT44(-(uint)(fVar4 == INFINITY),-(uint)(fVar1 == INFINITY)));
  (__this->fields).PPOPAMHBMGG = fVar5;
  return;
}


// ===== public CNDPAJOLKFN LFENGGKOJDO(float IKADKIPIIMD, float OKMABLDHNLJ, float PIBBGDEBBJC)  [RVA 0x307CBBC]
// CNDPAJOLKFN$$LFENGGKOJDO @ RVA 0x307CBBC

CNDPAJOLKFN_o *
CNDPAJOLKFN__LFENGGKOJDO
          (CNDPAJOLKFN_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
          MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  PVar2 = (__this->fields).super;
  PVar1.JOLEIODMLFL = PVar2.JOLEIODMLFL + OKMABLDHNLJ;
  PVar1.OHHDBINAJCB = PVar2.OHHDBINAJCB + IKADKIPIIMD;
  (__this->fields).super = PVar1;
  (__this->fields).PPOPAMHBMGG = (__this->fields).PPOPAMHBMGG + PIBBGDEBBJC;
  return __this;
}


// ===== public CNDPAJOLKFN LOPALOLIHBH(PKHLGDMJPMF FKAIGPBIAHN)  [RVA 0x307CBDC]
// CNDPAJOLKFN$$LOPALOLIHBH @ RVA 0x307CBDC

CNDPAJOLKFN_o *
CNDPAJOLKFN__LOPALOLIHBH(CNDPAJOLKFN_o *__this,PKHLGDMJPMF_o *FKAIGPBIAHN,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  if (FKAIGPBIAHN != (PKHLGDMJPMF_o *)0x0) {
    PVar1 = (__this->fields).super;
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB - (FKAIGPBIAHN->fields).OHHDBINAJCB;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL - (FKAIGPBIAHN->fields).JOLEIODMLFL;
    (__this->fields).super = PVar2;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static CNDPAJOLKFN MPOCFELGHDK(CNDPAJOLKFN BJCLOGCDNEG, CNDPAJOLKFN JDFOLIMEDCJ)  [RVA 0x307BA50]
// CNDPAJOLKFN$$MPOCFELGHDK @ RVA 0x307BA50

CNDPAJOLKFN_o *
CNDPAJOLKFN__MPOCFELGHDK(CNDPAJOLKFN_o *BJCLOGCDNEG,CNDPAJOLKFN_o *JDFOLIMEDCJ,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_04565fe2 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fe2 = 1;
  }
  if ((BJCLOGCDNEG != (CNDPAJOLKFN_o *)0x0) && (JDFOLIMEDCJ != (CNDPAJOLKFN_o *)0x0)) {
    PVar1 = (BJCLOGCDNEG->fields).super;
    PVar3 = (JDFOLIMEDCJ->fields).super;
    fVar4 = (BJCLOGCDNEG->fields).PPOPAMHBMGG;
    fVar5 = (JDFOLIMEDCJ->fields).PPOPAMHBMGG;
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB - PVar3.OHHDBINAJCB;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL - PVar3.JOLEIODMLFL;
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = fVar4 - fVar5;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float JHADMABLOMI(CNDPAJOLKFN BJCLOGCDNEG, CNDPAJOLKFN JDFOLIMEDCJ)  [RVA 0x307BAF0]
// CNDPAJOLKFN$$JHADMABLOMI @ RVA 0x307BAF0

float CNDPAJOLKFN__JHADMABLOMI
                (CNDPAJOLKFN_o *BJCLOGCDNEG,CNDPAJOLKFN_o *JDFOLIMEDCJ,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((BJCLOGCDNEG != (CNDPAJOLKFN_o *)0x0) && (JDFOLIMEDCJ != (CNDPAJOLKFN_o *)0x0)) {
    uVar1 = *(undefined8 *)&(BJCLOGCDNEG->fields).super.JOLEIODMLFL;
    uVar2 = *(undefined8 *)&(JDFOLIMEDCJ->fields).super.JOLEIODMLFL;
    return (BJCLOGCDNEG->fields).super.OHHDBINAJCB * (JDFOLIMEDCJ->fields).super.OHHDBINAJCB +
           (float)uVar1 * (float)uVar2 +
           (float)((ulong)uVar1 >> 0x20) * (float)((ulong)uVar2 >> 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float MLHFIIEGCKG()  [RVA 0x307C488]
// CNDPAJOLKFN$$MLHFIIEGCKG @ RVA 0x307C488

float CNDPAJOLKFN__MLHFIIEGCKG(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (__this->fields).super.OHHDBINAJCB;
  fVar2 = (__this->fields).super.JOLEIODMLFL;
  fVar3 = (__this->fields).PPOPAMHBMGG;
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
}

