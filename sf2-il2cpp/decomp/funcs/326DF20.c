// LMEMJBOBHBE$$Equals @ RVA 0x326DF20

bool LMEMJBOBHBE__Equals(LMEMJBOBHBE_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045671ff & 1) == 0) {
    FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
    DAT_045671ff = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)LMEMJBOBHBE_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = LMEMJBOBHBE__Equals(__this,(LMEMJBOBHBE_o *)IBKIPBJJCPG,method);
  return bVar1;
}

