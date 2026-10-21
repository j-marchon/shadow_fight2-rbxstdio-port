// KDADMJGPAOM$$Equals @ RVA 0x3393CF0

bool KDADMJGPAOM__Equals(KDADMJGPAOM_o *__this,KDADMJGPAOM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KDADMJGPAOM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((__this->fields).IILCHFKCEEH == (IBKIPBJJCPG->fields).IILCHFKCEEH) &&
        ((__this->fields).PDGEHKCPGDK == (IBKIPBJJCPG->fields).PDGEHKCPGDK)) &&
       ((__this->fields).IOJIABMGMGB == (IBKIPBJJCPG->fields).IOJIABMGMGB)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

