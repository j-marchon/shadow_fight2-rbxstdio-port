// LNMCGOLABEK$$GOGPCNMIJOB @ RVA 0x35A8AB8

CNIGOFCKBGI_o * LNMCGOLABEK__GOGPCNMIJOB(LNMCGOLABEK_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  LNMCGOLABEK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04568e2c & 1) == 0) {
    FUN_01bab630(&LNMCGOLABEK_TypeInfo);
    DAT_04568e2c = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (LNMCGOLABEK_o *)thunk_FUN_01bda818(LNMCGOLABEK_TypeInfo,method);
    LNMCGOLABEK___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (LNMCGOLABEK_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
                    /* try { // try from 036a8b30 to 037a8c27 has its CatchHandler @ 036a8b30
                       catch() { ... } // from try @ 036a8b30 with catch @ 036a8b30
                       catch() { ... } // from try @ 036a8c4c with catch @ 036a8b30
                       catch() { ... } // from try @ 036a8c98 with catch @ 036a8b30
                       catch() { ... } // from try @ 036a8cc0 with catch @ 036a8b30
                       catch() { ... } // from try @ 036a8d00 with catch @ 036a8b30 */
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

