// KEGDLHPEJBG$$Equals @ RVA 0x35A91D0

bool KEGDLHPEJBG__Equals(KEGDLHPEJBG_o *__this,KEGDLHPEJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KEGDLHPEJBG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                       (MethodInfo *)0x0);
    if ((!bVar1) && ((__this->fields).HFHGCALGKHH == (IBKIPBJJCPG->fields).HFHGCALGKHH)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

