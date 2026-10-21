// EEHFEPPDBHL$$Equals @ RVA 0x329C17C

bool EEHFEPPDBHL__Equals(EEHFEPPDBHL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456739e & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_0456739e = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EEHFEPPDBHL_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EEHFEPPDBHL__Equals(__this,(EEHFEPPDBHL_o *)IBKIPBJJCPG,method);
  return bVar1;
}

