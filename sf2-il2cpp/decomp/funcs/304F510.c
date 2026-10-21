// EIBAKHBHMAO$$Equals @ RVA 0x304F510

bool EIBAKHBHMAO__Equals(EIBAKHBHMAO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565e39 & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    DAT_04565e39 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EIBAKHBHMAO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EIBAKHBHMAO__Equals(__this,(EIBAKHBHMAO_o *)IBKIPBJJCPG,method);
  return bVar1;
}

