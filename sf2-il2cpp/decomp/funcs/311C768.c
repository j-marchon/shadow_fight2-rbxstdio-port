// HDDKPFAHBBN$$Equals @ RVA 0x311C768

bool HDDKPFAHBBN__Equals(HDDKPFAHBBN_o *__this,HDDKPFAHBBN_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HDDKPFAHBBN_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).PFCHOEFIMPF,(IBKIPBJJCPG->fields).PFCHOEFIMPF,
                       (MethodInfo *)0x0);
    if ((!bVar1) &&
       (bVar1 = System_String__op_Inequality
                          ((__this->fields).BEBCICLILLB,(IBKIPBJJCPG->fields).BEBCICLILLB,
                           (MethodInfo *)0x0), !bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

