// EPCCNLNOALL$$Equals @ RVA 0x32FB578

bool EPCCNLNOALL__Equals(EPCCNLNOALL_o *__this,EPCCNLNOALL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EPCCNLNOALL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).KOGEBALMCBB,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).KOGEBALMCBB,(MethodInfo *)0x0);
                    /* try { // try from 033fb5ac to 034fb5cf has its CatchHandler @ 033fb6c4 */
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0),
       bVar1)) {
                    /* try { // try from 033fb5d0 to 034fb66f has its CatchHandler @ 033fb288 */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

