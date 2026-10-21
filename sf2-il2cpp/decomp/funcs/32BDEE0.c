// PIADCKMDDAK$$Equals @ RVA 0x32BDEE0

bool PIADCKMDDAK__Equals(PIADCKMDDAK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045674af & 1) == 0) {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045674af = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)PIADCKMDDAK_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = PIADCKMDDAK__Equals(__this,(PIADCKMDDAK_o *)IBKIPBJJCPG,method);
  return bVar1;
}

