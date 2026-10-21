// Original name: Nekki.SF2.Core.Fights.Rules.RechargeMagicEachRoundRule  (obfuscated KMCKIANFOLB)
// TypeDefIndex 3115
// Namespace: 
// public class RechargeMagicEachRoundRule : InFightRule
// Fields:

// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x34CD7BC]
// RechargeMagicEachRoundRule$$DIGLGKAPOAB @ RVA 0x34CD7BC

void RechargeMagicEachRoundRule__DIGLGKAPOAB(RechargeMagicEachRoundRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x34CD7C0]
// RechargeMagicEachRoundRule$$.ctor @ RVA 0x34CD7C0

void RechargeMagicEachRoundRule___ctor(RechargeMagicEachRoundRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  InFightRule___ctor((InFightRule_o *)__this,0x13,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  return;
}


// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x34CD7D4]
// RechargeMagicEachRoundRule$$GOGPCNMIJOB @ RVA 0x34CD7D4

InFightRule_o * RechargeMagicEachRoundRule__GOGPCNMIJOB(RechargeMagicEachRoundRule_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  InFightRule_o *__this_00;
  MethodInfo *extraout_x1;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04568691 & 1) == 0) {
    FUN_01bab630(&RechargeMagicEachRoundRule_TypeInfo);
    DAT_04568691 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (InFightRule_o *)thunk_FUN_01bda818(RechargeMagicEachRoundRule_TypeInfo,method);
    InFightRule___ctor(__this_00,0x13,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,(MethodInfo *)0x0
                      );
    if (__this_00 != (InFightRule_o *)0x0) {
      (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

