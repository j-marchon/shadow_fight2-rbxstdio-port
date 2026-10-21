// FADHMEJJCPO$$Equals @ RVA 0x33CE7F4

bool FADHMEJJCPO__Equals(FADHMEJJCPO_o *__this,FADHMEJJCPO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (FADHMEJJCPO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).PDOMCPONBNB == (IBKIPBJJCPG->fields).PDOMCPONBNB) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).IMNALGKNMNP,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).IMNALGKNMNP,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

