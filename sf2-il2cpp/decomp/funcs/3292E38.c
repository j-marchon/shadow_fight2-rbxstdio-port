// OJFPEINHCDP$$Equals @ RVA 0x3292E38

bool OJFPEINHCDP__Equals(OJFPEINHCDP_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567339 & 1) == 0) {
    FUN_01bab630(&OJFPEINHCDP_TypeInfo);
    DAT_04567339 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OJFPEINHCDP_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OJFPEINHCDP__Equals(__this,(OJFPEINHCDP_o *)IBKIPBJJCPG,method);
  return bVar1;
}

