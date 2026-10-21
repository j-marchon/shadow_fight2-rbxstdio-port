// DLOALGNBPNL$$Equals @ RVA 0x32343A0

bool DLOALGNBPNL__Equals(DLOALGNBPNL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 033343b4 to 034343bb has its CatchHandler @ 0333449c */
  if ((DAT_04567008 & 1) == 0) {
                    /* try { // try from 033343c0 to 034343cb has its CatchHandler @ 033344a0 */
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
                    /* try { // try from 033343cc to 0343446f has its CatchHandler @ 033341fc */
    DAT_04567008 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)DLOALGNBPNL_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = DLOALGNBPNL__Equals(__this,(DLOALGNBPNL_o *)IBKIPBJJCPG,method);
  return bVar1;
}

