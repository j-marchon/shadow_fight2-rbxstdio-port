// LKJJCAEOJBG$$Equals @ RVA 0x3541D24

bool LKJJCAEOJBG__Equals(LKJJCAEOJBG_o *__this,LKJJCAEOJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (LKJJCAEOJBG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).MKGNDFBBANC == (IBKIPBJJCPG->fields).MKGNDFBBANC) &&
       ((__this->fields).IGBAAAHPLAA == (IBKIPBJJCPG->fields).IGBAAAHPLAA)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

