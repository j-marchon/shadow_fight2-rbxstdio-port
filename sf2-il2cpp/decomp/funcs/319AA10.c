// DGCPNJOFKON$$GOGPCNMIJOB @ RVA 0x319AA10

CNIGOFCKBGI_o * DGCPNJOFKON__GOGPCNMIJOB(DGCPNJOFKON_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  int32_t ACCIHBHMFPN;
  CNIGOFCKBGI_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566aa7 & 1) == 0) {
    auVar2 = FUN_01bab630(&DGCPNJOFKON_TypeInfo);
    DAT_04566aa7 = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    ACCIHBHMFPN = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)__this,(MethodInfo *)0x0);
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(DGCPNJOFKON_TypeInfo);
    CNIGOFCKBGI___ctor(__this_00,ACCIHBHMFPN,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                       (MethodInfo *)0x0);
                    /* try { // try from 0329aa94 to 0339aac3 has its CatchHandler @ 0329a6d8 */
    (__this_00->fields).field_0x5a = 0;
    CNIGOFCKBGI__DENNGFKNHKO(__this_00,10,(MethodInfo *)0x0);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

