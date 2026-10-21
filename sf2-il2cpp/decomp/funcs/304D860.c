// AJINOJNMEEK$$Equals @ RVA 0x304D860

bool AJINOJNMEEK__Equals(AJINOJNMEEK_o *__this,AJINOJNMEEK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 0314d860 to 0324d867 has its CatchHandler @ 0314d868 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314d848 with catch @ 0314d868
                       catch(type#2 @ 00000000) { ... } // from try @ 0314d860 with catch @ 0314d868
                        */
  if (IBKIPBJJCPG != (AJINOJNMEEK_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG) &&
        (bVar1 = System_String__op_Inequality
                           ((__this->fields).EGELDFKMOCJ,(IBKIPBJJCPG->fields).EGELDFKMOCJ,
                            (MethodInfo *)0x0), !bVar1)) &&
       (bVar1 = System_String__op_Inequality
                          ((__this->fields).ABFBDJFPIMM,(IBKIPBJJCPG->fields).ABFBDJFPIMM,
                           (MethodInfo *)0x0), !bVar1)) {
                    /* try { // try from 0314d8e0 to 0324d967 has its CatchHandler @ 0314d8e0
                       catch() { ... } // from try @ 0314d8e0 with catch @ 0314d8e0
                       catch() { ... } // from try @ 0314d994 with catch @ 0314d8e0
                       catch() { ... } // from try @ 0314da0c with catch @ 0314d8e0 */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

