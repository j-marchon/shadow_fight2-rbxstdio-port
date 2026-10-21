// BECIPDJBAOG$$Equals @ RVA 0x30D2588

bool BECIPDJBAOG__Equals(BECIPDJBAOG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566313 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566313 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BECIPDJBAOG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BECIPDJBAOG__Equals(__this,(BECIPDJBAOG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

