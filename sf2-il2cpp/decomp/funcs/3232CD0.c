// BFLFFPLIIFM$$Equals @ RVA 0x3232CD0

bool BFLFFPLIIFM__Equals(BFLFFPLIIFM_o *__this,BFLFFPLIIFM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (BFLFFPLIIFM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).POLEIDMHDNP == (IBKIPBJJCPG->fields).POLEIDMHDNP) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

