// PBGDDCFGPJI$$Equals @ RVA 0x34BCA88

bool PBGDDCFGPJI__Equals(PBGDDCFGPJI_o *__this,PBGDDCFGPJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (PBGDDCFGPJI_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).KEIBPDJHHBB,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).KEIBPDJHHBB,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

