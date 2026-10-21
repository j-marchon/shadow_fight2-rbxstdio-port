// BDMABHJEEGD$$Equals @ RVA 0x310C170

bool BDMABHJEEGD__Equals(BDMABHJEEGD_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566549 & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_04566549 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BDMABHJEEGD_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BDMABHJEEGD__Equals(__this,(BDMABHJEEGD_o *)IBKIPBJJCPG,method);
  return bVar1;
}

