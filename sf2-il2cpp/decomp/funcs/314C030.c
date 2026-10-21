// HCFOFHGNBKP$$Equals @ RVA 0x314C030

bool HCFOFHGNBKP__Equals(HCFOFHGNBKP_o *__this,HCFOFHGNBKP_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HCFOFHGNBKP_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MJIIHOLHNCK,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
    if ((bVar1) &&
       (((__this->fields).MKEPFPAHEFK != false) == ((IBKIPBJJCPG->fields).MKEPFPAHEFK != false))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

