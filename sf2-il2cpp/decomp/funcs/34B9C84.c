// GKLPDMLELJF$$Equals @ RVA 0x34B9C84

bool GKLPDMLELJF__Equals(GKLPDMLELJF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045685b6 & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    DAT_045685b6 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GKLPDMLELJF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GKLPDMLELJF__Equals(__this,(GKLPDMLELJF_o *)IBKIPBJJCPG,method);
  return bVar1;
}

