// KGBIBHEFBHA$$Equals @ RVA 0x3304508

bool KGBIBHEFBHA__Equals(KGBIBHEFBHA_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567742 & 1) == 0) {
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    DAT_04567742 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KGBIBHEFBHA_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KGBIBHEFBHA__Equals(__this,(KGBIBHEFBHA_o *)IBKIPBJJCPG,method);
  return bVar1;
}

