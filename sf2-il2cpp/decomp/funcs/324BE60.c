// ELBBEAGGAOH$$Equals @ RVA 0x324BE60

bool ELBBEAGGAOH__Equals(ELBBEAGGAOH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045670fb & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    DAT_045670fb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ELBBEAGGAOH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = ELBBEAGGAOH__Equals(__this,(ELBBEAGGAOH_o *)IBKIPBJJCPG,method);
  return bVar1;
}

