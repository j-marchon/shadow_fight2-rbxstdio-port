// ICPMLKOEANF$$Equals @ RVA 0x3250E84

bool ICPMLKOEANF__Equals(ICPMLKOEANF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456712c & 1) == 0) {
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    DAT_0456712c = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ICPMLKOEANF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = ICPMLKOEANF__Equals(__this,(ICPMLKOEANF_o *)IBKIPBJJCPG,method);
  return bVar1;
}

