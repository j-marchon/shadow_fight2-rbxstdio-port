// MGDJPGGPDJI$$Equals @ RVA 0x34A40C4

bool MGDJPGGPDJI__Equals(MGDJPGGPDJI_o *__this,MGDJPGGPDJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (MGDJPGGPDJI_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).LLBEKLPKDHK,(IBKIPBJJCPG->fields).LLBEKLPKDHK,
                             (MethodInfo *)0x0), !bVar1)) &&
        ((__this->fields).BDPMJNBHKIJ == (IBKIPBJJCPG->fields).BDPMJNBHKIJ)) &&
       ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

