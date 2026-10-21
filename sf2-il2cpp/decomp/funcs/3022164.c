// OKKPDLAJBFD$$Equals @ RVA 0x3022164

bool OKKPDLAJBFD__Equals(OKKPDLAJBFD_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565c58 & 1) == 0) {
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    DAT_04565c58 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OKKPDLAJBFD_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OKKPDLAJBFD__Equals(__this,(OKKPDLAJBFD_o *)IBKIPBJJCPG,method);
  return bVar1;
}

