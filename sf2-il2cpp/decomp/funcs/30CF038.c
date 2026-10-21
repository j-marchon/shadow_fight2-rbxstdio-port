// JHMFOIIPEHB$$Equals @ RVA 0x30CF038

bool JHMFOIIPEHB__Equals(JHMFOIIPEHB_o *__this,JHMFOIIPEHB_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (JHMFOIIPEHB_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).LMHBPLAAEIE == (IBKIPBJJCPG->fields).LMHBPLAAEIE) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

