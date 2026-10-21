// Original name: Nekki.SF2.Core.Fights.Rules.PointsRule  (obfuscated EDELKOLBNDG)
// TypeDefIndex 973
// Namespace: 
// public class PointsRule : InFightRule
// Fields:
//   private BGMKDONJFPI LOPAIPGFFCF; // 0x6C
//   private int BADFKNGBLEJ; // 0x70
//   private int JHLGFABKBNA; // 0x74
//   private int HEMMCIFBAMJ; // 0x78
//   private int IKEDHPAPFDA; // 0x7C
//   private bool OOJIBEJEEGF; // 0x80
//   private bool NDMADLNDJBH; // 0x81
//   private bool FBJJIFINMNN; // 0x82
//   private bool JCACKIBFJAI; // 0x83
//   private bool KGFPLKMNLGB; // 0x84
//   private bool FBGFNGLLNMG; // 0x85
//   private bool EPIIDGFAAFB; // 0x86
//   private PointsRule.DAHGIJELHLL HNGNJJHIJJC; // 0x88

// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30B2D98]
// PointsRule$$HNIHOIAMDPC @ RVA 0x30B2D98

void PointsRule__HNIHOIAMDPC
               (PointsRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *a;
  MethodInfo *method_00;
  undefined4 uVar5;
  
  if ((DAT_045661ee & 1) == 0) {
    FUN_01bab630(&StringLiteral_4657/*"Contest"*/);
    FUN_01bab630(&StringLiteral_11733/*"Score"*/);
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_10347/*"PointsPerHit"*/);
    FUN_01bab630(&StringLiteral_4893/*"Critical"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_045661ee = 1;
  }
  Rule__HNIHOIAMDPC((Rule_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) goto LAB_031b30a4;
  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031b30a4;
  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar3,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
  a = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_4657/*"Contest"*/,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,StringLiteral_4657/*"Contest"*/,(MethodInfo *)0x0);
  if (bVar1) {
    uVar5 = 0;
LAB_031b2eac:
    *(undefined4 *)&(__this->fields).super.field_0x5c = uVar5;
  }
  else {
    bVar1 = System_String__op_Equality(a,StringLiteral_11733/*"Score"*/,(MethodInfo *)0x0);
    if (bVar1) {
      uVar5 = 1;
      goto LAB_031b2eac;
    }
  }
  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_8868/*"Max"*/,(MethodInfo *)0x0);
    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
    (__this->fields).HEMMCIFBAMJ = iVar2;
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_10347/*"PointsPerHit"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
      (__this->fields).LOPAIPGFFCF = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
        (__this->fields).OOJIBEJEEGF = (bool_conflict)(~bVar1 & 1);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          *(bool *)((long)&(__this->fields).IKEDHPAPFDA + 1) = bVar1;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_4893/*"Critical"*/,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
            (__this->fields).NDMADLNDJBH = (bool_conflict)(~bVar1 & 1);
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_4893/*"Critical"*/,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
              *(bool *)((long)&(__this->fields).IKEDHPAPFDA + 2) = bVar1;
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_11996/*"Shock"*/,(MethodInfo *)0x0);
                bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
                (__this->fields).FBJJIFINMNN = (bool_conflict)(~bVar1 & 1);
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,StringLiteral_11996/*"Shock"*/,(MethodInfo *)0x0);
                  method_00 = (MethodInfo *)0x0;
                  bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                  *(bool *)((long)&(__this->fields).IKEDHPAPFDA + 3) = bVar1;
                  PointsRule__LOGLPMMHIED(__this,AHDGNOJPPIB,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031b30a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x30B31B4]
// PointsRule$$.ctor @ RVA 0x30B31B4

