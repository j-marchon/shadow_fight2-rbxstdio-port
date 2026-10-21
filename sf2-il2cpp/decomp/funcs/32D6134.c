// EAJJPPPJENA$$Equals @ RVA 0x32D6134

bool EAJJPPPJENA__Equals(EAJJPPPJENA_o *__this,EAJJPPPJENA_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EAJJPPPJENA_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).EMOLIBOCKJK == (IBKIPBJJCPG->fields).EMOLIBOCKJK) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).NCFPAHCCDBB,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).NCFPAHCCDBB,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

