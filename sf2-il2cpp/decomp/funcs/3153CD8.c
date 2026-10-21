// HBLHCCMEEEC$$Equals @ RVA 0x3153CD8

bool HBLHCCMEEEC__Equals(HBLHCCMEEEC_o *__this,HBLHCCMEEEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HBLHCCMEEEC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).IAAJODFMEIC == (IBKIPBJJCPG->fields).IAAJODFMEIC) &&
       ((__this->fields).HEOOKBCLBGN == (IBKIPBJJCPG->fields).HEOOKBCLBGN)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

