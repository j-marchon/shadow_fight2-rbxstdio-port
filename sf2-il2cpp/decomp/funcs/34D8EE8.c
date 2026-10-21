// OJHLANCHFPC$$Equals @ RVA 0x34D8EE8

bool OJHLANCHFPC__Equals(OJHLANCHFPC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045686f5 & 1) == 0) {
    FUN_01bab630(&OJHLANCHFPC_TypeInfo);
    DAT_045686f5 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OJHLANCHFPC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OJHLANCHFPC__Equals(__this,(OJHLANCHFPC_o *)IBKIPBJJCPG,method);
  return bVar1;
}