void PointsRule___ctor(PointsRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  InFightRule___ctor((InFightRule_o *)__this,0x12,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  (__this->fields).BADFKNGBLEJ = 0;
  (__this->fields).JHLGFABKBNA = 0;
  *(undefined1 *)&(__this->fields).IKEDHPAPFDA = 0;
  *(undefined4 *)&(__this->fields).super.field_0x5c = 0;
  *(undefined2 *)((long)&(__this->fields).IKEDHPAPFDA + 1) = 0;
  *(undefined1 *)((long)&(__this->fields).IKEDHPAPFDA + 3) = 0;
  (__this->fields).KGFPLKMNLGB = true;
  (__this->fields).FBGFNGLLNMG = false;
  (__this->fields).EPIIDGFAAFB = false;
  (__this->fields).field_0x7b = 0;
  (__this->fields).super.EGBPMNKKPFI = false;
  InFightRule__DENNGFKNHKO((InFightRule_o *)__this,6,(MethodInfo *)0x0);
  InFightRule__DENNGFKNHKO((InFightRule_o *)__this,9,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
                    /* WARNING: Could not recover jumptable at 0x031b3244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 031b3244 to 032b330f has its CatchHandler @ 031b3244
                       catch() { ... } // from try @ 031b3244 with catch @ 031b3244
                       catch() { ... } // from try @ 031b35ac with catch @ 031b3244
                       catch() { ... } // from try @ 031b3628 with catch @ 031b3244
                       catch() { ... } // from try @ 031b36cc with catch @ 031b3244
                       catch() { ... } // from try @ 031b36dc with catch @ 031b3244 */
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  return;
}


// ===== public int AHFALGJNOBD()  [RVA 0x30B3248]
// PointsRule$$AHFALGJNOBD @ RVA 0x30B3248

int32_t PointsRule__AHFALGJNOBD(PointsRule_o *__this,MethodInfo *method)

{
  return (__this->fields).BADFKNGBLEJ;
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x30B3250]
// PointsRule$$DIGLGKAPOAB @ RVA 0x30B3250

void PointsRule__DIGLGKAPOAB(PointsRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x031b325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  return;
}


// ===== public BGMKDONJFPI JAAJNJMPCJF()  [RVA 0x30B3260]
// PointsRule$$JAAJNJMPCJF @ RVA 0x30B3260

int32_t PointsRule__JAAJNJMPCJF(PointsRule_o *__this,MethodInfo *method)

{
  return *(int32_t *)&(__this->fields).super.field_0x5c;
}


// ===== public int MIGNKEOPLFN()  [RVA 0x30B3268]
// PointsRule$$MIGNKEOPLFN @ RVA 0x30B3268

int32_t PointsRule__MIGNKEOPLFN(PointsRule_o *__this,MethodInfo *method)

{
  return (__this->fields).JHLGFABKBNA;
}


// ===== protected void LOGLPMMHIED(XmlNode AHDGNOJPPIB)  [RVA 0x30B30A8]
// PointsRule$$LOGLPMMHIED @ RVA 0x30B30A8

void PointsRule__LOGLPMMHIED
               (PointsRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  undefined4 uVar2;
  
  if ((DAT_045661ef & 1) == 0) {
    FUN_01bab630(&StringLiteral_3531/*"BodyDefense"*/);
    FUN_01bab630(&StringLiteral_5266/*"Defense"*/);
    FUN_01bab630(&StringLiteral_7046/*"HeadDefense"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045661ef = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_5266/*"Defense"*/,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (bVar1) {
      uVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3531/*"BodyDefense"*/,(MethodInfo *)0x0);
      if (bVar1) {
        uVar2 = 1;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_7046/*"HeadDefense"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        uVar2 = 0;
      }
    }
    (__this->fields).KGFPLKMNLGB = (bool_conflict)(char)uVar2;
    (__this->fields).FBGFNGLLNMG = (bool_conflict)(char)((uint)uVar2 >> 8);
    (__this->fields).EPIIDGFAAFB = (bool_conflict)(char)((uint)uVar2 >> 0x10);
    (__this->fields).field_0x7b = (char)((uint)uVar2 >> 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x30B3270]
// PointsRule$$GOGPCNMIJOB @ RVA 0x30B3270

InFightRule_o * PointsRule__GOGPCNMIJOB(PointsRule_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  PointsRule_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_045661f0 & 1) == 0) {
    FUN_01bab630(&PointsRule_TypeInfo);
    DAT_045661f0 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (PointsRule_o *)thunk_FUN_01bda818(PointsRule_TypeInfo,method);
    PointsRule___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (PointsRule_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (InFightRule_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HEKNDHOAGDP()  [RVA 0x30B32F4]
// PointsRule$$HEKNDHOAGDP @ RVA 0x30B32F4

bool PointsRule__HEKNDHOAGDP(PointsRule_o *__this,MethodInfo *method)

{
  return (bool)(char)(__this->fields).IKEDHPAPFDA;
}


// ===== public int ALBMAGDICBA()  [RVA 0x30B32FC]
// PointsRule$$ALBMAGDICBA @ RVA 0x30B32FC

int32_t PointsRule__ALBMAGDICBA(PointsRule_o *__this,MethodInfo *method)

{
  return (__this->fields).HEMMCIFBAMJ;
}


// ===== protected bool NIADHCKGCIE(bool OKPIHCKHLAD)  [RVA 0x30B3304]
// PointsRule$$NIADHCKGCIE @ RVA 0x30B3304

bool PointsRule__NIADHCKGCIE(PointsRule_o *__this,bool OKPIHCKHLAD,MethodInfo *method)

{
  int iVar1;
  
  iVar1._0_1_ = (__this->fields).KGFPLKMNLGB;
  iVar1._1_1_ = (__this->fields).FBGFNGLLNMG;
  iVar1._2_1_ = (__this->fields).EPIIDGFAAFB;
  iVar1._3_1_ = (__this->fields).field_0x7b;
                    /* try { // try from 031b3310 to 032b3327 has its CatchHandler @ 031b35f0 */
  if ((iVar1 != 2) && (iVar1 != 0 || !OKPIHCKHLAD)) {
                    /* try { // try from 031b3328 to 032b332f has its CatchHandler @ 031b35d0 */
    return iVar1 == 1 && !OKPIHCKHLAD;
  }
                    /* try { // try from 031b3338 to 032b3357 has its CatchHandler @ 031b35c8 */
  return true;
}


// ===== public override HEDFKJBDBFN PKEKLILIONG()  [RVA 0x30B333C]
// PointsRule$$PKEKLILIONG @ RVA 0x30B333C

int32_t PointsRule__PKEKLILIONG(PointsRule_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  iVar1 = *(int *)&(__this->fields).super.field_0x5c;
  if (iVar1 == 1) {
    iVar2 = 1;
    if ((__this->fields).BADFKNGBLEJ < (__this->fields).HEMMCIFBAMJ) {
      iVar2 = 2;
    }
    return iVar2;
  }
  if (iVar1 == 0) {
    iVar2 = 1;
                    /* try { // try from 031b3358 to 032b337f has its CatchHandler @ 031b35b0 */
    if ((__this->fields).BADFKNGBLEJ <= (__this->fields).JHLGFABKBNA) {
      iVar2 = 2;
    }
    return iVar2;
  }
  return 0;
}


// ===== public override void DGLJCGNHLIG()  [RVA 0x30B3380]
// PointsRule$$DGLJCGNHLIG @ RVA 0x30B3380

void PointsRule__DGLJCGNHLIG(PointsRule_o *__this,MethodInfo *method)

{
  (__this->fields).BADFKNGBLEJ = 0;
  (__this->fields).JHLGFABKBNA = 0;
  *(undefined1 *)&(__this->fields).IKEDHPAPFDA = 0;
  return;
}


// ===== protected bool AMFNAJDCAKF(JMIFGHKOLCL OKHDOCIIAJG, JMIFGHKOLCL ONEFJHFHALK, bool ODGCPKBEFOL)  [RVA 0x30B338C]
// PointsRule$$AMFNAJDCAKF @ RVA 0x30B338C

bool PointsRule__AMFNAJDCAKF
               (PointsRule_o *__this,JMIFGHKOLCL_o *OKHDOCIIAJG,JMIFGHKOLCL_o *ONEFJHFHALK,
               bool ODGCPKBEFOL,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if ((__this->fields).OOJIBEJEEGF == false) {
    bVar3 = true;
  }
  else {
    if (OKHDOCIIAJG == (JMIFGHKOLCL_o *)0x0) goto LAB_031b3458;
                    /* try { // try from 031b33a0 to 032b33b7 has its CatchHandler @ 031b35d8 */
    bVar3 = (OKHDOCIIAJG->fields).LDNBDFNLCOK ==
            (bool_conflict)*(char *)((long)&(__this->fields).IKEDHPAPFDA + 1);
  }
  if ((__this->fields).NDMADLNDJBH == false) {
    bVar4 = true;
  }
  else {
    if (OKHDOCIIAJG == (JMIFGHKOLCL_o *)0x0) goto LAB_031b3458;
    bVar4 = (OKHDOCIIAJG->fields).DMAAHCDPHDI ==
            (bool_conflict)*(char *)((long)&(__this->fields).IKEDHPAPFDA + 2);
  }
                    /* try { // try from 031b33d8 to 032b33df has its CatchHandler @ 031b35dc */
  if ((__this->fields).FBJJIFINMNN == false) {
    bVar5 = true;
  }
  else {
    if (ONEFJHFHALK == (JMIFGHKOLCL_o *)0x0) goto LAB_031b3458;
    bVar5 = (ONEFJHFHALK->fields).CMIMOABBIJC ==
            (bool_conflict)*(char *)((long)&(__this->fields).IKEDHPAPFDA + 3);
                    /* try { // try from 031b33f0 to 032b3413 has its CatchHandler @ 031b35c4 */
  }
  if (OKHDOCIIAJG != (JMIFGHKOLCL_o *)0x0) {
    if ((OKHDOCIIAJG->fields).ELCBIMMGAFJ == 6) {
      if ((bVar3 & (OKHDOCIIAJG->fields).OOAJMHEECGF) == 0) {
        bVar3 = false;
      }
      else {
                    /* try { // try from 031b3414 to 032b341b has its CatchHandler @ 031b35bc */
        iVar1._0_1_ = (__this->fields).KGFPLKMNLGB;
        iVar1._1_1_ = (__this->fields).FBGFNGLLNMG;
        iVar1._2_1_ = (__this->fields).EPIIDGFAAFB;
        iVar1._3_1_ = (__this->fields).field_0x7b;
        bVar3 = (OKHDOCIIAJG->fields).OKPIHCKHLAD == false;
                    /* try { // try from 031b3420 to 032b349f has its CatchHandler @ 031b35e4 */
        bVar3 = (iVar1 == 2 || !bVar3 && iVar1 == 0) || iVar1 == 1 && bVar3;
      }
      if ((bool)(bVar5 & bVar4 & bVar3)) {
        if (ODGCPKBEFOL) {
          iVar2 = *(int *)&(__this->fields).super.field_0x5c;
          iVar1 = (__this->fields).BADFKNGBLEJ + 1;
          (__this->fields).BADFKNGBLEJ = iVar1;
        }
        else {
          iVar2 = *(int *)&(__this->fields).super.field_0x5c;
          iVar1 = (__this->fields).JHLGFABKBNA + 1;
          (__this->fields).JHLGFABKBNA = iVar1;
        }
        if ((iVar2 == 1) && ((__this->fields).HEMMCIFBAMJ <= iVar1)) {
                    /* try { // try from 031b34c0 to 032b34d7 has its CatchHandler @ 031b35f4 */
          *(undefined1 *)&(__this->fields).IKEDHPAPFDA = 1;
          return true;
        }
        return true;
      }
    }
    return false;
  }
LAB_031b3458:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool DGCODECJJCC(object IMMNELPBGIF)  [RVA 0x30B34D4]
// PointsRule$$DGCODECJJCC @ RVA 0x30B34D4

bool PointsRule__DGCODECJJCC(PointsRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  MethodInfo *in_x4;
  
                    /* try { // try from 031b34d8 to 032b34df has its CatchHandler @ 031b35d4 */
                    /* try { // try from 031b34e8 to 032b3507 has its CatchHandler @ 031b35cc */
  if ((DAT_045661f1 & 1) == 0) {
    FUN_01bab630(&IBCHOCDIMIP_TypeInfo);
    DAT_045661f1 = 1;
  }
                    /* try { // try from 031b3508 to 032b352f has its CatchHandler @ 031b35b4 */
  (*(__this->klass->vtable)._20_BLLEKLPPHBN.methodPtr)
            (__this,IMMNELPBGIF,(__this->klass->vtable)._20_BLLEKLPPHBN.method);
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* try { // try from 031b3530 to 032b3533 has its CatchHandler @ 031b35ec */
                    /* try { // try from 031b3534 to 032b354b has its CatchHandler @ 031b35e8 */
    bVar1 = (IBCHOCDIMIP_TypeInfo->_2).naturalAligment;
                    /* try { // try from 031b354c to 032b3553 has its CatchHandler @ 031b35c0 */
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)IBCHOCDIMIP_TypeInfo)) {
                    /* catch() { ... } // from try @ 031b33f0 with catch @ 031b35c4 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031b3338 with catch @ 031b35c8 */
      FUN_01babc64(IMMNELPBGIF);
    }
                    /* try { // try from 031b355c to 032b357b has its CatchHandler @ 031b35b8 */
    bVar3 = true;
    bVar2 = PointsRule__AMFNAJDCAKF
                      (__this,(JMIFGHKOLCL_o *)IMMNELPBGIF[1].klass,IMMNELPBGIF[1].monitor,true,
                       in_x4);
    if (!bVar2) {
      bVar3 = PointsRule__AMFNAJDCAKF
                        (__this,IMMNELPBGIF[1].monitor,(JMIFGHKOLCL_o *)IMMNELPBGIF[1].klass,false,
                         in_x4);
                    /* try { // try from 031b357c to 032b35a3 has its CatchHandler @ 031b35ac */
    }
    if (IMMNELPBGIF[1].klass != (Il2CppClass *)0x0) {
      if (*(int *)&((IMMNELPBGIF[1].klass)->_1).namespaze != 9) {
        if (IMMNELPBGIF[1].monitor == (void *)0x0) goto LAB_031b35c0;
                    /* try { // try from 031b35a4 to 032b35a7 has its CatchHandler @ 031b35e0 */
        if (*(int *)((long)IMMNELPBGIF[1].monitor + 0x18) != 9) {
          return bVar3;
        }
      }
                    /* try { // try from 031b35a8 to 032b35ab has its CatchHandler @ 031b35e4 */
                    /* catch() { ... } // from try @ 031b357c with catch @ 031b35ac
                       try { // try from 031b35ac to 032b360f has its CatchHandler @ 031b3244 */
      *(undefined1 *)&(__this->fields).IKEDHPAPFDA = 1;
                    /* catch() { ... } // from try @ 031b3358 with catch @ 031b35b0 */
                    /* catch() { ... } // from try @ 031b3508 with catch @ 031b35b4 */
                    /* catch() { ... } // from try @ 031b355c with catch @ 031b35b8 */
                    /* catch() { ... } // from try @ 031b3414 with catch @ 031b35bc */
      return true;
    }
  }
LAB_031b35c0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031b354c with catch @ 031b35c0 */
  FUN_01bab8c8();
}

