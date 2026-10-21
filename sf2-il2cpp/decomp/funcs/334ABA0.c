// APGFNOPIODP$$GOGPCNMIJOB @ RVA 0x334ABA0

CNIGOFCKBGI_o * APGFNOPIODP__GOGPCNMIJOB(APGFNOPIODP_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  APGFNOPIODP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_045679f1 & 1) == 0) {
    FUN_01bab630(&APGFNOPIODP_TypeInfo);
    DAT_045679f1 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (APGFNOPIODP_o *)thunk_FUN_01bda818(APGFNOPIODP_TypeInfo,method);
    APGFNOPIODP___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (APGFNOPIODP_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

