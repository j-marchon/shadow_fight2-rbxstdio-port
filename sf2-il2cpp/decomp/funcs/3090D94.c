// NODLJPNGNBG$$Equals @ RVA 0x3090D94

bool NODLJPNGNBG__Equals(NODLJPNGNBG_o *__this,NODLJPNGNBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (NODLJPNGNBG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC) &&
         ((__this->fields).LINGIJDCLLC == (IBKIPBJJCPG->fields).LINGIJDCLLC)) &&
        (((__this->fields).DMFDEJEDMPO != false) == ((IBKIPBJJCPG->fields).DMFDEJEDMPO != false)))
       && (((__this->fields).PFJPLCAIGJH == (IBKIPBJJCPG->fields).PFJPLCAIGJH &&
           (bVar1 = System_Object__Equals
                              ((Il2CppObject *)(__this->fields).PMMFPJJOPKE,
                               (Il2CppObject *)(IBKIPBJJCPG->fields).PMMFPJJOPKE,(MethodInfo *)0x0),
           bVar1)))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

