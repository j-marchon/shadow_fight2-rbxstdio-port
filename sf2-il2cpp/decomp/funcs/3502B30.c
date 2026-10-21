// OBCMNBDBNFO$$Equals @ RVA 0x3502B30

bool OBCMNBDBNFO__Equals(OBCMNBDBNFO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568868 & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_04568868 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OBCMNBDBNFO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OBCMNBDBNFO__Equals(__this,(OBCMNBDBNFO_o *)IBKIPBJJCPG,method);
  return bVar1;
}

