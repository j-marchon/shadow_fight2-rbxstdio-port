// JHMFOIIPEHB$$Equals @ RVA 0x30CF13C

bool JHMFOIIPEHB__Equals(JHMFOIIPEHB_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045662f0 & 1) == 0) {
    FUN_01bab630(&JHMFOIIPEHB_TypeInfo);
    DAT_045662f0 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)JHMFOIIPEHB_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = JHMFOIIPEHB__Equals(__this,(JHMFOIIPEHB_o *)IBKIPBJJCPG,method);
  return bVar1;
}

