// Original name: Nekki.SF2.Core.Fights.Rules.RandomAreaRule  (obfuscated ACBCKKIEOCE)
// TypeDefIndex 485
// Namespace: 
// public class RandomAreaRule : InFightRule
// Fields:
//   public const string BEBJFCIKPFL = "Textures/fight/rules/randomarea/";
//   public const string KLALDHGPIOD = "RuleArea";
//   private float EGOKMNOIJBP; // 0x6C
//   private float BJKHPKFDGEE; // 0x70
//   private float KLEMGCNKPGL; // 0x74
//   private float NHOHJDAIONA; // 0x78
//   private string DEKCPPOJFEH; // 0x80
//   private string AHNCOKJAGPN; // 0x88
//   private string APBICPEOMOM; // 0x90
//   public bool CDGJHNFHJDI; // 0x98
//   private CBOEGGBIJMD EDMFBKICBPB; // 0xA0
//   private FFJHOBJFOLI FFBMBKHHLPO; // 0xA8
//   private bool NBGPKFHLCOG; // 0xB0
//   private bool EPBLDDIIKFF; // 0xB1
//   private int EKEJMKEFJIO; // 0xB4
//   private float JAAGMIKHEPA; // 0xB8
//   private float PJDAFHGHKIE; // 0xBC
//   private float JGIBNAHJPGC; // 0xC0
//   private HBOAEOEEDEN CFFCMDGCPOC; // 0xC8

// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3582FD4]
// RandomAreaRule$$HNIHOIAMDPC @ RVA 0x3582FD4

void RandomAreaRule__HNIHOIAMDPC
               (RandomAreaRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  FFJHOBJFOLI_o *pFVar9;
  float fVar10;
  
  if ((DAT_04568ce0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12937/*"Textures/fight/rules/randomarea/"*/);
    FUN_01bab630(&StringLiteral_6202/*"FadeOut"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_6587/*"FramesOff"*/);
    FUN_01bab630(&StringLiteral_11456/*"RuleArea"*/);
    FUN_01bab630(&StringLiteral_14946/*"Width"*/);
    FUN_01bab630(&StringLiteral_7289/*"Icon"*/);
    FUN_01bab630(&StringLiteral_6201/*"FadeIn"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6588/*"FramesOn"*/);
    DAT_04568ce0 = 1;
  }
  Rule__HNIHOIAMDPC((Rule_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_11456/*"RuleArea"*/,(MethodInfo *)0x0);
      (__this->fields).DEKCPPOJFEH = pSVar6;
      thunk_FUN_01c20e04();
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_14946/*"Width"*/,(MethodInfo *)0x0);
        fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
        ppSVar8 = &(__this->fields).AHNCOKJAGPN;
        pSVar6 = *ppSVar8;
        *(float *)&(__this->fields).super.field_0x5c = fVar10;
        pSVar6 = System_String__Concat(pSVar6,StringLiteral_12937/*"Textures/fight/rules/randomarea/"*/,(MethodInfo *)0x0);
        *ppSVar8 = pSVar6;
        thunk_FUN_01c20e04(ppSVar8,pSVar6);
        pSVar6 = *ppSVar8;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
          *ppSVar8 = pSVar6;
          thunk_FUN_01c20e04(ppSVar8,pSVar6);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
            bVar2 = EIABCPKDEBD__OBECCOPBADO(pSVar5,(MethodInfo *)0x0);
            if (!bVar2) {
              ppSVar8 = &(__this->fields).APBICPEOMOM;
              pSVar6 = System_String__Concat(*ppSVar8,StringLiteral_12937/*"Textures/fight/rules/randomarea/"*/,(MethodInfo *)0x0);
              *ppSVar8 = pSVar6;
              thunk_FUN_01c20e04(ppSVar8,pSVar6);
              pSVar6 = *ppSVar8;
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_036833dc;
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
              pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
              *ppSVar8 = pSVar6;
              thunk_FUN_01c20e04(ppSVar8,pSVar6);
            }
            pFVar9 = (__this->fields).FFBMBKHHLPO;
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_6587/*"FramesOff"*/,(MethodInfo *)0x0);
              iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
              if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                (pFVar9->fields).FNHHIEKCLPI = iVar3;
                pFVar9 = (__this->fields).FFBMBKHHLPO;
                if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                  iVar1 = (pFVar9->fields).FNHHIEKCLPI;
                  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar4,StringLiteral_6201/*"FadeIn"*/,(MethodInfo *)0x0);
                    iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                    (pFVar9->fields).IAEPIMJNGNJ = iVar3 + iVar1;
                    pFVar9 = (__this->fields).FFBMBKHHLPO;
                    if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                      iVar1 = (pFVar9->fields).IAEPIMJNGNJ;
                      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar4,StringLiteral_6588/*"FramesOn"*/,(MethodInfo *)0x0);
                        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                        (pFVar9->fields).BADGBPKKAMP = iVar3 + iVar1;
                        pFVar9 = (__this->fields).FFBMBKHHLPO;
                        if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                          iVar1 = (pFVar9->fields).BADGBPKKAMP;
                          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar4,StringLiteral_6202/*"FadeOut"*/,(MethodInfo *)0x0);
                            iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                            (pFVar9->fields).MJDFEDKPMOP = iVar3 + iVar1;
                            pFVar9 = (__this->fields).FFBMBKHHLPO;
                            if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                              (__this->fields).PJDAFHGHKIE =
                                   255.0 / (float)((pFVar9->fields).IAEPIMJNGNJ -
                                                  (pFVar9->fields).FNHHIEKCLPI);
                              (__this->fields).JGIBNAHJPGC =
                                   255.0 / (float)((pFVar9->fields).MJDFEDKPMOP -
                                                  (pFVar9->fields).BADGBPKKAMP);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_036833dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GEJLNIHIFPC(Model BCKBBGCOMJD)  [RVA 0x35833E0]
