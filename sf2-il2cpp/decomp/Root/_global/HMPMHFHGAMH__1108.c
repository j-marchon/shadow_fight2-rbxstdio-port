// TypeDefIndex 1108
// Namespace: 
// public class HMPMHFHGAMH : CNIGOFCKBGI
// Fields:

// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x30E797C]
// HMPMHFHGAMH$$.ctor @ RVA 0x30E797C

void HMPMHFHGAMH___ctor(HMPMHFHGAMH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x28,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031e79b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x30E79BC]
// HMPMHFHGAMH$$GOGPCNMIJOB @ RVA 0x30E79BC

CNIGOFCKBGI_o * HMPMHFHGAMH__GOGPCNMIJOB(HMPMHFHGAMH_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CNIGOFCKBGI_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045663fc & 1) == 0) {
    auVar2 = FUN_01bab630(&HMPMHFHGAMH_TypeInfo);
    DAT_045663fc = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(HMPMHFHGAMH_TypeInfo);
    CNIGOFCKBGI___ctor(__this_00,0x28,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0
                      );
    (*(__this_00->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
              (__this_00,AHDGNOJPPIB,(__this_00->klass->vtable)._12_HNIHOIAMDPC.method);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x30E7A5C]
// HMPMHFHGAMH$$DFBPBPPNIBC @ RVA 0x30E7A5C

bool HMPMHFHGAMH__DFBPBPPNIBC(HMPMHFHGAMH_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  return false;
}

