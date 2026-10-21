// EKCGNICFDEO$$Equals @ RVA 0x351AB48

bool EKCGNICFDEO__Equals(EKCGNICFDEO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568978 & 1) == 0) {
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
    DAT_04568978 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EKCGNICFDEO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EKCGNICFDEO__Equals(__this,(EKCGNICFDEO_o *)IBKIPBJJCPG,method);
  return bVar1;
}

