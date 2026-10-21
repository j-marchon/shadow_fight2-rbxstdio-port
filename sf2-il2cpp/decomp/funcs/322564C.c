// IEEEKABGCHL$$GOGPCNMIJOB @ RVA 0x322564C

CNIGOFCKBGI_o * IEEEKABGCHL__GOGPCNMIJOB(IEEEKABGCHL_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  IEEEKABGCHL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04566f79 & 1) == 0) {
    FUN_01bab630(&IEEEKABGCHL_TypeInfo);
    DAT_04566f79 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (IEEEKABGCHL_o *)thunk_FUN_01bda818(IEEEKABGCHL_TypeInfo,method);
    IEEEKABGCHL___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (IEEEKABGCHL_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

