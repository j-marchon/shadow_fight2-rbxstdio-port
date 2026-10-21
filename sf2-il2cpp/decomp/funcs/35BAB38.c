// OLCBPIHLPEC$$Equals @ RVA 0x35BAB38

bool OLCBPIHLPEC__Equals(OLCBPIHLPEC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568eca & 1) == 0) {
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    DAT_04568eca = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OLCBPIHLPEC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OLCBPIHLPEC__Equals(__this,(OLCBPIHLPEC_o *)IBKIPBJJCPG,method);
  return bVar1;
}

