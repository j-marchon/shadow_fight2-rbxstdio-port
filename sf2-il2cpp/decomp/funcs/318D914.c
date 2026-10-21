// LKAFKHBBNOH$$Equals @ RVA 0x318D914

bool LKAFKHBBNOH__Equals(LKAFKHBBNOH_o *__this,LKAFKHBBNOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (LKAFKHBBNOH_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).MAHGAIJBBHF == (IBKIPBJJCPG->fields).MAHGAIJBBHF) &&
       ((__this->fields).MKGNDFBBANC == (IBKIPBJJCPG->fields).MKGNDFBBANC)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

