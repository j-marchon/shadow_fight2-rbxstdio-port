// NLBPJNEGNNM$$Equals @ RVA 0x3556A5C

bool NLBPJNEGNNM__Equals(NLBPJNEGNNM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568b6a & 1) == 0) {
    FUN_01bab630(&NLBPJNEGNNM_TypeInfo);
    DAT_04568b6a = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)NLBPJNEGNNM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = NLBPJNEGNNM__Equals(__this,(NLBPJNEGNNM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

