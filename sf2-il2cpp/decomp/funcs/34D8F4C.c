// OJHLANCHFPC$$Equals @ RVA 0x34D8F4C

bool OJHLANCHFPC__Equals(OJHLANCHFPC_o *__this,OJHLANCHFPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (OJHLANCHFPC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).PKIDDHNAOAC,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).PKIDDHNAOAC,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).OBKCJGGIEMF,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).OBKCJGGIEMF,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

