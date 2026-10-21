// PIADCKMDDAK$$Equals @ RVA 0x32BDF44

bool PIADCKMDDAK__Equals(PIADCKMDDAK_o *__this,PIADCKMDDAK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (PIADCKMDDAK_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                       (MethodInfo *)0x0);
    if ((!bVar1) && ((__this->fields).GDKPGIBMFPA == (IBKIPBJJCPG->fields).GDKPGIBMFPA)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

