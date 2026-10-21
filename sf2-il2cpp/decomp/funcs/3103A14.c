// CBPENMDOJDB$$Equals @ RVA 0x3103A14

bool CBPENMDOJDB__Equals(CBPENMDOJDB_o *__this,CBPENMDOJDB_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (CBPENMDOJDB_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).ADEIKPGDIPM == (IBKIPBJJCPG->fields).ADEIKPGDIPM) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                             (MethodInfo *)0x0), !bVar1)) &&
        (bVar1 = System_String__op_Inequality
                           ((__this->fields).JAAACMPGMKJ,(IBKIPBJJCPG->fields).JAAACMPGMKJ,
                            (MethodInfo *)0x0), !bVar1)) &&
       ((((__this->fields).DIILCCNFMEB == (IBKIPBJJCPG->fields).DIILCCNFMEB &&
         ((__this->fields).GOBHKPNEJFN == (IBKIPBJJCPG->fields).GOBHKPNEJFN)) &&
        ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

