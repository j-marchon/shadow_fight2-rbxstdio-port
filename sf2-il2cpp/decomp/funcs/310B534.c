// BJEFHIBMHEJ$$Equals @ RVA 0x310B534

bool BJEFHIBMHEJ__Equals(BJEFHIBMHEJ_o *__this,BJEFHIBMHEJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (BJEFHIBMHEJ_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).BNFCJPJJIEJ == (IBKIPBJJCPG->fields).BNFCJPJJIEJ) &&
       ((__this->fields).PDABDFMKGDH == (IBKIPBJJCPG->fields).PDABDFMKGDH)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

