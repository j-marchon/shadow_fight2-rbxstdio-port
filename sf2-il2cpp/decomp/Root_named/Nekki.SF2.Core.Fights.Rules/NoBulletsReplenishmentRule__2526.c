// Original name: Nekki.SF2.Core.Fights.Rules.NoBulletsReplenishmentRule  (obfuscated BIEHNLODKBK)
// TypeDefIndex 2526
// Namespace: 
// public class NoBulletsReplenishmentRule : InFightRule
// Fields:

// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x338F970]
// NoBulletsReplenishmentRule$$GOGPCNMIJOB @ RVA 0x338F970

InFightRule_o * NoBulletsReplenishmentRule__GOGPCNMIJOB(NoBulletsReplenishmentRule_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  InFightRule_o *__this_00;
  MethodInfo *extraout_x1;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04567c13 & 1) == 0) {
    FUN_01bab630(&NoBulletsReplenishmentRule_TypeInfo);
    DAT_04567c13 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (InFightRule_o *)thunk_FUN_01bda818(NoBulletsReplenishmentRule_TypeInfo,method);
    InFightRule___ctor(__this_00,0x14,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,(MethodInfo *)0x0
                      );
    if (__this_00 != (InFightRule_o *)0x0) {
      (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x338FA00]
// NoBulletsReplenishmentRule$$.ctor @ RVA 0x338FA00

void NoBulletsReplenishmentRule___ctor(NoBulletsReplenishmentRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  InFightRule___ctor((InFightRule_o *)__this,0x14,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  return;
}

