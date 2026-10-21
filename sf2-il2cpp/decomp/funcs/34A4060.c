// MGDJPGGPDJI$$Equals @ RVA 0x34A4060

bool MGDJPGGPDJI__Equals(MGDJPGGPDJI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045684d7 & 1) == 0) {
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    DAT_045684d7 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)MGDJPGGPDJI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = MGDJPGGPDJI__Equals(__this,(MGDJPGGPDJI_o *)IBKIPBJJCPG,method);
  return bVar1;
}

