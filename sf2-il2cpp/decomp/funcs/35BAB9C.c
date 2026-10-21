// OLCBPIHLPEC$$Equals @ RVA 0x35BAB9C

bool OLCBPIHLPEC__Equals(OLCBPIHLPEC_o *__this,OLCBPIHLPEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (OLCBPIHLPEC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).NGODFBDEMLE == (IBKIPBJJCPG->fields).NGODFBDEMLE) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).IAEBJKOPDAO,(IBKIPBJJCPG->fields).IAEBJKOPDAO,
                             (MethodInfo *)0x0), !bVar1)) &&
        ((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG)) &&
       ((bVar1 = System_String__op_Inequality
                           ((__this->fields).EGELDFKMOCJ,(IBKIPBJJCPG->fields).EGELDFKMOCJ,
                            (MethodInfo *)0x0), !bVar1 &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0),
        bVar1)))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

