// Original name: Nekki.SF2.Core.Fights.Rules.TimeoutWinRule  (obfuscated MAMPGAGEGOG)
// TypeDefIndex 1124
// Namespace: 
// public class TimeoutWinRule : InFightRule
// Fields:

// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x30F478C]
// TimeoutWinRule$$GOGPCNMIJOB @ RVA 0x30F478C

InFightRule_o * TimeoutWinRule__GOGPCNMIJOB(TimeoutWinRule_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  InFightRule_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04566442 & 1) == 0) {
    FUN_01bab630(&TimeoutWinRule_TypeInfo);
    DAT_04566442 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (InFightRule_o *)thunk_FUN_01bda818(TimeoutWinRule_TypeInfo,method);
    TimeoutWinRule___ctor((TimeoutWinRule_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (InFightRule_o *)0x0) {
      (((InFightRule_Fields *)&(__this_00->fields).super)->super).KHKEGAKGNCN =
           (__this->fields).super.super.KHKEGAKGNCN;
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x30F4864]
// TimeoutWinRule$$DFBPBPPNIBC @ RVA 0x30F4864

bool TimeoutWinRule__DFBPBPPNIBC(TimeoutWinRule_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  return true;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x30F4810]
// TimeoutWinRule$$.ctor @ RVA 0x30F4810

void TimeoutWinRule___ctor(TimeoutWinRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  InFightRule___ctor((InFightRule_o *)__this,0x11,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  (__this->fields).super.EGBPMNKKPFI = false;
  InFightRule__DENNGFKNHKO((InFightRule_o *)__this,9,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  (__this->fields).super.JGJNBILDCHK = 1;
  return;
}

