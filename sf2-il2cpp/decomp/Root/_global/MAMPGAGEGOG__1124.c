// TypeDefIndex 1124
// Namespace: 
// public class MAMPGAGEGOG : CNIGOFCKBGI
// Fields:

// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x30F478C]
// MAMPGAGEGOG$$GOGPCNMIJOB @ RVA 0x30F478C

CNIGOFCKBGI_o * MAMPGAGEGOG__GOGPCNMIJOB(MAMPGAGEGOG_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CNIGOFCKBGI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04566442 & 1) == 0) {
    FUN_01bab630(&MAMPGAGEGOG_TypeInfo);
    DAT_04566442 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(MAMPGAGEGOG_TypeInfo,method);
    MAMPGAGEGOG___ctor((MAMPGAGEGOG_o *)__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (CNIGOFCKBGI_o *)0x0) {
      (((CNIGOFCKBGI_Fields *)&(__this_00->fields).super)->super).KHKEGAKGNCN =
           (__this->fields).super.super.KHKEGAKGNCN;
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x30F4864]
// MAMPGAGEGOG$$DFBPBPPNIBC @ RVA 0x30F4864

bool MAMPGAGEGOG__DFBPBPPNIBC(MAMPGAGEGOG_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  return true;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x30F4810]
// MAMPGAGEGOG$$.ctor @ RVA 0x30F4810

void MAMPGAGEGOG___ctor(MAMPGAGEGOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x11,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  (__this->fields).super.EGBPMNKKPFI = false;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,9,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  (__this->fields).super.JGJNBILDCHK = 1;
  return;
}

