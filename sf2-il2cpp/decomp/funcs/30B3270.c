// EDELKOLBNDG$$GOGPCNMIJOB @ RVA 0x30B3270

CNIGOFCKBGI_o * EDELKOLBNDG__GOGPCNMIJOB(EDELKOLBNDG_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  EDELKOLBNDG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_045661f0 & 1) == 0) {
    FUN_01bab630(&EDELKOLBNDG_TypeInfo);
    DAT_045661f0 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (EDELKOLBNDG_o *)thunk_FUN_01bda818(EDELKOLBNDG_TypeInfo,method);
    EDELKOLBNDG___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (EDELKOLBNDG_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

