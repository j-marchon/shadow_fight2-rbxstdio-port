// Original name: Nekki.SF2.Core.Fights.Rules.LifeStealRule  (obfuscated APGFNOPIODP)
// TypeDefIndex 329
// Namespace: 
// public class LifeStealRule : InFightRule
// Fields:
//   private float NMAKDIDEFPL; // 0x6C
//   private float KBPDGHDKOLP; // 0x70

// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x334ABA0]
// LifeStealRule$$GOGPCNMIJOB @ RVA 0x334ABA0

InFightRule_o * LifeStealRule__GOGPCNMIJOB(LifeStealRule_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  LifeStealRule_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_045679f1 & 1) == 0) {
    FUN_01bab630(&LifeStealRule_TypeInfo);
    DAT_045679f1 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (LifeStealRule_o *)thunk_FUN_01bda818(LifeStealRule_TypeInfo,method);
    LifeStealRule___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (LifeStealRule_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (InFightRule_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x334AC24]
// LifeStealRule$$.ctor @ RVA 0x334AC24

void LifeStealRule___ctor(LifeStealRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  InFightRule___ctor((InFightRule_o *)__this,0xe,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  (__this->fields).NMAKDIDEFPL = 0.0;
  InFightRule__DENNGFKNHKO((InFightRule_o *)__this,6,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
                    /* WARNING: Could not recover jumptable at 0x0344ac88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  return;
}


// ===== public float OGKEEGLIEPO()  [RVA 0x334AC8C]
// LifeStealRule$$OGKEEGLIEPO @ RVA 0x334AC8C

float LifeStealRule__OGKEEGLIEPO(LifeStealRule_o *__this,MethodInfo *method)

{
  return (__this->fields).NMAKDIDEFPL;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x334AC94]
// LifeStealRule$$HNIHOIAMDPC @ RVA 0x334AC94

void LifeStealRule__HNIHOIAMDPC
               (LifeStealRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float fVar1;
  
  if ((DAT_045679f2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5069/*"DamagePart"*/);
    DAT_045679f2 = 1;
  }
  Rule__HNIHOIAMDPC((Rule_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_5069/*"DamagePart"*/,(MethodInfo *)0x0);
      fVar1 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
      *(float *)&(__this->fields).super.field_0x5c = fVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x334AD24]
// LifeStealRule$$DFBPBPPNIBC @ RVA 0x334AD24

bool LifeStealRule__DFBPBPPNIBC(LifeStealRule_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (LDOOMGABFME != (JMIFGHKOLCL_o *)0x0) {
    if ((LDOOMGABFME->fields).ELCBIMMGAFJ == 6) {
      fVar2 = (LDOOMGABFME->fields).IPPFDLAJFJG * *(float *)&(__this->fields).super.field_0x5c;
      bVar1 = fVar2 != 0.0;
      (__this->fields).NMAKDIDEFPL = fVar2;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

