// HDDKPFAHBBN$$Equals @ RVA 0x311C704

bool HDDKPFAHBBN__Equals(HDDKPFAHBBN_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045665f6 & 1) == 0) {
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    DAT_045665f6 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HDDKPFAHBBN_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HDDKPFAHBBN__Equals(__this,(HDDKPFAHBBN_o *)IBKIPBJJCPG,method);
  return bVar1;
}

