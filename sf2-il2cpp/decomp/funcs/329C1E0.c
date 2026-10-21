// EEHFEPPDBHL$$Equals @ RVA 0x329C1E0

bool EEHFEPPDBHL__Equals(EEHFEPPDBHL_o *__this,EEHFEPPDBHL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EEHFEPPDBHL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).KKMDFLKPNNJ,(IBKIPBJJCPG->fields).KKMDFLKPNNJ,
                       (MethodInfo *)0x0);
    if ((((!bVar1) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).JAAACMPGMKJ,(IBKIPBJJCPG->fields).JAAACMPGMKJ,
                             (MethodInfo *)0x0), !bVar1)) &&
        ((__this->fields).JODJOLBBJNI == (IBKIPBJJCPG->fields).JODJOLBBJNI)) &&
       ((__this->fields).IFICKDAKCHN == (IBKIPBJJCPG->fields).IFICKDAKCHN)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

