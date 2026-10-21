// FADHMEJJCPO$$Equals @ RVA 0x33CE900

bool FADHMEJJCPO__Equals(FADHMEJJCPO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567e46 & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    DAT_04567e46 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FADHMEJJCPO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FADHMEJJCPO__Equals(__this,(FADHMEJJCPO_o *)IBKIPBJJCPG,method);
  return bVar1;
}

