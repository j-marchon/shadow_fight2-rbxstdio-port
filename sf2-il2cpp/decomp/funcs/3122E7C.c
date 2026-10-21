// KMDOLFBIGNC$$Equals @ RVA 0x3122E7C

bool KMDOLFBIGNC__Equals(KMDOLFBIGNC_o *__this,KMDOLFBIGNC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KMDOLFBIGNC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((__this->fields).PDOMCPONBNB == (IBKIPBJJCPG->fields).PDOMCPONBNB) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).PNGGPPDKHPH,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).PNGGPPDKHPH,(MethodInfo *)0x0),
        bVar1)) && ((__this->fields).HCBJCMDLODI == (IBKIPBJJCPG->fields).HCBJCMDLODI)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

