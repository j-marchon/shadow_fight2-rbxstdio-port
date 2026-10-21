// Original name: Nekki.SF2.Core.Fights.Rules.InvertJoystickRule  (obfuscated IEDMAJBEPCN)
// TypeDefIndex 3229
// Namespace: 
// public class InvertJoystickRule : InFightRule
// Fields:

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3505658]
// InvertJoystickRule$$.ctor @ RVA 0x3505658

void InvertJoystickRule___ctor(InvertJoystickRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  InFightRule___ctor((InFightRule_o *)__this,0x1f,1,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03605698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x350569C]
// InvertJoystickRule$$GOGPCNMIJOB @ RVA 0x350569C

InFightRule_o * InvertJoystickRule__GOGPCNMIJOB(InvertJoystickRule_o *__this,MethodInfo *method)

{
  InFightRule_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568895 & 1) == 0) {
    auVar2 = FUN_01bab630(&InvertJoystickRule_TypeInfo);
    DAT_04568895 = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (InFightRule_o *)thunk_FUN_01bda818(InvertJoystickRule_TypeInfo);
    InFightRule___ctor(__this_00,0x1f,1,AHDGNOJPPIB,(InFightRule_o *)0x0,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
              (__this_00,AHDGNOJPPIB,(__this_00->klass->vtable)._12_HNIHOIAMDPC.method);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

