// EPCCNLNOALL$$Equals @ RVA 0x32FB514

bool EPCCNLNOALL__Equals(EPCCNLNOALL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 033fb51c to 034fb533 has its CatchHandler @ 033fb6e8 */
  if ((DAT_045676d9 & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
                    /* try { // try from 033fb540 to 034fb547 has its CatchHandler @ 033fb6bc */
    DAT_045676d9 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else {
                    /* try { // try from 033fb558 to 034fb55f has its CatchHandler @ 033fb6c0 */
    if (IBKIPBJJCPG->klass != (Il2CppClass *)EPCCNLNOALL_TypeInfo) {
      IBKIPBJJCPG = (Il2CppObject *)0x0;
    }
  }
  bVar1 = EPCCNLNOALL__Equals(__this,(EPCCNLNOALL_o *)IBKIPBJJCPG,method);
  return bVar1;
}

