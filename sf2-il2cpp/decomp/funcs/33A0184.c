// LFELBGMCDHD$$Equals @ RVA 0x33A0184

bool LFELBGMCDHD__Equals(LFELBGMCDHD_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567ca7 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    DAT_04567ca7 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)LFELBGMCDHD_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = LFELBGMCDHD__Equals(__this,(LFELBGMCDHD_o *)IBKIPBJJCPG,method);
  return bVar1;
}

