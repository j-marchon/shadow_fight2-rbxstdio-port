// COFFJADEMJF$$GOGPCNMIJOB @ RVA 0x30AE4A4

CNIGOFCKBGI_o * COFFJADEMJF__GOGPCNMIJOB(COFFJADEMJF_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  int32_t ACCIHBHMFPN;
  COFFJADEMJF_o *__this_00;
  MethodInfo *in_x4;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_045661c1 & 1) == 0) {
    FUN_01bab630(&COFFJADEMJF_TypeInfo);
    DAT_045661c1 = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    ACCIHBHMFPN = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)__this,(MethodInfo *)0x0);
    __this_00 = (COFFJADEMJF_o *)thunk_FUN_01bda818(COFFJADEMJF_TypeInfo);
    COFFJADEMJF___ctor(__this_00,ACCIHBHMFPN,HEHMPFLAEGE,AHDGNOJPPIB,in_x4);
    if (__this_00 != (COFFJADEMJF_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

