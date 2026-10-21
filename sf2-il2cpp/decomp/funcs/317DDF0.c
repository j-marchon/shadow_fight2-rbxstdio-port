// ICBMOMGINFH$$Equals @ RVA 0x317DDF0

bool ICBMOMGINFH__Equals(ICBMOMGINFH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456699b & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_0456699b = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ICBMOMGINFH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = ICBMOMGINFH__Equals(__this,(ICBMOMGINFH_o *)IBKIPBJJCPG,method);
  return bVar1;
}

