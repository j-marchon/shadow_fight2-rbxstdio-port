// EKCGNICFDEO$$Equals @ RVA 0x351ABAC

bool EKCGNICFDEO__Equals(EKCGNICFDEO_o *__this,EKCGNICFDEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EKCGNICFDEO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).BJGJOHGJCKC,(IBKIPBJJCPG->fields).BJGJOHGJCKC,
                       (MethodInfo *)0x0);
    if ((!bVar1) && ((__this->fields).CMKMIFIIGBK == (IBKIPBJJCPG->fields).CMKMIFIIGBK)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

