// HCFOFHGNBKP$$Equals @ RVA 0x314BFCC

bool HCFOFHGNBKP__Equals(HCFOFHGNBKP_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045667ca & 1) == 0) {
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    DAT_045667ca = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HCFOFHGNBKP_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HCFOFHGNBKP__Equals(__this,(HCFOFHGNBKP_o *)IBKIPBJJCPG,method);
  return bVar1;
}

