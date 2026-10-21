// FIMAAAOEIGM$$Equals @ RVA 0x342613C

bool FIMAAAOEIGM__Equals(FIMAAAOEIGM_o *__this,FIMAAAOEIGM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (FIMAAAOEIGM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).PMFAFJFPHGO,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).PMFAFJFPHGO,(MethodInfo *)0x0);
    if ((((bVar1) &&
         (((__this->fields).AFIPKDNMBKJ != false) == ((IBKIPBJJCPG->fields).AFIPKDNMBKJ != false)))
        && (bVar1 = System_Object__Equals
                              ((Il2CppObject *)(__this->fields).OBKCJGGIEMF,
                               (Il2CppObject *)(IBKIPBJJCPG->fields).OBKCJGGIEMF,(MethodInfo *)0x0),
           bVar1)) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

