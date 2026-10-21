// HBHFOKIPAHA$$Equals @ RVA 0x338FE18

bool HBHFOKIPAHA__Equals(HBHFOKIPAHA_o *__this,HBHFOKIPAHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HBHFOKIPAHA_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((__this->fields).MAHGAIJBBHF == (IBKIPBJJCPG->fields).MAHGAIJBBHF) &&
        ((__this->fields).MKGNDFBBANC == (IBKIPBJJCPG->fields).MKGNDFBBANC)) &&
       ((__this->fields).IGBAAAHPLAA == (IBKIPBJJCPG->fields).IGBAAAHPLAA)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

