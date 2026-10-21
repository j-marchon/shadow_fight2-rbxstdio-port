// KMCKIANFOLB$$GOGPCNMIJOB @ RVA 0x34CD7D4

CNIGOFCKBGI_o * KMCKIANFOLB__GOGPCNMIJOB(KMCKIANFOLB_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CNIGOFCKBGI_o *__this_00;
  MethodInfo *extraout_x1;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04568691 & 1) == 0) {
    FUN_01bab630(&KMCKIANFOLB_TypeInfo);
    DAT_04568691 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(KMCKIANFOLB_TypeInfo,method);
    CNIGOFCKBGI___ctor(__this_00,0x13,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0
                      );
    if (__this_00 != (CNIGOFCKBGI_o *)0x0) {
      (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

