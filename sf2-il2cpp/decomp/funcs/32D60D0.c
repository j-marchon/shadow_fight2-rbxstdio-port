// EAJJPPPJENA$$Equals @ RVA 0x32D60D0

bool EAJJPPPJENA__Equals(EAJJPPPJENA_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456758b & 1) == 0) {
    FUN_01bab630(&EAJJPPPJENA_TypeInfo);
    DAT_0456758b = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EAJJPPPJENA_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EAJJPPPJENA__Equals(__this,(EAJJPPPJENA_o *)IBKIPBJJCPG,method);
  return bVar1;
}

