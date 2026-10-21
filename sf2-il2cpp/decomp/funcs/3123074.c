// KMDOLFBIGNC$$Equals @ RVA 0x3123074

bool KMDOLFBIGNC__Equals(KMDOLFBIGNC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566637 & 1) == 0) {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    DAT_04566637 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KMDOLFBIGNC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KMDOLFBIGNC__Equals(__this,(KMDOLFBIGNC_o *)IBKIPBJJCPG,method);
  return bVar1;
}

