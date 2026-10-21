// AJINOJNMEEK$$Equals @ RVA 0x304D7FC

bool AJINOJNMEEK__Equals(AJINOJNMEEK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 0314d810 to 0324d813 has its CatchHandler @ 0314d844 */
                    /* try { // try from 0314d814 to 0324d847 has its CatchHandler @ 0314d674 */
  if ((DAT_04565e20 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    DAT_04565e20 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 0314d810 with catch @ 0314d844 */
    if (IBKIPBJJCPG->klass != (Il2CppClass *)AJINOJNMEEK_TypeInfo) {
      IBKIPBJJCPG = (Il2CppObject *)0x0;
    }
  }
                    /* try { // try from 0314d854 to 0324d85f has its CatchHandler @ 0314d674 */
  bVar1 = AJINOJNMEEK__Equals(__this,(AJINOJNMEEK_o *)IBKIPBJJCPG,method);
  return bVar1;
}

