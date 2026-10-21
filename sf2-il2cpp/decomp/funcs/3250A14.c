// ICPMLKOEANF$$Equals @ RVA 0x3250A14

bool ICPMLKOEANF__Equals(ICPMLKOEANF_o *__this,ICPMLKOEANF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (ICPMLKOEANF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).OHMDCKEDOGH == (IBKIPBJJCPG->fields).OHMDCKEDOGH) &&
       ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

