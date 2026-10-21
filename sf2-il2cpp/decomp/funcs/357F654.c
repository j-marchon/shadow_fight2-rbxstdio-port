// EOLFEKNCPLM$$Equals @ RVA 0x357F654

bool EOLFEKNCPLM__Equals(EOLFEKNCPLM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568cbb & 1) == 0) {
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    DAT_04568cbb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EOLFEKNCPLM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EOLFEKNCPLM__Equals(__this,(EOLFEKNCPLM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

