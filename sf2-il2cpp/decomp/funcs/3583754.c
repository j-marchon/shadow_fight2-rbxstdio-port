// ACBCKKIEOCE$$GOGPCNMIJOB @ RVA 0x3583754

CNIGOFCKBGI_o * ACBCKKIEOCE__GOGPCNMIJOB(ACBCKKIEOCE_o *__this,MethodInfo *method)

{
  ACBCKKIEOCE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04568ce3 & 1) == 0) {
    FUN_01bab630(&ACBCKKIEOCE_TypeInfo);
    DAT_04568ce3 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (ACBCKKIEOCE_o *)thunk_FUN_01bda818(ACBCKKIEOCE_TypeInfo,method);
    ACBCKKIEOCE___ctor(__this_00,AHDGNOJPPIB,in_x2);
    if (__this_00 != (ACBCKKIEOCE_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

