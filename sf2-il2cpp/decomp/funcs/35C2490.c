// OJKCDJCBOBL$$Equals @ RVA 0x35C2490

bool OJKCDJCBOBL__Equals(OJKCDJCBOBL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568f3d & 1) == 0) {
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    DAT_04568f3d = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OJKCDJCBOBL_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OJKCDJCBOBL__Equals(__this,(OJKCDJCBOBL_o *)IBKIPBJJCPG,method);
  return bVar1;
}

