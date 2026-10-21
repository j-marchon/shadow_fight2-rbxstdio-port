// OLHGMELLLFK$$Equals @ RVA 0x3194EC0

bool OLHGMELLLFK__Equals(OLHGMELLLFK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566a61 & 1) == 0) {
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    DAT_04566a61 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OLHGMELLLFK_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OLHGMELLLFK__Equals(__this,(OLHGMELLLFK_o *)IBKIPBJJCPG,method);
  return bVar1;
}

