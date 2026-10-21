// Original name: Nekki.SF2.Core.Fights.Rules.WinShockRule  (obfuscated IJHANGIFHPF)
// TypeDefIndex 1816
// Namespace: 
// public class WinShockRule : InFightRule
// Fields:

// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x321A7A8]
// WinShockRule$$GOGPCNMIJOB @ RVA 0x321A7A8

InFightRule_o * WinShockRule__GOGPCNMIJOB(WinShockRule_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  InFightRule_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566efa & 1) == 0) {
    auVar2 = FUN_01bab630(&WinShockRule_TypeInfo);
    DAT_04566efa = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (InFightRule_o *)thunk_FUN_01bda818(WinShockRule_TypeInfo);
    InFightRule___ctor(__this_00,0x1c,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,(MethodInfo *)0x0
                      );
    (__this_00->fields).EGBPMNKKPFI = false;
    InFightRule__DENNGFKNHKO(__this_00,6,(MethodInfo *)0x0);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x321A848]
// WinShockRule$$.ctor @ RVA 0x321A848

void WinShockRule___ctor(WinShockRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  InFightRule___ctor((InFightRule_o *)__this,0x1c,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  (__this->fields).super.EGBPMNKKPFI = false;
  InFightRule__DENNGFKNHKO((InFightRule_o *)__this,6,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x321A87C]
// WinShockRule$$DFBPBPPNIBC @ RVA 0x321A87C

bool WinShockRule__DFBPBPPNIBC(WinShockRule_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  if (LDOOMGABFME != (JMIFGHKOLCL_o *)0x0) {
    return (LDOOMGABFME->fields).CKOEJKGOCHF;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

