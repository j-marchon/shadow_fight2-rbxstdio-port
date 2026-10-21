// NKDMOOEFPHJ$$KBBHCAAFDCO @ RVA 0x33A9780

void NKDMOOEFPHJ__KBBHCAAFDCO
               (NKDMOOEFPHJ_o *__this,bool KPGNMOKKJNI,ECENNHNBAME_o *NLEBDPHNIDI,float LINBBAKAFCP,
               MethodInfo *method)

{
  int32_t DDNILPCHOCN;
  OLKKAIFGGAK_o *__this_00;
  NKDMOOEFPHJ_ACFDNGGGDIJ_o *__this_01;
  MethodInfo *method_00;
  float AIHACFDHGMA;
  
  __this_00 = (__this->fields).PDKOKGEECDC;
  if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
    DDNILPCHOCN = OLKKAIFGGAK__NNPKHNBIKBC(__this_00,(MethodInfo *)0x0);
    AIHACFDHGMA = NKDMOOEFPHJ__GHNNJFPNHHA(__this,method_00);
    __this_01 = NKDMOOEFPHJ__LINKPADNPGE(__this,KPGNMOKKJNI,NLEBDPHNIDI,method);
    if (__this_01 != (NKDMOOEFPHJ_ACFDNGGGDIJ_o *)0x0) {
      NKDMOOEFPHJ_ACFDNGGGDIJ__IFKEDFECIBH
                (__this_01,DDNILPCHOCN,AIHACFDHGMA,(MethodInfo *)NLEBDPHNIDI);
      (__this_01->fields).KMENOPCKFLM = (__this_01->fields).KMENOPCKFLM + LINBBAKAFCP;
      (__this_01->fields).AGMCOJBKCAA = (__this_01->fields).AGMCOJBKCAA + 1.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