// RandomAreaRule$$GEJLNIHIFPC @ RVA 0x35833E0

void RandomAreaRule__GEJLNIHIFPC(RandomAreaRule_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  HBOAEOEEDEN_o *pHVar1;
  
  pHVar1 = (__this->fields).CFFCMDGCPOC;
  if (pHVar1 != (HBOAEOEEDEN_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036833f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pHVar1->klass->vtable)._6_CGJIIEOFLGG.methodPtr)
              (pHVar1,BCKBBGCOMJD,(pHVar1->klass->vtable)._6_CGJIIEOFLGG.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x3583400]
// RandomAreaRule$$DIGLGKAPOAB @ RVA 0x3583400

void RandomAreaRule__DIGLGKAPOAB(RandomAreaRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  CBOEGGBIJMD_o *__this_00;
  HBOAEOEEDEN_o *__this_01;
  HBOAEOEEDEN_o **ppHVar2;
  MethodInfo *method_00;
  Il2CppClass *pIVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04568ce1 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&HBOAEOEEDEN_TypeInfo);
    DAT_04568ce1 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  fVar4 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  __this_00 = (__this->fields).EDMFBKICBPB;
  if (((__this_00 != (CBOEGGBIJMD_o *)0x0) &&
      (CBOEGGBIJMD__KODPCEDBEEP(__this_00,(int)(fVar4 * 100000.0),(MethodInfo *)0x0),
      IMMNELPBGIF != (Il2CppObject *)0x0)) &&
     (pIVar3 = IMMNELPBGIF[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
    fVar5 = *(float *)&(pIVar3->_1).this_arg.field_0xc;
    fVar4 = *(float *)&(pIVar3->_1).element_class;
    fVar6 = *(float *)&(__this->fields).super.field_0x5c;
    (__this->fields).EKEJMKEFJIO = 0;
    (__this->fields).JAAGMIKHEPA = 0.0;
    fVar4 = fVar4 * 0.5;
    fVar6 = fVar6 * 0.5;
    (__this->fields).BJKHPKFDGEE = (fVar5 - fVar4) + fVar6;
    (__this->fields).KLEMGCNKPGL = (fVar4 - fVar5) - fVar6;
    (__this->fields).EPBLDDIIKFF = false;
    __this_01 = (HBOAEOEEDEN_o *)thunk_FUN_01bda818(HBOAEOEEDEN_TypeInfo);
    HBOAEOEEDEN___ctor(__this_01,__this,(MethodInfo *)0x0);
    ppHVar2 = &(__this->fields).CFFCMDGCPOC;
    *ppHVar2 = __this_01;
    thunk_FUN_01c20e04(ppHVar2,__this_01);
    RandomAreaRule__HDDCMANACEF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x358355C]
// RandomAreaRule$$DFBPBPPNIBC @ RVA 0x358355C

bool RandomAreaRule__DFBPBPPNIBC(RandomAreaRule_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  return true;
}


// ===== public override void DGLJCGNHLIG()  [RVA 0x3583564]
// RandomAreaRule$$DGLJCGNHLIG @ RVA 0x3583564

void RandomAreaRule__DGLJCGNHLIG(RandomAreaRule_o *__this,MethodInfo *method)

{
  (__this->fields).NBGPKFHLCOG = true;
  return;
}


// ===== public bool DPCKIEGMIKE()  [RVA 0x3583570]
// RandomAreaRule$$DPCKIEGMIKE @ RVA 0x3583570

bool RandomAreaRule__DPCKIEGMIKE(RandomAreaRule_o *__this,MethodInfo *method)

{
  return (__this->fields).EPBLDDIIKFF;
}


// ===== public float GFNEAGCGJDJ()  [RVA 0x3583578]
// RandomAreaRule$$GFNEAGCGJDJ @ RVA 0x3583578

float RandomAreaRule__GFNEAGCGJDJ(RandomAreaRule_o *__this,MethodInfo *method)

{
  return *(float *)&(__this->fields).super.field_0x5c;
}


// ===== protected void HDDCMANACEF()  [RVA 0x3583530]
// RandomAreaRule$$HDDCMANACEF @ RVA 0x3583530

void RandomAreaRule__HDDCMANACEF(RandomAreaRule_o *__this,MethodInfo *method)

{
  CBOEGGBIJMD_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).EDMFBKICBPB;
  if (__this_00 != (CBOEGGBIJMD_o *)0x0) {
    fVar1 = CBOEGGBIJMD__GFHNCCOMPAJ
                      (__this_00,(__this->fields).BJKHPKFDGEE,(__this->fields).KLEMGCNKPGL,
                       (MethodInfo *)0x0);
    (__this->fields).EGOKMNOIJBP = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3583580]
// RandomAreaRule$$.ctor @ RVA 0x3583580

void RandomAreaRule___ctor(RandomAreaRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  CBOEGGBIJMD_o *__this_00;
  CBOEGGBIJMD_o **ppCVar1;
  FFJHOBJFOLI_o *pFVar2;
  FFJHOBJFOLI_o **ppFVar3;
  
  if ((DAT_04568ce2 & 1) == 0) {
    FUN_01bab630(&CBOEGGBIJMD_TypeInfo);
    FUN_01bab630(&FFJHOBJFOLI_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568ce2 = 1;
  }
  __this_00 = (CBOEGGBIJMD_o *)thunk_FUN_01bda818(CBOEGGBIJMD_TypeInfo);
  CBOEGGBIJMD___ctor(__this_00,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).EDMFBKICBPB;
  *ppCVar1 = __this_00;
  thunk_FUN_01c20e04(ppCVar1,__this_00);
  pFVar2 = (FFJHOBJFOLI_o *)thunk_FUN_01bda818(FFJHOBJFOLI_TypeInfo);
  FFJHOBJFOLI___ctor(pFVar2,0,0,0,0,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).FFBMBKHHLPO;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  InFightRule___ctor((InFightRule_o *)__this,0x20,1,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  *(undefined4 *)&(__this->fields).super.field_0x5c = 0;
  (__this->fields).AHNCOKJAGPN = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).APBICPEOMOM = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).CDGJHNFHJDI = false;
  (__this->fields).NBGPKFHLCOG = true;
  (__this->fields).EPBLDDIIKFF = false;
  (__this->fields).EKEJMKEFJIO = 0;
  (__this->fields).JAAGMIKHEPA = 0.0;
  (__this->fields).PJDAFHGHKIE = 0.0;
  (__this->fields).KLEMGCNKPGL = 50.0;
  (__this->fields).EGOKMNOIJBP = 0.0;
  (__this->fields).BJKHPKFDGEE = -50.0;
  (__this->fields).JGIBNAHJPGC = 0.0;
  pFVar2 = (FFJHOBJFOLI_o *)thunk_FUN_01bda818(FFJHOBJFOLI_TypeInfo);
  FFJHOBJFOLI___ctor(pFVar2,0,0,0,0,(MethodInfo *)0x0);
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  InFightRule__DENNGFKNHKO((InFightRule_o *)__this,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03683714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== public float CJEDDOINFEI()  [RVA 0x3583718]
// RandomAreaRule$$CJEDDOINFEI @ RVA 0x3583718

float RandomAreaRule__CJEDDOINFEI(RandomAreaRule_o *__this,MethodInfo *method)

{
  return (__this->fields).JAAGMIKHEPA;
}


// ===== public float PPGMELGPGNM()  [RVA 0x3583720]
// RandomAreaRule$$PPGMELGPGNM @ RVA 0x3583720

float RandomAreaRule__PPGMELGPGNM(RandomAreaRule_o *__this,MethodInfo *method)

{
  return (__this->fields).EGOKMNOIJBP;
}


// ===== public override void AFBEEALKOPE(bool CJNHFNHJHPE)  [RVA 0x3583728]
// RandomAreaRule$$AFBEEALKOPE @ RVA 0x3583728

void RandomAreaRule__AFBEEALKOPE(RandomAreaRule_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Rule__AFBEEALKOPE((Rule_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).NBGPKFHLCOG = CJNHFNHJHPE;
  return;
}


// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x3583754]
// RandomAreaRule$$GOGPCNMIJOB @ RVA 0x3583754

InFightRule_o * RandomAreaRule__GOGPCNMIJOB(RandomAreaRule_o *__this,MethodInfo *method)

{
  RandomAreaRule_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04568ce3 & 1) == 0) {
    FUN_01bab630(&RandomAreaRule_TypeInfo);
    DAT_04568ce3 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (RandomAreaRule_o *)thunk_FUN_01bda818(RandomAreaRule_TypeInfo,method);
    RandomAreaRule___ctor(__this_00,AHDGNOJPPIB,in_x2);
    if (__this_00 != (RandomAreaRule_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (InFightRule_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x35837C8]
// RandomAreaRule$$KCHJCGEMCGE @ RVA 0x35837C8

System_String_o * RandomAreaRule__KCHJCGEMCGE(RandomAreaRule_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public void KFJHHLPBEAO()  [RVA 0x35837D0]
// RandomAreaRule$$KFJHHLPBEAO @ RVA 0x35837D0

void RandomAreaRule__KFJHHLPBEAO(RandomAreaRule_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HBOAEOEEDEN_o *pHVar4;
  FFJHOBJFOLI_o *pFVar5;
  
  pFVar5 = (__this->fields).FFBMBKHHLPO;
  iVar1 = (__this->fields).EKEJMKEFJIO + 1;
  (__this->fields).EKEJMKEFJIO = iVar1;
  if (pFVar5 == (FFJHOBJFOLI_o *)0x0) goto LAB_036838ac;
  iVar2 = (pFVar5->fields).FNHHIEKCLPI;
  iVar3 = iVar1 - iVar2;
  if (iVar3 == 0 || iVar1 < iVar2) {
    if ((__this->fields).NBGPKFHLCOG == false) {
      (__this->fields).EKEJMKEFJIO = 0;
    }
    (__this->fields).JAAGMIKHEPA = 0.0;
LAB_03683840:
    (__this->fields).EPBLDDIIKFF = false;
  }
  else if ((pFVar5->fields).IAEPIMJNGNJ < iVar1) {
    iVar2 = (pFVar5->fields).BADGBPKKAMP;
    iVar3 = iVar1 - iVar2;
    if (iVar3 == 0 || iVar1 < iVar2) {
      (__this->fields).JAAGMIKHEPA = 255.0;
      (__this->fields).EPBLDDIIKFF = true;
    }
    else {
      if (iVar1 <= (pFVar5->fields).MJDFEDKPMOP) {
        (__this->fields).JAAGMIKHEPA = 255.0 - (__this->fields).JGIBNAHJPGC * (float)iVar3;
        goto LAB_03683840;
      }
      (__this->fields).EKEJMKEFJIO = 0;
      (__this->fields).JAAGMIKHEPA = 0.0;
      (__this->fields).EPBLDDIIKFF = false;
      RandomAreaRule__HDDCMANACEF(__this,method);
    }
  }
  else {
    (__this->fields).EPBLDDIIKFF = true;
    (__this->fields).JAAGMIKHEPA = (__this->fields).PJDAFHGHKIE * (float)iVar3;
  }
  pHVar4 = (__this->fields).CFFCMDGCPOC;
  if (pHVar4 != (HBOAEOEEDEN_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03683888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pHVar4->klass->vtable)._4_LLCONNGHGKD.methodPtr)
              (pHVar4,(pHVar4->klass->vtable)._4_LLCONNGHGKD.method);
    return;
  }
LAB_036838ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KPGNMCCJKLH()  [RVA 0x35838B0]
// RandomAreaRule$$KPGNMCCJKLH @ RVA 0x35838B0

System_String_o * RandomAreaRule__KPGNMCCJKLH(RandomAreaRule_o *__this,MethodInfo *method)

{
  return (__this->fields).APBICPEOMOM;
}


// ===== public override void EABJNHKPJOM()  [RVA 0x35838B8]
// RandomAreaRule$$EABJNHKPJOM @ RVA 0x35838B8

void RandomAreaRule__EABJNHKPJOM(RandomAreaRule_o *__this,MethodInfo *method)

{
  HBOAEOEEDEN_o **ppHVar1;
  
  ppHVar1 = &(__this->fields).CFFCMDGCPOC;
  (__this->fields).NBGPKFHLCOG = false;
  if (*ppHVar1 != (HBOAEOEEDEN_o *)0x0) {
    HBOAEOEEDEN__NJIDENMIPAC(*ppHVar1,(MethodInfo *)0x0);
    *ppHVar1 = (HBOAEOEEDEN_o *)0x0;
    thunk_FUN_01c20e04(ppHVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string NJOFPBAFADE()  [RVA 0x35838EC]
// RandomAreaRule$$NJOFPBAFADE @ RVA 0x35838EC

System_String_o * RandomAreaRule__NJOFPBAFADE(RandomAreaRule_o *__this,MethodInfo *method)

{
  return (__this->fields).AHNCOKJAGPN;
}

