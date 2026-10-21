// KAMBBJFPLGM$$Equals @ RVA 0x311B590

bool KAMBBJFPLGM__Equals(KAMBBJFPLGM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045665e7 & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_045665e7 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KAMBBJFPLGM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KAMBBJFPLGM__Equals(__this,(KAMBBJFPLGM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

