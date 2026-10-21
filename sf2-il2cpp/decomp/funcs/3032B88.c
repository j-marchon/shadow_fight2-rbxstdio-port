// KMAOIKKMFJF$$Equals @ RVA 0x3032B88

bool KMAOIKKMFJF__Equals(KMAOIKKMFJF_o *__this,KMAOIKKMFJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KMAOIKKMFJF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).CMKMIFIIGBK == (IBKIPBJJCPG->fields).CMKMIFIIGBK) &&
       ((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

