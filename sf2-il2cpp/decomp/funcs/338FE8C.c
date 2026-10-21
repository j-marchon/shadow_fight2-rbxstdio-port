// HBHFOKIPAHA$$Equals @ RVA 0x338FE8C

bool HBHFOKIPAHA__Equals(HBHFOKIPAHA_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567c19 & 1) == 0) {
    FUN_01bab630(&HBHFOKIPAHA_TypeInfo);
    DAT_04567c19 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HBHFOKIPAHA_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HBHFOKIPAHA__Equals(__this,(HBHFOKIPAHA_o *)IBKIPBJJCPG,method);
  return bVar1;
}

