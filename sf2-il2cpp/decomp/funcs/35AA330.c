// EMBNHHOCCBH$$Equals @ RVA 0x35AA330

bool EMBNHHOCCBH__Equals(EMBNHHOCCBH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568e43 & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    DAT_04568e43 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EMBNHHOCCBH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EMBNHHOCCBH__Equals(__this,(EMBNHHOCCBH_o *)IBKIPBJJCPG,method);
  return bVar1;
}

