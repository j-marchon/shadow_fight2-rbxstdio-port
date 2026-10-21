// HCKHJECBIJC$$Equals @ RVA 0x30A9A9C

bool HCKHJECBIJC__Equals(HCKHJECBIJC_o *__this,HCKHJECBIJC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HCKHJECBIJC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 031a9ac0 to 032a9b33 has its CatchHandler @ 031a997c */
    if (((__this->fields).GCDBBHAFJPN == (IBKIPBJJCPG->fields).GCDBBHAFJPN) &&
       ((__this->fields).CCCDGBNPNOD == (IBKIPBJJCPG->fields).CCCDGBNPNOD)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

