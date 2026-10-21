// IBMLPPNMDCI$$Equals @ RVA 0x30F5F3C

bool IBMLPPNMDCI__Equals(IBMLPPNMDCI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566455 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    DAT_04566455 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)IBMLPPNMDCI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = IBMLPPNMDCI__Equals(__this,(IBMLPPNMDCI_o *)IBKIPBJJCPG,method);
  return bVar1;
}

