// TypeDefIndex 1816
// Namespace: 
// public class IJHANGIFHPF : CNIGOFCKBGI
// Fields:

// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x321A7A8]
// IJHANGIFHPF$$GOGPCNMIJOB @ RVA 0x321A7A8

CNIGOFCKBGI_o * IJHANGIFHPF__GOGPCNMIJOB(IJHANGIFHPF_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CNIGOFCKBGI_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566efa & 1) == 0) {
    auVar2 = FUN_01bab630(&IJHANGIFHPF_TypeInfo);
    DAT_04566efa = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(IJHANGIFHPF_TypeInfo);
    CNIGOFCKBGI___ctor(__this_00,0x1c,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0
                      );
    (__this_00->fields).EGBPMNKKPFI = false;
    CNIGOFCKBGI__DENNGFKNHKO(__this_00,6,(MethodInfo *)0x0);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x321A848]
// IJHANGIFHPF$$.ctor @ RVA 0x321A848

void IJHANGIFHPF___ctor(IJHANGIFHPF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x1c,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  (__this->fields).super.EGBPMNKKPFI = false;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,6,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x321A87C]
// IJHANGIFHPF$$DFBPBPPNIBC @ RVA 0x321A87C

bool IJHANGIFHPF__DFBPBPPNIBC(IJHANGIFHPF_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  if (LDOOMGABFME != (JMIFGHKOLCL_o *)0x0) {
    return (LDOOMGABFME->fields).CKOEJKGOCHF;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

