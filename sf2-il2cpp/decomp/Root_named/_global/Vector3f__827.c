// Original name: .Vector3f  (obfuscated CNDPAJOLKFN)
// TypeDefIndex 827
// Namespace: 
// public class Vector3f : PKHLGDMJPMF
// Fields:
//   private float PPOPAMHBMGG; // 0x18

// ===== public static bool LCAEEPKOHMN(Vector3f INOIMHOFGBG, Vector3f ACNOGKFFDEG)  [RVA 0x3073960]
// Vector3f$$LCAEEPKOHMN @ RVA 0x3073960

bool Vector3f__LCAEEPKOHMN
               (Vector3f_o *INOIMHOFGBG,Vector3f_o *ACNOGKFFDEG,MethodInfo *method)

{
  bool bVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (INOIMHOFGBG != ACNOGKFFDEG) {
    bVar1 = false;
    if ((INOIMHOFGBG != (Vector3f_o *)0x0) && (ACNOGKFFDEG != (Vector3f_o *)0x0)) {
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


// ===== public Vector3f FOOHBJNHOKK(float IKADKIPIIMD = 0, float OKMABLDHNLJ = 0, float PIBBGDEBBJC = 0)  [RVA 0x307B690]
// Vector3f$$FOOHBJNHOKK @ RVA 0x307B690

Vector3f_o *
Vector3f__FOOHBJNHOKK
          (Vector3f_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
          MethodInfo *method)

{
  (__this->fields).super.OHHDBINAJCB = IKADKIPIIMD;
  (__this->fields).super.JOLEIODMLFL = OKMABLDHNLJ;
  (__this->fields).PPOPAMHBMGG = PIBBGDEBBJC;
  return __this;
}


// ===== public static Vector3f DJOFPNGJPFM(Vector3f PHCOHKNFGLE, float OOGPLJBADCD)  [RVA 0x307B69C]
// Vector3f$$DJOFPNGJPFM @ RVA 0x307B69C

Vector3f_o *
Vector3f__DJOFPNGJPFM(Vector3f_o *PHCOHKNFGLE,float OOGPLJBADCD,MethodInfo *method)

{
  Vector3f_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PHCOHKNFGLE;
  if ((DAT_04565fd2 & 1) == 0) {
    auVar4 = FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fd2 = 1;
  }
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    fVar3 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
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


// ===== public static void NALMKBHIHHJ(Vector3f COKCFOBBGLI, Vector3f JEEAGFAHKJF, Vector3f LKFALEIFDIO)  [RVA 0x307B77C]
// Vector3f$$NALMKBHIHHJ @ RVA 0x307B77C

void Vector3f__NALMKBHIHHJ
               (Vector3f_o *COKCFOBBGLI,Vector3f_o *JEEAGFAHKJF,Vector3f_o *LKFALEIFDIO,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  float fVar3;
  PKHLGDMJPMF_Fields PVar4;
  
  if (((COKCFOBBGLI != (Vector3f_o *)0x0) && (JEEAGFAHKJF != (Vector3f_o *)0x0)) &&
     (LKFALEIFDIO != (Vector3f_o *)0x0)) {
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
// Vector3f$$DGLJCGNHLIG @ RVA 0x307B7D8

void Vector3f__DGLJCGNHLIG(Vector3f_o *__this,MethodInfo *method)

{
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  (__this->fields).PPOPAMHBMGG = 0.0;
  return;
}


// ===== public Vector3f LFENGGKOJDO(PKHLGDMJPMF FKAIGPBIAHN)  [RVA 0x307B7E4]
// Vector3f$$LFENGGKOJDO @ RVA 0x307B7E4

Vector3f_o *
Vector3f__LFENGGKOJDO(Vector3f_o *__this,PKHLGDMJPMF_o *FKAIGPBIAHN,MethodInfo *method)

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
// Vector3f$$ToString @ RVA 0x307B808

System_String_o * Vector3f__ToString(Vector3f_o *__this,MethodInfo *method)

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
// Vector3f$$GDMDNJKMLBK @ RVA 0x307B9AC

float Vector3f__GDMDNJKMLBK(Vector3f_o *__this,MethodInfo *method)

{
  return (__this->fields).PPOPAMHBMGG;
}


// ===== public void HIALHOGCAEE(Vector3f PHCOHKNFGLE, float KBJAJGBMEPM)  [RVA 0x307B9B4]
// Vector3f$$HIALHOGCAEE @ RVA 0x307B9B4

void Vector3f__HIALHOGCAEE
               (Vector3f_o *__this,Vector3f_o *PHCOHKNFGLE,float KBJAJGBMEPM,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
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


// ===== public static Vector3f LKGNCCDJAMN(Vector3f FKAIGPBIAHN, Vector3f BELFKPIOJBI, Vector3f NKGLOPDGMBG)  [RVA 0x307B9DC]
// Vector3f$$LKGNCCDJAMN @ RVA 0x307B9DC

Vector3f_o *
Vector3f__LKGNCCDJAMN
          (Vector3f_o *FKAIGPBIAHN,Vector3f_o *BELFKPIOJBI,Vector3f_o *NKGLOPDGMBG,
          MethodInfo *method)

{
  bool bVar1;
  Vector3f_o *pCVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  float CHOCOAGNFDD;
  float OOGPLJBADCD;
  
  method_01 = (MethodInfo *)NKGLOPDGMBG;
  pCVar2 = Vector3f__MPOCFELGHDK(FKAIGPBIAHN,BELFKPIOJBI,(MethodInfo *)NKGLOPDGMBG);
  fVar3 = Vector3f__JHADMABLOMI(pCVar2,NKGLOPDGMBG,method_01);
  CHOCOAGNFDD = Vector3f__JHADMABLOMI(NKGLOPDGMBG,NKGLOPDGMBG,method_01);
  bVar1 = Util__KEJBDHBDGNI(CHOCOAGNFDD,1e-10,(MethodInfo *)0x0);
  OOGPLJBADCD = 0.0;
  if (!bVar1) {
    OOGPLJBADCD = fVar3 / CHOCOAGNFDD;
  }
  pCVar2 = Vector3f__JHADMABLOMI(NKGLOPDGMBG,OOGPLJBADCD,method_00);
  pCVar2 = Vector3f__DJOFPNGJPFM(BELFKPIOJBI,pCVar2,method_01);
  return pCVar2;
}


// ===== public static float JHLJELAKADM(Vector3f DEGCNPFIIPL, Vector3f GDIHOLFJJGL, Vector3f CMKGDNKJNNC)  [RVA 0x307BC64]
// Vector3f$$JHLJELAKADM @ RVA 0x307BC64

float Vector3f__JHLJELAKADM
                (Vector3f_o *DEGCNPFIIPL,Vector3f_o *GDIHOLFJJGL,Vector3f_o *CMKGDNKJNNC,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (((GDIHOLFJJGL != (Vector3f_o *)0x0) &&
      ((GDIHOLFJJGL->fields).PPOPAMHBMGG = 0.0, DEGCNPFIIPL != (Vector3f_o *)0x0)) &&
     ((DEGCNPFIIPL->fields).PPOPAMHBMGG = 0.0, CMKGDNKJNNC != (Vector3f_o *)0x0)) {
    (CMKGDNKJNNC->fields).PPOPAMHBMGG = 0.0;
    fVar1 = Vector3f__NAHOANMJIEB(GDIHOLFJJGL,CMKGDNKJNNC,(MethodInfo *)CMKGDNKJNNC);
    fVar2 = Vector3f__NAHOANMJIEB(GDIHOLFJJGL,DEGCNPFIIPL,(MethodInfo *)CMKGDNKJNNC);
    return SQRT(fVar1) / SQRT(fVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3f LFENGGKOJDO(float OOGPLJBADCD)  [RVA 0x307BCDC]
// Vector3f$$LFENGGKOJDO @ RVA 0x307BCDC

Vector3f_o * Vector3f__LFENGGKOJDO(Vector3f_o *__this,float OOGPLJBADCD,MethodInfo *method)

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


// ===== public static Vector3f DMEHJADLELC(Vector3f BJCLOGCDNEG, Vector3f JDFOLIMEDCJ)  [RVA 0x307BCFC]
// Vector3f$$DMEHJADLELC @ RVA 0x307BCFC

Vector3f_o *
Vector3f__DMEHJADLELC(Vector3f_o *BJCLOGCDNEG,Vector3f_o *JDFOLIMEDCJ,MethodInfo *method)

{
  MethodInfo *method_00;
  Vector3f_o *pCVar1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)Vector3f__MPOCFELGHDK(BJCLOGCDNEG,JDFOLIMEDCJ,method);
  pCVar1 = Vector3f__FDDIKIMOHIH(method_00);
  if ((method_00 != (MethodInfo *)0x0) &&
     (pCVar1 = Vector3f__GPDMMIIPDAB((Vector3f_o *)method_00,pCVar1,method),
     pCVar1 != (Vector3f_o *)0x0)) {
    pCVar1 = Vector3f__IMINLGEKHIH(pCVar1,method_01);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector3f AHIPAMALCCN(Vector3f PHCOHKNFGLE, float GJAMCENHFKO)  [RVA 0x307BEDC]
// Vector3f$$AHIPAMALCCN @ RVA 0x307BEDC

Vector3f_o *
Vector3f__AHIPAMALCCN(Vector3f_o *PHCOHKNFGLE,float GJAMCENHFKO,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
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


// ===== public static Vector3f MPOCFELGHDK(Vector3f PHCOHKNFGLE, float OOGPLJBADCD)  [RVA 0x307BF44]
// Vector3f$$MPOCFELGHDK @ RVA 0x307BF44

Vector3f_o *
Vector3f__MPOCFELGHDK(Vector3f_o *PHCOHKNFGLE,float OOGPLJBADCD,MethodInfo *method)

{
  Vector3f_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PHCOHKNFGLE;
  if ((DAT_04565fd4 & 1) == 0) {
    auVar4 = FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fd4 = 1;
  }
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    fVar3 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
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
// Vector3f$$EPBENPDCBFE @ RVA 0x307B660

bool Vector3f__EPBENPDCBFE
               (Vector3f_o *__this,float HCHEFLKIIIK,float KCBGMCHANPM,float BIEIPFCNOHA,
               MethodInfo *method)

{
  return ABS((__this->fields).super.OHHDBINAJCB - HCHEFLKIIIK) +
         ABS((__this->fields).super.JOLEIODMLFL - KCBGMCHANPM) +
         ABS((__this->fields).PPOPAMHBMGG - BIEIPFCNOHA) <= 1e-10;
}


// ===== public void .ctor(Vector3 PHCOHKNFGLE)  [RVA 0x307BFE0]
// Vector3f$$.ctor @ RVA 0x307BFE0

void Vector3f___ctor(Vector3f_o *__this,UnityEngine_Vector3_o PHCOHKNFGLE,MethodInfo *method)

{
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = PHCOHKNFGLE.fields.x;
  (__this->fields).super.JOLEIODMLFL = PHCOHKNFGLE.fields.y;
  (__this->fields).PPOPAMHBMGG = PHCOHKNFGLE.fields.z;
  return;
}


// ===== public void DPAFBGIJBDL(float CJNHFNHJHPE)  [RVA 0x307C024]
// Vector3f$$DPAFBGIJBDL @ RVA 0x307C024

void Vector3f__DPAFBGIJBDL(Vector3f_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PPOPAMHBMGG = CJNHFNHJHPE;
  return;
}


// ===== public static Vector3f JHADMABLOMI(Vector3f PHCOHKNFGLE, float OOGPLJBADCD)  [RVA 0x307BB2C]
// Vector3f$$JHADMABLOMI @ RVA 0x307BB2C

Vector3f_o *
Vector3f__JHADMABLOMI(Vector3f_o *PHCOHKNFGLE,float OOGPLJBADCD,MethodInfo *method)

{
  Vector3f_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PHCOHKNFGLE;
  if ((DAT_04565fd5 & 1) == 0) {
    auVar4 = FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fd5 = 1;
  }
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    fVar3 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
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


// ===== public static Vector3f DJOFPNGJPFM(Vector3f BJCLOGCDNEG, Vector3f JDFOLIMEDCJ)  [RVA 0x307BBC4]
// Vector3f$$DJOFPNGJPFM @ RVA 0x307BBC4

Vector3f_o *
Vector3f__DJOFPNGJPFM(Vector3f_o *BJCLOGCDNEG,Vector3f_o *JDFOLIMEDCJ,MethodInfo *method)

{
  Vector3f_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_04565fd6 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fd6 = 1;
  }
  if ((BJCLOGCDNEG != (Vector3f_o *)0x0) && (JDFOLIMEDCJ != (Vector3f_o *)0x0)) {
    PVar1 = (BJCLOGCDNEG->fields).super;
    PVar3 = (JDFOLIMEDCJ->fields).super;
    fVar4 = (BJCLOGCDNEG->fields).PPOPAMHBMGG;
    fVar5 = (JDFOLIMEDCJ->fields).PPOPAMHBMGG;
    __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
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


// ===== public Vector3f FOOHBJNHOKK(Vector3 PHCOHKNFGLE)  [RVA 0x307C02C]
// Vector3f$$FOOHBJNHOKK @ RVA 0x307C02C

Vector3f_o *
Vector3f__FOOHBJNHOKK(Vector3f_o *__this,UnityEngine_Vector3_o PHCOHKNFGLE,MethodInfo *method)

{
  (__this->fields).super.OHHDBINAJCB = PHCOHKNFGLE.fields.x;
  (__this->fields).super.JOLEIODMLFL = PHCOHKNFGLE.fields.y;
  (__this->fields).PPOPAMHBMGG = PHCOHKNFGLE.fields.z;
  return __this;
}


// ===== public static Vector3f DAHMNJMDKIN()  [RVA 0x307C038]
// Vector3f$$DAHMNJMDKIN @ RVA 0x307C038

Vector3f_o * Vector3f__DAHMNJMDKIN(MethodInfo *method)

{
  Vector3f_o *__this;
  
  if ((DAT_04565fd7 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fd7 = 1;
  }
  __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  (__this->fields).PPOPAMHBMGG = 0.0;
  return __this;
}


// ===== public static Vector3f OKOPFKDFIIP()  [RVA 0x307C09C]
// Vector3f$$OKOPFKDFIIP @ RVA 0x307C09C

Vector3f_o * Vector3f__OKOPFKDFIIP(MethodInfo *method)

{
  Vector3f_o *__this;
  
  if ((DAT_04565fd8 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fd8 = 1;
  }
  __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).PPOPAMHBMGG = 0.0;
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 1.0;
  return __this;
}


// ===== public void LFENGGKOJDO(Vector3f PHCOHKNFGLE, float KBJAJGBMEPM)  [RVA 0x307C108]
// Vector3f$$LFENGGKOJDO @ RVA 0x307C108

void Vector3f__LFENGGKOJDO
               (Vector3f_o *__this,Vector3f_o *PHCOHKNFGLE,float KBJAJGBMEPM,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
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


// ===== public Vector3f AHIPAMALCCN(float GJAMCENHFKO)  [RVA 0x307C144]
// Vector3f$$AHIPAMALCCN @ RVA 0x307C144

Vector3f_o * Vector3f__AHIPAMALCCN(Vector3f_o *__this,float GJAMCENHFKO,MethodInfo *method)

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


// ===== public static Vector3f DPLKDGIBBEL(Vector3f FMPJLBLNHMC, Vector3f IHEPHBIPLPM, float OEBANKNLEMN)  [RVA 0x307C184]
// Vector3f$$DPLKDGIBBEL @ RVA 0x307C184

Vector3f_o *
Vector3f__DPLKDGIBBEL
          (Vector3f_o *FMPJLBLNHMC,Vector3f_o *IHEPHBIPLPM,float OEBANKNLEMN,
          MethodInfo *method)

{
  Vector3f_o *__this;
  float fVar1;
  float fVar2;
  PKHLGDMJPMF_Fields PVar3;
  PKHLGDMJPMF_Fields PVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04565fd9 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fd9 = 1;
  }
  if ((FMPJLBLNHMC != (Vector3f_o *)0x0) && (IHEPHBIPLPM != (Vector3f_o *)0x0)) {
    PVar3 = (IHEPHBIPLPM->fields).super;
    PVar4 = (FMPJLBLNHMC->fields).super;
    fVar5 = (FMPJLBLNHMC->fields).PPOPAMHBMGG;
    fVar6 = (IHEPHBIPLPM->fields).PPOPAMHBMGG;
    __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
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


// ===== public Vector3f LOPALOLIHBH(float IKADKIPIIMD, float OKMABLDHNLJ, float PIBBGDEBBJC)  [RVA 0x307C250]
// Vector3f$$LOPALOLIHBH @ RVA 0x307C250

Vector3f_o *
Vector3f__LOPALOLIHBH
          (Vector3f_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
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
// Vector3f$$.ctor @ RVA 0x307B738

void Vector3f___ctor(Vector3f_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
                       MethodInfo *method)

{
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = IKADKIPIIMD;
  (__this->fields).super.JOLEIODMLFL = OKMABLDHNLJ;
  (__this->fields).PPOPAMHBMGG = PIBBGDEBBJC;
  return;
}


// ===== public Vector3f FAOBHLCDKJI()  [RVA 0x307C270]
// Vector3f$$FAOBHLCDKJI @ RVA 0x307C270

Vector3f_o * Vector3f__FAOBHLCDKJI(Vector3f_o *__this,MethodInfo *method)

{
  Vector3f_o *__this_00;
  MethodInfo *extraout_x1;
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  
  if ((DAT_04565fda & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fda = 1;
    method = extraout_x1;
  }
  PVar1 = (__this->fields).super;
  fVar2 = (__this->fields).PPOPAMHBMGG;
  __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo,method);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this_00,0.0,0.0,(MethodInfo *)0x0);
  (__this_00->fields).super = PVar1;
  (__this_00->fields).PPOPAMHBMGG = fVar2;
  return __this_00;
}


// ===== public Vector3f LOPALOLIHBH(Vector3f PHCOHKNFGLE)  [RVA 0x307C2E8]
// Vector3f$$LOPALOLIHBH @ RVA 0x307C2E8

Vector3f_o *
Vector3f__LOPALOLIHBH(Vector3f_o *__this,Vector3f_o *PHCOHKNFGLE,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
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


// ===== public static Vector3 ALBJPLAPOBO(Vector3f PHCOHKNFGLE)  [RVA 0x307C31C]
// Vector3f$$ALBJPLAPOBO @ RVA 0x307C31C

UnityEngine_Vector3_o Vector3f__ALBJPLAPOBO(Vector3f_o *PHCOHKNFGLE,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  undefined8 uVar2;
  
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
    UVar1.fields.x = (PHCOHKNFGLE->fields).super.OHHDBINAJCB;
    uVar2._4_4_ = (PHCOHKNFGLE->fields).super.JOLEIODMLFL;
    UVar1.fields.z = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    return (UnityEngine_Vector3_o)UVar1.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3f PGLILPKGILI(float IKADKIPIIMD, float OKMABLDHNLJ, float PIBBGDEBBJC)  [RVA 0x307C338]
// Vector3f$$PGLILPKGILI @ RVA 0x307C338

Vector3f_o *
Vector3f__PGLILPKGILI
          (Vector3f_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
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


// ===== public Vector3f LOPALOLIHBH(float OOGPLJBADCD)  [RVA 0x307C358]
// Vector3f$$LOPALOLIHBH @ RVA 0x307C358

Vector3f_o * Vector3f__LOPALOLIHBH(Vector3f_o *__this,float OOGPLJBADCD,MethodInfo *method)

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


// ===== public static Vector3f EEOGHDMJKOO()  [RVA 0x307C378]
// Vector3f$$EEOGHDMJKOO @ RVA 0x307C378

Vector3f_o * Vector3f__EEOGHDMJKOO(MethodInfo *method)

{
  Vector3f_o *__this;
  
  if ((DAT_04565fdb & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fdb = 1;
  }
  __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).PPOPAMHBMGG = 0.0;
  (__this->fields).super.OHHDBINAJCB = 1.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  return __this;
}


// ===== public Vector3f LFENGGKOJDO(Vector3f PHCOHKNFGLE)  [RVA 0x307C3E4]
// Vector3f$$LFENGGKOJDO @ RVA 0x307C3E4

Vector3f_o *
Vector3f__LFENGGKOJDO(Vector3f_o *__this,Vector3f_o *PHCOHKNFGLE,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
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


// ===== public void .ctor(Vector3f PHCOHKNFGLE)  [RVA 0x307C418]
// Vector3f$$.ctor @ RVA 0x307C418

void Vector3f___ctor(Vector3f_o *__this,Vector3f_o *PHCOHKNFGLE,MethodInfo *method)

{
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
    (__this->fields).super = (PHCOHKNFGLE->fields).super;
    (__this->fields).PPOPAMHBMGG = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector3f NALMKBHIHHJ(Vector3f COKCFOBBGLI, Vector3f JEEAGFAHKJF)  [RVA 0x307C45C]
// Vector3f$$NALMKBHIHHJ @ RVA 0x307C45C

Vector3f_o *
Vector3f__NALMKBHIHHJ(Vector3f_o *COKCFOBBGLI,Vector3f_o *JEEAGFAHKJF,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  MethodInfo *method_00;
  
  pCVar1 = Vector3f__MPOCFELGHDK(JEEAGFAHKJF,COKCFOBBGLI,method);
  pCVar1 = Vector3f__JHADMABLOMI(pCVar1,0.5,method_00);
  pCVar1 = Vector3f__DJOFPNGJPFM(COKCFOBBGLI,pCVar1,method);
  return pCVar1;
}


// ===== public Vector3f IMINLGEKHIH()  [RVA 0x307BE54]
// Vector3f$$IMINLGEKHIH @ RVA 0x307BE54

Vector3f_o * Vector3f__IMINLGEKHIH(Vector3f_o *__this,MethodInfo *method)

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


// ===== public static Vector3f LDOKNMFMPDM()  [RVA 0x307C4AC]
// Vector3f$$LDOKNMFMPDM @ RVA 0x307C4AC

Vector3f_o * Vector3f__LDOKNMFMPDM(MethodInfo *method)

{
  Vector3f_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  
  if ((DAT_04565fdc & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fdc = 1;
  }
  __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  PVar1 = (PKHLGDMJPMF_Fields)NEON_fmov(0x3f800000,4);
  (__this->fields).super = PVar1;
  (__this->fields).PPOPAMHBMGG = 1.0;
  return __this;
}


// ===== public static Vector3f GPDMMIIPDAB(Vector3f COKCFOBBGLI, Vector3f JEEAGFAHKJF, Vector3f JFIFAPEAPCF, Vector3f DHAMLEJHOPI)  [RVA 0x307C518]
// Vector3f$$GPDMMIIPDAB @ RVA 0x307C518

Vector3f_o *
Vector3f__GPDMMIIPDAB
          (Vector3f_o *COKCFOBBGLI,Vector3f_o *JEEAGFAHKJF,Vector3f_o *JFIFAPEAPCF,
          Vector3f_o *DHAMLEJHOPI,MethodInfo *method)

{
  bool bVar1;
  Vector3f_o *__this;
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
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fdd = 1;
  }
  if ((((JEEAGFAHKJF != (Vector3f_o *)0x0) && (COKCFOBBGLI != (Vector3f_o *)0x0)) &&
      (JFIFAPEAPCF != (Vector3f_o *)0x0)) && (DHAMLEJHOPI != (Vector3f_o *)0x0)) {
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
    __this = (Vector3f_o *)0x0;
    if (!bVar1) {
      fVar11 = fVar11 - fVar7;
      fVar12 = fVar12 - fVar3;
      fVar3 = fVar8 * fVar11 - fVar12 * fVar4;
      fVar11 = fVar9 * fVar12 - fVar10 * fVar11;
      if (ABS(fVar11) + ABS(fVar2) + ABS(fVar3) < 1e-10) {
        __this = (Vector3f_o *)0x0;
      }
      else {
        bVar1 = Util__BKJNEKOBKED(fVar3 / fVar2,0.0,1.0,(MethodInfo *)0x0);
        __this = (Vector3f_o *)0x0;
        if (bVar1) {
          fVar11 = fVar11 / fVar2;
          bVar1 = Util__BKJNEKOBKED(fVar11,0.0,1.0,(MethodInfo *)0x0);
          __this = (Vector3f_o *)0x0;
          if (bVar1) {
            PVar5 = (COKCFOBBGLI->fields).super;
            PVar6 = (JEEAGFAHKJF->fields).super;
            __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
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
// Vector3f$$HKDIEEHOAMC @ RVA 0x307C6C4

float Vector3f__HKDIEEHOAMC(Vector3f_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).super.OHHDBINAJCB;
  fVar2 = (__this->fields).super.JOLEIODMLFL;
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2);
}


// ===== public static float AHIPAMALCCN(float JAICMIMBIOA, float GFMNKEJDJFD)  [RVA 0x307BF2C]
// Vector3f$$AHIPAMALCCN @ RVA 0x307BF2C

float Vector3f__AHIPAMALCCN(float JAICMIMBIOA,float GFMNKEJDJFD,MethodInfo *method)

{
  return (float)(int)(JAICMIMBIOA * GFMNKEJDJFD + 0.5) / GFMNKEJDJFD;
}


// ===== public void .ctor()  [RVA 0x30739B4]
// Vector3f$$.ctor @ RVA 0x30739B4

void Vector3f___ctor(Vector3f_o *__this,MethodInfo *method)

{
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).PPOPAMHBMGG = 0.0;
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  return;
}


// ===== public Vector3f PGLILPKGILI(float OOGPLJBADCD)  [RVA 0x307C6DC]
// Vector3f$$PGLILPKGILI @ RVA 0x307C6DC

Vector3f_o * Vector3f__PGLILPKGILI(Vector3f_o *__this,float OOGPLJBADCD,MethodInfo *method)

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


// ===== public static bool LJOKBIDEOMJ(Vector3f COKCFOBBGLI, Vector3f JEEAGFAHKJF)  [RVA 0x307C6F8]
// Vector3f$$LJOKBIDEOMJ @ RVA 0x307C6F8

bool Vector3f__LJOKBIDEOMJ
               (Vector3f_o *COKCFOBBGLI,Vector3f_o *JEEAGFAHKJF,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Vector3f__LCAEEPKOHMN(COKCFOBBGLI,JEEAGFAHKJF,method);
  return (bool)(~bVar1 & 1);
}


// ===== public static void DPLKDGIBBEL(Vector3f FMPJLBLNHMC, Vector3f IHEPHBIPLPM, float OEBANKNLEMN, Vector3f JGHPAFEFEFB)  [RVA 0x307C710]
// Vector3f$$DPLKDGIBBEL @ RVA 0x307C710

void Vector3f__DPLKDGIBBEL
               (Vector3f_o *FMPJLBLNHMC,Vector3f_o *IHEPHBIPLPM,float OEBANKNLEMN,
               Vector3f_o *JGHPAFEFEFB,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  PKHLGDMJPMF_Fields PVar6;
  
  if (((FMPJLBLNHMC != (Vector3f_o *)0x0) && (IHEPHBIPLPM != (Vector3f_o *)0x0)) &&
     (JGHPAFEFEFB != (Vector3f_o *)0x0)) {
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


// ===== public static Vector3f FDDIKIMOHIH()  [RVA 0x307BD2C]
// Vector3f$$FDDIKIMOHIH @ RVA 0x307BD2C

Vector3f_o * Vector3f__FDDIKIMOHIH(MethodInfo *method)

{
  Vector3f_o *__this;
  
  if ((DAT_04565fde & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fde = 1;
  }
  __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = 0.0;
  (__this->fields).super.JOLEIODMLFL = 0.0;
  (__this->fields).PPOPAMHBMGG = 1.0;
  return __this;
}


// ===== public float FCEAFPLBNGE(Vector3f PHCOHKNFGLE)  [RVA 0x307C764]
// Vector3f$$FCEAFPLBNGE @ RVA 0x307C764

float Vector3f__FCEAFPLBNGE(Vector3f_o *__this,Vector3f_o *PHCOHKNFGLE,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = Vector3f__NAHOANMJIEB(PHCOHKNFGLE,__this,method);
  return SQRT(fVar1);
}


// ===== public static float NAHOANMJIEB(Vector3f BJCLOGCDNEG, Vector3f JDFOLIMEDCJ)  [RVA 0x307C784]
// Vector3f$$NAHOANMJIEB @ RVA 0x307C784

float Vector3f__NAHOANMJIEB
                (Vector3f_o *BJCLOGCDNEG,Vector3f_o *JDFOLIMEDCJ,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((BJCLOGCDNEG != (Vector3f_o *)0x0) && (JDFOLIMEDCJ != (Vector3f_o *)0x0)) {
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


// ===== public static Vector3f ALBJPLAPOBO(Vector3 PHCOHKNFGLE)  [RVA 0x307C800]
// Vector3f$$ALBJPLAPOBO @ RVA 0x307C800

Vector3f_o * Vector3f__ALBJPLAPOBO(UnityEngine_Vector3_o PHCOHKNFGLE,MethodInfo *method)

{
  Vector3f_o *__this;
  
  if ((DAT_04565fdf & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fdf = 1;
  }
  __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
  (__this->fields).super.OHHDBINAJCB = PHCOHKNFGLE.fields.x;
  (__this->fields).super.JOLEIODMLFL = PHCOHKNFGLE.fields.y;
  (__this->fields).PPOPAMHBMGG = PHCOHKNFGLE.fields.z;
  return __this;
}


// ===== public Vector3f GPDMMIIPDAB(Vector3f PHCOHKNFGLE)  [RVA 0x307BD94]
// Vector3f$$GPDMMIIPDAB @ RVA 0x307BD94

Vector3f_o *
Vector3f__GPDMMIIPDAB(Vector3f_o *__this,Vector3f_o *PHCOHKNFGLE,MethodInfo *method)

{
  Vector3f_o *__this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04565fe0 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fe0 = 1;
  }
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
    fVar3 = (PHCOHKNFGLE->fields).super.JOLEIODMLFL;
    fVar1 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    fVar5 = (__this->fields).super.JOLEIODMLFL;
    fVar2 = (__this->fields).PPOPAMHBMGG;
    fVar4 = (PHCOHKNFGLE->fields).super.OHHDBINAJCB;
    fVar6 = (__this->fields).super.OHHDBINAJCB;
    __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this_00,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).super.OHHDBINAJCB = fVar5 * fVar1 - fVar2 * fVar3;
    (__this_00->fields).super.JOLEIODMLFL = fVar2 * fVar4 - fVar1 * fVar6;
    (__this_00->fields).PPOPAMHBMGG = fVar3 * fVar6 - fVar5 * fVar4;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector3f EOHMFJFFFIN(XmlNode JHMENEKPIBO)  [RVA 0x307C880]
// Vector3f$$EOHMFJFFFIN @ RVA 0x307C880

Vector3f_o * Vector3f__EOHMFJFFFIN(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  Vector3f_o *__this;
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  float fVar4;
  
  if ((DAT_04565fe1 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    DAT_04565fe1 = 1;
    method = extraout_x1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    __this = (Vector3f_o *)0x0;
  }
  else {
    __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo,method);
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


// ===== public static float FCEAFPLBNGE(Vector3f BJCLOGCDNEG, Vector3f JDFOLIMEDCJ)  [RVA 0x307BCC8]
// Vector3f$$FCEAFPLBNGE @ RVA 0x307BCC8

float Vector3f__FCEAFPLBNGE
                (Vector3f_o *BJCLOGCDNEG,Vector3f_o *JDFOLIMEDCJ,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = Vector3f__NAHOANMJIEB(BJCLOGCDNEG,JDFOLIMEDCJ,method);
  return SQRT(fVar1);
}


// ===== public void CPKBJPIHPCL(Vector3f FMPJLBLNHMC, Vector3f IHEPHBIPLPM)  [RVA 0x3073B68]
// Vector3f$$CPKBJPIHPCL @ RVA 0x3073B68

void Vector3f__CPKBJPIHPCL
               (Vector3f_o *__this,Vector3f_o *FMPJLBLNHMC,Vector3f_o *IHEPHBIPLPM,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  float fVar3;
  PKHLGDMJPMF_Fields PVar4;
  
  if ((FMPJLBLNHMC != (Vector3f_o *)0x0) && (IHEPHBIPLPM != (Vector3f_o *)0x0)) {
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


// ===== public Vector3f FOOHBJNHOKK(Vector3f PHCOHKNFGLE)  [RVA 0x307CB4C]
// Vector3f$$FOOHBJNHOKK @ RVA 0x307CB4C

Vector3f_o *
Vector3f__FOOHBJNHOKK(Vector3f_o *__this,Vector3f_o *PHCOHKNFGLE,MethodInfo *method)

{
  if (PHCOHKNFGLE != (Vector3f_o *)0x0) {
    (__this->fields).super = (PHCOHKNFGLE->fields).super;
    (__this->fields).PPOPAMHBMGG = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GHHOKPBPCJI()  [RVA 0x307CB70]
// Vector3f$$GHHOKPBPCJI @ RVA 0x307CB70

void Vector3f__GHHOKPBPCJI(Vector3f_o *__this,MethodInfo *method)

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


// ===== public Vector3f LFENGGKOJDO(float IKADKIPIIMD, float OKMABLDHNLJ, float PIBBGDEBBJC)  [RVA 0x307CBBC]
// Vector3f$$LFENGGKOJDO @ RVA 0x307CBBC

Vector3f_o *
Vector3f__LFENGGKOJDO
          (Vector3f_o *__this,float IKADKIPIIMD,float OKMABLDHNLJ,float PIBBGDEBBJC,
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


// ===== public Vector3f LOPALOLIHBH(PKHLGDMJPMF FKAIGPBIAHN)  [RVA 0x307CBDC]
// Vector3f$$LOPALOLIHBH @ RVA 0x307CBDC

Vector3f_o *
Vector3f__LOPALOLIHBH(Vector3f_o *__this,PKHLGDMJPMF_o *FKAIGPBIAHN,MethodInfo *method)

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


// ===== public static Vector3f MPOCFELGHDK(Vector3f BJCLOGCDNEG, Vector3f JDFOLIMEDCJ)  [RVA 0x307BA50]
// Vector3f$$MPOCFELGHDK @ RVA 0x307BA50

Vector3f_o *
Vector3f__MPOCFELGHDK(Vector3f_o *BJCLOGCDNEG,Vector3f_o *JDFOLIMEDCJ,MethodInfo *method)

{
  Vector3f_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_04565fe2 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565fe2 = 1;
  }
  if ((BJCLOGCDNEG != (Vector3f_o *)0x0) && (JDFOLIMEDCJ != (Vector3f_o *)0x0)) {
    PVar1 = (BJCLOGCDNEG->fields).super;
    PVar3 = (JDFOLIMEDCJ->fields).super;
    fVar4 = (BJCLOGCDNEG->fields).PPOPAMHBMGG;
    fVar5 = (JDFOLIMEDCJ->fields).PPOPAMHBMGG;
    __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
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


// ===== public static float JHADMABLOMI(Vector3f BJCLOGCDNEG, Vector3f JDFOLIMEDCJ)  [RVA 0x307BAF0]
// Vector3f$$JHADMABLOMI @ RVA 0x307BAF0

float Vector3f__JHADMABLOMI
                (Vector3f_o *BJCLOGCDNEG,Vector3f_o *JDFOLIMEDCJ,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((BJCLOGCDNEG != (Vector3f_o *)0x0) && (JDFOLIMEDCJ != (Vector3f_o *)0x0)) {
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
// Vector3f$$MLHFIIEGCKG @ RVA 0x307C488

float Vector3f__MLHFIIEGCKG(Vector3f_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (__this->fields).super.OHHDBINAJCB;
  fVar2 = (__this->fields).super.JOLEIODMLFL;
  fVar3 = (__this->fields).PPOPAMHBMGG;
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
}

