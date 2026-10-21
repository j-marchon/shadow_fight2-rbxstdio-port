// AFLJMCMKCIG$$Equals @ RVA 0x3132768

bool AFLJMCMKCIG__Equals(AFLJMCMKCIG_o *__this,AFLJMCMKCIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (AFLJMCMKCIG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG) &&
       (bVar1 = System_String__op_Inequality
                          ((__this->fields).PPDLPBMONBL,(IBKIPBJJCPG->fields).PPDLPBMONBL,
                           (MethodInfo *)0x0), !bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

