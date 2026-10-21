// Original name: Nekki.SF2.Core.Fights.Rules.DarknessRule  (obfuscated EDIHAKCJAMI)
// TypeDefIndex 1726
// Namespace: 
// public class DarknessRule : InFightRule
// Fields:
//   private FFJHOBJFOLI KGDFAPCDMPE; // 0x70
//   private bool NBGPKFHLCOG; // 0x78
//   private int EKEJMKEFJIO; // 0x7C
//   private float JAAGMIKHEPA; // 0x80
//   private float PJDAFHGHKIE; // 0x84
//   private float JGIBNAHJPGC; // 0x88
//   protected DarknessRule.JGCLFIEFOJJ ANOLCJDAGPJ; // 0x8C

// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x31D8518]
// DarknessRule$$DIGLGKAPOAB @ RVA 0x31D8518

void DarknessRule__DIGLGKAPOAB(DarknessRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  (__this->fields).EKEJMKEFJIO = 0;
  (__this->fields).JAAGMIKHEPA = 0.0;
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x31D8520]
// DarknessRule$$.ctor @ RVA 0x31D8520

void DarknessRule___ctor(DarknessRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  FFJHOBJFOLI_o *pFVar1;
  FFJHOBJFOLI_o **ppFVar2;
  
  if ((DAT_04566cfc & 1) == 0) {
    FUN_01bab630(&FFJHOBJFOLI_TypeInfo);
    DAT_04566cfc = 1;
  }
  pFVar1 = (FFJHOBJFOLI_o *)thunk_FUN_01bda818(FFJHOBJFOLI_TypeInfo);
  FFJHOBJFOLI___ctor(pFVar1,0,0,0,0,(MethodInfo *)0x0);
  ppFVar2 = &(__this->fields).KGDFAPCDMPE;
  *ppFVar2 = pFVar1;
  thunk_FUN_01c20e04(ppFVar2,pFVar1);
  InFightRule___ctor((InFightRule_o *)__this,6,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  pFVar1 = (FFJHOBJFOLI_o *)thunk_FUN_01bda818(FFJHOBJFOLI_TypeInfo);
  FFJHOBJFOLI___ctor(pFVar1,0,0,0,0,(MethodInfo *)0x0);
  *ppFVar2 = pFVar1;
  thunk_FUN_01c20e04(ppFVar2,pFVar1);
  (__this->fields).EKEJMKEFJIO = 0;
  (__this->fields).JAAGMIKHEPA = 0.0;
  (__this->fields).ANOLCJDAGPJ = 3;
  (__this->fields).NBGPKFHLCOG = false;
  InFightRule__DENNGFKNHKO((InFightRule_o *)__this,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032d862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== public override void EABJNHKPJOM()  [RVA 0x31D8630]
// DarknessRule$$EABJNHKPJOM @ RVA 0x31D8630

void DarknessRule__EABJNHKPJOM(DarknessRule_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x032d863c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._9_AFBEEALKOPE.methodPtr)
            (__this,0,(__this->klass->vtable)._9_AFBEEALKOPE.method);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31D8640]
// DarknessRule$$HNIHOIAMDPC @ RVA 0x31D8640

void DarknessRule__HNIHOIAMDPC
               (DarknessRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  FFJHOBJFOLI_o *pFVar5;
  
  if ((DAT_04566cfd & 1) == 0) {
    FUN_01bab630(&StringLiteral_8438/*"LightLasting"*/);
    FUN_01bab630(&StringLiteral_5089/*"DarkLasting"*/);
    FUN_01bab630(&StringLiteral_8439/*"LightOn"*/);
    FUN_01bab630(&StringLiteral_5092/*"DarkOn"*/);
    DAT_04566cfd = 1;
  }
  Rule__HNIHOIAMDPC((Rule_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pFVar5 = (__this->fields).KGDFAPCDMPE;
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_8438/*"LightLasting"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
      if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
        (pFVar5->fields).FNHHIEKCLPI = iVar2;
        pFVar5 = (__this->fields).KGDFAPCDMPE;
        if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
          iVar1 = (pFVar5->fields).FNHHIEKCLPI;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_5092/*"DarkOn"*/,(MethodInfo *)0x0);
            iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
            (pFVar5->fields).IAEPIMJNGNJ = iVar2 + iVar1;
            pFVar5 = (__this->fields).KGDFAPCDMPE;
            if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
              iVar1 = (pFVar5->fields).IAEPIMJNGNJ;
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_5089/*"DarkLasting"*/,(MethodInfo *)0x0);
                iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                (pFVar5->fields).BADGBPKKAMP = iVar2 + iVar1;
                pFVar5 = (__this->fields).KGDFAPCDMPE;
                if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
                  iVar1 = (pFVar5->fields).BADGBPKKAMP;
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,StringLiteral_8439/*"LightOn"*/,(MethodInfo *)0x0);
                    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                    (pFVar5->fields).MJDFEDKPMOP = iVar2 + iVar1;
                    pFVar5 = (__this->fields).KGDFAPCDMPE;
                    if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
                      (__this->fields).PJDAFHGHKIE =
                           255.0 / (float)((pFVar5->fields).IAEPIMJNGNJ -
                                          (pFVar5->fields).FNHHIEKCLPI);
                      (__this->fields).JGIBNAHJPGC =
                           255.0 / (float)((pFVar5->fields).MJDFEDKPMOP -
                                          (pFVar5->fields).BADGBPKKAMP);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x31D8824]
// DarknessRule$$DFBPBPPNIBC @ RVA 0x31D8824

bool DarknessRule__DFBPBPPNIBC(DarknessRule_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FFJHOBJFOLI_o *pFVar4;
  float fVar5;
  
  pFVar4 = (__this->fields).KGDFAPCDMPE;
  iVar1 = (__this->fields).EKEJMKEFJIO + 1;
  (__this->fields).EKEJMKEFJIO = iVar1;
  if (pFVar4 == (FFJHOBJFOLI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = (pFVar4->fields).FNHHIEKCLPI;
  iVar3 = iVar1 - iVar2;
  if (iVar3 == 0 || iVar1 < iVar2) {
    fVar5 = 0.0;
    if ((__this->fields).NBGPKFHLCOG != false) goto LAB_032d88c0;
  }
  else {
    if (iVar1 <= (pFVar4->fields).IAEPIMJNGNJ) {
      fVar5 = (__this->fields).PJDAFHGHKIE * (float)iVar3;
      goto LAB_032d88c0;
    }
    iVar2 = (pFVar4->fields).BADGBPKKAMP;
    iVar3 = iVar1 - iVar2;
    if (iVar3 == 0 || iVar1 < iVar2) {
      fVar5 = 255.0;
      goto LAB_032d88c0;
    }
    if (iVar1 <= (pFVar4->fields).MJDFEDKPMOP) {
      fVar5 = 255.0 - (__this->fields).JGIBNAHJPGC * (float)iVar3;
      goto LAB_032d88c0;
    }
  }
  fVar5 = 0.0;
  (__this->fields).EKEJMKEFJIO = 0;
LAB_032d88c0:
  (__this->fields).JAAGMIKHEPA = fVar5;
  return true;
}


// ===== public override void DGLJCGNHLIG()  [RVA 0x31D88D4]
// DarknessRule$$DGLJCGNHLIG @ RVA 0x31D88D4

void DarknessRule__DGLJCGNHLIG(DarknessRule_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x032d88e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._9_AFBEEALKOPE.methodPtr)
            (__this,1,(__this->klass->vtable)._9_AFBEEALKOPE.method);
  return;
}


// ===== public float CJEDDOINFEI()  [RVA 0x31D88E4]
// DarknessRule$$CJEDDOINFEI @ RVA 0x31D88E4

float DarknessRule__CJEDDOINFEI(DarknessRule_o *__this,MethodInfo *method)

{
  return (__this->fields).JAAGMIKHEPA;
}


// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x31D88EC]
// DarknessRule$$GOGPCNMIJOB @ RVA 0x31D88EC

InFightRule_o * DarknessRule__GOGPCNMIJOB(DarknessRule_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  DarknessRule_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04566cfe & 1) == 0) {
    FUN_01bab630(&DarknessRule_TypeInfo);
    DAT_04566cfe = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (DarknessRule_o *)thunk_FUN_01bda818(DarknessRule_TypeInfo,method);
    DarknessRule___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (DarknessRule_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (InFightRule_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public FFJHOBJFOLI PEBKOLDMALK()  [RVA 0x31D8970]
// DarknessRule$$PEBKOLDMALK @ RVA 0x31D8970

FFJHOBJFOLI_o * DarknessRule__PEBKOLDMALK(DarknessRule_o *__this,MethodInfo *method)

{
  return (__this->fields).KGDFAPCDMPE;
}


// ===== public override void AFBEEALKOPE(bool CJNHFNHJHPE)  [RVA 0x31D8978]
// DarknessRule$$AFBEEALKOPE @ RVA 0x31D8978

void DarknessRule__AFBEEALKOPE(DarknessRule_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Rule__AFBEEALKOPE((Rule_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).NBGPKFHLCOG = CJNHFNHJHPE;
  return;
}

