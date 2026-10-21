// DBNIPENAEKO$$Equals @ RVA 0x31C8CB0

bool DBNIPENAEKO__Equals(DBNIPENAEKO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566c48 & 1) == 0) {
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    DAT_04566c48 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)DBNIPENAEKO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = DBNIPENAEKO__Equals(__this,(DBNIPENAEKO_o *)IBKIPBJJCPG,method);
  return bVar1;
}

