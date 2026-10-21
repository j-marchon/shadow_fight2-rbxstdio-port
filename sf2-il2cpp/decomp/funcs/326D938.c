// LMEMJBOBHBE$$Equals @ RVA 0x326D938

bool LMEMJBOBHBE__Equals(LMEMJBOBHBE_o *__this,LMEMJBOBHBE_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (LMEMJBOBHBE_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 0336d97c to 0346d9a7 has its CatchHandler @ 0336dc04 */
    if ((((__this->fields).MOCOKGFIJFP == (IBKIPBJJCPG->fields).MOCOKGFIJFP) &&
        (bVar1 = System_String__op_Inequality
                           ((__this->fields).MAHGAIJBBHF,(IBKIPBJJCPG->fields).MAHGAIJBBHF,
                            (MethodInfo *)0x0), !bVar1)) &&
       ((__this->fields).PHICOONBADJ == (IBKIPBJJCPG->fields).PHICOONBADJ)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

