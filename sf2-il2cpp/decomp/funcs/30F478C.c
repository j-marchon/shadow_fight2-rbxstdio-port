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

