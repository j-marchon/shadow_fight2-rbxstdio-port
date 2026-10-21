// EIBAKHBHMAO$$Equals @ RVA 0x304F574

bool EIBAKHBHMAO__Equals(EIBAKHBHMAO_o *__this,EIBAKHBHMAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EIBAKHBHMAO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG) &&
       ((__this->fields).FMNDJOFNPBP == (IBKIPBJJCPG->fields).FMNDJOFNPBP)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

