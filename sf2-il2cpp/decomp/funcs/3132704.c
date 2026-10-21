// AFLJMCMKCIG$$Equals @ RVA 0x3132704

bool AFLJMCMKCIG__Equals(AFLJMCMKCIG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045666d6 & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    DAT_045666d6 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)AFLJMCMKCIG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = AFLJMCMKCIG__Equals(__this,(AFLJMCMKCIG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

