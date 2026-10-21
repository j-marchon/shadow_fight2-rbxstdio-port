// LKJJCAEOJBG$$Equals @ RVA 0x3541E1C

bool LKJJCAEOJBG__Equals(LKJJCAEOJBG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568afb & 1) == 0) {
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    DAT_04568afb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)LKJJCAEOJBG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = LKJJCAEOJBG__Equals(__this,(LKJJCAEOJBG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

