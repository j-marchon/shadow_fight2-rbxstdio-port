// TypeDefIndex 751
// Namespace: 
// public class CNPFMNENBMG : CNIGOFCKBGI
// Fields:

// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x304E36C]
// CNPFMNENBMG$$DFBPBPPNIBC @ RVA 0x304E36C

bool CNPFMNENBMG__DFBPBPPNIBC(CNPFMNENBMG_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  return false;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x304E374]
// CNPFMNENBMG$$.ctor @ RVA 0x304E374

void CNPFMNENBMG___ctor(CNPFMNENBMG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0xf,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0314e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x304E3B4]
// CNPFMNENBMG$$GOGPCNMIJOB @ RVA 0x304E3B4

CNIGOFCKBGI_o * CNPFMNENBMG__GOGPCNMIJOB(CNPFMNENBMG_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CNIGOFCKBGI_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04565e2e & 1) == 0) {
    auVar2 = FUN_01bab630(&CNPFMNENBMG_TypeInfo);
    DAT_04565e2e = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(CNPFMNENBMG_TypeInfo);
    CNIGOFCKBGI___ctor(__this_00,0xf,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0)
    ;
    (*(__this_00->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
              (__this_00,AHDGNOJPPIB,(__this_00->klass->vtable)._12_HNIHOIAMDPC.method);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

