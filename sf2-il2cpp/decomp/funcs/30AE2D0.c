// PLIKNCJICMM$$GOGPCNMIJOB @ RVA 0x30AE2D0

CNIGOFCKBGI_o * PLIKNCJICMM__GOGPCNMIJOB(PLIKNCJICMM_o *__this,MethodInfo *method)

{
  PLIKNCJICMM_o *__this_00;
  MethodInfo *extraout_x1;
  int32_t in_w2;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_045661bf & 1) == 0) {
    FUN_01bab630(&PLIKNCJICMM_TypeInfo);
    DAT_045661bf = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (PLIKNCJICMM_o *)thunk_FUN_01bda818(PLIKNCJICMM_TypeInfo,method);
    PLIKNCJICMM___ctor(__this_00,AHDGNOJPPIB,in_w2,in_x3);
    if (__this_00 != (PLIKNCJICMM_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

